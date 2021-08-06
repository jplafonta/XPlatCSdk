// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFPlatformSpecificDataModels.h>
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>

extern "C"
{

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Registers the Android device to receive push notifications
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// More information can be found on configuring your game for the Google Cloud Messaging service in
/// the Google developer documentation, here: http://developer.android.com/google/gcm/client.html. The
/// steps to configure and send Push Notifications is described in the PlayFab tutorials, here: https://docs.microsoft.com/gaming/playfab/features/engagement/push-notifications/quickstart.
/// </remarks>
HRESULT PFPlatformSpecificClientAndroidDevicePushNotificationRegistrationAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

/// <summary>
/// Grants the player's current entitlements from Microsoft Store's Collection API
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse** result
) noexcept;

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Checks for any new PS5 entitlements. If any are found, they are consumed (if they're consumables)
/// and added as PlayFab items
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFPlatformSpecificClientConsumePS5EntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumePS5EntitlementsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificConsumePS5EntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientConsumePS5EntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumePS5EntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumePS5EntitlementsResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Checks for any new consumable entitlements. If any are found, they are consumed and added as PlayFab
/// items
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFPlatformSpecificClientConsumePSNEntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumePSNEntitlementsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificConsumePSNEntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientConsumePSNEntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumePSNEntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumePSNEntitlementsResult** result
) noexcept;
#endif

/// <summary>
/// Grants the player's current entitlements from Xbox Live, consuming all availble items in Xbox and
/// granting them to the player's PlayFab inventory. This call is idempotent and will not grant previously
/// granted items to the player.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFClientLoginWithXboxAsync
/// </remarks>
HRESULT PFPlatformSpecificClientConsumeXboxEntitlementsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificConsumeXboxEntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientConsumeXboxEntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientConsumeXboxEntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificConsumeXboxEntitlementsResult** result
) noexcept;

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Uses the supplied OAuth code to refresh the internally cached player PSN auth token
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFPlatformSpecificClientRefreshPSNAuthTokenAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificRefreshPSNAuthTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Registers the iOS device to receive push notifications
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The steps to configure and send Push Notifications is described in the PlayFab tutorials, here: https://docs.microsoft.com/gaming/playfab/features/engagement/push-notifications/quickstart
/// </remarks>
HRESULT PFPlatformSpecificClientRegisterForIOSPushNotificationAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificRegisterForIOSPushNotificationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Restores all in-app purchases based on the given restore receipt
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The title should obtain a refresh receipt via restoreCompletedTransactions in the SKPaymentQueue
/// of the Apple StoreKit and pass that in to this call. The resultant receipt contains new receipt instances
/// for all non-consumable goods previously purchased by the user. This API call iterates through every
/// purchase in the receipt and restores the items if they still exist in the catalog and can be validated.
/// </remarks>
HRESULT PFPlatformSpecificClientRestoreIOSPurchasesAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificRestoreIOSPurchasesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientRestoreIOSPurchasesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientRestoreIOSPurchasesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificRestoreIOSPurchasesResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Validates with Amazon that the receipt for an Amazon App Store in-app purchase is valid and that
/// it matches the purchased catalog item
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFPlatformSpecificClientValidateAmazonIAPReceiptGetResult"/> to get the result.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateAmazonIAPReceiptAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificValidateAmazonReceiptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientValidateAmazonIAPReceiptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateAmazonIAPReceiptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateAmazonReceiptResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Validates a Google Play purchase and gives the corresponding item to the player.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The packageName and productId are defined in the GooglePlay store. The productId must match the ItemId
/// of the inventory item in the PlayFab catalog for the title. This enables the PlayFab service to securely
/// validate that the purchase is for the correct item, in order to prevent uses from passing valid receipts
/// as being for more expensive items (passing a receipt for a 99-cent purchase as being for a $19.99
/// purchase, for example). Each receipt may be validated only once to avoid granting the same item over
/// and over from a single purchase.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateGooglePlayPurchaseAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificValidateGooglePlayPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientValidateGooglePlayPurchaseAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateGooglePlayPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateGooglePlayPurchaseResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Validates with the Apple store that the receipt for an iOS in-app purchase is valid and that it matches
/// the purchased catalog item
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The CurrencyCode and PurchasePrice must match the price which was set up for the item in the Apple
/// store. In addition, The ItemId of the inventory in the PlayFab Catalog must match the Product ID as
/// it was set up in the Apple store. This enables the PlayFab service to securely validate that the purchase
/// is for the correct item, in order to prevent uses from passing valid receipts as being for more expensive
/// items (passing a receipt for a 99-cent purchase as being for a $19.99 purchase, for example).
/// </remarks>
HRESULT PFPlatformSpecificClientValidateIOSReceiptAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificValidateIOSReceiptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientValidateIOSReceiptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateIOSReceiptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateIOSReceiptResult** result
) noexcept;
#endif

/// <summary>
/// Validates with Windows that the receipt for an Windows App Store in-app purchase is valid and that
/// it matches the purchased catalog item
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFPlatformSpecificClientValidateWindowsStoreReceiptGetResult"/> to get the result.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateWindowsStoreReceiptAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFPlatformSpecificValidateWindowsReceiptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificClientValidateWindowsStoreReceiptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificClientValidateWindowsStoreReceiptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificValidateWindowsReceiptResult** result
) noexcept;

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Awards the specified users the specified Steam achievements
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFPlatformSpecificServerAwardSteamAchievementGetResult"/> to get the result.
/// </remarks>
HRESULT PFPlatformSpecificServerAwardSteamAchievementAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFPlatformSpecificAwardSteamAchievementRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFPlatformSpecificServerAwardSteamAchievementAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFPlatformSpecificServerAwardSteamAchievementGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlatformSpecificAwardSteamAchievementResult** result
) noexcept;
#endif


}