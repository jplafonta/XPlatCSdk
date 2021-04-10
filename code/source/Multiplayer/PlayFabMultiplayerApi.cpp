#include "stdafx.h"
#include <playfab/PlayFabMultiplayerApi.h>
#include "MultiplayerApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::MultiplayerModels;

HRESULT PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CancelAllMatchmakingTicketsForPlayer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CancelAllServerBackfillTicketsForPlayer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCancelMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCancelMatchmakingTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CancelMatchmakingTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCancelServerBackfillTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCancelServerBackfillTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CancelServerBackfillTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateBuildAliasAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateBuildAliasRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateBuildAlias, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateBuildAliasGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerBuildAliasDetailsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerBuildAliasDetailsResponse*)(std::dynamic_pointer_cast<BuildAliasDetailsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerCreateBuildWithCustomContainerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateBuildWithCustomContainerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateBuildWithCustomContainer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateBuildWithCustomContainerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateBuildWithCustomContainerResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerCreateBuildWithCustomContainerResponse*)(std::dynamic_pointer_cast<CreateBuildWithCustomContainerResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerCreateBuildWithManagedContainerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateBuildWithManagedContainerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateBuildWithManagedContainer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateBuildWithManagedContainerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateBuildWithManagedContainerResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerCreateBuildWithManagedContainerResponse*)(std::dynamic_pointer_cast<CreateBuildWithManagedContainerResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateBuildWithProcessBasedServer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateBuildWithProcessBasedServerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse*)(std::dynamic_pointer_cast<CreateBuildWithProcessBasedServerResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerCreateMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateMatchmakingTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateMatchmakingTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateMatchmakingTicketGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerCreateMatchmakingTicketGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateMatchmakingTicketResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerCreateMatchmakingTicketResult*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerCreateRemoteUserAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateRemoteUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateRemoteUser, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateRemoteUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateRemoteUserResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerCreateRemoteUserResponse*)(std::dynamic_pointer_cast<CreateRemoteUserResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerCreateServerBackfillTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateServerBackfillTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateServerBackfillTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateServerBackfillTicketGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerCreateServerBackfillTicketGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateServerBackfillTicketResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerCreateServerBackfillTicketResult*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerCreateServerMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateServerMatchmakingTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateServerMatchmakingTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateServerMatchmakingTicketGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerCreateServerMatchmakingTicketGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateMatchmakingTicketResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerCreateMatchmakingTicketResult*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::CreateTitleMultiplayerServersQuotaChange, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerDeleteAssetAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteAssetRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteAsset, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerDeleteBuildAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteBuild, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerDeleteBuildAliasAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteBuildAliasRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteBuildAlias, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerDeleteBuildRegionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteBuildRegionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteBuildRegion, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerDeleteCertificateAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteCertificateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteCertificate, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerDeleteContainerImageRepositoryAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteContainerImageRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteContainerImageRepository, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerDeleteRemoteUserAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerDeleteRemoteUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::DeleteRemoteUser, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerEnableMultiplayerServersForTitleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::EnableMultiplayerServersForTitle, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerEnableMultiplayerServersForTitleGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerEnableMultiplayerServersForTitleResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerEnableMultiplayerServersForTitleResponse*)(std::dynamic_pointer_cast<EnableMultiplayerServersForTitleResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetAssetUploadUrlAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetAssetUploadUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetAssetUploadUrl, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetAssetUploadUrlGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerGetAssetUploadUrlGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetAssetUploadUrlResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerGetAssetUploadUrlResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerGetBuildAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetBuild, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetBuildGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetBuildResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetBuildResponse*)(std::dynamic_pointer_cast<GetBuildResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetBuildAliasAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetBuildAliasRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetBuildAlias, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetBuildAliasGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerBuildAliasDetailsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerBuildAliasDetailsResponse*)(std::dynamic_pointer_cast<BuildAliasDetailsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetContainerRegistryCredentialsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetContainerRegistryCredentialsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetContainerRegistryCredentials, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetContainerRegistryCredentialsGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerGetContainerRegistryCredentialsGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetContainerRegistryCredentialsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerGetContainerRegistryCredentialsResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerGetMatchAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetMatchRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetMatch, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetMatchGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetMatchResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetMatchResult*)(std::dynamic_pointer_cast<GetMatchResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetMatchmakingTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetMatchmakingTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetMatchmakingTicketGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetMatchmakingTicketResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetMatchmakingTicketResult*)(std::dynamic_pointer_cast<GetMatchmakingTicketResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetMultiplayerServerDetailsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetMultiplayerServerDetailsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetMultiplayerServerDetails, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetMultiplayerServerDetailsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetMultiplayerServerDetailsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetMultiplayerServerDetailsResponse*)(std::dynamic_pointer_cast<GetMultiplayerServerDetailsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetMultiplayerServerLogsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetMultiplayerServerLogsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetMultiplayerServerLogs, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetMultiplayerServerLogsGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerGetMultiplayerServerLogsGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetMultiplayerServerLogsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerGetMultiplayerServerLogsResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetMultiplayerSessionLogsBySessionId, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetMultiplayerServerLogsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerGetMultiplayerServerLogsResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerGetQueueStatisticsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetQueueStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetQueueStatistics, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetQueueStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetQueueStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetQueueStatisticsResult*)(std::dynamic_pointer_cast<GetQueueStatisticsResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetRemoteLoginEndpointAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetRemoteLoginEndpointRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetRemoteLoginEndpoint, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetRemoteLoginEndpointGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerGetRemoteLoginEndpointGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetRemoteLoginEndpointResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerGetRemoteLoginEndpointResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerGetServerBackfillTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetServerBackfillTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetServerBackfillTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetServerBackfillTicketGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetServerBackfillTicketResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetServerBackfillTicketResult*)(std::dynamic_pointer_cast<GetServerBackfillTicketResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetTitleEnabledForMultiplayerServersStatus, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse*)(std::dynamic_pointer_cast<GetTitleEnabledForMultiplayerServersStatusResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetTitleMultiplayerServersQuotaChange, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse*)(std::dynamic_pointer_cast<GetTitleMultiplayerServersQuotaChangeResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::GetTitleMultiplayerServersQuotas, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotasGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse*)(std::dynamic_pointer_cast<GetTitleMultiplayerServersQuotasResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerJoinMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerJoinMatchmakingTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::JoinMatchmakingTicket, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListArchivedMultiplayerServersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListMultiplayerServersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListArchivedMultiplayerServers, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListArchivedMultiplayerServersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListMultiplayerServersResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListMultiplayerServersResponse*)(std::dynamic_pointer_cast<ListMultiplayerServersResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListAssetSummariesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListAssetSummariesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListAssetSummaries, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListAssetSummariesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListAssetSummariesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListAssetSummariesResponse*)(std::dynamic_pointer_cast<ListAssetSummariesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListBuildAliasesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListBuildAliasesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListBuildAliases, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListBuildAliasesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListBuildAliasesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListBuildAliasesResponse*)(std::dynamic_pointer_cast<ListBuildAliasesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListBuildSummariesV2Async(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListBuildSummariesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListBuildSummariesV2, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListBuildSummariesV2GetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListBuildSummariesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListBuildSummariesResponse*)(std::dynamic_pointer_cast<ListBuildSummariesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListCertificateSummariesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListCertificateSummariesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListCertificateSummaries, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListCertificateSummariesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListCertificateSummariesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListCertificateSummariesResponse*)(std::dynamic_pointer_cast<ListCertificateSummariesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListContainerImagesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListContainerImagesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListContainerImages, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListContainerImagesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListContainerImagesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListContainerImagesResponse*)(std::dynamic_pointer_cast<ListContainerImagesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListContainerImageTagsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListContainerImageTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListContainerImageTags, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListContainerImageTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListContainerImageTagsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListContainerImageTagsResponse*)(std::dynamic_pointer_cast<ListContainerImageTagsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListMatchmakingTicketsForPlayer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListMatchmakingTicketsForPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListMatchmakingTicketsForPlayerResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListMatchmakingTicketsForPlayerResult*)(std::dynamic_pointer_cast<ListMatchmakingTicketsForPlayerResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListMultiplayerServersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListMultiplayerServersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListMultiplayerServers, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListMultiplayerServersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListMultiplayerServersResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListMultiplayerServersResponse*)(std::dynamic_pointer_cast<ListMultiplayerServersResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListPartyQosServersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabMultiplayerListPartyQosServersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListPartyQosServers, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListPartyQosServersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListPartyQosServersResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListPartyQosServersResponse*)(std::dynamic_pointer_cast<ListPartyQosServersResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListQosServersForTitleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListQosServersForTitleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListQosServersForTitle, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListQosServersForTitleGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListQosServersForTitleResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListQosServersForTitleResponse*)(std::dynamic_pointer_cast<ListQosServersForTitleResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListServerBackfillTicketsForPlayer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListServerBackfillTicketsForPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListServerBackfillTicketsForPlayerResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListServerBackfillTicketsForPlayerResult*)(std::dynamic_pointer_cast<ListServerBackfillTicketsForPlayerResult>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListTitleMultiplayerServersQuotaChanges, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse*)(std::dynamic_pointer_cast<ListTitleMultiplayerServersQuotaChangesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerListVirtualMachineSummariesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerListVirtualMachineSummariesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ListVirtualMachineSummaries, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerListVirtualMachineSummariesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListVirtualMachineSummariesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerListVirtualMachineSummariesResponse*)(std::dynamic_pointer_cast<ListVirtualMachineSummariesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerRequestMultiplayerServerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerRequestMultiplayerServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::RequestMultiplayerServer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerRequestMultiplayerServerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerRequestMultiplayerServerResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerRequestMultiplayerServerResponse*)(std::dynamic_pointer_cast<RequestMultiplayerServerResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::RolloverContainerRegistryCredentials, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabMultiplayerShutdownMultiplayerServerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerShutdownMultiplayerServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::ShutdownMultiplayerServer, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerUntagContainerImageAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerUntagContainerImageRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::UntagContainerImage, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerUpdateBuildAliasAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerUpdateBuildAliasRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::UpdateBuildAlias, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerUpdateBuildAliasGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerBuildAliasDetailsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabMultiplayerBuildAliasDetailsResponse*)(std::dynamic_pointer_cast<BuildAliasDetailsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabMultiplayerUpdateBuildNameAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerUpdateBuildNameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::UpdateBuildName, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerUpdateBuildRegionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerUpdateBuildRegionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::UpdateBuildRegion, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerUpdateBuildRegionsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerUpdateBuildRegionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::UpdateBuildRegions, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabMultiplayerUploadCertificateAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabMultiplayerUploadCertificateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&MultiplayerAPI::UploadCertificate, &contextHandle->entity->multiplayerAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

