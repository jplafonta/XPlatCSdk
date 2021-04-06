#pragma once

#include "ClientDataModels.h"
#include "HttpClient.h"

namespace PlayFab
{
class AuthContext;

class ClientAuthAPI
{
public:
    ClientAuthAPI();
    ClientAuthAPI(const ClientAuthAPI&) = delete;
    ClientAuthAPI& operator=(const ClientAuthAPI& source) = delete;
    ~ClientAuthAPI() = default;

    // Generated APIs 
    void LoginWithAndroidDeviceID(const PlayFabClientLoginWithAndroidDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithApple(const PlayFabClientLoginWithAppleRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithCustomID(const PlayFabClientLoginWithCustomIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithEmailAddress(const PlayFabClientLoginWithEmailAddressRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithFacebook(const PlayFabClientLoginWithFacebookRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithFacebookInstantGamesId(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithGameCenter(const PlayFabClientLoginWithGameCenterRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithGoogleAccount(const PlayFabClientLoginWithGoogleAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithIOSDeviceID(const PlayFabClientLoginWithIOSDeviceIDRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithKongregate(const PlayFabClientLoginWithKongregateRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithNintendoServiceAccount(const PlayFabClientLoginWithNintendoServiceAccountRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithNintendoSwitchDeviceId(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithOpenIdConnect(const PlayFabClientLoginWithOpenIdConnectRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithPlayFab(const PlayFabClientLoginWithPlayFabRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithPSN(const PlayFabClientLoginWithPSNRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithSteam(const PlayFabClientLoginWithSteamRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithTwitch(const PlayFabClientLoginWithTwitchRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithWindowsHello(const PlayFabClientLoginWithWindowsHelloRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithXbox(const PlayFabClientLoginWithXboxRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void RegisterPlayFabUser(const PlayFabClientRegisterPlayFabUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void RegisterWithWindowsHello(const PlayFabClientRegisterWithWindowsHelloRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;

private:
    SharedPtr<PlayFabApiSettings> m_settings;
    HttpClient const m_httpClient;
};

}