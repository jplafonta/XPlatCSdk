#include <stdafx.h>

#include "PlayFabSettings.h"

namespace PlayFab
{
    // Control whether all callbacks are threaded or whether the user manually controls callback timing from their main-thread
    // Note ANY api call may synchronously throw an exception if the title id is not set
    bool PlayFabSettings::threadedCallbacks = false;
    const String PlayFabSettings::sdkVersion = "0.0.todaysDate";
    const String PlayFabSettings::buildIdentifier = "xplatcsdk_manual";
    const String PlayFabSettings::versionString = "XPlatCppSdk-0.0.todaysDate";
    String PlayFabSettings::productionEnvironmentURL = ".playfabapi.com";
    ErrorCallback PlayFabSettings::globalErrorHandler = nullptr;

    const SharedPtr<PlayFabApiSettings> PlayFabSettings::staticSettings = MakeShared<PlayFabApiSettings>();
    const SharedPtr<PlayFabAuthenticationContext> PlayFabSettings::staticPlayer = MakeShared<PlayFabAuthenticationContext>();

#if !defined(DISABLE_PLAYFABCLIENT_API)
    const String PlayFabSettings::AD_TYPE_IDFA = "Idfa";
    const String PlayFabSettings::AD_TYPE_ANDROID_ID = "Adid";
#endif

    void PlayFabSettings::ForgetAllCredentials()
    {
        staticPlayer->ForgetAllCredentials();
    }
}