#include "stdafx.h"
#include <playfab/PFAccountManagement.h>
#include "AccountManagement.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::AccountManagementModels;

HRESULT PFAccountManagementAdminBanUsersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementBanUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminBanUsers, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminBanUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementBanUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementBanUsersResult*)(std::dynamic_pointer_cast<BanUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminDeleteMasterPlayerAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementDeleteMasterPlayerAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminDeleteMasterPlayerAccount, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminDeleteMasterPlayerAccountGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementDeleteMasterPlayerAccountResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementDeleteMasterPlayerAccountResult*)(std::dynamic_pointer_cast<DeleteMasterPlayerAccountResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminDeletePlayerAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementDeletePlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminDeletePlayer, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminDeleteTitleAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminDeleteTitle, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminExportMasterPlayerDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementExportMasterPlayerDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminExportMasterPlayerData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminExportMasterPlayerDataGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAccountManagementAdminExportMasterPlayerDataGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAccountManagementExportMasterPlayerDataResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAccountManagementExportMasterPlayerDataResult*>(buffer);

    return S_OK;
}

HRESULT PFAccountManagementAdminGetPlayedTitleListAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayedTitleListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminGetPlayedTitleList, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminGetPlayedTitleListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayedTitleListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayedTitleListResult*)(std::dynamic_pointer_cast<GetPlayedTitleListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminGetPlayerIdFromAuthTokenAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayerIdFromAuthTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminGetPlayerIdFromAuthToken, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminGetPlayerIdFromAuthTokenGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAccountManagementAdminGetPlayerIdFromAuthTokenGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAccountManagementGetPlayerIdFromAuthTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAccountManagementGetPlayerIdFromAuthTokenResult*>(buffer);

    return S_OK;
}

HRESULT PFAccountManagementAdminGetPlayerProfileAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayerProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminGetPlayerProfile, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminGetPlayerProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayerProfileResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayerProfileResult*)(std::dynamic_pointer_cast<GetPlayerProfileResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminGetUserAccountInfoAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementLookupUserAccountInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminGetUserAccountInfo, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminGetUserAccountInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementLookupUserAccountInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementLookupUserAccountInfoResult*)(std::dynamic_pointer_cast<LookupUserAccountInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminGetUserBansAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetUserBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminGetUserBans, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminGetUserBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetUserBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetUserBansResult*)(std::dynamic_pointer_cast<GetUserBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminResetPasswordAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementResetPasswordRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminResetPassword, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminRevokeAllBansForUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementRevokeAllBansForUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminRevokeAllBansForUser, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminRevokeAllBansForUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementRevokeAllBansForUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementRevokeAllBansForUserResult*)(std::dynamic_pointer_cast<RevokeAllBansForUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminRevokeBansAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementRevokeBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminRevokeBans, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminRevokeBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementRevokeBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementRevokeBansResult*)(std::dynamic_pointer_cast<RevokeBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminSendAccountRecoveryEmailAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementAdminSendAccountRecoveryEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminSendAccountRecoveryEmail, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminUpdateBansAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementUpdateBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminUpdateBans, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminUpdateBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementUpdateBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementUpdateBansResult*)(std::dynamic_pointer_cast<UpdateBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementAdminUpdateUserTitleDisplayNameAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::AdminUpdateUserTitleDisplayName, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementAdminUpdateUserTitleDisplayNameGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAccountManagementAdminUpdateUserTitleDisplayNameGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAccountManagementUpdateUserTitleDisplayNameResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAccountManagementUpdateUserTitleDisplayNameResult*>(buffer);

    return S_OK;
}

HRESULT PFAccountManagementClientAddGenericIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientAddGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientAddGenericID, &contextHandle->entity->accountManagementAPI, ClientAddGenericIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientAddOrUpdateContactEmailAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementAddOrUpdateContactEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientAddOrUpdateContactEmail, &contextHandle->entity->accountManagementAPI, AddOrUpdateContactEmailRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientAddUsernamePasswordAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementAddUsernamePasswordRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientAddUsernamePassword, &contextHandle->entity->accountManagementAPI, AddUsernamePasswordRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientAddUsernamePasswordGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAccountManagementClientAddUsernamePasswordGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAccountManagementAddUsernamePasswordResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAccountManagementAddUsernamePasswordResult*>(buffer);

    return S_OK;
}

