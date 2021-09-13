#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMatchmakingTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenMatchmakingTests::MatchmakingTestData AutoGenMatchmakingTests::testData;

void AutoGenMatchmakingTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenMatchmakingTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenMatchmakingTests::AddTests()
{
    // Generated tests 
    AddTest("TestMatchmakingAdminGetMatchmakerGameInfo", &AutoGenMatchmakingTests::TestMatchmakingAdminGetMatchmakerGameInfo);

    AddTest("TestMatchmakingAdminGetMatchmakerGameModes", &AutoGenMatchmakingTests::TestMatchmakingAdminGetMatchmakerGameModes);

    AddTest("TestMatchmakingAdminModifyMatchmakerGameModes", &AutoGenMatchmakingTests::TestMatchmakingAdminModifyMatchmakerGameModes);

    AddTest("TestMatchmakingClientGetCurrentGames", &AutoGenMatchmakingTests::TestMatchmakingClientGetCurrentGames);

    AddTest("TestMatchmakingClientGetGameServerRegions", &AutoGenMatchmakingTests::TestMatchmakingClientGetGameServerRegions);

    AddTest("TestMatchmakingClientMatchmake", &AutoGenMatchmakingTests::TestMatchmakingClientMatchmake);

    AddTest("TestMatchmakingClientStartGame", &AutoGenMatchmakingTests::TestMatchmakingClientStartGame);

    AddTest("TestMatchmakingAuthUser", &AutoGenMatchmakingTests::TestMatchmakingAuthUser);

    AddTest("TestMatchmakingPlayerJoined", &AutoGenMatchmakingTests::TestMatchmakingPlayerJoined);

    AddTest("TestMatchmakingPlayerLeft", &AutoGenMatchmakingTests::TestMatchmakingPlayerLeft);

    AddTest("TestMatchmakingStartGame", &AutoGenMatchmakingTests::TestMatchmakingStartGame);

    AddTest("TestMatchmakingUserInfo", &AutoGenMatchmakingTests::TestMatchmakingUserInfo);

    AddTest("TestMatchmakingServerDeregisterGame", &AutoGenMatchmakingTests::TestMatchmakingServerDeregisterGame);

    AddTest("TestMatchmakingServerNotifyMatchmakerPlayerLeft", &AutoGenMatchmakingTests::TestMatchmakingServerNotifyMatchmakerPlayerLeft);

    AddTest("TestMatchmakingServerRedeemMatchmakerTicket", &AutoGenMatchmakingTests::TestMatchmakingServerRedeemMatchmakerTicket);

    AddTest("TestMatchmakingServerRefreshGameServerInstanceHeartbeat", &AutoGenMatchmakingTests::TestMatchmakingServerRefreshGameServerInstanceHeartbeat);

    AddTest("TestMatchmakingServerRegisterGame", &AutoGenMatchmakingTests::TestMatchmakingServerRegisterGame);

    AddTest("TestMatchmakingServerSetGameServerInstanceData", &AutoGenMatchmakingTests::TestMatchmakingServerSetGameServerInstanceData);

    AddTest("TestMatchmakingServerSetGameServerInstanceState", &AutoGenMatchmakingTests::TestMatchmakingServerSetGameServerInstanceState);

    AddTest("TestMatchmakingServerSetGameServerInstanceTags", &AutoGenMatchmakingTests::TestMatchmakingServerSetGameServerInstanceTags);

    AddTest("TestMatchmakingCancelAllMatchmakingTicketsForPlayer", &AutoGenMatchmakingTests::TestMatchmakingCancelAllMatchmakingTicketsForPlayer);

    AddTest("TestMatchmakingCancelAllServerBackfillTicketsForPlayer", &AutoGenMatchmakingTests::TestMatchmakingCancelAllServerBackfillTicketsForPlayer);

    AddTest("TestMatchmakingCancelMatchmakingTicket", &AutoGenMatchmakingTests::TestMatchmakingCancelMatchmakingTicket);

    AddTest("TestMatchmakingCancelServerBackfillTicket", &AutoGenMatchmakingTests::TestMatchmakingCancelServerBackfillTicket);

    AddTest("TestMatchmakingCreateMatchmakingTicket", &AutoGenMatchmakingTests::TestMatchmakingCreateMatchmakingTicket);

    AddTest("TestMatchmakingCreateServerBackfillTicket", &AutoGenMatchmakingTests::TestMatchmakingCreateServerBackfillTicket);

    AddTest("TestMatchmakingCreateServerMatchmakingTicket", &AutoGenMatchmakingTests::TestMatchmakingCreateServerMatchmakingTicket);

    AddTest("TestMatchmakingGetMatch", &AutoGenMatchmakingTests::TestMatchmakingGetMatch);

    AddTest("TestMatchmakingGetMatchmakingTicket", &AutoGenMatchmakingTests::TestMatchmakingGetMatchmakingTicket);

    AddTest("TestMatchmakingGetQueueStatistics", &AutoGenMatchmakingTests::TestMatchmakingGetQueueStatistics);

    AddTest("TestMatchmakingGetServerBackfillTicket", &AutoGenMatchmakingTests::TestMatchmakingGetServerBackfillTicket);

    AddTest("TestMatchmakingJoinMatchmakingTicket", &AutoGenMatchmakingTests::TestMatchmakingJoinMatchmakingTicket);

    AddTest("TestMatchmakingListMatchmakingTicketsForPlayer", &AutoGenMatchmakingTests::TestMatchmakingListMatchmakingTicketsForPlayer);

    AddTest("TestMatchmakingListServerBackfillTicketsForPlayer", &AutoGenMatchmakingTests::TestMatchmakingListServerBackfillTicketsForPlayer);
}

