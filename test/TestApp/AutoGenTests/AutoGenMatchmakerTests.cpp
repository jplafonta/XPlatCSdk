#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMatchmakerTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenMatchmakerTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenClientTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenMatchmakerTests::AddTests()
{
    // Generated tests 
    AddTest("TestMatchmakerAuthUser", &AutoGenMatchmakerTests::TestMatchmakerAuthUser);
    AddTest("TestMatchmakerPlayerJoined", &AutoGenMatchmakerTests::TestMatchmakerPlayerJoined);
    AddTest("TestMatchmakerPlayerLeft", &AutoGenMatchmakerTests::TestMatchmakerPlayerLeft);
    AddTest("TestMatchmakerStartGame", &AutoGenMatchmakerTests::TestMatchmakerStartGame);
    AddTest("TestMatchmakerUserInfo", &AutoGenMatchmakerTests::TestMatchmakerUserInfo);
}

void AutoGenMatchmakerTests::ClassSetUp()
{
    HRESULT hr = PlayFabAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PlayFabClientLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PlayFabClientGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
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
        hr = PlayFabClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PlayFabGetAuthResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PlayFabEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenMatchmakerTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenMatchmakerTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenMatchmakerTests::TestMatchmakerAuthUser(TestContext& testContext)
{
    struct AuthUserResult : public XAsyncResult
    {
        PlayFabMatchmakerAuthUserResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMatchmakerAuthUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMatchmakerAuthUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMatchmakerAuthUserResponse( result );
            return ValidatePlayFabMatchmakerAuthUserResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AuthUserResult>>(testContext);

    PlayFab::MatchmakerModels::AuthUserRequest request;
    FillPlayFabMatchmakerAuthUserRequest( &request );
    LogPlayFabMatchmakerAuthUserRequest( &request, "TestMatchmakerAuthUser" );
    HRESULT hr = PlayFabMatchmakerAuthUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMatchmakerAuthUserAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMatchmakerTests::TestMatchmakerPlayerJoined(TestContext& testContext)
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

    PlayFab::MatchmakerModels::PlayerJoinedRequest request;
    FillPlayFabMatchmakerPlayerJoinedRequest( &request );
    LogPlayFabMatchmakerPlayerJoinedRequest( &request, "TestMatchmakerPlayerJoined" );
    HRESULT hr = PlayFabMatchmakerPlayerJoinedAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMatchmakerPlayerJoinedAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMatchmakerTests::TestMatchmakerPlayerLeft(TestContext& testContext)
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

    PlayFab::MatchmakerModels::PlayerLeftRequest request;
    FillPlayFabMatchmakerPlayerLeftRequest( &request );
    LogPlayFabMatchmakerPlayerLeftRequest( &request, "TestMatchmakerPlayerLeft" );
    HRESULT hr = PlayFabMatchmakerPlayerLeftAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMatchmakerPlayerLeftAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMatchmakerTests::TestMatchmakerStartGame(TestContext& testContext)
{
    struct StartGameResult : public XAsyncResult
    {
        PlayFabMatchmakerStartGameResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PlayFabMatchmakerStartGameGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PlayFabMatchmakerStartGameGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMatchmakerStartGameResponse( result );
            return ValidatePlayFabMatchmakerStartGameResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<StartGameResult>>(testContext);

    PlayFab::MatchmakerModels::StartGameRequest request;
    FillPlayFabMatchmakerStartGameRequest( &request );
    LogPlayFabMatchmakerStartGameRequest( &request, "TestMatchmakerStartGame" );
    HRESULT hr = PlayFabMatchmakerStartGameAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMatchmakerStartGameAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenMatchmakerTests::TestMatchmakerUserInfo(TestContext& testContext)
{
    struct UserInfoResult : public XAsyncResult
    {
        PlayFabMatchmakerUserInfoResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabMatchmakerUserInfoGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabMatchmakerUserInfoResponse( result );
            return ValidatePlayFabMatchmakerUserInfoResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UserInfoResult>>(testContext);

    PlayFab::MatchmakerModels::UserInfoRequest request;
    FillPlayFabMatchmakerUserInfoRequest( &request );
    LogPlayFabMatchmakerUserInfoRequest( &request, "TestMatchmakerUserInfo" );
    HRESULT hr = PlayFabMatchmakerUserInfoAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabMatchmakerUserInfoAsync", hr);
        return;
    }
    async.release(); 
} 


}
