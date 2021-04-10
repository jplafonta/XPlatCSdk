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
    AsyncOp<SharedPtr<AuthContext>> LoginWithAndroidDeviceID(const PlayFabClientLoginWithAndroidDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithApple(const PlayFabClientLoginWithAppleRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithCustomID(const PlayFabClientLoginWithCustomIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithEmailAddress(const PlayFabClientLoginWithEmailAddressRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithFacebook(const PlayFabClientLoginWithFacebookRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithFacebookInstantGamesId(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithGameCenter(const PlayFabClientLoginWithGameCenterRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithGoogleAccount(const PlayFabClientLoginWithGoogleAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithIOSDeviceID(const PlayFabClientLoginWithIOSDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithKongregate(const PlayFabClientLoginWithKongregateRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithNintendoServiceAccount(const PlayFabClientLoginWithNintendoServiceAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithNintendoSwitchDeviceId(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithOpenIdConnect(const PlayFabClientLoginWithOpenIdConnectRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithPlayFab(const PlayFabClientLoginWithPlayFabRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithPSN(const PlayFabClientLoginWithPSNRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithSteam(const PlayFabClientLoginWithSteamRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithTwitch(const PlayFabClientLoginWithTwitchRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithWindowsHello(const PlayFabClientLoginWithWindowsHelloRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithXbox(const PlayFabClientLoginWithXboxRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> RegisterPlayFabUser(const PlayFabClientRegisterPlayFabUserRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> RegisterWithWindowsHello(const PlayFabClientRegisterWithWindowsHelloRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<PlayFabApiSettings> m_settings;
    HttpClient const m_httpClient;
};

}