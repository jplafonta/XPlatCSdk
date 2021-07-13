#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenProfilesTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenProfilesTests::Log(std::stringstream& ss)
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

void AutoGenProfilesTests::AddTests()
{
    // Generated tests 
    AddTest("TestProfilesGetGlobalPolicy", &AutoGenProfilesTests::TestProfilesGetGlobalPolicy);
    AddTest("TestProfilesGetProfile", &AutoGenProfilesTests::TestProfilesGetProfile);
    AddTest("TestProfilesGetProfiles", &AutoGenProfilesTests::TestProfilesGetProfiles);
    AddTest("TestProfilesGetTitlePlayersFromMasterPlayerAccountIds", &AutoGenProfilesTests::TestProfilesGetTitlePlayersFromMasterPlayerAccountIds);
    AddTest("TestProfilesSetGlobalPolicy", &AutoGenProfilesTests::TestProfilesSetGlobalPolicy);
    AddTest("TestProfilesSetProfileLanguage", &AutoGenProfilesTests::TestProfilesSetProfileLanguage);
    AddTest("TestProfilesSetProfilePolicy", &AutoGenProfilesTests::TestProfilesSetProfilePolicy);
}

void AutoGenProfilesTests::ClassSetUp()
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

void AutoGenProfilesTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenProfilesTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

void AutoGenProfilesTests::TestProfilesGetGlobalPolicy(TestContext& testContext)
{
    struct GetGlobalPolicyResult : public XAsyncResult
    {
        PlayFabProfilesGetGlobalPolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabProfilesGetGlobalPolicyGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabProfilesGetGlobalPolicyResponse( result );
            return ValidatePlayFabProfilesGetGlobalPolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGlobalPolicyResult>>(testContext);

    PlayFab::ProfilesModels::GetGlobalPolicyRequest request;
    FillPlayFabProfilesGetGlobalPolicyRequest( &request );
    LogPlayFabProfilesGetGlobalPolicyRequest( &request, "TestProfilesGetGlobalPolicy" );
    HRESULT hr = PlayFabProfilesGetGlobalPolicyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesGetGlobalPolicyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenProfilesTests::TestProfilesGetProfile(TestContext& testContext)
{
    struct GetProfileResult : public XAsyncResult
    {
        PlayFabProfilesGetEntityProfileResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabProfilesGetProfileGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabProfilesGetEntityProfileResponse( result );
            return ValidatePlayFabProfilesGetEntityProfileResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetProfileResult>>(testContext);

    PlayFab::ProfilesModels::GetEntityProfileRequest request;
    FillPlayFabProfilesGetEntityProfileRequest( &request );
    LogPlayFabProfilesGetEntityProfileRequest( &request, "TestProfilesGetProfile" );
    HRESULT hr = PlayFabProfilesGetProfileAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesGetProfileAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenProfilesTests::TestProfilesGetProfiles(TestContext& testContext)
{
    struct GetProfilesResult : public XAsyncResult
    {
        PlayFabProfilesGetEntityProfilesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabProfilesGetProfilesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabProfilesGetEntityProfilesResponse( result );
            return ValidatePlayFabProfilesGetEntityProfilesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetProfilesResult>>(testContext);

    PlayFab::ProfilesModels::GetEntityProfilesRequest request;
    FillPlayFabProfilesGetEntityProfilesRequest( &request );
    LogPlayFabProfilesGetEntityProfilesRequest( &request, "TestProfilesGetProfiles" );
    HRESULT hr = PlayFabProfilesGetProfilesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesGetProfilesAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenProfilesTests::TestProfilesGetTitlePlayersFromMasterPlayerAccountIds(TestContext& testContext)
{
    struct GetTitlePlayersFromMasterPlayerAccountIdsResult : public XAsyncResult
    {
        PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse( result );
            return ValidatePlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetTitlePlayersFromMasterPlayerAccountIdsResult>>(testContext);

    PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest request;
    FillPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest( &request );
    LogPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest( &request, "TestProfilesGetTitlePlayersFromMasterPlayerAccountIds" );
    HRESULT hr = PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenProfilesTests::TestProfilesSetGlobalPolicy(TestContext& testContext)
{
    struct SetGlobalPolicyResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<SetGlobalPolicyResult>>(testContext);

    PlayFab::ProfilesModels::SetGlobalPolicyRequest request;
    FillPlayFabProfilesSetGlobalPolicyRequest( &request );
    LogPlayFabProfilesSetGlobalPolicyRequest( &request, "TestProfilesSetGlobalPolicy" );
    HRESULT hr = PlayFabProfilesSetGlobalPolicyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesSetGlobalPolicyAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenProfilesTests::TestProfilesSetProfileLanguage(TestContext& testContext)
{
    struct SetProfileLanguageResult : public XAsyncResult
    {
        PlayFabProfilesSetProfileLanguageResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabProfilesSetProfileLanguageGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabProfilesSetProfileLanguageResponse( result );
            return ValidatePlayFabProfilesSetProfileLanguageResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetProfileLanguageResult>>(testContext);

    PlayFab::ProfilesModels::SetProfileLanguageRequest request;
    FillPlayFabProfilesSetProfileLanguageRequest( &request );
    LogPlayFabProfilesSetProfileLanguageRequest( &request, "TestProfilesSetProfileLanguage" );
    HRESULT hr = PlayFabProfilesSetProfileLanguageAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesSetProfileLanguageAsync", hr);
        return;
    }
    async.release(); 
} 

void AutoGenProfilesTests::TestProfilesSetProfilePolicy(TestContext& testContext)
{
    struct SetProfilePolicyResult : public XAsyncResult
    {
        PlayFabProfilesSetEntityProfilePolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabProfilesSetProfilePolicyGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabProfilesSetEntityProfilePolicyResponse( result );
            return ValidatePlayFabProfilesSetEntityProfilePolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<SetProfilePolicyResult>>(testContext);

    PlayFab::ProfilesModels::SetEntityProfilePolicyRequest request;
    FillPlayFabProfilesSetEntityProfilePolicyRequest( &request );
    LogPlayFabProfilesSetEntityProfilePolicyRequest( &request, "TestProfilesSetProfilePolicy" );
    HRESULT hr = PlayFabProfilesSetProfilePolicyAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabProfilesSetProfilePolicyAsync", hr);
        return;
    }
    async.release(); 
} 


}