HRESULT PFAccountManagementClientGetAccountInfoAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetAccountInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetAccountInfo, &contextHandle->entity->accountManagementAPI, GetAccountInfoRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetAccountInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetAccountInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetAccountInfoResult*)(std::dynamic_pointer_cast<GetAccountInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayerCombinedInfoAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFGetPlayerCombinedInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayerCombinedInfo, &contextHandle->entity->accountManagementAPI, GetPlayerCombinedInfoRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayerCombinedInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGetPlayerCombinedInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGetPlayerCombinedInfoResult*)(std::dynamic_pointer_cast<GetPlayerCombinedInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayerProfileAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayerProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayerProfile, &contextHandle->entity->accountManagementAPI, GetPlayerProfileRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayerProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayerProfileResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayerProfileResult*)(std::dynamic_pointer_cast<GetPlayerProfileResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromFacebookIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromFacebookIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromFacebookIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromFacebookIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromFacebookIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromFacebookIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromFacebookInstantGamesIds, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromFacebookInstantGamesIdsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookInstantGamesIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromGameCenterIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromGameCenterIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromGameCenterIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromGameCenterIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGameCenterIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromGenericIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromGenericIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromGenericIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromGenericIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromGenericIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromGenericIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGenericIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromGoogleIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromGoogleIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromGoogleIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromGoogleIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromGoogleIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromGoogleIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGoogleIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromKongregateIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromKongregateIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromKongregateIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromKongregateIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromKongregateIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromKongregateIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromKongregateIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromNintendoSwitchDeviceIds, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromPSNAccountIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromPSNAccountIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromPSNAccountIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromPSNAccountIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromPSNAccountIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromSteamIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromSteamIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromSteamIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromSteamIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromSteamIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromSteamIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromSteamIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromTwitchIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromTwitchIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromTwitchIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromTwitchIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromTwitchIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromTwitchIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromTwitchIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromXboxLiveIDsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientGetPlayFabIDsFromXboxLiveIDs, &contextHandle->entity->accountManagementAPI, GetPlayFabIDsFromXboxLiveIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientGetPlayFabIDsFromXboxLiveIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromXboxLiveIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementClientLinkAndroidDeviceIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkAndroidDeviceID, &contextHandle->entity->accountManagementAPI, LinkAndroidDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkAppleAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkApple, &contextHandle->entity->accountManagementAPI, LinkAppleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkCustomIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkCustomID, &contextHandle->entity->accountManagementAPI, LinkCustomIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkFacebookAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkFacebookAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkFacebookAccount, &contextHandle->entity->accountManagementAPI, LinkFacebookAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkFacebookInstantGamesIdAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkFacebookInstantGamesId, &contextHandle->entity->accountManagementAPI, LinkFacebookInstantGamesIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkGameCenterAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkGameCenterAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkGameCenterAccount, &contextHandle->entity->accountManagementAPI, LinkGameCenterAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkGoogleAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkGoogleAccount, &contextHandle->entity->accountManagementAPI, LinkGoogleAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkIOSDeviceIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkIOSDeviceID, &contextHandle->entity->accountManagementAPI, LinkIOSDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkKongregateAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkKongregateAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkKongregate, &contextHandle->entity->accountManagementAPI, LinkKongregateAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkNintendoServiceAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkNintendoServiceAccount, &contextHandle->entity->accountManagementAPI, LinkNintendoServiceAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkNintendoSwitchDeviceIdAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkNintendoSwitchDeviceId, &contextHandle->entity->accountManagementAPI, LinkNintendoSwitchDeviceIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkOpenIdConnectAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkOpenIdConnect, &contextHandle->entity->accountManagementAPI, LinkOpenIdConnectRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkPSNAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientLinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkPSNAccount, &contextHandle->entity->accountManagementAPI, ClientLinkPSNAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkSteamAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkSteamAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkSteamAccount, &contextHandle->entity->accountManagementAPI, LinkSteamAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkTwitchAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementLinkTwitchAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkTwitch, &contextHandle->entity->accountManagementAPI, LinkTwitchAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientLinkXboxAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientLinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientLinkXboxAccount, &contextHandle->entity->accountManagementAPI, ClientLinkXboxAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientRemoveContactEmailAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementRemoveContactEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientRemoveContactEmail, &contextHandle->entity->accountManagementAPI, RemoveContactEmailRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientRemoveGenericIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientRemoveGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientRemoveGenericID, &contextHandle->entity->accountManagementAPI, ClientRemoveGenericIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientReportPlayerAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementReportPlayerClientRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientReportPlayer, &contextHandle->entity->accountManagementAPI, ReportPlayerClientRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientReportPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFAccountManagementReportPlayerClientResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFAccountManagementReportPlayerClientResult), result, nullptr);
}

