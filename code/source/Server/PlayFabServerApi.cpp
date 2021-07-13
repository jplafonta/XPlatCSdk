#include "stdafx.h"
#include <playfab/PlayFabServerApi.h>
#include "ServerApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::ServerModels;

HRESULT PlayFabServerAddCharacterVirtualCurrencyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAddCharacterVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AddCharacterVirtualCurrency, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAddCharacterVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerAddCharacterVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyCharacterVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerModifyCharacterVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerAddFriendAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAddFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AddFriend, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAddGenericIDAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAddGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AddGenericID, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAddPlayerTagAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAddPlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AddPlayerTag, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAddSharedGroupMembersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAddSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AddSharedGroupMembers, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAddUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAddUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AddUserVirtualCurrency, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAddUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerAddUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerAuthenticateSessionTicketAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAuthenticateSessionTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AuthenticateSessionTicket, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAuthenticateSessionTicketGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerAuthenticateSessionTicketResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerAuthenticateSessionTicketResult*)(std::dynamic_pointer_cast<AuthenticateSessionTicketResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerAwardSteamAchievementAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerAwardSteamAchievementRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::AwardSteamAchievement, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerAwardSteamAchievementGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerAwardSteamAchievementResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerAwardSteamAchievementResult*)(std::dynamic_pointer_cast<AwardSteamAchievementResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerBanUsersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerBanUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::BanUsers, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerBanUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerBanUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerBanUsersResult*)(std::dynamic_pointer_cast<BanUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerConsumeItemAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerConsumeItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::ConsumeItem, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerConsumeItemGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerConsumeItemGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerConsumeItemResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerConsumeItemResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerCreateSharedGroupAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerCreateSharedGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::CreateSharedGroup, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerCreateSharedGroupGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerCreateSharedGroupGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerCreateSharedGroupResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerDeleteCharacterFromUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerDeleteCharacterFromUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::DeleteCharacterFromUser, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerDeletePlayerAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerDeletePlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::DeletePlayer, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerDeletePushNotificationTemplateAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerDeletePushNotificationTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::DeletePushNotificationTemplate, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerDeleteSharedGroupAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerDeleteSharedGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::DeleteSharedGroup, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerDeregisterGameAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerDeregisterGameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::DeregisterGame, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerEvaluateRandomResultTableAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerEvaluateRandomResultTableRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::EvaluateRandomResultTable, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerEvaluateRandomResultTableGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerEvaluateRandomResultTableGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerEvaluateRandomResultTableResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerEvaluateRandomResultTableResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerExecuteCloudScriptAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerExecuteCloudScriptServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::ExecuteCloudScript, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerExecuteCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerExecuteCloudScriptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerExecuteCloudScriptResult*)(std::dynamic_pointer_cast<ExecuteCloudScriptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetAllSegmentsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetAllSegments, &contextHandle->state->serverAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetAllSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetAllSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetAllSegmentsResult*)(std::dynamic_pointer_cast<GetAllSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetAllUsersCharactersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerListUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetAllUsersCharacters, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetAllUsersCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerListUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerListUsersCharactersResult*)(std::dynamic_pointer_cast<ListUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCatalogItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCatalogItems, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCatalogItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCatalogItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCatalogItemsResult*)(std::dynamic_pointer_cast<GetCatalogItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCharacterDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCharacterData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCharacterDataResult*)(std::dynamic_pointer_cast<GetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCharacterInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCharacterInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCharacterInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCharacterDataResult*)(std::dynamic_pointer_cast<GetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCharacterInventoryAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCharacterInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCharacterInventory, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCharacterInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCharacterInventoryResult*)(std::dynamic_pointer_cast<GetCharacterInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCharacterLeaderboardAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCharacterLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCharacterLeaderboard, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCharacterLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCharacterLeaderboardResult*)(std::dynamic_pointer_cast<GetCharacterLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCharacterReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCharacterReadOnlyData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCharacterReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCharacterDataResult*)(std::dynamic_pointer_cast<GetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetCharacterStatisticsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetCharacterStatistics, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetCharacterStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetCharacterStatisticsResult*)(std::dynamic_pointer_cast<GetCharacterStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetContentDownloadUrlAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetContentDownloadUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetContentDownloadUrl, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetContentDownloadUrlGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerGetContentDownloadUrlGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerGetContentDownloadUrlResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerGetContentDownloadUrlResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerGetFriendLeaderboardAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetFriendLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetFriendLeaderboard, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetFriendLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetFriendsListAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetFriendsListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetFriendsList, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetFriendsListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetFriendsListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetFriendsListResult*)(std::dynamic_pointer_cast<GetFriendsListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetLeaderboardAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetLeaderboard, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetLeaderboardAroundCharacterAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetLeaderboardAroundCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetLeaderboardAroundCharacter, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetLeaderboardAroundCharacterGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardAroundCharacterResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetLeaderboardAroundCharacterResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundCharacterResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetLeaderboardAroundUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetLeaderboardAroundUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetLeaderboardAroundUser, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetLeaderboardAroundUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardAroundUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetLeaderboardAroundUserResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetLeaderboardForUserCharactersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetLeaderboardForUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetLeaderboardForUserCharacters, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetLeaderboardForUserCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardForUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetLeaderboardForUsersCharactersResult*)(std::dynamic_pointer_cast<GetLeaderboardForUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayerCombinedInfoAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayerCombinedInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayerCombinedInfo, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayerCombinedInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerCombinedInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayerCombinedInfoResult*)(std::dynamic_pointer_cast<GetPlayerCombinedInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayerProfileAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayerProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayerProfile, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayerProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerProfileResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayerProfileResult*)(std::dynamic_pointer_cast<GetPlayerProfileResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayerSegmentsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayersSegmentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayerSegments, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayerSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayerSegmentsResult*)(std::dynamic_pointer_cast<GetPlayerSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayersInSegmentAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayersInSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayersInSegment, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayersInSegmentGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayersInSegmentResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayersInSegmentResult*)(std::dynamic_pointer_cast<GetPlayersInSegmentResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayerStatisticsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayerStatistics, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayerStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayerStatisticsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayerStatisticVersionsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayerStatisticVersionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayerStatisticVersions, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayerStatisticVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerStatisticVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayerStatisticVersionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayerTagsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayerTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayerTags, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayerTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerTagsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayerTagsResult*)(std::dynamic_pointer_cast<GetPlayerTagsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromFacebookIDsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromFacebookIDs, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromFacebookIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromFacebookIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromFacebookIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromFacebookInstantGamesIds, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookInstantGamesIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromGenericIDsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromGenericIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromGenericIDs, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromGenericIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromGenericIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromGenericIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGenericIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromPSNAccountIDs, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromPSNAccountIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromPSNAccountIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromSteamIDsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromSteamIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromSteamIDs, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromSteamIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromSteamIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromSteamIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromSteamIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPlayFabIDsFromXboxLiveIDs, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPlayFabIDsFromXboxLiveIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromXboxLiveIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetPublisherData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPublisherDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetPublisherDataResult*)(std::dynamic_pointer_cast<GetPublisherDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetRandomResultTablesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetRandomResultTablesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetRandomResultTables, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetRandomResultTablesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetRandomResultTablesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetRandomResultTablesResult*)(std::dynamic_pointer_cast<GetRandomResultTablesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetServerCustomIDsFromPlayFabIDs, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetServerCustomIDsFromPlayFabIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetServerCustomIDsFromPlayFabIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetServerCustomIDsFromPlayFabIDsResult*)(std::dynamic_pointer_cast<GetServerCustomIDsFromPlayFabIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetSharedGroupDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetSharedGroupData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetSharedGroupDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetSharedGroupDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetSharedGroupDataResult*)(std::dynamic_pointer_cast<GetSharedGroupDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetStoreItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetStoreItemsServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetStoreItems, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetStoreItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetStoreItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetStoreItemsResult*)(std::dynamic_pointer_cast<GetStoreItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetTimeAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetTime, &contextHandle->state->serverAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetTimeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerGetTimeResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerGetTimeResult), result, nullptr);
}

HRESULT PlayFabServerGetTitleDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetTitleData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetTitleDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetTitleInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetTitleInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetTitleInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetTitleNewsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetTitleNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetTitleNews, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetTitleNewsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetTitleNewsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetTitleNewsResult*)(std::dynamic_pointer_cast<GetTitleNewsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserAccountInfoAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserAccountInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserAccountInfo, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserAccountInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserAccountInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserAccountInfoResult*)(std::dynamic_pointer_cast<GetUserAccountInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserBansAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserBans, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserBansResult*)(std::dynamic_pointer_cast<GetUserBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserInventoryAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserInventory, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserInventoryResult*)(std::dynamic_pointer_cast<GetUserInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserPublisherData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserPublisherInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserPublisherReadOnlyData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGetUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GetUserReadOnlyData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGetUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGrantCharacterToUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGrantCharacterToUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GrantCharacterToUser, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGrantCharacterToUserGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerGrantCharacterToUserGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerGrantCharacterToUserResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerGrantCharacterToUserResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerGrantItemsToCharacterAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGrantItemsToCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GrantItemsToCharacter, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGrantItemsToCharacterGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGrantItemsToCharacterResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGrantItemsToCharacterResult*)(std::dynamic_pointer_cast<GrantItemsToCharacterResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGrantItemsToUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGrantItemsToUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GrantItemsToUser, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGrantItemsToUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGrantItemsToUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGrantItemsToUserResult*)(std::dynamic_pointer_cast<GrantItemsToUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerGrantItemsToUsersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerGrantItemsToUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::GrantItemsToUsers, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerGrantItemsToUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGrantItemsToUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerGrantItemsToUsersResult*)(std::dynamic_pointer_cast<GrantItemsToUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerLinkPSNAccountAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerLinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::LinkPSNAccount, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLinkServerCustomIdAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerLinkServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::LinkServerCustomId, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLinkXboxAccountAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerLinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::LinkXboxAccount, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerModifyItemUsesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerModifyItemUsesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::ModifyItemUses, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerModifyItemUsesGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerModifyItemUsesGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyItemUsesResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerModifyItemUsesResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerMoveItemToCharacterFromCharacterAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerMoveItemToCharacterFromCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::MoveItemToCharacterFromCharacter, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerMoveItemToCharacterFromUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerMoveItemToCharacterFromUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::MoveItemToCharacterFromUser, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerMoveItemToUserFromCharacterAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerMoveItemToUserFromCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::MoveItemToUserFromCharacter, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerNotifyMatchmakerPlayerLeftAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerNotifyMatchmakerPlayerLeftRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::NotifyMatchmakerPlayerLeft, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerNotifyMatchmakerPlayerLeftGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerNotifyMatchmakerPlayerLeftResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerNotifyMatchmakerPlayerLeftResult*)(std::dynamic_pointer_cast<NotifyMatchmakerPlayerLeftResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerRedeemCouponAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRedeemCouponRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RedeemCoupon, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRedeemCouponGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRedeemCouponResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerRedeemCouponResult*)(std::dynamic_pointer_cast<RedeemCouponResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerRedeemMatchmakerTicketAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRedeemMatchmakerTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RedeemMatchmakerTicket, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRedeemMatchmakerTicketGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRedeemMatchmakerTicketResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerRedeemMatchmakerTicketResult*)(std::dynamic_pointer_cast<RedeemMatchmakerTicketResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerRefreshGameServerInstanceHeartbeatAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRefreshGameServerInstanceHeartbeatRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RefreshGameServerInstanceHeartbeat, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRegisterGameAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRegisterGameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RegisterGame, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRegisterGameGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerRegisterGameGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerRegisterGameResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerRegisterGameResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerRemoveFriendAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRemoveFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RemoveFriend, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRemoveGenericIDAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRemoveGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RemoveGenericID, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRemovePlayerTagAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRemovePlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RemovePlayerTag, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRemoveSharedGroupMembersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRemoveSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RemoveSharedGroupMembers, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerReportPlayerAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerReportPlayerServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::ReportPlayer, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerReportPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerReportPlayerServerResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerReportPlayerServerResult), result, nullptr);
}