void AutoGenMatchmakingTests::ClassSetUp()
{
    HRESULT hr = PFAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PFAuthenticationLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PFGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
        combinedInfoRequestParams.getCharacterInventories = true;
        combinedInfoRequestParams.getCharacterList = true;
        combinedInfoRequestParams.getPlayerProfile = true;
        combinedInfoRequestParams.getPlayerStatistics = true;
        combinedInfoRequestParams.getTitleData = true;
        combinedInfoRequestParams.getUserAccountInfo = true;
        combinedInfoRequestParams.getUserData = true;
        combinedInfoRequestParams.getUserInventory = true;
        combinedInfoRequestParams.getUserReadOnlyData = true;
        combinedInfoRequestParams.getUserVirtualCurrency = true;
        request.infoRequestParameters = &combinedInfoRequestParams;

        XAsyncBlock async{};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &titlePlayerHandle);
                assert(SUCCEEDED(hr) && titlePlayerHandle);

                hr = PFTitlePlayerGetEntityHandle(titlePlayerHandle, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle);

                hr = PFTitlePlayerGetPlayerCombinedInfo(titlePlayerHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }

        request.customId = "CustomId2";
        async = {};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &titlePlayerHandle2);
                assert(SUCCEEDED(hr) && titlePlayerHandle2);

                hr = PFTitlePlayerGetEntityHandle(titlePlayerHandle2, &entityHandle2);
                assert(SUCCEEDED(hr) && entityHandle2);

                hr = PFTitlePlayerGetPlayerCombinedInfo(titlePlayerHandle2, &playerCombinedInfo2);
                assert(SUCCEEDED(hr));
            }
        }

        PFAuthenticationGetEntityTokenRequest titleTokenRequest{};
        async = {};
        hr = PFAuthenticationGetEntityTokenAsync(stateHandle, &titleTokenRequest, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationGetEntityTokenGetResult(&async, &titleEntityHandle);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenMatchmakingTests::ClassTearDown()
{
    PFTitlePlayerCloseHandle(titlePlayerHandle);
    PFEntityCloseHandle(entityHandle);
    PFEntityCloseHandle(titleEntityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFUninitializeAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenMatchmakingTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminGetMatchmakerGameInfo

void AutoGenMatchmakingTests::TestMatchmakingAdminGetMatchmakerGameInfo(TestContext& testContext)
{
    struct AdminGetMatchmakerGameInfoResult : public XAsyncResult
    {
        PFMatchmakingGetMatchmakerGameInfoResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingAdminGetMatchmakerGameInfoGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingAdminGetMatchmakerGameInfoGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGetMatchmakerGameInfoResult( result );
            return ValidatePFMatchmakingGetMatchmakerGameInfoResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetMatchmakerGameInfoResult>>(testContext);

    PlayFab::MatchmakingModels::GetMatchmakerGameInfoRequest request;
    FillGetMatchmakerGameInfoRequest( &request );
    LogGetMatchmakerGameInfoRequest( &request, "TestMatchmakingAdminGetMatchmakerGameInfo" );
    HRESULT hr = PFMatchmakingAdminGetMatchmakerGameInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingAdminGetMatchmakerGameInfoAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetMatchmakerGameModes

void AutoGenMatchmakingTests::TestMatchmakingAdminGetMatchmakerGameModes(TestContext& testContext)
{
    struct AdminGetMatchmakerGameModesResult : public XAsyncResult
    {
        PFMatchmakingGetMatchmakerGameModesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingAdminGetMatchmakerGameModesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingAdminGetMatchmakerGameModesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGetMatchmakerGameModesResult( result );
            return ValidatePFMatchmakingGetMatchmakerGameModesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetMatchmakerGameModesResult>>(testContext);

    PlayFab::MatchmakingModels::GetMatchmakerGameModesRequest request;
    FillGetMatchmakerGameModesRequest( &request );
    LogGetMatchmakerGameModesRequest( &request, "TestMatchmakingAdminGetMatchmakerGameModes" );
    HRESULT hr = PFMatchmakingAdminGetMatchmakerGameModesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingAdminGetMatchmakerGameModesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminModifyMatchmakerGameModes

void AutoGenMatchmakingTests::TestMatchmakingAdminModifyMatchmakerGameModes(TestContext& testContext)
{
    struct AdminModifyMatchmakerGameModesResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminModifyMatchmakerGameModesResult>>(testContext);

    PlayFab::MatchmakingModels::ModifyMatchmakerGameModesRequest request;
    FillModifyMatchmakerGameModesRequest( &request );
    LogModifyMatchmakerGameModesRequest( &request, "TestMatchmakingAdminModifyMatchmakerGameModes" );
    HRESULT hr = PFMatchmakingAdminModifyMatchmakerGameModesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingAdminModifyMatchmakerGameModesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetCurrentGames

void AutoGenMatchmakingTests::TestMatchmakingClientGetCurrentGames(TestContext& testContext)
{
    struct ClientGetCurrentGamesResult : public XAsyncResult
    {
        PFMatchmakingCurrentGamesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingClientGetCurrentGamesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingClientGetCurrentGamesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingCurrentGamesResult( result );
            return ValidatePFMatchmakingCurrentGamesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCurrentGamesResult>>(testContext);

    PlayFab::MatchmakingModels::CurrentGamesRequest request;
    FillCurrentGamesRequest( &request );
    LogCurrentGamesRequest( &request, "TestMatchmakingClientGetCurrentGames" );
    HRESULT hr = PFMatchmakingClientGetCurrentGamesAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingClientGetCurrentGamesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetGameServerRegions

void AutoGenMatchmakingTests::TestMatchmakingClientGetGameServerRegions(TestContext& testContext)
{
    struct ClientGetGameServerRegionsResult : public XAsyncResult
    {
        PFMatchmakingGameServerRegionsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingClientGetGameServerRegionsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingClientGetGameServerRegionsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGameServerRegionsResult( result );
            return ValidatePFMatchmakingGameServerRegionsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetGameServerRegionsResult>>(testContext);

    PlayFab::MatchmakingModels::GameServerRegionsRequest request;
    FillGameServerRegionsRequest( &request );
    LogGameServerRegionsRequest( &request, "TestMatchmakingClientGetGameServerRegions" );
    HRESULT hr = PFMatchmakingClientGetGameServerRegionsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingClientGetGameServerRegionsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientMatchmake

void AutoGenMatchmakingTests::TestMatchmakingClientMatchmake(TestContext& testContext)
{
    struct ClientMatchmakeResult : public XAsyncResult
    {
        PFMatchmakingMatchmakeResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingClientMatchmakeGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingClientMatchmakeGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingMatchmakeResult( result );
            return ValidatePFMatchmakingMatchmakeResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientMatchmakeResult>>(testContext);

    PlayFab::MatchmakingModels::MatchmakeRequest request;
    FillMatchmakeRequest( &request );
    LogMatchmakeRequest( &request, "TestMatchmakingClientMatchmake" );
    HRESULT hr = PFMatchmakingClientMatchmakeAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingClientMatchmakeAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientStartGame

void AutoGenMatchmakingTests::TestMatchmakingClientStartGame(TestContext& testContext)
{
    struct ClientStartGameResult : public XAsyncResult
    {
        PFMatchmakingStartGameResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingClientStartGameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingClientStartGameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingStartGameResult( result );
            return ValidatePFMatchmakingStartGameResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientStartGameResult>>(testContext);

    PlayFab::MatchmakingModels::ClientStartGameRequest request;
    FillClientStartGameRequest( &request );
    LogClientStartGameRequest( &request, "TestMatchmakingClientStartGame" );
    HRESULT hr = PFMatchmakingClientStartGameAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingClientStartGameAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AuthUser

void AutoGenMatchmakingTests::TestMatchmakingAuthUser(TestContext& testContext)
{
    struct AuthUserResult : public XAsyncResult
    {
        PFMatchmakingAuthUserResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingAuthUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingAuthUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingAuthUserResponse( result );
            return ValidatePFMatchmakingAuthUserResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AuthUserResult>>(testContext);

    PlayFab::MatchmakingModels::AuthUserRequest request;
    FillAuthUserRequest( &request );
    LogAuthUserRequest( &request, "TestMatchmakingAuthUser" );
    HRESULT hr = PFMatchmakingAuthUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingAuthUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region PlayerJoined

void AutoGenMatchmakingTests::TestMatchmakingPlayerJoined(TestContext& testContext)
{
    struct PlayerJoinedResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<PlayerJoinedResult>>(testContext);

    PlayFab::MatchmakingModels::PlayerJoinedRequest request;
    FillPlayerJoinedRequest( &request );
    LogPlayerJoinedRequest( &request, "TestMatchmakingPlayerJoined" );
    HRESULT hr = PFMatchmakingPlayerJoinedAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingPlayerJoinedAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region PlayerLeft

void AutoGenMatchmakingTests::TestMatchmakingPlayerLeft(TestContext& testContext)
{
    struct PlayerLeftResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<PlayerLeftResult>>(testContext);

    PlayFab::MatchmakingModels::PlayerLeftRequest request;
    FillPlayerLeftRequest( &request );
    LogPlayerLeftRequest( &request, "TestMatchmakingPlayerLeft" );
    HRESULT hr = PFMatchmakingPlayerLeftAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingPlayerLeftAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region StartGame

void AutoGenMatchmakingTests::TestMatchmakingStartGame(TestContext& testContext)
{
    struct StartGameResult : public XAsyncResult
    {
        PFMatchmakingStartGameResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingStartGameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingStartGameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingStartGameResponse( result );
            return ValidatePFMatchmakingStartGameResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<StartGameResult>>(testContext);

    PlayFab::MatchmakingModels::MatchmakerStartGameRequest request;
    FillMatchmakerStartGameRequest( &request );
    LogMatchmakerStartGameRequest( &request, "TestMatchmakingStartGame" );
    HRESULT hr = PFMatchmakingStartGameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingStartGameAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UserInfo

void AutoGenMatchmakingTests::TestMatchmakingUserInfo(TestContext& testContext)
{
    struct UserInfoResult : public XAsyncResult
    {
        PFMatchmakingUserInfoResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingUserInfoGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingUserInfoGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingUserInfoResponse( result );
            return ValidatePFMatchmakingUserInfoResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UserInfoResult>>(testContext);

    PlayFab::MatchmakingModels::UserInfoRequest request;
    FillUserInfoRequest( &request );
    LogUserInfoRequest( &request, "TestMatchmakingUserInfo" );
    HRESULT hr = PFMatchmakingUserInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingUserInfoAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerDeregisterGame

void AutoGenMatchmakingTests::TestMatchmakingServerDeregisterGame(TestContext& testContext)
{
    struct ServerDeregisterGameResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerDeregisterGameResult>>(testContext);

    PlayFab::MatchmakingModels::DeregisterGameRequest request;
    FillDeregisterGameRequest( &request );
    LogDeregisterGameRequest( &request, "TestMatchmakingServerDeregisterGame" );
    HRESULT hr = PFMatchmakingServerDeregisterGameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerDeregisterGameAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerNotifyMatchmakerPlayerLeft

void AutoGenMatchmakingTests::TestMatchmakingServerNotifyMatchmakerPlayerLeft(TestContext& testContext)
{
    struct ServerNotifyMatchmakerPlayerLeftResult : public XAsyncResult
    {
        PFMatchmakingNotifyMatchmakerPlayerLeftResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingServerNotifyMatchmakerPlayerLeftGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingServerNotifyMatchmakerPlayerLeftGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingNotifyMatchmakerPlayerLeftResult( result );
            return ValidatePFMatchmakingNotifyMatchmakerPlayerLeftResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerNotifyMatchmakerPlayerLeftResult>>(testContext);

    PlayFab::MatchmakingModels::NotifyMatchmakerPlayerLeftRequest request;
    FillNotifyMatchmakerPlayerLeftRequest( &request );
    LogNotifyMatchmakerPlayerLeftRequest( &request, "TestMatchmakingServerNotifyMatchmakerPlayerLeft" );
    HRESULT hr = PFMatchmakingServerNotifyMatchmakerPlayerLeftAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerNotifyMatchmakerPlayerLeftAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerRedeemMatchmakerTicket

void AutoGenMatchmakingTests::TestMatchmakingServerRedeemMatchmakerTicket(TestContext& testContext)
{
    struct ServerRedeemMatchmakerTicketResult : public XAsyncResult
    {
        PFMatchmakingRedeemMatchmakerTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingServerRedeemMatchmakerTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingServerRedeemMatchmakerTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingRedeemMatchmakerTicketResult( result );
            return ValidatePFMatchmakingRedeemMatchmakerTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRedeemMatchmakerTicketResult>>(testContext);

    PlayFab::MatchmakingModels::RedeemMatchmakerTicketRequest request;
    FillRedeemMatchmakerTicketRequest( &request );
    LogRedeemMatchmakerTicketRequest( &request, "TestMatchmakingServerRedeemMatchmakerTicket" );
    HRESULT hr = PFMatchmakingServerRedeemMatchmakerTicketAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerRedeemMatchmakerTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerRefreshGameServerInstanceHeartbeat

void AutoGenMatchmakingTests::TestMatchmakingServerRefreshGameServerInstanceHeartbeat(TestContext& testContext)
{
    struct ServerRefreshGameServerInstanceHeartbeatResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRefreshGameServerInstanceHeartbeatResult>>(testContext);

    PlayFab::MatchmakingModels::RefreshGameServerInstanceHeartbeatRequest request;
    FillRefreshGameServerInstanceHeartbeatRequest( &request );
    LogRefreshGameServerInstanceHeartbeatRequest( &request, "TestMatchmakingServerRefreshGameServerInstanceHeartbeat" );
    HRESULT hr = PFMatchmakingServerRefreshGameServerInstanceHeartbeatAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerRefreshGameServerInstanceHeartbeatAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerRegisterGame

void AutoGenMatchmakingTests::TestMatchmakingServerRegisterGame(TestContext& testContext)
{
    struct ServerRegisterGameResult : public XAsyncResult
    {
        PFMatchmakingRegisterGameResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingServerRegisterGameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingServerRegisterGameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingRegisterGameResponse( result );
            return ValidatePFMatchmakingRegisterGameResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerRegisterGameResult>>(testContext);

    PlayFab::MatchmakingModels::RegisterGameRequest request;
    FillRegisterGameRequest( &request );
    LogRegisterGameRequest( &request, "TestMatchmakingServerRegisterGame" );
    HRESULT hr = PFMatchmakingServerRegisterGameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerRegisterGameAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetGameServerInstanceData

void AutoGenMatchmakingTests::TestMatchmakingServerSetGameServerInstanceData(TestContext& testContext)
{
    struct ServerSetGameServerInstanceDataResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerSetGameServerInstanceDataResult>>(testContext);

    PlayFab::MatchmakingModels::SetGameServerInstanceDataRequest request;
    FillSetGameServerInstanceDataRequest( &request );
    LogSetGameServerInstanceDataRequest( &request, "TestMatchmakingServerSetGameServerInstanceData" );
    HRESULT hr = PFMatchmakingServerSetGameServerInstanceDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerSetGameServerInstanceDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetGameServerInstanceState

void AutoGenMatchmakingTests::TestMatchmakingServerSetGameServerInstanceState(TestContext& testContext)
{
    struct ServerSetGameServerInstanceStateResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerSetGameServerInstanceStateResult>>(testContext);

    PlayFab::MatchmakingModels::SetGameServerInstanceStateRequest request;
    FillSetGameServerInstanceStateRequest( &request );
    LogSetGameServerInstanceStateRequest( &request, "TestMatchmakingServerSetGameServerInstanceState" );
    HRESULT hr = PFMatchmakingServerSetGameServerInstanceStateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerSetGameServerInstanceStateAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetGameServerInstanceTags

void AutoGenMatchmakingTests::TestMatchmakingServerSetGameServerInstanceTags(TestContext& testContext)
{
    struct ServerSetGameServerInstanceTagsResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerSetGameServerInstanceTagsResult>>(testContext);

    PlayFab::MatchmakingModels::SetGameServerInstanceTagsRequest request;
    FillSetGameServerInstanceTagsRequest( &request );
    LogSetGameServerInstanceTagsRequest( &request, "TestMatchmakingServerSetGameServerInstanceTags" );
    HRESULT hr = PFMatchmakingServerSetGameServerInstanceTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingServerSetGameServerInstanceTagsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CancelAllMatchmakingTicketsForPlayer

void AutoGenMatchmakingTests::TestMatchmakingCancelAllMatchmakingTicketsForPlayer(TestContext& testContext)
{
    struct CancelAllMatchmakingTicketsForPlayerResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<CancelAllMatchmakingTicketsForPlayerResult>>(testContext);

    PlayFab::MatchmakingModels::CancelAllMatchmakingTicketsForPlayerRequest request;
    FillCancelAllMatchmakingTicketsForPlayerRequest( &request );
    LogCancelAllMatchmakingTicketsForPlayerRequest( &request, "TestMatchmakingCancelAllMatchmakingTicketsForPlayer" );
    HRESULT hr = PFMatchmakingCancelAllMatchmakingTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCancelAllMatchmakingTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CancelAllServerBackfillTicketsForPlayer

void AutoGenMatchmakingTests::TestMatchmakingCancelAllServerBackfillTicketsForPlayer(TestContext& testContext)
{
    struct CancelAllServerBackfillTicketsForPlayerResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<CancelAllServerBackfillTicketsForPlayerResult>>(testContext);

    PlayFab::MatchmakingModels::CancelAllServerBackfillTicketsForPlayerRequest request;
    FillCancelAllServerBackfillTicketsForPlayerRequest( &request );
    LogCancelAllServerBackfillTicketsForPlayerRequest( &request, "TestMatchmakingCancelAllServerBackfillTicketsForPlayer" );
    HRESULT hr = PFMatchmakingCancelAllServerBackfillTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCancelAllServerBackfillTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CancelMatchmakingTicket

void AutoGenMatchmakingTests::TestMatchmakingCancelMatchmakingTicket(TestContext& testContext)
{
    struct CancelMatchmakingTicketResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<CancelMatchmakingTicketResult>>(testContext);

    PlayFab::MatchmakingModels::CancelMatchmakingTicketRequest request;
    FillCancelMatchmakingTicketRequest( &request );
    LogCancelMatchmakingTicketRequest( &request, "TestMatchmakingCancelMatchmakingTicket" );
    HRESULT hr = PFMatchmakingCancelMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCancelMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CancelServerBackfillTicket

void AutoGenMatchmakingTests::TestMatchmakingCancelServerBackfillTicket(TestContext& testContext)
{
    struct CancelServerBackfillTicketResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<CancelServerBackfillTicketResult>>(testContext);

    PlayFab::MatchmakingModels::CancelServerBackfillTicketRequest request;
    FillCancelServerBackfillTicketRequest( &request );
    LogCancelServerBackfillTicketRequest( &request, "TestMatchmakingCancelServerBackfillTicket" );
    HRESULT hr = PFMatchmakingCancelServerBackfillTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCancelServerBackfillTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateMatchmakingTicket

void AutoGenMatchmakingTests::TestMatchmakingCreateMatchmakingTicket(TestContext& testContext)
{
    struct CreateMatchmakingTicketResult : public XAsyncResult
    {
        PFMatchmakingCreateMatchmakingTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingCreateMatchmakingTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingCreateMatchmakingTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingCreateMatchmakingTicketResult( result );
            return ValidatePFMatchmakingCreateMatchmakingTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateMatchmakingTicketResult>>(testContext);

    PlayFab::MatchmakingModels::CreateMatchmakingTicketRequest request;
    FillCreateMatchmakingTicketRequest( &request );
    LogCreateMatchmakingTicketRequest( &request, "TestMatchmakingCreateMatchmakingTicket" );
    HRESULT hr = PFMatchmakingCreateMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCreateMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateServerBackfillTicket

void AutoGenMatchmakingTests::TestMatchmakingCreateServerBackfillTicket(TestContext& testContext)
{
    struct CreateServerBackfillTicketResult : public XAsyncResult
    {
        PFMatchmakingCreateServerBackfillTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingCreateServerBackfillTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingCreateServerBackfillTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingCreateServerBackfillTicketResult( result );
            return ValidatePFMatchmakingCreateServerBackfillTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateServerBackfillTicketResult>>(testContext);

    PlayFab::MatchmakingModels::CreateServerBackfillTicketRequest request;
    FillCreateServerBackfillTicketRequest( &request );
    LogCreateServerBackfillTicketRequest( &request, "TestMatchmakingCreateServerBackfillTicket" );
    HRESULT hr = PFMatchmakingCreateServerBackfillTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCreateServerBackfillTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region CreateServerMatchmakingTicket

void AutoGenMatchmakingTests::TestMatchmakingCreateServerMatchmakingTicket(TestContext& testContext)
{
    struct CreateServerMatchmakingTicketResult : public XAsyncResult
    {
        PFMatchmakingCreateMatchmakingTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingCreateServerMatchmakingTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingCreateServerMatchmakingTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingCreateMatchmakingTicketResult( result );
            return ValidatePFMatchmakingCreateMatchmakingTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateServerMatchmakingTicketResult>>(testContext);

    PlayFab::MatchmakingModels::CreateServerMatchmakingTicketRequest request;
    FillCreateServerMatchmakingTicketRequest( &request );
    LogCreateServerMatchmakingTicketRequest( &request, "TestMatchmakingCreateServerMatchmakingTicket" );
    HRESULT hr = PFMatchmakingCreateServerMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingCreateServerMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetMatch

void AutoGenMatchmakingTests::TestMatchmakingGetMatch(TestContext& testContext)
{
    struct GetMatchResult : public XAsyncResult
    {
        PFMatchmakingGetMatchResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingGetMatchGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingGetMatchGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGetMatchResult( result );
            return ValidatePFMatchmakingGetMatchResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMatchResult>>(testContext);

    PlayFab::MatchmakingModels::GetMatchRequest request;
    FillGetMatchRequest( &request );
    LogGetMatchRequest( &request, "TestMatchmakingGetMatch" );
    HRESULT hr = PFMatchmakingGetMatchAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingGetMatchAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetMatchmakingTicket

void AutoGenMatchmakingTests::TestMatchmakingGetMatchmakingTicket(TestContext& testContext)
{
    struct GetMatchmakingTicketResult : public XAsyncResult
    {
        PFMatchmakingGetMatchmakingTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingGetMatchmakingTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingGetMatchmakingTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGetMatchmakingTicketResult( result );
            return ValidatePFMatchmakingGetMatchmakingTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetMatchmakingTicketResult>>(testContext);

    PlayFab::MatchmakingModels::GetMatchmakingTicketRequest request;
    FillGetMatchmakingTicketRequest( &request );
    LogGetMatchmakingTicketRequest( &request, "TestMatchmakingGetMatchmakingTicket" );
    HRESULT hr = PFMatchmakingGetMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingGetMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetQueueStatistics

void AutoGenMatchmakingTests::TestMatchmakingGetQueueStatistics(TestContext& testContext)
{
    struct GetQueueStatisticsResult : public XAsyncResult
    {
        PFMatchmakingGetQueueStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingGetQueueStatisticsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingGetQueueStatisticsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGetQueueStatisticsResult( result );
            return ValidatePFMatchmakingGetQueueStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetQueueStatisticsResult>>(testContext);

    PlayFab::MatchmakingModels::GetQueueStatisticsRequest request;
    FillGetQueueStatisticsRequest( &request );
    LogGetQueueStatisticsRequest( &request, "TestMatchmakingGetQueueStatistics" );
    HRESULT hr = PFMatchmakingGetQueueStatisticsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingGetQueueStatisticsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetServerBackfillTicket

void AutoGenMatchmakingTests::TestMatchmakingGetServerBackfillTicket(TestContext& testContext)
{
    struct GetServerBackfillTicketResult : public XAsyncResult
    {
        PFMatchmakingGetServerBackfillTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingGetServerBackfillTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingGetServerBackfillTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingGetServerBackfillTicketResult( result );
            return ValidatePFMatchmakingGetServerBackfillTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetServerBackfillTicketResult>>(testContext);

    PlayFab::MatchmakingModels::GetServerBackfillTicketRequest request;
    FillGetServerBackfillTicketRequest( &request );
    LogGetServerBackfillTicketRequest( &request, "TestMatchmakingGetServerBackfillTicket" );
    HRESULT hr = PFMatchmakingGetServerBackfillTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingGetServerBackfillTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region JoinMatchmakingTicket

void AutoGenMatchmakingTests::TestMatchmakingJoinMatchmakingTicket(TestContext& testContext)
{
    struct JoinMatchmakingTicketResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<JoinMatchmakingTicketResult>>(testContext);

    PlayFab::MatchmakingModels::JoinMatchmakingTicketRequest request;
    FillJoinMatchmakingTicketRequest( &request );
    LogJoinMatchmakingTicketRequest( &request, "TestMatchmakingJoinMatchmakingTicket" );
    HRESULT hr = PFMatchmakingJoinMatchmakingTicketAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingJoinMatchmakingTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListMatchmakingTicketsForPlayer

void AutoGenMatchmakingTests::TestMatchmakingListMatchmakingTicketsForPlayer(TestContext& testContext)
{
    struct ListMatchmakingTicketsForPlayerResult : public XAsyncResult
    {
        PFMatchmakingListMatchmakingTicketsForPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingListMatchmakingTicketsForPlayerGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingListMatchmakingTicketsForPlayerGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingListMatchmakingTicketsForPlayerResult( result );
            return ValidatePFMatchmakingListMatchmakingTicketsForPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMatchmakingTicketsForPlayerResult>>(testContext);

    PlayFab::MatchmakingModels::ListMatchmakingTicketsForPlayerRequest request;
    FillListMatchmakingTicketsForPlayerRequest( &request );
    LogListMatchmakingTicketsForPlayerRequest( &request, "TestMatchmakingListMatchmakingTicketsForPlayer" );
    HRESULT hr = PFMatchmakingListMatchmakingTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingListMatchmakingTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListServerBackfillTicketsForPlayer

void AutoGenMatchmakingTests::TestMatchmakingListServerBackfillTicketsForPlayer(TestContext& testContext)
{
    struct ListServerBackfillTicketsForPlayerResult : public XAsyncResult
    {
        PFMatchmakingListServerBackfillTicketsForPlayerResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFMatchmakingListServerBackfillTicketsForPlayerGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFMatchmakingListServerBackfillTicketsForPlayerGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFMatchmakingListServerBackfillTicketsForPlayerResult( result );
            return ValidatePFMatchmakingListServerBackfillTicketsForPlayerResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListServerBackfillTicketsForPlayerResult>>(testContext);

    PlayFab::MatchmakingModels::ListServerBackfillTicketsForPlayerRequest request;
    FillListServerBackfillTicketsForPlayerRequest( &request );
    LogListServerBackfillTicketsForPlayerRequest( &request, "TestMatchmakingListServerBackfillTicketsForPlayer" );
    HRESULT hr = PFMatchmakingListServerBackfillTicketsForPlayerAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFMatchmakingMatchmakingListServerBackfillTicketsForPlayerAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