HRESULT PFAccountManagementClientSendAccountRecoveryEmailAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementClientSendAccountRecoveryEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ClientSendAccountRecoveryEmail, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkAndroidDeviceIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkAndroidDeviceID, &contextHandle->entity->accountManagementAPI, UnlinkAndroidDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkAppleAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkApple, &contextHandle->entity->accountManagementAPI, UnlinkAppleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkCustomIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkCustomID, &contextHandle->entity->accountManagementAPI, UnlinkCustomIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkFacebookAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkFacebookAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkFacebookAccount, &contextHandle->entity->accountManagementAPI, UnlinkFacebookAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkFacebookInstantGamesIdAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkFacebookInstantGamesId, &contextHandle->entity->accountManagementAPI, UnlinkFacebookInstantGamesIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkGameCenterAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkGameCenterAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkGameCenterAccount, &contextHandle->entity->accountManagementAPI, UnlinkGameCenterAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkGoogleAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkGoogleAccount, &contextHandle->entity->accountManagementAPI, UnlinkGoogleAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkIOSDeviceIDAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkIOSDeviceID, &contextHandle->entity->accountManagementAPI, UnlinkIOSDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkKongregateAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkKongregateAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkKongregate, &contextHandle->entity->accountManagementAPI, UnlinkKongregateAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkNintendoServiceAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkNintendoServiceAccount, &contextHandle->entity->accountManagementAPI, UnlinkNintendoServiceAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkNintendoSwitchDeviceIdAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkNintendoSwitchDeviceId, &contextHandle->entity->accountManagementAPI, UnlinkNintendoSwitchDeviceIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkOpenIdConnectAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkOpenIdConnect, &contextHandle->entity->accountManagementAPI, UnlinkOpenIdConnectRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkPSNAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientUnlinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkPSNAccount, &contextHandle->entity->accountManagementAPI, ClientUnlinkPSNAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkSteamAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkSteamAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkSteamAccount, &contextHandle->entity->accountManagementAPI, UnlinkSteamAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkTwitchAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementUnlinkTwitchAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkTwitch, &contextHandle->entity->accountManagementAPI, UnlinkTwitchAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUnlinkXboxAccountAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientUnlinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUnlinkXboxAccount, &contextHandle->entity->accountManagementAPI, ClientUnlinkXboxAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUpdateAvatarUrlAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientUpdateAvatarUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUpdateAvatarUrl, &contextHandle->entity->accountManagementAPI, ClientUpdateAvatarUrlRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUpdateUserTitleDisplayNameAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementClientUpdateUserTitleDisplayNameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::ClientUpdateUserTitleDisplayName, &contextHandle->entity->accountManagementAPI, ClientUpdateUserTitleDisplayNameRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementClientUpdateUserTitleDisplayNameGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAccountManagementClientUpdateUserTitleDisplayNameGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAccountManagementUpdateUserTitleDisplayNameResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAccountManagementUpdateUserTitleDisplayNameResult*>(buffer);

    return S_OK;
}

HRESULT PFAccountManagementServerAddGenericIDAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerAddGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerAddGenericID, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerBanUsersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementBanUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerBanUsers, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerBanUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementBanUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementBanUsersResult*)(std::dynamic_pointer_cast<BanUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerDeletePlayerAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementDeletePlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerDeletePlayer, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerDeletePushNotificationTemplateAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementDeletePushNotificationTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerDeletePushNotificationTemplate, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayerProfileAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayerProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayerProfile, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayerProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayerProfileResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayerProfileResult*)(std::dynamic_pointer_cast<GetPlayerProfileResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromFacebookIDsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromFacebookIDs, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromFacebookIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromFacebookIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromFacebookIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromFacebookInstantGamesIds, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookInstantGamesIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromGenericIDsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromGenericIDs, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromGenericIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromGenericIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromGenericIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGenericIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromNintendoSwitchDeviceIds, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromPSNAccountIDsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromPSNAccountIDs, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromPSNAccountIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromPSNAccountIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromSteamIDsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromSteamIDs, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromSteamIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromSteamIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromSteamIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromSteamIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromXboxLiveIDsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetPlayFabIDsFromXboxLiveIDs, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetPlayFabIDsFromXboxLiveIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromXboxLiveIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetServerCustomIDsFromPlayFabIDsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetServerCustomIDsFromPlayFabIDs, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetServerCustomIDsFromPlayFabIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult*)(std::dynamic_pointer_cast<GetServerCustomIDsFromPlayFabIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetUserAccountInfoAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetUserAccountInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetUserAccountInfo, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetUserAccountInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetUserAccountInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetUserAccountInfoResult*)(std::dynamic_pointer_cast<GetUserAccountInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerGetUserBansAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementGetUserBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerGetUserBans, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerGetUserBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetUserBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetUserBansResult*)(std::dynamic_pointer_cast<GetUserBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerLinkPSNAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerLinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerLinkPSNAccount, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerLinkServerCustomIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementLinkServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerLinkServerCustomId, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerLinkXboxAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerLinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerLinkXboxAccount, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerRemoveGenericIDAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerRemoveGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerRemoveGenericID, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerRevokeAllBansForUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementRevokeAllBansForUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerRevokeAllBansForUser, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerRevokeAllBansForUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementRevokeAllBansForUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementRevokeAllBansForUserResult*)(std::dynamic_pointer_cast<RevokeAllBansForUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerRevokeBansAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementRevokeBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerRevokeBans, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerRevokeBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementRevokeBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementRevokeBansResult*)(std::dynamic_pointer_cast<RevokeBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementServerSavePushNotificationTemplateAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementSavePushNotificationTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerSavePushNotificationTemplate, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerSavePushNotificationTemplateGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAccountManagementServerSavePushNotificationTemplateGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAccountManagementSavePushNotificationTemplateResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAccountManagementSavePushNotificationTemplateResult*>(buffer);

    return S_OK;
}

