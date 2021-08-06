#include "stdafx.h"
#include <playfab/PFFriends.h>
#include "Friends.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::FriendsModels;

HRESULT PFFriendsClientAddFriendAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFFriendsClientAddFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&FriendsAPI::ClientAddFriend, &contextHandle->entity->friendsAPI, ClientAddFriendRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsClientAddFriendGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFFriendsAddFriendResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFFriendsAddFriendResult), result, nullptr);
}

HRESULT PFFriendsClientGetFriendsListAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFFriendsClientGetFriendsListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&FriendsAPI::ClientGetFriendsList, &contextHandle->entity->friendsAPI, ClientGetFriendsListRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsClientGetFriendsListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFFriendsGetFriendsListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFFriendsGetFriendsListResult*)(std::dynamic_pointer_cast<GetFriendsListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFFriendsClientRemoveFriendAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFFriendsClientRemoveFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&FriendsAPI::ClientRemoveFriend, &contextHandle->entity->friendsAPI, ClientRemoveFriendRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsClientSetFriendTagsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFFriendsClientSetFriendTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&FriendsAPI::ClientSetFriendTags, &contextHandle->entity->friendsAPI, ClientSetFriendTagsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsServerAddFriendAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFFriendsServerAddFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&FriendsAPI::ServerAddFriend, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsServerGetFriendsListAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFFriendsServerGetFriendsListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&FriendsAPI::ServerGetFriendsList, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsServerGetFriendsListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFFriendsGetFriendsListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFFriendsGetFriendsListResult*)(std::dynamic_pointer_cast<GetFriendsListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFFriendsServerRemoveFriendAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFFriendsServerRemoveFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&FriendsAPI::ServerRemoveFriend, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFFriendsServerSetFriendTagsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFFriendsServerSetFriendTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&FriendsAPI::ServerSetFriendTags, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

