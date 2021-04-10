#include "stdafx.h"
#include <playfab/PlayFabProfilesApi.h>
#include "ProfilesApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::ProfilesModels;

HRESULT PlayFabProfilesGetGlobalPolicyAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesGetGlobalPolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::GetGlobalPolicy, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesGetGlobalPolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabProfilesGetGlobalPolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabProfilesGetGlobalPolicyResponse*)(std::dynamic_pointer_cast<GetGlobalPolicyResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabProfilesGetProfileAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesGetEntityProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::GetProfile, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesGetProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabProfilesGetEntityProfileResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabProfilesGetEntityProfileResponse*)(std::dynamic_pointer_cast<GetEntityProfileResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabProfilesGetProfilesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesGetEntityProfilesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::GetProfiles, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesGetProfilesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabProfilesGetEntityProfilesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabProfilesGetEntityProfilesResponse*)(std::dynamic_pointer_cast<GetEntityProfilesResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::GetTitlePlayersFromMasterPlayerAccountIds, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse*)(std::dynamic_pointer_cast<GetTitlePlayersFromMasterPlayerAccountIdsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabProfilesSetGlobalPolicyAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesSetGlobalPolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::SetGlobalPolicy, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesSetProfileLanguageAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesSetProfileLanguageRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::SetProfileLanguage, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesSetProfileLanguageGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabProfilesSetProfileLanguageResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabProfilesSetProfileLanguageResponse*)(std::dynamic_pointer_cast<SetProfileLanguageResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabProfilesSetProfilePolicyAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabProfilesSetEntityProfilePolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&ProfilesAPI::SetProfilePolicy, &contextHandle->entity->profilesAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabProfilesSetProfilePolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabProfilesSetEntityProfilePolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabProfilesSetEntityProfilePolicyResponse*)(std::dynamic_pointer_cast<SetEntityProfilePolicyResponse>((*resultHandle)->model).get());

    return S_OK;
}

