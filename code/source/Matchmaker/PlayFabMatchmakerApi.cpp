#include "stdafx.h"
#include <playfab/PlayFabMatchmakerApi.h>
#include "MatchmakerApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::MatchmakerModels;

HRESULT PlayFabMatchmakerAuthUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabMatchmakerAuthUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MatchmakerAPI::AuthUser, &contextHandle->state->matchmakerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMatchmakerAuthUserGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMatchmakerAuthUserGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMatchmakerAuthUserResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMatchmakerAuthUserResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMatchmakerPlayerJoinedAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabMatchmakerPlayerJoinedRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MatchmakerAPI::PlayerJoined, &contextHandle->state->matchmakerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMatchmakerPlayerLeftAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabMatchmakerPlayerLeftRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MatchmakerAPI::PlayerLeft, &contextHandle->state->matchmakerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMatchmakerStartGameAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabMatchmakerStartGameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MatchmakerAPI::StartGame, &contextHandle->state->matchmakerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMatchmakerStartGameGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMatchmakerStartGameGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMatchmakerStartGameResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMatchmakerStartGameResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMatchmakerUserInfoAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabMatchmakerUserInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MatchmakerAPI::UserInfo, &contextHandle->state->matchmakerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMatchmakerUserInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMatchmakerUserInfoResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMatchmakerUserInfoResponse*)(std::dynamic_pointer_cast<UserInfoResponse>((*resultHandle)->model).get());

    return S_OK;
}

