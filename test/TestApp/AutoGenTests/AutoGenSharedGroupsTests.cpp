#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenSharedGroupsTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenSharedGroupsTests::SharedGroupsTestData AutoGenSharedGroupsTests::testData;

void AutoGenSharedGroupsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenSharedGroupsTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenSharedGroupsTests::AddTests()
{
    // Generated tests 
    AddTest("TestSharedGroupsAdminSetPublisherData", &AutoGenSharedGroupsTests::TestSharedGroupsAdminSetPublisherData); // TODO: debug passing test but no data

    //AddTest("TestSharedGroupsClientAddSharedGroupMembers", &AutoGenSharedGroupsTests::TestSharedGroupsClientAddSharedGroupMembers); // TODO: debug failing test

    AddTest("TestSharedGroupsClientCreateSharedGroup", &AutoGenSharedGroupsTests::TestSharedGroupsClientCreateSharedGroup); // TODO: debug passing test but no data

    AddTest("TestSharedGroupsClientGetSharedGroupData", &AutoGenSharedGroupsTests::TestSharedGroupsClientGetSharedGroupData); // TODO: debug passing test but no data

    AddTest("TestSharedGroupsClientRemoveSharedGroupMembers", &AutoGenSharedGroupsTests::TestSharedGroupsClientRemoveSharedGroupMembers); // TODO: debug passing test but no data

    AddTest("TestSharedGroupsClientUpdateSharedGroupData", &AutoGenSharedGroupsTests::TestSharedGroupsClientUpdateSharedGroupData); // TODO: debug passing test but no data

    //AddTest("TestSharedGroupsServerAddSharedGroupMembers", &AutoGenSharedGroupsTests::TestSharedGroupsServerAddSharedGroupMembers); // TODO: debug failing test

    //AddTest("TestSharedGroupsServerCreateSharedGroup", &AutoGenSharedGroupsTests::TestSharedGroupsServerCreateSharedGroup); // TODO: debug failing test

    AddTest("TestSharedGroupsServerDeleteSharedGroup", &AutoGenSharedGroupsTests::TestSharedGroupsServerDeleteSharedGroup); // TODO: debug passing test but no data

    //AddTest("TestSharedGroupsServerGetSharedGroupData", &AutoGenSharedGroupsTests::TestSharedGroupsServerGetSharedGroupData); // TODO: debug failing test

    //AddTest("TestSharedGroupsServerRemoveSharedGroupMembers", &AutoGenSharedGroupsTests::TestSharedGroupsServerRemoveSharedGroupMembers); // TODO: debug failing test

    //AddTest("TestSharedGroupsServerUpdateSharedGroupData", &AutoGenSharedGroupsTests::TestSharedGroupsServerUpdateSharedGroupData); // TODO: debug failing test
}

void AutoGenSharedGroupsTests::ClassSetUp()
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

void AutoGenSharedGroupsTests::ClassTearDown()
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

void AutoGenSharedGroupsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminSetPublisherData

