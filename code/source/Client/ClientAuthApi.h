#pragma once

#include "ClientDataModels.h"
#include "HttpClient.h"

namespace PlayFab
{

class Entity;

class ClientAuthAPI
{
public:
    ClientAuthAPI(SharedPtr<HttpClient const> httpClient);
    ClientAuthAPI(const ClientAuthAPI&) = delete;
    ClientAuthAPI& operator=(const ClientAuthAPI& source) = delete;
    ~ClientAuthAPI() = default;

    // ------------ Generated API calls
    AsyncOp<SharedPtr<Entity>> LoginWithAndroidDeviceID(const PlayFabClientLoginWithAndroidDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithApple(const PlayFabClientLoginWithAppleRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithCustomID(const PlayFabClientLoginWithCustomIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithEmailAddress(const PlayFabClientLoginWithEmailAddressRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithFacebook(const PlayFabClientLoginWithFacebookRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithFacebookInstantGamesId(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithGameCenter(const PlayFabClientLoginWithGameCenterRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithGoogleAccount(const PlayFabClientLoginWithGoogleAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithIOSDeviceID(const PlayFabClientLoginWithIOSDeviceIDRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithKongregate(const PlayFabClientLoginWithKongregateRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithNintendoServiceAccount(const PlayFabClientLoginWithNintendoServiceAccountRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithNintendoSwitchDeviceId(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithOpenIdConnect(const PlayFabClientLoginWithOpenIdConnectRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithPlayFab(const PlayFabClientLoginWithPlayFabRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithPSN(const PlayFabClientLoginWithPSNRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithSteam(const PlayFabClientLoginWithSteamRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithTwitch(const PlayFabClientLoginWithTwitchRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithXbox(const PlayFabClientLoginWithXboxRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> RegisterPlayFabUser(const PlayFabClientRegisterPlayFabUserRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
};

}