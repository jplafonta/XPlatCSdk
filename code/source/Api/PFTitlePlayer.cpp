#include "stdafx.h"
#include <playfab/PFTitlePlayer.h>
#include "TitlePlayer.h"

using namespace PlayFab;

HRESULT PFTitlePlayerDuplicateHandle(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Out_ PFTitlePlayerHandle* duplicatedHandle
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(duplicatedHandle);

    *duplicatedHandle = MakeUnique<PFTitlePlayer>(*titlePlayerHandle).release();
    return S_OK;
}

void PFTitlePlayerCloseHandle(
    _In_ PFTitlePlayerHandle titlePlayerHandle
) noexcept
{
    UniquePtr<PFTitlePlayer>{ titlePlayerHandle };
}

HRESULT PFTitlePlayerGetEntityHandle(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Out_ PFEntityHandle* entityHandle
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);

    *entityHandle = MakeUnique<PFEntity>(titlePlayerHandle->titlePlayer).release();
    return S_OK;
}

HRESULT PFTitlePlayerGetPlayFabId(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_ const char** playFabId
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(playFabId);

    *playFabId = titlePlayerHandle->titlePlayer->PlayFabId().data();
    return S_OK;
}

HRESULT PFTitlePlayerGetCachedSessionTicketSize(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Out_ size_t* sessionTicketSize
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(sessionTicketSize);

    auto sessionTicket = titlePlayerHandle->titlePlayer->SessionTicket();
    assert(sessionTicket);
    if (!sessionTicket)
    {
        return E_UNEXPECTED;
    }

    *sessionTicketSize = sessionTicket->size() + 1;
    return S_OK;
}

HRESULT PFTitlePlayerGetCachedSessionTicket(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _In_ size_t sessionTicketBufferSize,
    _Out_writes_bytes_to_opt_(sessionTicketSize, *bufferUsed) char* sessionTicketBuffer,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(sessionTicketBuffer);

    auto sessionTicket = titlePlayerHandle->titlePlayer->SessionTicket();
    assert(sessionTicket);
    if (!sessionTicket)
    {
        return E_UNEXPECTED;
    }

    if (sessionTicket->size() + 1 > sessionTicketBufferSize)
    {
        return E_INVALIDARG;
    }

    std::strcpy(sessionTicketBuffer, sessionTicket->data());
    if (bufferUsed)
    {
        *bufferUsed = sessionTicket->size() + 1;
    }
   
    return S_OK;
}

HRESULT PFTitlePlayerGetEntityId(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_ const char** entityId
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(entityId);

    *entityId = titlePlayerHandle->titlePlayer->EntityId().data();
    return S_OK;
}

HRESULT PFTitlePlayerGetCachedEntityToken(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_ const PFEntityToken** entityToken
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(entityToken);

    *entityToken = titlePlayerHandle->titlePlayer->EntityToken().get();
    return S_OK;
}

HRESULT PFTitlePlayerGetPlayerCombinedInfo(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const PFGetPlayerCombinedInfoResultPayload** playerCombinedInfo
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(playerCombinedInfo);

    *playerCombinedInfo = &titlePlayerHandle->titlePlayer->PlayerCombinedInfo()->Model(); 
    return S_OK;
}

HRESULT PFTitlePlayerGetLastLoginTime(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const time_t** lastLoginTime
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(lastLoginTime);

    *lastLoginTime = titlePlayerHandle->titlePlayer->LastLoginTime();
    return S_OK;
}

HRESULT PFTitlePlayerGetUserSettings(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const PFAuthenticationUserSettings** userSettings
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(userSettings);

    *userSettings = &titlePlayerHandle->titlePlayer->UserSettings()->Model();
    return S_OK;
}

HRESULT PFTitlePlayerGetTreatmentAssignment(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const PFTreatmentAssignment** treatmentAssignment
) noexcept 
{
    RETURN_HR_INVALIDARG_IF_NULL(titlePlayerHandle);
    RETURN_HR_INVALIDARG_IF_NULL(treatmentAssignment);

    *treatmentAssignment = &titlePlayerHandle->titlePlayer->TreatmentAssignment()->Model();
    return S_OK;
}