#include "stdafx.h"
#include <playfab/PFEntity.h>
#include "Entity.h"
#include "ApiAsyncProviders.h"

using namespace PlayFab;

HRESULT PFEntityDuplicateHandle(
    _In_ PFEntityHandle entityHandle,
    _Out_ PFEntityHandle* duplicatedEntityHandle
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(duplicatedEntityHandle);

    *duplicatedEntityHandle = MakeUnique<PFEntity>(*entityHandle).release();
    return S_OK;
}

void PFEntityCloseHandle(
    _In_ PFEntityHandle entityHandle
) noexcept
{
    UniquePtr<PFEntity>{ entityHandle };
}

HRESULT PFEntityRegisterTokenRefreshedCallback(
    _In_ PFEntityHandle entityHandle,
    _In_ XTaskQueueHandle queue,
    _In_ PFEntityTokenRefreshedCallback* callback,
    _In_opt_ void* context,
    _Out_ PFRegistrationToken* token
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(callback);
    RETURN_HR_INVALIDARG_IF_NULL(token);

    *token = entityHandle->entity->TokenRefreshedCallbacks.Register(queue, [callback, context](SharedPtr<EntityToken const> newToken)
        {
            callback(newToken.get(), context);
        });

    return S_OK;
}

HRESULT PFEntityUnregisterTokenRefreshedCallback(
    _In_ PFEntityHandle entityHandle,
    _In_ PFRegistrationToken token
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);

    entityHandle->entity->TokenRefreshedCallbacks.Unregister(token);
    return S_OK;
}

HRESULT PFEntityGetEntityTokenAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFAuthenticationGetEntityTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&Entity::GetEntityToken, entityHandle->entity.get(), *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFEntityGetEntityTokenGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFEntityHandle* entityHandle
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFEntityHandle), entityHandle, nullptr);
}

HRESULT PFEntityGetEntityId(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const char** entityId
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(entityId);

    *entityId = entityHandle->entity->EntityId().data();
    return S_OK;
}

HRESULT PFEntityGetEntityType(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const char** entityType
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(entityType);

    *entityType = entityHandle->entity->EntityType().data();
    return S_OK;
}

HRESULT PFEntityGetCachedEntityToken(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const PFEntityToken** entityToken
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(entityToken);

    *entityToken = entityHandle->entity->EntityToken().get();
    return S_OK;
}