void AutoGenSharedGroupsTests::TestSharedGroupsAdminSetPublisherData(TestContext& testContext)
{
    struct AdminSetPublisherDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetPublisherDataResult>>(testContext);

    PlayFab::SetPublisherDataRequest request;
    FillSetPublisherDataRequest( &request );
    LogSetPublisherDataRequest( &request, "TestSharedGroupsAdminSetPublisherData" );
    HRESULT hr = PFSharedGroupsAdminSetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsAdminSetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientAddSharedGroupMembers

void AutoGenSharedGroupsTests::TestSharedGroupsClientAddSharedGroupMembers(TestContext& testContext)
{
    struct ClientAddSharedGroupMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientAddSharedGroupMembersResult>>(testContext);

    PlayFab::SharedGroupsModels::AddSharedGroupMembersRequest request;
    FillAddSharedGroupMembersRequest( &request );
    LogAddSharedGroupMembersRequest( &request, "TestSharedGroupsClientAddSharedGroupMembers" );
    HRESULT hr = PFSharedGroupsClientAddSharedGroupMembersAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsClientAddSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientCreateSharedGroup

void AutoGenSharedGroupsTests::TestSharedGroupsClientCreateSharedGroup(TestContext& testContext)
{
    struct ClientCreateSharedGroupResult : public XAsyncResult
    {
        PFSharedGroupsCreateSharedGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSharedGroupsClientCreateSharedGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSharedGroupsClientCreateSharedGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSharedGroupsCreateSharedGroupResult( result );
            return ValidatePFSharedGroupsCreateSharedGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientCreateSharedGroupResult>>(testContext);

    PlayFab::SharedGroupsModels::CreateSharedGroupRequest request;
    FillCreateSharedGroupRequest( &request );
    LogCreateSharedGroupRequest( &request, "TestSharedGroupsClientCreateSharedGroup" );
    HRESULT hr = PFSharedGroupsClientCreateSharedGroupAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsClientCreateSharedGroupAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetSharedGroupData

void AutoGenSharedGroupsTests::TestSharedGroupsClientGetSharedGroupData(TestContext& testContext)
{
    struct ClientGetSharedGroupDataResult : public XAsyncResult
    {
        PFSharedGroupsGetSharedGroupDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSharedGroupsClientGetSharedGroupDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSharedGroupsClientGetSharedGroupDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSharedGroupsGetSharedGroupDataResult( result );
            return ValidatePFSharedGroupsGetSharedGroupDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetSharedGroupDataResult>>(testContext);

    PlayFab::SharedGroupsModels::GetSharedGroupDataRequest request;
    FillGetSharedGroupDataRequest( &request );
    LogGetSharedGroupDataRequest( &request, "TestSharedGroupsClientGetSharedGroupData" );
    HRESULT hr = PFSharedGroupsClientGetSharedGroupDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsClientGetSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientRemoveSharedGroupMembers

void AutoGenSharedGroupsTests::TestSharedGroupsClientRemoveSharedGroupMembers(TestContext& testContext)
{
    struct ClientRemoveSharedGroupMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientRemoveSharedGroupMembersResult>>(testContext);

    PlayFab::SharedGroupsModels::RemoveSharedGroupMembersRequest request;
    FillRemoveSharedGroupMembersRequest( &request );
    LogRemoveSharedGroupMembersRequest( &request, "TestSharedGroupsClientRemoveSharedGroupMembers" );
    HRESULT hr = PFSharedGroupsClientRemoveSharedGroupMembersAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsClientRemoveSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientUpdateSharedGroupData

void AutoGenSharedGroupsTests::TestSharedGroupsClientUpdateSharedGroupData(TestContext& testContext)
{
    struct ClientUpdateSharedGroupDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUpdateSharedGroupDataResult>>(testContext);

    PlayFab::SharedGroupsModels::UpdateSharedGroupDataRequest request;
    FillUpdateSharedGroupDataRequest( &request );
    LogUpdateSharedGroupDataRequest( &request, "TestSharedGroupsClientUpdateSharedGroupData" );
    HRESULT hr = PFSharedGroupsClientUpdateSharedGroupDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsClientUpdateSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerAddSharedGroupMembers

void AutoGenSharedGroupsTests::TestSharedGroupsServerAddSharedGroupMembers(TestContext& testContext)
{
    struct ServerAddSharedGroupMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerAddSharedGroupMembersResult>>(testContext);

    PlayFab::SharedGroupsModels::AddSharedGroupMembersRequest request;
    FillAddSharedGroupMembersRequest( &request );
    LogAddSharedGroupMembersRequest( &request, "TestSharedGroupsServerAddSharedGroupMembers" );
    HRESULT hr = PFSharedGroupsServerAddSharedGroupMembersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsServerAddSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerCreateSharedGroup

void AutoGenSharedGroupsTests::TestSharedGroupsServerCreateSharedGroup(TestContext& testContext)
{
    struct ServerCreateSharedGroupResult : public XAsyncResult
    {
        PFSharedGroupsCreateSharedGroupResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSharedGroupsServerCreateSharedGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSharedGroupsServerCreateSharedGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSharedGroupsCreateSharedGroupResult( result );
            return ValidatePFSharedGroupsCreateSharedGroupResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerCreateSharedGroupResult>>(testContext);

    PlayFab::SharedGroupsModels::CreateSharedGroupRequest request;
    FillCreateSharedGroupRequest( &request );
    LogCreateSharedGroupRequest( &request, "TestSharedGroupsServerCreateSharedGroup" );
    HRESULT hr = PFSharedGroupsServerCreateSharedGroupAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsServerCreateSharedGroupAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerDeleteSharedGroup

void AutoGenSharedGroupsTests::TestSharedGroupsServerDeleteSharedGroup(TestContext& testContext)
{
    struct ServerDeleteSharedGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerDeleteSharedGroupResult>>(testContext);

    PlayFab::SharedGroupsModels::DeleteSharedGroupRequest request;
    FillDeleteSharedGroupRequest( &request );
    LogDeleteSharedGroupRequest( &request, "TestSharedGroupsServerDeleteSharedGroup" );
    HRESULT hr = PFSharedGroupsServerDeleteSharedGroupAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsServerDeleteSharedGroupAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetSharedGroupData

void AutoGenSharedGroupsTests::TestSharedGroupsServerGetSharedGroupData(TestContext& testContext)
{
    struct ServerGetSharedGroupDataResult : public XAsyncResult
    {
        PFSharedGroupsGetSharedGroupDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSharedGroupsServerGetSharedGroupDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSharedGroupsServerGetSharedGroupDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSharedGroupsGetSharedGroupDataResult( result );
            return ValidatePFSharedGroupsGetSharedGroupDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetSharedGroupDataResult>>(testContext);

    PlayFab::SharedGroupsModels::GetSharedGroupDataRequest request;
    FillGetSharedGroupDataRequest( &request );
    LogGetSharedGroupDataRequest( &request, "TestSharedGroupsServerGetSharedGroupData" );
    HRESULT hr = PFSharedGroupsServerGetSharedGroupDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsServerGetSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerRemoveSharedGroupMembers

void AutoGenSharedGroupsTests::TestSharedGroupsServerRemoveSharedGroupMembers(TestContext& testContext)
{
    struct ServerRemoveSharedGroupMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerRemoveSharedGroupMembersResult>>(testContext);

    PlayFab::SharedGroupsModels::RemoveSharedGroupMembersRequest request;
    FillRemoveSharedGroupMembersRequest( &request );
    LogRemoveSharedGroupMembersRequest( &request, "TestSharedGroupsServerRemoveSharedGroupMembers" );
    HRESULT hr = PFSharedGroupsServerRemoveSharedGroupMembersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsServerRemoveSharedGroupMembersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerUpdateSharedGroupData

void AutoGenSharedGroupsTests::TestSharedGroupsServerUpdateSharedGroupData(TestContext& testContext)
{
    struct ServerUpdateSharedGroupDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUpdateSharedGroupDataResult>>(testContext);

    PlayFab::SharedGroupsModels::UpdateSharedGroupDataRequest request;
    FillUpdateSharedGroupDataRequest( &request );
    LogUpdateSharedGroupDataRequest( &request, "TestSharedGroupsServerUpdateSharedGroupData" );
    HRESULT hr = PFSharedGroupsServerUpdateSharedGroupDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSharedGroupsSharedGroupsServerUpdateSharedGroupDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
