#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenPlayStreamTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenPlayStreamTests::PlayStreamTestData AutoGenPlayStreamTests::testData;

void AutoGenPlayStreamTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenPlayStreamTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenPlayStreamTests::AddTests()
{
    // Generated tests 
    AddTest("TestPlayStreamAdminAddPlayerTag", &AutoGenPlayStreamTests::TestPlayStreamAdminAddPlayerTag);

    AddTest("TestPlayStreamAdminGetAllSegments", &AutoGenPlayStreamTests::TestPlayStreamAdminGetAllSegments);

    AddTest("TestPlayStreamAdminGetPlayerSegments", &AutoGenPlayStreamTests::TestPlayStreamAdminGetPlayerSegments);

    AddTest("TestPlayStreamAdminGetPlayersInSegment", &AutoGenPlayStreamTests::TestPlayStreamAdminGetPlayersInSegment);

    AddTest("TestPlayStreamAdminGetPlayerTags", &AutoGenPlayStreamTests::TestPlayStreamAdminGetPlayerTags);

    AddTest("TestPlayStreamAdminRemovePlayerTag", &AutoGenPlayStreamTests::TestPlayStreamAdminRemovePlayerTag);

    AddTest("TestPlayStreamClientGetPlayerSegments", &AutoGenPlayStreamTests::TestPlayStreamClientGetPlayerSegments);

    AddTest("TestPlayStreamClientGetPlayerTags", &AutoGenPlayStreamTests::TestPlayStreamClientGetPlayerTags);

    AddTest("TestPlayStreamServerAddPlayerTag", &AutoGenPlayStreamTests::TestPlayStreamServerAddPlayerTag);

    AddTest("TestPlayStreamServerGetAllSegments", &AutoGenPlayStreamTests::TestPlayStreamServerGetAllSegments);

    AddTest("TestPlayStreamServerGetPlayerSegments", &AutoGenPlayStreamTests::TestPlayStreamServerGetPlayerSegments);

    AddTest("TestPlayStreamServerGetPlayersInSegment", &AutoGenPlayStreamTests::TestPlayStreamServerGetPlayersInSegment);

    AddTest("TestPlayStreamServerGetPlayerTags", &AutoGenPlayStreamTests::TestPlayStreamServerGetPlayerTags);

    AddTest("TestPlayStreamServerRemovePlayerTag", &AutoGenPlayStreamTests::TestPlayStreamServerRemovePlayerTag);

    AddTest("TestPlayStreamWriteEvents", &AutoGenPlayStreamTests::TestPlayStreamWriteEvents);

    AddTest("TestPlayStreamWriteTelemetryEvents", &AutoGenPlayStreamTests::TestPlayStreamWriteTelemetryEvents);
}

void AutoGenPlayStreamTests::ClassSetUp()
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

void AutoGenPlayStreamTests::ClassTearDown()
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

void AutoGenPlayStreamTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminAddPlayerTag

void AutoGenPlayStreamTests::TestPlayStreamAdminAddPlayerTag(TestContext& testContext)
{
    struct AdminAddPlayerTagResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminAddPlayerTagResult>>(testContext);

    PlayFab::PlayStreamModels::AddPlayerTagRequest request;
    FillAddPlayerTagRequest( &request );
    LogAddPlayerTagRequest( &request, "TestPlayStreamAdminAddPlayerTag" );
    HRESULT hr = PFPlayStreamAdminAddPlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamAdminAddPlayerTagAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetAllSegments

void AutoGenPlayStreamTests::TestPlayStreamAdminGetAllSegments(TestContext& testContext)
{
    struct AdminGetAllSegmentsResult : public XAsyncResult
    {
        PFPlayStreamGetAllSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamAdminGetAllSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetAllSegmentsResult( result );
            return ValidatePFPlayStreamGetAllSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetAllSegmentsResult>>(testContext);

    HRESULT hr = PFPlayStreamAdminGetAllSegmentsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamAdminGetAllSegmentsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetPlayerSegments

void AutoGenPlayStreamTests::TestPlayStreamAdminGetPlayerSegments(TestContext& testContext)
{
    struct AdminGetPlayerSegmentsResult : public XAsyncResult
    {
        PFPlayStreamGetPlayerSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamAdminGetPlayerSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayerSegmentsResult( result );
            return ValidatePFPlayStreamGetPlayerSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerSegmentsResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayersSegmentsRequest request;
    FillGetPlayersSegmentsRequest( &request );
    LogGetPlayersSegmentsRequest( &request, "TestPlayStreamAdminGetPlayerSegments" );
    HRESULT hr = PFPlayStreamAdminGetPlayerSegmentsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamAdminGetPlayerSegmentsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetPlayersInSegment

void AutoGenPlayStreamTests::TestPlayStreamAdminGetPlayersInSegment(TestContext& testContext)
{
    struct AdminGetPlayersInSegmentResult : public XAsyncResult
    {
        PFPlayStreamGetPlayersInSegmentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamAdminGetPlayersInSegmentGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayersInSegmentResult( result );
            return ValidatePFPlayStreamGetPlayersInSegmentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayersInSegmentResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayersInSegmentRequest request;
    FillGetPlayersInSegmentRequest( &request );
    LogGetPlayersInSegmentRequest( &request, "TestPlayStreamAdminGetPlayersInSegment" );
    HRESULT hr = PFPlayStreamAdminGetPlayersInSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamAdminGetPlayersInSegmentAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetPlayerTags

void AutoGenPlayStreamTests::TestPlayStreamAdminGetPlayerTags(TestContext& testContext)
{
    struct AdminGetPlayerTagsResult : public XAsyncResult
    {
        PFPlayStreamGetPlayerTagsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamAdminGetPlayerTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayerTagsResult( result );
            return ValidatePFPlayStreamGetPlayerTagsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerTagsResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayerTagsRequest request;
    FillGetPlayerTagsRequest( &request );
    LogGetPlayerTagsRequest( &request, "TestPlayStreamAdminGetPlayerTags" );
    HRESULT hr = PFPlayStreamAdminGetPlayerTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamAdminGetPlayerTagsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminRemovePlayerTag

void AutoGenPlayStreamTests::TestPlayStreamAdminRemovePlayerTag(TestContext& testContext)
{
    struct AdminRemovePlayerTagResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminRemovePlayerTagResult>>(testContext);

    PlayFab::PlayStreamModels::RemovePlayerTagRequest request;
    FillRemovePlayerTagRequest( &request );
    LogRemovePlayerTagRequest( &request, "TestPlayStreamAdminRemovePlayerTag" );
    HRESULT hr = PFPlayStreamAdminRemovePlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamAdminRemovePlayerTagAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetPlayerSegments

void AutoGenPlayStreamTests::TestPlayStreamClientGetPlayerSegments(TestContext& testContext)
{
    struct ClientGetPlayerSegmentsResult : public XAsyncResult
    {
        PFPlayStreamGetPlayerSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamClientGetPlayerSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayerSegmentsResult( result );
            return ValidatePFPlayStreamGetPlayerSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerSegmentsResult>>(testContext);

    HRESULT hr = PFPlayStreamClientGetPlayerSegmentsAsync(titlePlayerHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamClientGetPlayerSegmentsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetPlayerTags

void AutoGenPlayStreamTests::TestPlayStreamClientGetPlayerTags(TestContext& testContext)
{
    struct ClientGetPlayerTagsResult : public XAsyncResult
    {
        PFPlayStreamGetPlayerTagsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamClientGetPlayerTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayerTagsResult( result );
            return ValidatePFPlayStreamGetPlayerTagsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPlayerTagsResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayerTagsRequest request;
    FillGetPlayerTagsRequest( &request );
    LogGetPlayerTagsRequest( &request, "TestPlayStreamClientGetPlayerTags" );
    HRESULT hr = PFPlayStreamClientGetPlayerTagsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamClientGetPlayerTagsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerAddPlayerTag

void AutoGenPlayStreamTests::TestPlayStreamServerAddPlayerTag(TestContext& testContext)
{
    struct ServerAddPlayerTagResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerAddPlayerTagResult>>(testContext);

    PlayFab::PlayStreamModels::AddPlayerTagRequest request;
    FillAddPlayerTagRequest( &request );
    LogAddPlayerTagRequest( &request, "TestPlayStreamServerAddPlayerTag" );
    HRESULT hr = PFPlayStreamServerAddPlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamServerAddPlayerTagAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetAllSegments

void AutoGenPlayStreamTests::TestPlayStreamServerGetAllSegments(TestContext& testContext)
{
    struct ServerGetAllSegmentsResult : public XAsyncResult
    {
        PFPlayStreamGetAllSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamServerGetAllSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetAllSegmentsResult( result );
            return ValidatePFPlayStreamGetAllSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetAllSegmentsResult>>(testContext);

    HRESULT hr = PFPlayStreamServerGetAllSegmentsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamServerGetAllSegmentsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetPlayerSegments

void AutoGenPlayStreamTests::TestPlayStreamServerGetPlayerSegments(TestContext& testContext)
{
    struct ServerGetPlayerSegmentsResult : public XAsyncResult
    {
        PFPlayStreamGetPlayerSegmentsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamServerGetPlayerSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayerSegmentsResult( result );
            return ValidatePFPlayStreamGetPlayerSegmentsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayerSegmentsResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayersSegmentsRequest request;
    FillGetPlayersSegmentsRequest( &request );
    LogGetPlayersSegmentsRequest( &request, "TestPlayStreamServerGetPlayerSegments" );
    HRESULT hr = PFPlayStreamServerGetPlayerSegmentsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamServerGetPlayerSegmentsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetPlayersInSegment

void AutoGenPlayStreamTests::TestPlayStreamServerGetPlayersInSegment(TestContext& testContext)
{
    struct ServerGetPlayersInSegmentResult : public XAsyncResult
    {
        PFPlayStreamGetPlayersInSegmentResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamServerGetPlayersInSegmentGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayersInSegmentResult( result );
            return ValidatePFPlayStreamGetPlayersInSegmentResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayersInSegmentResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayersInSegmentRequest request;
    FillGetPlayersInSegmentRequest( &request );
    LogGetPlayersInSegmentRequest( &request, "TestPlayStreamServerGetPlayersInSegment" );
    HRESULT hr = PFPlayStreamServerGetPlayersInSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamServerGetPlayersInSegmentAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetPlayerTags

void AutoGenPlayStreamTests::TestPlayStreamServerGetPlayerTags(TestContext& testContext)
{
    struct ServerGetPlayerTagsResult : public XAsyncResult
    {
        PFPlayStreamGetPlayerTagsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamServerGetPlayerTagsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamGetPlayerTagsResult( result );
            return ValidatePFPlayStreamGetPlayerTagsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPlayerTagsResult>>(testContext);

    PlayFab::PlayStreamModels::GetPlayerTagsRequest request;
    FillGetPlayerTagsRequest( &request );
    LogGetPlayerTagsRequest( &request, "TestPlayStreamServerGetPlayerTags" );
    HRESULT hr = PFPlayStreamServerGetPlayerTagsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamServerGetPlayerTagsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerRemovePlayerTag

void AutoGenPlayStreamTests::TestPlayStreamServerRemovePlayerTag(TestContext& testContext)
{
    struct ServerRemovePlayerTagResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerRemovePlayerTagResult>>(testContext);

    PlayFab::PlayStreamModels::RemovePlayerTagRequest request;
    FillRemovePlayerTagRequest( &request );
    LogRemovePlayerTagRequest( &request, "TestPlayStreamServerRemovePlayerTag" );
    HRESULT hr = PFPlayStreamServerRemovePlayerTagAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamServerRemovePlayerTagAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region WriteEvents

void AutoGenPlayStreamTests::TestPlayStreamWriteEvents(TestContext& testContext)
{
    struct WriteEventsResult : public XAsyncResult
    {
        PFPlayStreamWriteEventsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamWriteEventsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamWriteEventsResponse( result );
            return ValidatePFPlayStreamWriteEventsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteEventsResult>>(testContext);

    PlayFab::PlayStreamModels::WriteEventsRequest request;
    FillWriteEventsRequest( &request );
    LogWriteEventsRequest( &request, "TestPlayStreamWriteEvents" );
    HRESULT hr = PFPlayStreamWriteEventsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamWriteEventsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region WriteTelemetryEvents

void AutoGenPlayStreamTests::TestPlayStreamWriteTelemetryEvents(TestContext& testContext)
{
    struct WriteTelemetryEventsResult : public XAsyncResult
    {
        PFPlayStreamWriteEventsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlayStreamWriteTelemetryEventsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlayStreamWriteEventsResponse( result );
            return ValidatePFPlayStreamWriteEventsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<WriteTelemetryEventsResult>>(testContext);

    PlayFab::PlayStreamModels::WriteEventsRequest request;
    FillWriteEventsRequest( &request );
    LogWriteEventsRequest( &request, "TestPlayStreamWriteTelemetryEvents" );
    HRESULT hr = PFPlayStreamWriteTelemetryEventsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlayStreamPlayStreamWriteTelemetryEventsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
