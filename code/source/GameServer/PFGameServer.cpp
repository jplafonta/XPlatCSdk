#include "stdafx.h"
#include <playfab/PFGameServer.h>
#include "GameServer.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::GameServerModels;

HRESULT PFGameServerAdminAddServerBuildAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGameServerAddServerBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GameServerAPI::AdminAddServerBuild, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGameServerAdminAddServerBuildGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGameServerAddServerBuildResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGameServerAddServerBuildResult*)(std::dynamic_pointer_cast<AddServerBuildResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGameServerAdminGetServerBuildInfoAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGameServerGetServerBuildInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GameServerAPI::AdminGetServerBuildInfo, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGameServerAdminGetServerBuildInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGameServerGetServerBuildInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGameServerGetServerBuildInfoResult*)(std::dynamic_pointer_cast<GetServerBuildInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGameServerAdminGetServerBuildUploadUrlAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGameServerGetServerBuildUploadURLRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GameServerAPI::AdminGetServerBuildUploadUrl, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGameServerAdminGetServerBuildUploadUrlGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFGameServerAdminGetServerBuildUploadUrlGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFGameServerGetServerBuildUploadURLResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFGameServerGetServerBuildUploadURLResult*>(buffer);

    return S_OK;
}

HRESULT PFGameServerAdminListServerBuildsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GameServerAPI::AdminListServerBuilds, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGameServerAdminListServerBuildsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGameServerListBuildsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGameServerListBuildsResult*)(std::dynamic_pointer_cast<ListBuildsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGameServerAdminModifyServerBuildAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGameServerModifyServerBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GameServerAPI::AdminModifyServerBuild, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFGameServerAdminModifyServerBuildGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGameServerModifyServerBuildResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGameServerModifyServerBuildResult*)(std::dynamic_pointer_cast<ModifyServerBuildResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFGameServerAdminRemoveServerBuildAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGameServerRemoveServerBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&GameServerAPI::AdminRemoveServerBuild, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

