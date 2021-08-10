#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenFriendsTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenFriendsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenFriendsTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenFriendsTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestFriendsClientAddFriend", &AutoGenFriendsTests::TestFriendsClientAddFriend);
    AddTest("TestFriendsClientGetFriendsList", &AutoGenFriendsTests::TestFriendsClientGetFriendsList);
    AddTest("TestFriendsClientRemoveFriend", &AutoGenFriendsTests::TestFriendsClientRemoveFriend);
    AddTest("TestFriendsClientSetFriendTags", &AutoGenFriendsTests::TestFriendsClientSetFriendTags);
    AddTest("TestFriendsServerAddFriend", &AutoGenFriendsTests::TestFriendsServerAddFriend);
    AddTest("TestFriendsServerGetFriendsList", &AutoGenFriendsTests::TestFriendsServerGetFriendsList);
    AddTest("TestFriendsServerRemoveFriend", &AutoGenFriendsTests::TestFriendsServerRemoveFriend);
    AddTest("TestFriendsServerSetFriendTags", &AutoGenFriendsTests::TestFriendsServerSetFriendTags);
}

void AutoGenFriendsTests::ClassSetUp()
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
                hr = PFAuthenticationClientLoginGetResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenFriendsTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenFriendsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenFriendsTests::TestFriendsClientAddFriend(TestContext& testContext)
{
    struct ClientAddFriendResult : public XAsyncResult
    {
        PFFriendsAddFriendResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFFriendsClientAddFriendGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFFriendsAddFriendResult( &result );
            return ValidatePFFriendsAddFriendResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientAddFriendResult>>(testContext);

    PlayFab::FriendsModels::ClientAddFriendRequest request;
    FillClientAddFriendRequest( &request );
    LogClientAddFriendRequest( &request, "TestFriendsClientAddFriend" );
    HRESULT hr = PFFriendsClientAddFriendAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsClientAddFriendAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsClientGetFriendsList(TestContext& testContext)
{
    struct ClientGetFriendsListResult : public XAsyncResult
    {
        PFFriendsGetFriendsListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFFriendsClientGetFriendsListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFFriendsGetFriendsListResult( result );
            return ValidatePFFriendsGetFriendsListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetFriendsListResult>>(testContext);

    PlayFab::FriendsModels::ClientGetFriendsListRequest request;
    FillClientGetFriendsListRequest( &request );
    LogClientGetFriendsListRequest( &request, "TestFriendsClientGetFriendsList" );
    HRESULT hr = PFFriendsClientGetFriendsListAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsClientGetFriendsListAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsClientRemoveFriend(TestContext& testContext)
{
    struct ClientRemoveFriendResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientRemoveFriendResult>>(testContext);

    PlayFab::FriendsModels::ClientRemoveFriendRequest request;
    FillClientRemoveFriendRequest( &request );
    LogClientRemoveFriendRequest( &request, "TestFriendsClientRemoveFriend" );
    HRESULT hr = PFFriendsClientRemoveFriendAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsClientRemoveFriendAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsClientSetFriendTags(TestContext& testContext)
{
    struct ClientSetFriendTagsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientSetFriendTagsResult>>(testContext);

    PlayFab::FriendsModels::ClientSetFriendTagsRequest request;
    FillClientSetFriendTagsRequest( &request );
    LogClientSetFriendTagsRequest( &request, "TestFriendsClientSetFriendTags" );
    HRESULT hr = PFFriendsClientSetFriendTagsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsClientSetFriendTagsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsServerAddFriend(TestContext& testContext)
{
    struct ServerAddFriendResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerAddFriendResult>>(testContext);

    PlayFab::FriendsModels::ServerAddFriendRequest request;
    FillServerAddFriendRequest( &request );
    LogServerAddFriendRequest( &request, "TestFriendsServerAddFriend" );
    HRESULT hr = PFFriendsServerAddFriendAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsServerAddFriendAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsServerGetFriendsList(TestContext& testContext)
{
    struct ServerGetFriendsListResult : public XAsyncResult
    {
        PFFriendsGetFriendsListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFFriendsServerGetFriendsListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFFriendsGetFriendsListResult( result );
            return ValidatePFFriendsGetFriendsListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetFriendsListResult>>(testContext);

    PlayFab::FriendsModels::ServerGetFriendsListRequest request;
    FillServerGetFriendsListRequest( &request );
    LogServerGetFriendsListRequest( &request, "TestFriendsServerGetFriendsList" );
    HRESULT hr = PFFriendsServerGetFriendsListAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsServerGetFriendsListAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsServerRemoveFriend(TestContext& testContext)
{
    struct ServerRemoveFriendResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerRemoveFriendResult>>(testContext);

    PlayFab::FriendsModels::ServerRemoveFriendRequest request;
    FillServerRemoveFriendRequest( &request );
    LogServerRemoveFriendRequest( &request, "TestFriendsServerRemoveFriend" );
    HRESULT hr = PFFriendsServerRemoveFriendAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsServerRemoveFriendAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenFriendsTests::TestFriendsServerSetFriendTags(TestContext& testContext)
{
    struct ServerSetFriendTagsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSetFriendTagsResult>>(testContext);

    PlayFab::FriendsModels::ServerSetFriendTagsRequest request;
    FillServerSetFriendTagsRequest( &request );
    LogServerSetFriendTagsRequest( &request, "TestFriendsServerSetFriendTags" );
    HRESULT hr = PFFriendsServerSetFriendTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFFriendsFriendsServerSetFriendTagsAsync", hr);
        return;
    }
    async.release(); 
} 

}
