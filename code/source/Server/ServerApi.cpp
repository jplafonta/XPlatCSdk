#include "stdafx.h"
#include "ServerApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace ServerModels;

ServerAPI::ServerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey) :
    m_httpClient{ std::move(httpClient) },
    m_secretKey{ std::move(secretKey) }
{
}

AsyncOp<ServerModels::ModifyCharacterVirtualCurrencyResult> ServerAPI::AddCharacterVirtualCurrency(
    const PlayFabServerAddCharacterVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AddCharacterVirtualCurrency",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyCharacterVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyCharacterVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyCharacterVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::AddFriend(
    const PlayFabServerAddFriendRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AddFriend",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::AddGenericID(
    const PlayFabServerAddGenericIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AddGenericID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::AddPlayerTag(
    const PlayFabServerAddPlayerTagRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AddPlayerTag",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::AddSharedGroupMembers(
    const PlayFabServerAddSharedGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AddSharedGroupMembers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ModifyUserVirtualCurrencyResult> ServerAPI::AddUserVirtualCurrency(
    const PlayFabServerAddUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AddUserVirtualCurrency",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyUserVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyUserVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::AuthenticateSessionTicketResult> ServerAPI::AuthenticateSessionTicket(
    const PlayFabServerAuthenticateSessionTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AuthenticateSessionTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AuthenticateSessionTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AuthenticateSessionTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AuthenticateSessionTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::AwardSteamAchievementResult> ServerAPI::AwardSteamAchievement(
    const PlayFabServerAwardSteamAchievementRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/AwardSteamAchievement",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AwardSteamAchievementResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AwardSteamAchievementResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AwardSteamAchievementResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::BanUsersResult> ServerAPI::BanUsers(
    const PlayFabServerBanUsersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/BanUsers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<BanUsersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            BanUsersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<BanUsersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ConsumeItemResult> ServerAPI::ConsumeItem(
    const PlayFabServerConsumeItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/ConsumeItem",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConsumeItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConsumeItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConsumeItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::CreateSharedGroupResult> ServerAPI::CreateSharedGroup(
    const PlayFabServerCreateSharedGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/CreateSharedGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateSharedGroupResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateSharedGroupResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateSharedGroupResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::DeleteCharacterFromUser(
    const PlayFabServerDeleteCharacterFromUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/DeleteCharacterFromUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::DeletePlayer(
    const PlayFabServerDeletePlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/DeletePlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::DeletePushNotificationTemplate(
    const PlayFabServerDeletePushNotificationTemplateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/DeletePushNotificationTemplate",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::DeleteSharedGroup(
    const PlayFabServerDeleteSharedGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/DeleteSharedGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::DeregisterGame(
    const PlayFabServerDeregisterGameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/DeregisterGame",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::EvaluateRandomResultTableResult> ServerAPI::EvaluateRandomResultTable(
    const PlayFabServerEvaluateRandomResultTableRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/EvaluateRandomResultTable",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<EvaluateRandomResultTableResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            EvaluateRandomResultTableResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<EvaluateRandomResultTableResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ExecuteCloudScriptResult> ServerAPI::ExecuteCloudScript(
    const PlayFabServerExecuteCloudScriptServerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/ExecuteCloudScript",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ExecuteCloudScriptResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ExecuteCloudScriptResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ExecuteCloudScriptResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetAllSegmentsResult> ServerAPI::GetAllSegments(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetAllSegments",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetAllSegmentsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAllSegmentsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAllSegmentsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ListUsersCharactersResult> ServerAPI::GetAllUsersCharacters(
    const PlayFabServerListUsersCharactersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetAllUsersCharacters",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListUsersCharactersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListUsersCharactersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListUsersCharactersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCatalogItemsResult> ServerAPI::GetCatalogItems(
    const PlayFabServerGetCatalogItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCatalogItems",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCatalogItemsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCatalogItemsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCatalogItemsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCharacterDataResult> ServerAPI::GetCharacterData(
    const PlayFabServerGetCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCharacterData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCharacterDataResult> ServerAPI::GetCharacterInternalData(
    const PlayFabServerGetCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCharacterInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCharacterInventoryResult> ServerAPI::GetCharacterInventory(
    const PlayFabServerGetCharacterInventoryRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCharacterInventory",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCharacterLeaderboardResult> ServerAPI::GetCharacterLeaderboard(
    const PlayFabServerGetCharacterLeaderboardRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCharacterLeaderboard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterLeaderboardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterLeaderboardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterLeaderboardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCharacterDataResult> ServerAPI::GetCharacterReadOnlyData(
    const PlayFabServerGetCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCharacterReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetCharacterStatisticsResult> ServerAPI::GetCharacterStatistics(
    const PlayFabServerGetCharacterStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetCharacterStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterStatisticsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterStatisticsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterStatisticsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetContentDownloadUrlResult> ServerAPI::GetContentDownloadUrl(
    const PlayFabServerGetContentDownloadUrlRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetContentDownloadUrl",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetContentDownloadUrlResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetContentDownloadUrlResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetContentDownloadUrlResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetLeaderboardResult> ServerAPI::GetFriendLeaderboard(
    const PlayFabServerGetFriendLeaderboardRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetFriendLeaderboard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetFriendsListResult> ServerAPI::GetFriendsList(
    const PlayFabServerGetFriendsListRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetFriendsList",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetFriendsListResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetFriendsListResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetFriendsListResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetLeaderboardResult> ServerAPI::GetLeaderboard(
    const PlayFabServerGetLeaderboardRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetLeaderboard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetLeaderboardAroundCharacterResult> ServerAPI::GetLeaderboardAroundCharacter(
    const PlayFabServerGetLeaderboardAroundCharacterRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetLeaderboardAroundCharacter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardAroundCharacterResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardAroundCharacterResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardAroundCharacterResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetLeaderboardAroundUserResult> ServerAPI::GetLeaderboardAroundUser(
    const PlayFabServerGetLeaderboardAroundUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetLeaderboardAroundUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardAroundUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardAroundUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardAroundUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetLeaderboardForUsersCharactersResult> ServerAPI::GetLeaderboardForUserCharacters(
    const PlayFabServerGetLeaderboardForUsersCharactersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetLeaderboardForUserCharacters",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardForUsersCharactersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardForUsersCharactersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardForUsersCharactersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayerCombinedInfoResult> ServerAPI::GetPlayerCombinedInfo(
    const PlayFabServerGetPlayerCombinedInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayerCombinedInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerCombinedInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerCombinedInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerCombinedInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayerProfileResult> ServerAPI::GetPlayerProfile(
    const PlayFabServerGetPlayerProfileRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayerProfile",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerProfileResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerProfileResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerProfileResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayerSegmentsResult> ServerAPI::GetPlayerSegments(
    const PlayFabServerGetPlayersSegmentsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayerSegments",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerSegmentsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerSegmentsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerSegmentsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayersInSegmentResult> ServerAPI::GetPlayersInSegment(
    const PlayFabServerGetPlayersInSegmentRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayersInSegment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayersInSegmentResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayersInSegmentResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayersInSegmentResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayerStatisticsResult> ServerAPI::GetPlayerStatistics(
    const PlayFabServerGetPlayerStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayerStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerStatisticsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerStatisticsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerStatisticsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayerStatisticVersionsResult> ServerAPI::GetPlayerStatisticVersions(
    const PlayFabServerGetPlayerStatisticVersionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayerStatisticVersions",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerStatisticVersionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerStatisticVersionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerStatisticVersionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayerTagsResult> ServerAPI::GetPlayerTags(
    const PlayFabServerGetPlayerTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayerTags",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerTagsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerTagsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerTagsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromFacebookIDsResult> ServerAPI::GetPlayFabIDsFromFacebookIDs(
    const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromFacebookIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromFacebookIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromFacebookIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromFacebookIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> ServerAPI::GetPlayFabIDsFromFacebookInstantGamesIds(
    const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromFacebookInstantGamesIds",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromFacebookInstantGamesIdsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromFacebookInstantGamesIdsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromGenericIDsResult> ServerAPI::GetPlayFabIDsFromGenericIDs(
    const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromGenericIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGenericIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromGenericIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromGenericIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> ServerAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds(
    const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromNintendoSwitchDeviceIds",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromPSNAccountIDsResult> ServerAPI::GetPlayFabIDsFromPSNAccountIDs(
    const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromPSNAccountIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromPSNAccountIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromPSNAccountIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromPSNAccountIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromSteamIDsResult> ServerAPI::GetPlayFabIDsFromSteamIDs(
    const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromSteamIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromSteamIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromSteamIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromSteamIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPlayFabIDsFromXboxLiveIDsResult> ServerAPI::GetPlayFabIDsFromXboxLiveIDs(
    const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPlayFabIDsFromXboxLiveIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromXboxLiveIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromXboxLiveIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromXboxLiveIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetPublisherDataResult> ServerAPI::GetPublisherData(
    const PlayFabServerGetPublisherDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPublisherDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPublisherDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPublisherDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetRandomResultTablesResult> ServerAPI::GetRandomResultTables(
    const PlayFabServerGetRandomResultTablesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetRandomResultTables",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetRandomResultTablesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetRandomResultTablesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetRandomResultTablesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetServerCustomIDsFromPlayFabIDsResult> ServerAPI::GetServerCustomIDsFromPlayFabIDs(
    const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetServerCustomIDsFromPlayFabIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetServerCustomIDsFromPlayFabIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetServerCustomIDsFromPlayFabIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetServerCustomIDsFromPlayFabIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetSharedGroupDataResult> ServerAPI::GetSharedGroupData(
    const PlayFabServerGetSharedGroupDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetSharedGroupData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetSharedGroupDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetSharedGroupDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetSharedGroupDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetStoreItemsResult> ServerAPI::GetStoreItems(
    const PlayFabServerGetStoreItemsServerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetStoreItems",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetStoreItemsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetStoreItemsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetStoreItemsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetTimeResult> ServerAPI::GetTime(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetTime",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTimeResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTimeResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTimeResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetTitleDataResult> ServerAPI::GetTitleData(
    const PlayFabServerGetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetTitleData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetTitleDataResult> ServerAPI::GetTitleInternalData(
    const PlayFabServerGetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetTitleInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetTitleNewsResult> ServerAPI::GetTitleNews(
    const PlayFabServerGetTitleNewsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetTitleNews",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleNewsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleNewsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleNewsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserAccountInfoResult> ServerAPI::GetUserAccountInfo(
    const PlayFabServerGetUserAccountInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserAccountInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserAccountInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserAccountInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserAccountInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserBansResult> ServerAPI::GetUserBans(
    const PlayFabServerGetUserBansRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserBans",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserBansResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserBansResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserBansResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserDataResult> ServerAPI::GetUserData(
    const PlayFabServerGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserDataResult> ServerAPI::GetUserInternalData(
    const PlayFabServerGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserInventoryResult> ServerAPI::GetUserInventory(
    const PlayFabServerGetUserInventoryRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserInventory",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserDataResult> ServerAPI::GetUserPublisherData(
    const PlayFabServerGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserDataResult> ServerAPI::GetUserPublisherInternalData(
    const PlayFabServerGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserPublisherInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserDataResult> ServerAPI::GetUserPublisherReadOnlyData(
    const PlayFabServerGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserPublisherReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GetUserDataResult> ServerAPI::GetUserReadOnlyData(
    const PlayFabServerGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GetUserReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GrantCharacterToUserResult> ServerAPI::GrantCharacterToUser(
    const PlayFabServerGrantCharacterToUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GrantCharacterToUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GrantCharacterToUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantCharacterToUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantCharacterToUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GrantItemsToCharacterResult> ServerAPI::GrantItemsToCharacter(
    const PlayFabServerGrantItemsToCharacterRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GrantItemsToCharacter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GrantItemsToCharacterResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantItemsToCharacterResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantItemsToCharacterResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GrantItemsToUserResult> ServerAPI::GrantItemsToUser(
    const PlayFabServerGrantItemsToUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GrantItemsToUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GrantItemsToUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantItemsToUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantItemsToUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::GrantItemsToUsersResult> ServerAPI::GrantItemsToUsers(
    const PlayFabServerGrantItemsToUsersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/GrantItemsToUsers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GrantItemsToUsersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantItemsToUsersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantItemsToUsersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::LinkPSNAccount(
    const PlayFabServerLinkPSNAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LinkPSNAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::LinkServerCustomId(
    const PlayFabServerLinkServerCustomIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LinkServerCustomId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::LinkXboxAccount(
    const PlayFabServerLinkXboxAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LinkXboxAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ModifyItemUsesResult> ServerAPI::ModifyItemUses(
    const PlayFabServerModifyItemUsesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/ModifyItemUses",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyItemUsesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyItemUsesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyItemUsesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::MoveItemToCharacterFromCharacter(
    const PlayFabServerMoveItemToCharacterFromCharacterRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/MoveItemToCharacterFromCharacter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::MoveItemToCharacterFromUser(
    const PlayFabServerMoveItemToCharacterFromUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/MoveItemToCharacterFromUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::MoveItemToUserFromCharacter(
    const PlayFabServerMoveItemToUserFromCharacterRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/MoveItemToUserFromCharacter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::NotifyMatchmakerPlayerLeftResult> ServerAPI::NotifyMatchmakerPlayerLeft(
    const PlayFabServerNotifyMatchmakerPlayerLeftRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/NotifyMatchmakerPlayerLeft",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<NotifyMatchmakerPlayerLeftResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            NotifyMatchmakerPlayerLeftResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<NotifyMatchmakerPlayerLeftResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::RedeemCouponResult> ServerAPI::RedeemCoupon(
    const PlayFabServerRedeemCouponRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RedeemCoupon",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RedeemCouponResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RedeemCouponResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RedeemCouponResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::RedeemMatchmakerTicketResult> ServerAPI::RedeemMatchmakerTicket(
    const PlayFabServerRedeemMatchmakerTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RedeemMatchmakerTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RedeemMatchmakerTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RedeemMatchmakerTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RedeemMatchmakerTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::RefreshGameServerInstanceHeartbeat(
    const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RefreshGameServerInstanceHeartbeat",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::RegisterGameResponse> ServerAPI::RegisterGame(
    const PlayFabServerRegisterGameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RegisterGame",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RegisterGameResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RegisterGameResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RegisterGameResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::RemoveFriend(
    const PlayFabServerRemoveFriendRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RemoveFriend",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::RemoveGenericID(
    const PlayFabServerRemoveGenericIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RemoveGenericID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::RemovePlayerTag(
    const PlayFabServerRemovePlayerTagRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RemovePlayerTag",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::RemoveSharedGroupMembers(
    const PlayFabServerRemoveSharedGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RemoveSharedGroupMembers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ReportPlayerServerResult> ServerAPI::ReportPlayer(
    const PlayFabServerReportPlayerServerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/ReportPlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ReportPlayerServerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ReportPlayerServerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ReportPlayerServerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::RevokeAllBansForUserResult> ServerAPI::RevokeAllBansForUser(
    const PlayFabServerRevokeAllBansForUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RevokeAllBansForUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RevokeAllBansForUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RevokeAllBansForUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RevokeAllBansForUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::RevokeBansResult> ServerAPI::RevokeBans(
    const PlayFabServerRevokeBansRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RevokeBans",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RevokeBansResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RevokeBansResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RevokeBansResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::RevokeInventoryItem(
    const PlayFabServerRevokeInventoryItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RevokeInventoryItem",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::RevokeInventoryItemsResult> ServerAPI::RevokeInventoryItems(
    const PlayFabServerRevokeInventoryItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/RevokeInventoryItems",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RevokeInventoryItemsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RevokeInventoryItemsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RevokeInventoryItemsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::SavePushNotificationTemplateResult> ServerAPI::SavePushNotificationTemplate(
    const PlayFabServerSavePushNotificationTemplateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SavePushNotificationTemplate",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SavePushNotificationTemplateResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            SavePushNotificationTemplateResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<SavePushNotificationTemplateResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SendCustomAccountRecoveryEmail(
    const PlayFabServerSendCustomAccountRecoveryEmailRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SendCustomAccountRecoveryEmail",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SendEmailFromTemplate(
    const PlayFabServerSendEmailFromTemplateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SendEmailFromTemplate",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SendPushNotification(
    const PlayFabServerSendPushNotificationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SendPushNotification",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SendPushNotificationFromTemplate(
    const PlayFabServerSendPushNotificationFromTemplateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SendPushNotificationFromTemplate",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetFriendTags(
    const PlayFabServerSetFriendTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetFriendTags",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetGameServerInstanceData(
    const PlayFabServerSetGameServerInstanceDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetGameServerInstanceData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetGameServerInstanceState(
    const PlayFabServerSetGameServerInstanceStateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetGameServerInstanceState",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetGameServerInstanceTags(
    const PlayFabServerSetGameServerInstanceTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetGameServerInstanceTags",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetPlayerSecret(
    const PlayFabServerSetPlayerSecretRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetPlayerSecret",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetPublisherData(
    const PlayFabServerSetPublisherDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetTitleData(
    const PlayFabServerSetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetTitleData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::SetTitleInternalData(
    const PlayFabServerSetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SetTitleInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ModifyCharacterVirtualCurrencyResult> ServerAPI::SubtractCharacterVirtualCurrency(
    const PlayFabServerSubtractCharacterVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SubtractCharacterVirtualCurrency",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyCharacterVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyCharacterVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyCharacterVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::ModifyUserVirtualCurrencyResult> ServerAPI::SubtractUserVirtualCurrency(
    const PlayFabServerSubtractUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/SubtractUserVirtualCurrency",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyUserVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyUserVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UnlinkPSNAccount(
    const PlayFabServerUnlinkPSNAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UnlinkPSNAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UnlinkServerCustomId(
    const PlayFabServerUnlinkServerCustomIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UnlinkServerCustomId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UnlinkXboxAccount(
    const PlayFabServerUnlinkXboxAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UnlinkXboxAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UnlockContainerItemResult> ServerAPI::UnlockContainerInstance(
    const PlayFabServerUnlockContainerInstanceRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UnlockContainerInstance",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UnlockContainerItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UnlockContainerItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UnlockContainerItemResult> ServerAPI::UnlockContainerItem(
    const PlayFabServerUnlockContainerItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UnlockContainerItem",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UnlockContainerItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UnlockContainerItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UpdateAvatarUrl(
    const PlayFabServerUpdateAvatarUrlRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateAvatarUrl",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateBansResult> ServerAPI::UpdateBans(
    const PlayFabServerUpdateBansRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateBans",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateBansResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateBansResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateBansResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateCharacterDataResult> ServerAPI::UpdateCharacterData(
    const PlayFabServerUpdateCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateCharacterData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateCharacterDataResult> ServerAPI::UpdateCharacterInternalData(
    const PlayFabServerUpdateCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateCharacterInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateCharacterDataResult> ServerAPI::UpdateCharacterReadOnlyData(
    const PlayFabServerUpdateCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateCharacterReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UpdateCharacterStatistics(
    const PlayFabServerUpdateCharacterStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateCharacterStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UpdatePlayerStatistics(
    const PlayFabServerUpdatePlayerStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdatePlayerStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UpdateSharedGroupData(
    const PlayFabServerUpdateSharedGroupDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateSharedGroupData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateUserDataResult> ServerAPI::UpdateUserData(
    const PlayFabServerUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateUserDataResult> ServerAPI::UpdateUserInternalData(
    const PlayFabServerUpdateUserInternalDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ServerAPI::UpdateUserInventoryItemCustomData(
    const PlayFabServerUpdateUserInventoryItemDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserInventoryItemCustomData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateUserDataResult> ServerAPI::UpdateUserPublisherData(
    const PlayFabServerUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateUserDataResult> ServerAPI::UpdateUserPublisherInternalData(
    const PlayFabServerUpdateUserInternalDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserPublisherInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateUserDataResult> ServerAPI::UpdateUserPublisherReadOnlyData(
    const PlayFabServerUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserPublisherReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::UpdateUserDataResult> ServerAPI::UpdateUserReadOnlyData(
    const PlayFabServerUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/UpdateUserReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::WriteEventResponse> ServerAPI::WriteCharacterEvent(
    const PlayFabServerWriteServerCharacterEventRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/WriteCharacterEvent",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::WriteEventResponse> ServerAPI::WritePlayerEvent(
    const PlayFabServerWriteServerPlayerEventRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/WritePlayerEvent",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerModels::WriteEventResponse> ServerAPI::WriteTitleEvent(
    const PlayFabServerWriteTitleEventRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/WriteTitleEvent",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