HRESULT PlayFabServerRevokeAllBansForUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRevokeAllBansForUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RevokeAllBansForUser, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRevokeAllBansForUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRevokeAllBansForUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerRevokeAllBansForUserResult*)(std::dynamic_pointer_cast<RevokeAllBansForUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerRevokeBansAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRevokeBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RevokeBans, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRevokeBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRevokeBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerRevokeBansResult*)(std::dynamic_pointer_cast<RevokeBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerRevokeInventoryItemAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRevokeInventoryItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RevokeInventoryItem, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRevokeInventoryItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerRevokeInventoryItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::RevokeInventoryItems, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerRevokeInventoryItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRevokeInventoryItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerRevokeInventoryItemsResult*)(std::dynamic_pointer_cast<RevokeInventoryItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerSavePushNotificationTemplateAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSavePushNotificationTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SavePushNotificationTemplate, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSavePushNotificationTemplateGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerSavePushNotificationTemplateGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerSavePushNotificationTemplateResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerSavePushNotificationTemplateResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerSendCustomAccountRecoveryEmailAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSendCustomAccountRecoveryEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SendCustomAccountRecoveryEmail, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSendEmailFromTemplateAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSendEmailFromTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SendEmailFromTemplate, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSendPushNotificationAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSendPushNotificationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SendPushNotification, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSendPushNotificationFromTemplateAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSendPushNotificationFromTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SendPushNotificationFromTemplate, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetFriendTagsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetFriendTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetFriendTags, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetGameServerInstanceDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetGameServerInstanceDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetGameServerInstanceData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetGameServerInstanceStateAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetGameServerInstanceStateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetGameServerInstanceState, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetGameServerInstanceTagsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetGameServerInstanceTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetGameServerInstanceTags, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetPlayerSecretAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetPlayerSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetPlayerSecret, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetPublisherData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetTitleDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetTitleData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSetTitleInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SetTitleInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSubtractCharacterVirtualCurrencyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSubtractCharacterVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SubtractCharacterVirtualCurrency, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSubtractCharacterVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerSubtractCharacterVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyCharacterVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerModifyCharacterVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerSubtractUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerSubtractUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::SubtractUserVirtualCurrency, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerSubtractUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerSubtractUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerUnlinkPSNAccountAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUnlinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UnlinkPSNAccount, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUnlinkServerCustomIdAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUnlinkServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UnlinkServerCustomId, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUnlinkXboxAccountAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUnlinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UnlinkXboxAccount, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUnlockContainerInstanceAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUnlockContainerInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UnlockContainerInstance, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUnlockContainerInstanceGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerUnlockContainerItemAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUnlockContainerItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UnlockContainerItem, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUnlockContainerItemGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerUpdateAvatarUrlAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateAvatarUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateAvatarUrl, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateBansAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateBans, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerUpdateBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabServerUpdateBansResult*)(std::dynamic_pointer_cast<UpdateBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabServerUpdateCharacterDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateCharacterData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateCharacterDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateCharacterInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateCharacterInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateCharacterInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateCharacterDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateCharacterReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateCharacterReadOnlyData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateCharacterReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateCharacterDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateCharacterStatisticsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateCharacterStatistics, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdatePlayerStatisticsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdatePlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdatePlayerStatistics, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateSharedGroupDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateSharedGroupData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateUserInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateUserInventoryItemCustomDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserInventoryItemDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserInventoryItemCustomData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserPublisherData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserPublisherInternalData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserPublisherReadOnlyData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabServerUpdateUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::UpdateUserReadOnlyData, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerUpdateUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabServerUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabServerWriteCharacterEventAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerWriteServerCharacterEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::WriteCharacterEvent, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerWriteCharacterEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerWriteCharacterEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerWritePlayerEventAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerWriteServerPlayerEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::WritePlayerEvent, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerWritePlayerEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerWritePlayerEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabServerWriteTitleEventAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabServerWriteTitleEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ServerAPI::WriteTitleEvent, &contextHandle->state->serverAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerWriteTitleEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabServerWriteTitleEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabServerWriteEventResponse*>(buffer);

    return S_OK;
}

