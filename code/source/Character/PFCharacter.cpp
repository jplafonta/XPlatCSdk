#include "stdafx.h"
#include <playfab/PFCharacter.h>
#include "Character.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::CharacterModels;

HRESULT PFCharacterAdminResetCharacterStatisticsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterResetCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::AdminResetCharacterStatistics, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetAllUsersCharactersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterListUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetAllUsersCharacters, &contextHandle->entity->characterAPI, ListUsersCharactersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetAllUsersCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterListUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterListUsersCharactersResult*)(std::dynamic_pointer_cast<ListUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGetCharacterDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetCharacterData, &contextHandle->entity->characterAPI, GetCharacterDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterClientGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterClientGetCharacterDataResult*)(std::dynamic_pointer_cast<ClientGetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGetCharacterLeaderboardAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterGetCharacterLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetCharacterLeaderboard, &contextHandle->entity->characterAPI, GetCharacterLeaderboardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetCharacterLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterGetCharacterLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterGetCharacterLeaderboardResult*)(std::dynamic_pointer_cast<GetCharacterLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGetCharacterReadOnlyDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetCharacterReadOnlyData, &contextHandle->entity->characterAPI, GetCharacterDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetCharacterReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterClientGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterClientGetCharacterDataResult*)(std::dynamic_pointer_cast<ClientGetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGetCharacterStatisticsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterClientGetCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetCharacterStatistics, &contextHandle->entity->characterAPI, ClientGetCharacterStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetCharacterStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterClientGetCharacterStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterClientGetCharacterStatisticsResult*)(std::dynamic_pointer_cast<ClientGetCharacterStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGetLeaderboardAroundCharacterAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterClientGetLeaderboardAroundCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetLeaderboardAroundCharacter, &contextHandle->entity->characterAPI, ClientGetLeaderboardAroundCharacterRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetLeaderboardAroundCharacterGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterGetLeaderboardAroundCharacterResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterGetLeaderboardAroundCharacterResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundCharacterResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGetLeaderboardForUserCharactersAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterClientGetLeaderboardForUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGetLeaderboardForUserCharacters, &contextHandle->entity->characterAPI, ClientGetLeaderboardForUsersCharactersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGetLeaderboardForUserCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterGetLeaderboardForUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterGetLeaderboardForUsersCharactersResult*)(std::dynamic_pointer_cast<GetLeaderboardForUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterClientGrantCharacterToUserAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterClientGrantCharacterToUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientGrantCharacterToUser, &contextHandle->entity->characterAPI, ClientGrantCharacterToUserRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientGrantCharacterToUserGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFCharacterClientGrantCharacterToUserGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFCharacterClientGrantCharacterToUserResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFCharacterClientGrantCharacterToUserResult*>(buffer);

    return S_OK;
}

HRESULT PFCharacterClientUpdateCharacterDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterClientUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientUpdateCharacterData, &contextHandle->entity->characterAPI, ClientUpdateCharacterDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterClientUpdateCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFCharacterUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFCharacterUpdateCharacterDataResult), result, nullptr);
}

HRESULT PFCharacterClientUpdateCharacterStatisticsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFCharacterClientUpdateCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&CharacterAPI::ClientUpdateCharacterStatistics, &contextHandle->entity->characterAPI, ClientUpdateCharacterStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerDeleteCharacterFromUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterDeleteCharacterFromUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerDeleteCharacterFromUser, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetAllUsersCharactersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterListUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetAllUsersCharacters, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetAllUsersCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterListUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterListUsersCharactersResult*)(std::dynamic_pointer_cast<ListUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetCharacterDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetCharacterData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterServerGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterServerGetCharacterDataResult*)(std::dynamic_pointer_cast<ServerGetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetCharacterInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetCharacterInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetCharacterInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterServerGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterServerGetCharacterDataResult*)(std::dynamic_pointer_cast<ServerGetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetCharacterLeaderboardAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterGetCharacterLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetCharacterLeaderboard, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetCharacterLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterGetCharacterLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterGetCharacterLeaderboardResult*)(std::dynamic_pointer_cast<GetCharacterLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetCharacterReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetCharacterReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetCharacterReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterServerGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterServerGetCharacterDataResult*)(std::dynamic_pointer_cast<ServerGetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetCharacterStatisticsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerGetCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetCharacterStatistics, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetCharacterStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterServerGetCharacterStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterServerGetCharacterStatisticsResult*)(std::dynamic_pointer_cast<ServerGetCharacterStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetLeaderboardAroundCharacterAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerGetLeaderboardAroundCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetLeaderboardAroundCharacter, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetLeaderboardAroundCharacterGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterGetLeaderboardAroundCharacterResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterGetLeaderboardAroundCharacterResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundCharacterResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGetLeaderboardForUserCharactersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerGetLeaderboardForUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGetLeaderboardForUserCharacters, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGetLeaderboardForUserCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCharacterGetLeaderboardForUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFCharacterGetLeaderboardForUsersCharactersResult*)(std::dynamic_pointer_cast<GetLeaderboardForUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFCharacterServerGrantCharacterToUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerGrantCharacterToUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerGrantCharacterToUser, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerGrantCharacterToUserGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFCharacterServerGrantCharacterToUserGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFCharacterServerGrantCharacterToUserResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFCharacterServerGrantCharacterToUserResult*>(buffer);

    return S_OK;
}

HRESULT PFCharacterServerUpdateCharacterDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerUpdateCharacterData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerUpdateCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFCharacterUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFCharacterUpdateCharacterDataResult), result, nullptr);
}

HRESULT PFCharacterServerUpdateCharacterInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerUpdateCharacterInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerUpdateCharacterInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFCharacterUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFCharacterUpdateCharacterDataResult), result, nullptr);
}

HRESULT PFCharacterServerUpdateCharacterReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerUpdateCharacterReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFCharacterServerUpdateCharacterReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFCharacterUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFCharacterUpdateCharacterDataResult), result, nullptr);
}

HRESULT PFCharacterServerUpdateCharacterStatisticsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFCharacterServerUpdateCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&CharacterAPI::ServerUpdateCharacterStatistics, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

