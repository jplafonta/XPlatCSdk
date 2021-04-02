#pragma once

#include "PlayFabError.h"

namespace PlayFab
{
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// All settings and global variables for PlayFab
    /// </summary>
    class PlayFabSettings
    {
    public:
        static const String sdkVersion;
        static const String buildIdentifier;
        static const String versionString;

        // Control whether all callbacks are threaded or whether the user manually controls callback timing from their main-thread
        static bool threadedCallbacks;
        // Used to override the PlayFab endpoint url - Not typical
        static String productionEnvironmentURL;
        // Used to receive a callback for every failed PlayFab API call - Parallel to the individual error callbacks
        static ErrorCallback globalErrorHandler;

        // The pointers to these objects should be const as they should always be fixed, but the contents are still mutable
        static const SharedPtr<PlayFabApiSettings> staticSettings;
        static const SharedPtr<PlayFabAuthenticationContext> staticPlayer;

#if !defined(DISABLE_PLAYFABCLIENT_API)
        static const String AD_TYPE_IDFA;
        static const String AD_TYPE_ANDROID_ID;
#endif

        static void ForgetAllCredentials();
    private:
        PlayFabSettings(); // Private constructor, static class should never have an instance
        PlayFabSettings(const PlayFabSettings& other); // Private copy-constructor, static class should never have an instance
    };
}
