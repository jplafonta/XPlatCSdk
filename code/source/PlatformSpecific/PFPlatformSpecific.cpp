#include "stdafx.h"
#include <playfab/PFPlatformSpecific.h>
#include "PlatformSpecific.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::PlatformSpecificModels;

HRESULT PFPlatformSpecificClientAndroidDevicePushNotificationRegistrationAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientAndroidDevicePushNotificationRegistration, &contextHandle->entity->platformSpecificAPI, AndroidDevicePushNotificationRegistrationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientConsumeMicrosoftStoreEntitlements, &contextHandle->entity->platformSpecificAPI, ConsumeMicrosoftStoreEntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse*)(std::dynamic_pointer_cast<ConsumeMicrosoftStoreEntitlementsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientConsumePS5EntitlementsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificConsumePS5EntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientConsumePS5Entitlements, &contextHandle->entity->platformSpecificAPI, ConsumePS5EntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientConsumePS5EntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumePS5EntitlementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificConsumePS5EntitlementsResult*)(std::dynamic_pointer_cast<ConsumePS5EntitlementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientConsumePSNEntitlementsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificConsumePSNEntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientConsumePSNEntitlements, &contextHandle->entity->platformSpecificAPI, ConsumePSNEntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientConsumePSNEntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumePSNEntitlementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificConsumePSNEntitlementsResult*)(std::dynamic_pointer_cast<ConsumePSNEntitlementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientConsumeXboxEntitlementsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificConsumeXboxEntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientConsumeXboxEntitlements, &contextHandle->entity->platformSpecificAPI, ConsumeXboxEntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientConsumeXboxEntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumeXboxEntitlementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificConsumeXboxEntitlementsResult*)(std::dynamic_pointer_cast<ConsumeXboxEntitlementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientRefreshPSNAuthTokenAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificRefreshPSNAuthTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientRefreshPSNAuthToken, &contextHandle->entity->platformSpecificAPI, RefreshPSNAuthTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientRegisterForIOSPushNotificationAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificRegisterForIOSPushNotificationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientRegisterForIOSPushNotification, &contextHandle->entity->platformSpecificAPI, RegisterForIOSPushNotificationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientRestoreIOSPurchasesAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificRestoreIOSPurchasesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientRestoreIOSPurchases, &contextHandle->entity->platformSpecificAPI, RestoreIOSPurchasesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientRestoreIOSPurchasesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificRestoreIOSPurchasesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificRestoreIOSPurchasesResult*)(std::dynamic_pointer_cast<RestoreIOSPurchasesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientValidateAmazonIAPReceiptAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificValidateAmazonReceiptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientValidateAmazonIAPReceipt, &contextHandle->entity->platformSpecificAPI, ValidateAmazonReceiptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientValidateAmazonIAPReceiptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateAmazonReceiptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificValidateAmazonReceiptResult*)(std::dynamic_pointer_cast<ValidateAmazonReceiptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientValidateGooglePlayPurchaseAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificValidateGooglePlayPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientValidateGooglePlayPurchase, &contextHandle->entity->platformSpecificAPI, ValidateGooglePlayPurchaseRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientValidateGooglePlayPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateGooglePlayPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificValidateGooglePlayPurchaseResult*)(std::dynamic_pointer_cast<ValidateGooglePlayPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientValidateIOSReceiptAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificValidateIOSReceiptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientValidateIOSReceipt, &contextHandle->entity->platformSpecificAPI, ValidateIOSReceiptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientValidateIOSReceiptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateIOSReceiptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificValidateIOSReceiptResult*)(std::dynamic_pointer_cast<ValidateIOSReceiptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificClientValidateWindowsStoreReceiptAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlatformSpecificValidateWindowsReceiptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlatformSpecificAPI::ClientValidateWindowsStoreReceipt, &contextHandle->entity->platformSpecificAPI, ValidateWindowsReceiptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificClientValidateWindowsStoreReceiptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateWindowsReceiptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificValidateWindowsReceiptResult*)(std::dynamic_pointer_cast<ValidateWindowsReceiptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlatformSpecificServerAwardSteamAchievementAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlatformSpecificAwardSteamAchievementRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlatformSpecificAPI::ServerAwardSteamAchievement, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlatformSpecificServerAwardSteamAchievementGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificAwardSteamAchievementResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlatformSpecificAwardSteamAchievementResult*)(std::dynamic_pointer_cast<AwardSteamAchievementResult>((*resultHandle)->result).get());

    return S_OK;
}