HRESULT PFAccountManagementServerSendCustomAccountRecoveryEmailAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementSendCustomAccountRecoveryEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerSendCustomAccountRecoveryEmail, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerSendEmailFromTemplateAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementSendEmailFromTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerSendEmailFromTemplate, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerSendPushNotificationAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementSendPushNotificationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerSendPushNotification, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerSendPushNotificationFromTemplateAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementSendPushNotificationFromTemplateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerSendPushNotificationFromTemplate, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerUnlinkPSNAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerUnlinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerUnlinkPSNAccount, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerUnlinkServerCustomIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementUnlinkServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerUnlinkServerCustomId, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerUnlinkXboxAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerUnlinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerUnlinkXboxAccount, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerUpdateAvatarUrlAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementServerUpdateAvatarUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerUpdateAvatarUrl, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerUpdateBansAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAccountManagementUpdateBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AccountManagementAPI::ServerUpdateBans, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementServerUpdateBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementUpdateBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementUpdateBansResult*)(std::dynamic_pointer_cast<UpdateBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementGetGlobalPolicyAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetGlobalPolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::GetGlobalPolicy, &contextHandle->entity->accountManagementAPI, GetGlobalPolicyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementGetGlobalPolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetGlobalPolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetGlobalPolicyResponse*)(std::dynamic_pointer_cast<GetGlobalPolicyResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementGetProfileAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetEntityProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::GetProfile, &contextHandle->entity->accountManagementAPI, GetEntityProfileRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementGetProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetEntityProfileResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetEntityProfileResponse*)(std::dynamic_pointer_cast<GetEntityProfileResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementGetProfilesAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetEntityProfilesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::GetProfiles, &contextHandle->entity->accountManagementAPI, GetEntityProfilesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementGetProfilesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetEntityProfilesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetEntityProfilesResponse*)(std::dynamic_pointer_cast<GetEntityProfilesResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::GetTitlePlayersFromMasterPlayerAccountIds, &contextHandle->entity->accountManagementAPI, GetTitlePlayersFromMasterPlayerAccountIdsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse*)(std::dynamic_pointer_cast<GetTitlePlayersFromMasterPlayerAccountIdsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementSetGlobalPolicyAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementSetGlobalPolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::SetGlobalPolicy, &contextHandle->entity->accountManagementAPI, SetGlobalPolicyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementSetProfileLanguageAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementSetProfileLanguageRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::SetProfileLanguage, &contextHandle->entity->accountManagementAPI, SetProfileLanguageRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementSetProfileLanguageGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementSetProfileLanguageResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementSetProfileLanguageResponse*)(std::dynamic_pointer_cast<SetProfileLanguageResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAccountManagementSetProfilePolicyAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAccountManagementSetEntityProfilePolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AccountManagementAPI::SetProfilePolicy, &contextHandle->entity->accountManagementAPI, SetEntityProfilePolicyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAccountManagementSetProfilePolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAccountManagementSetEntityProfilePolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAccountManagementSetEntityProfilePolicyResponse*)(std::dynamic_pointer_cast<SetEntityProfilePolicyResponse>((*resultHandle)->result).get());

    return S_OK;
}

