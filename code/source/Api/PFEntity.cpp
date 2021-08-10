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
    _In_ PFEntityTokenRefreshedCallback* callback,
    _In_opt_ void* context,
    _Out_ PFRegistrationToken* token
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(callback);
    RETURN_HR_INVALIDARG_IF_NULL(token);

    *token = entityHandle->entity->TokenRefreshedCallbacks.Register([callback, context](const EntityToken& newToken)
        {
            callback(&newToken, context);
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

HRESULT PFEntityGetPlayFabId(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const char** playFabId
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(playFabId);

    *playFabId = entityHandle->entity->PlayFabId().data();
    return S_OK;
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

    *entityToken = &entityHandle->entity->EntityToken();
    return S_OK;
}

HRESULT PFEntityGetPlayerCombinedInfo(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const PFGetPlayerCombinedInfoResultPayload** playerCombinedInfo
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(playerCombinedInfo);

    *playerCombinedInfo = entityHandle->entity->PlayerCombinedInfo(); 
    return S_OK;
}

HRESULT PFEntityGetLastLoginTime(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const time_t** lastLoginTime
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(lastLoginTime);

    *lastLoginTime = entityHandle->entity->LastLoginTime();
    return S_OK;
}

HRESULT PFEntityGetUserSettings(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const PFAuthenticationUserSettings** userSettings
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(userSettings);

    *userSettings = entityHandle->entity->UserSettings();
    return S_OK;
}

HRESULT PFEntityGetTreatmentAssignment(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const PFTreatmentAssignment** treatmentAssignment
) noexcept 
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);
    RETURN_HR_INVALIDARG_IF_NULL(treatmentAssignment);

    *treatmentAssignment = entityHandle->entity->TreatmentAssignment();
    return S_OK;
}
