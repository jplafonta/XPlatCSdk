#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenCharacterTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenCharacterTests::CharacterTestData AutoGenCharacterTests::testData;

void AutoGenCharacterTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenCharacterTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenCharacterTests::AddTests()
{
    // Generated tests 
    AddTest("TestCharacterAdminResetCharacterStatistics", &AutoGenCharacterTests::TestCharacterAdminResetCharacterStatistics);

    AddTest("TestCharacterClientGetAllUsersCharacters", &AutoGenCharacterTests::TestCharacterClientGetAllUsersCharacters);

    AddTest("TestCharacterClientGetCharacterData", &AutoGenCharacterTests::TestCharacterClientGetCharacterData);

    AddTest("TestCharacterClientGetCharacterLeaderboard", &AutoGenCharacterTests::TestCharacterClientGetCharacterLeaderboard);

    AddTest("TestCharacterClientGetCharacterReadOnlyData", &AutoGenCharacterTests::TestCharacterClientGetCharacterReadOnlyData);

    AddTest("TestCharacterClientGetCharacterStatistics", &AutoGenCharacterTests::TestCharacterClientGetCharacterStatistics);

    AddTest("TestCharacterClientGetLeaderboardAroundCharacter", &AutoGenCharacterTests::TestCharacterClientGetLeaderboardAroundCharacter);

    AddTest("TestCharacterClientGetLeaderboardForUserCharacters", &AutoGenCharacterTests::TestCharacterClientGetLeaderboardForUserCharacters);

    AddTest("TestCharacterClientGrantCharacterToUser", &AutoGenCharacterTests::TestCharacterClientGrantCharacterToUser);

    AddTest("TestCharacterClientUpdateCharacterData", &AutoGenCharacterTests::TestCharacterClientUpdateCharacterData);

    AddTest("TestCharacterClientUpdateCharacterStatistics", &AutoGenCharacterTests::TestCharacterClientUpdateCharacterStatistics);

    AddTest("TestCharacterServerDeleteCharacterFromUser", &AutoGenCharacterTests::TestCharacterServerDeleteCharacterFromUser);

    AddTest("TestCharacterServerGetAllUsersCharacters", &AutoGenCharacterTests::TestCharacterServerGetAllUsersCharacters);

    AddTest("TestCharacterServerGetCharacterData", &AutoGenCharacterTests::TestCharacterServerGetCharacterData);

    AddTest("TestCharacterServerGetCharacterInternalData", &AutoGenCharacterTests::TestCharacterServerGetCharacterInternalData);

    AddTest("TestCharacterServerGetCharacterLeaderboard", &AutoGenCharacterTests::TestCharacterServerGetCharacterLeaderboard);

    AddTest("TestCharacterServerGetCharacterReadOnlyData", &AutoGenCharacterTests::TestCharacterServerGetCharacterReadOnlyData);

    AddTest("TestCharacterServerGetCharacterStatistics", &AutoGenCharacterTests::TestCharacterServerGetCharacterStatistics);

    AddTest("TestCharacterServerGetLeaderboardAroundCharacter", &AutoGenCharacterTests::TestCharacterServerGetLeaderboardAroundCharacter);

    AddTest("TestCharacterServerGetLeaderboardForUserCharacters", &AutoGenCharacterTests::TestCharacterServerGetLeaderboardForUserCharacters);

    AddTest("TestCharacterServerGrantCharacterToUser", &AutoGenCharacterTests::TestCharacterServerGrantCharacterToUser);

    AddTest("TestCharacterServerUpdateCharacterData", &AutoGenCharacterTests::TestCharacterServerUpdateCharacterData);

    AddTest("TestCharacterServerUpdateCharacterInternalData", &AutoGenCharacterTests::TestCharacterServerUpdateCharacterInternalData);

    AddTest("TestCharacterServerUpdateCharacterReadOnlyData", &AutoGenCharacterTests::TestCharacterServerUpdateCharacterReadOnlyData);

    AddTest("TestCharacterServerUpdateCharacterStatistics", &AutoGenCharacterTests::TestCharacterServerUpdateCharacterStatistics);
}

void AutoGenCharacterTests::ClassSetUp()
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

void AutoGenCharacterTests::ClassTearDown()
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

void AutoGenCharacterTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminResetCharacterStatistics

void AutoGenCharacterTests::TestCharacterAdminResetCharacterStatistics(TestContext& testContext)
{
    struct AdminResetCharacterStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminResetCharacterStatisticsResult>>(testContext);

    PlayFab::CharacterModels::ResetCharacterStatisticsRequest request;
    FillResetCharacterStatisticsRequest( &request );
    LogResetCharacterStatisticsRequest( &request, "TestCharacterAdminResetCharacterStatistics" );
    HRESULT hr = PFCharacterAdminResetCharacterStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterAdminResetCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetAllUsersCharacters

void AutoGenCharacterTests::TestCharacterClientGetAllUsersCharacters(TestContext& testContext)
{
    struct ClientGetAllUsersCharactersResult : public XAsyncResult
    {
        PFCharacterListUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetAllUsersCharactersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetAllUsersCharactersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterListUsersCharactersResult( result );
            return ValidatePFCharacterListUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetAllUsersCharactersResult>>(testContext);

    PlayFab::CharacterModels::ListUsersCharactersRequest request;
    FillListUsersCharactersRequest( &request );
    LogListUsersCharactersRequest( &request, "TestCharacterClientGetAllUsersCharacters" );
    HRESULT hr = PFCharacterClientGetAllUsersCharactersAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetAllUsersCharactersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetCharacterData

void AutoGenCharacterTests::TestCharacterClientGetCharacterData(TestContext& testContext)
{
    struct ClientGetCharacterDataResult : public XAsyncResult
    {
        PFCharacterClientGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetCharacterDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetCharacterDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterClientGetCharacterDataResult( result );
            return ValidatePFCharacterClientGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCharacterDataResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterDataRequest request;
    FillGetCharacterDataRequest( &request );
    LogGetCharacterDataRequest( &request, "TestCharacterClientGetCharacterData" );
    HRESULT hr = PFCharacterClientGetCharacterDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetCharacterDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetCharacterLeaderboard

void AutoGenCharacterTests::TestCharacterClientGetCharacterLeaderboard(TestContext& testContext)
{
    struct ClientGetCharacterLeaderboardResult : public XAsyncResult
    {
        PFCharacterGetCharacterLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetCharacterLeaderboardGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetCharacterLeaderboardGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterGetCharacterLeaderboardResult( result );
            return ValidatePFCharacterGetCharacterLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCharacterLeaderboardResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterLeaderboardRequest request;
    FillGetCharacterLeaderboardRequest( &request );
    LogGetCharacterLeaderboardRequest( &request, "TestCharacterClientGetCharacterLeaderboard" );
    HRESULT hr = PFCharacterClientGetCharacterLeaderboardAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetCharacterLeaderboardAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetCharacterReadOnlyData

void AutoGenCharacterTests::TestCharacterClientGetCharacterReadOnlyData(TestContext& testContext)
{
    struct ClientGetCharacterReadOnlyDataResult : public XAsyncResult
    {
        PFCharacterClientGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetCharacterReadOnlyDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetCharacterReadOnlyDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterClientGetCharacterDataResult( result );
            return ValidatePFCharacterClientGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCharacterReadOnlyDataResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterDataRequest request;
    FillGetCharacterDataRequest( &request );
    LogGetCharacterDataRequest( &request, "TestCharacterClientGetCharacterReadOnlyData" );
    HRESULT hr = PFCharacterClientGetCharacterReadOnlyDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetCharacterReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetCharacterStatistics

void AutoGenCharacterTests::TestCharacterClientGetCharacterStatistics(TestContext& testContext)
{
    struct ClientGetCharacterStatisticsResult : public XAsyncResult
    {
        PFCharacterClientGetCharacterStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetCharacterStatisticsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetCharacterStatisticsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterClientGetCharacterStatisticsResult( result );
            return ValidatePFCharacterClientGetCharacterStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCharacterStatisticsResult>>(testContext);

    PlayFab::CharacterModels::ClientGetCharacterStatisticsRequest request;
    FillClientGetCharacterStatisticsRequest( &request );
    LogClientGetCharacterStatisticsRequest( &request, "TestCharacterClientGetCharacterStatistics" );
    HRESULT hr = PFCharacterClientGetCharacterStatisticsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetLeaderboardAroundCharacter

void AutoGenCharacterTests::TestCharacterClientGetLeaderboardAroundCharacter(TestContext& testContext)
{
    struct ClientGetLeaderboardAroundCharacterResult : public XAsyncResult
    {
        PFCharacterGetLeaderboardAroundCharacterResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetLeaderboardAroundCharacterGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetLeaderboardAroundCharacterGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterGetLeaderboardAroundCharacterResult( result );
            return ValidatePFCharacterGetLeaderboardAroundCharacterResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetLeaderboardAroundCharacterResult>>(testContext);

    PlayFab::CharacterModels::ClientGetLeaderboardAroundCharacterRequest request;
    FillClientGetLeaderboardAroundCharacterRequest( &request );
    LogClientGetLeaderboardAroundCharacterRequest( &request, "TestCharacterClientGetLeaderboardAroundCharacter" );
    HRESULT hr = PFCharacterClientGetLeaderboardAroundCharacterAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetLeaderboardAroundCharacterAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetLeaderboardForUserCharacters

void AutoGenCharacterTests::TestCharacterClientGetLeaderboardForUserCharacters(TestContext& testContext)
{
    struct ClientGetLeaderboardForUserCharactersResult : public XAsyncResult
    {
        PFCharacterGetLeaderboardForUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGetLeaderboardForUserCharactersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGetLeaderboardForUserCharactersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterGetLeaderboardForUsersCharactersResult( result );
            return ValidatePFCharacterGetLeaderboardForUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetLeaderboardForUserCharactersResult>>(testContext);

    PlayFab::CharacterModels::ClientGetLeaderboardForUsersCharactersRequest request;
    FillClientGetLeaderboardForUsersCharactersRequest( &request );
    LogClientGetLeaderboardForUsersCharactersRequest( &request, "TestCharacterClientGetLeaderboardForUserCharacters" );
    HRESULT hr = PFCharacterClientGetLeaderboardForUserCharactersAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGetLeaderboardForUserCharactersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGrantCharacterToUser

void AutoGenCharacterTests::TestCharacterClientGrantCharacterToUser(TestContext& testContext)
{
    struct ClientGrantCharacterToUserResult : public XAsyncResult
    {
        PFCharacterClientGrantCharacterToUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterClientGrantCharacterToUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterClientGrantCharacterToUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterClientGrantCharacterToUserResult( result );
            return ValidatePFCharacterClientGrantCharacterToUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGrantCharacterToUserResult>>(testContext);

    PlayFab::CharacterModels::ClientGrantCharacterToUserRequest request;
    FillClientGrantCharacterToUserRequest( &request );
    LogClientGrantCharacterToUserRequest( &request, "TestCharacterClientGrantCharacterToUser" );
    HRESULT hr = PFCharacterClientGrantCharacterToUserAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientGrantCharacterToUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientUpdateCharacterData

void AutoGenCharacterTests::TestCharacterClientUpdateCharacterData(TestContext& testContext)
{
    struct ClientUpdateCharacterDataResult : public XAsyncResult
    {
        PFCharacterUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCharacterClientUpdateCharacterDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterUpdateCharacterDataResult( &result );
            return ValidatePFCharacterUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientUpdateCharacterDataResult>>(testContext);

    PlayFab::CharacterModels::ClientUpdateCharacterDataRequest request;
    FillClientUpdateCharacterDataRequest( &request );
    LogClientUpdateCharacterDataRequest( &request, "TestCharacterClientUpdateCharacterData" );
    HRESULT hr = PFCharacterClientUpdateCharacterDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientUpdateCharacterDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientUpdateCharacterStatistics

void AutoGenCharacterTests::TestCharacterClientUpdateCharacterStatistics(TestContext& testContext)
{
    struct ClientUpdateCharacterStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientUpdateCharacterStatisticsResult>>(testContext);

    PlayFab::CharacterModels::ClientUpdateCharacterStatisticsRequest request;
    FillClientUpdateCharacterStatisticsRequest( &request );
    LogClientUpdateCharacterStatisticsRequest( &request, "TestCharacterClientUpdateCharacterStatistics" );
    HRESULT hr = PFCharacterClientUpdateCharacterStatisticsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterClientUpdateCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerDeleteCharacterFromUser

void AutoGenCharacterTests::TestCharacterServerDeleteCharacterFromUser(TestContext& testContext)
{
    struct ServerDeleteCharacterFromUserResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerDeleteCharacterFromUserResult>>(testContext);

    PlayFab::CharacterModels::DeleteCharacterFromUserRequest request;
    FillDeleteCharacterFromUserRequest( &request );
    LogDeleteCharacterFromUserRequest( &request, "TestCharacterServerDeleteCharacterFromUser" );
    HRESULT hr = PFCharacterServerDeleteCharacterFromUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerDeleteCharacterFromUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetAllUsersCharacters

void AutoGenCharacterTests::TestCharacterServerGetAllUsersCharacters(TestContext& testContext)
{
    struct ServerGetAllUsersCharactersResult : public XAsyncResult
    {
        PFCharacterListUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetAllUsersCharactersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetAllUsersCharactersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterListUsersCharactersResult( result );
            return ValidatePFCharacterListUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetAllUsersCharactersResult>>(testContext);

    PlayFab::CharacterModels::ListUsersCharactersRequest request;
    FillListUsersCharactersRequest( &request );
    LogListUsersCharactersRequest( &request, "TestCharacterServerGetAllUsersCharacters" );
    HRESULT hr = PFCharacterServerGetAllUsersCharactersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetAllUsersCharactersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetCharacterData

void AutoGenCharacterTests::TestCharacterServerGetCharacterData(TestContext& testContext)
{
    struct ServerGetCharacterDataResult : public XAsyncResult
    {
        PFCharacterServerGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetCharacterDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetCharacterDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterServerGetCharacterDataResult( result );
            return ValidatePFCharacterServerGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCharacterDataResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterDataRequest request;
    FillGetCharacterDataRequest( &request );
    LogGetCharacterDataRequest( &request, "TestCharacterServerGetCharacterData" );
    HRESULT hr = PFCharacterServerGetCharacterDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetCharacterDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetCharacterInternalData

void AutoGenCharacterTests::TestCharacterServerGetCharacterInternalData(TestContext& testContext)
{
    struct ServerGetCharacterInternalDataResult : public XAsyncResult
    {
        PFCharacterServerGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetCharacterInternalDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetCharacterInternalDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterServerGetCharacterDataResult( result );
            return ValidatePFCharacterServerGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCharacterInternalDataResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterDataRequest request;
    FillGetCharacterDataRequest( &request );
    LogGetCharacterDataRequest( &request, "TestCharacterServerGetCharacterInternalData" );
    HRESULT hr = PFCharacterServerGetCharacterInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetCharacterInternalDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetCharacterLeaderboard

void AutoGenCharacterTests::TestCharacterServerGetCharacterLeaderboard(TestContext& testContext)
{
    struct ServerGetCharacterLeaderboardResult : public XAsyncResult
    {
        PFCharacterGetCharacterLeaderboardResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetCharacterLeaderboardGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetCharacterLeaderboardGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterGetCharacterLeaderboardResult( result );
            return ValidatePFCharacterGetCharacterLeaderboardResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCharacterLeaderboardResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterLeaderboardRequest request;
    FillGetCharacterLeaderboardRequest( &request );
    LogGetCharacterLeaderboardRequest( &request, "TestCharacterServerGetCharacterLeaderboard" );
    HRESULT hr = PFCharacterServerGetCharacterLeaderboardAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetCharacterLeaderboardAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetCharacterReadOnlyData

void AutoGenCharacterTests::TestCharacterServerGetCharacterReadOnlyData(TestContext& testContext)
{
    struct ServerGetCharacterReadOnlyDataResult : public XAsyncResult
    {
        PFCharacterServerGetCharacterDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetCharacterReadOnlyDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetCharacterReadOnlyDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterServerGetCharacterDataResult( result );
            return ValidatePFCharacterServerGetCharacterDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCharacterReadOnlyDataResult>>(testContext);

    PlayFab::CharacterModels::GetCharacterDataRequest request;
    FillGetCharacterDataRequest( &request );
    LogGetCharacterDataRequest( &request, "TestCharacterServerGetCharacterReadOnlyData" );
    HRESULT hr = PFCharacterServerGetCharacterReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetCharacterReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetCharacterStatistics

void AutoGenCharacterTests::TestCharacterServerGetCharacterStatistics(TestContext& testContext)
{
    struct ServerGetCharacterStatisticsResult : public XAsyncResult
    {
        PFCharacterServerGetCharacterStatisticsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetCharacterStatisticsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetCharacterStatisticsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterServerGetCharacterStatisticsResult( result );
            return ValidatePFCharacterServerGetCharacterStatisticsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCharacterStatisticsResult>>(testContext);

    PlayFab::CharacterModels::ServerGetCharacterStatisticsRequest request;
    FillServerGetCharacterStatisticsRequest( &request );
    LogServerGetCharacterStatisticsRequest( &request, "TestCharacterServerGetCharacterStatistics" );
    HRESULT hr = PFCharacterServerGetCharacterStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetLeaderboardAroundCharacter

void AutoGenCharacterTests::TestCharacterServerGetLeaderboardAroundCharacter(TestContext& testContext)
{
    struct ServerGetLeaderboardAroundCharacterResult : public XAsyncResult
    {
        PFCharacterGetLeaderboardAroundCharacterResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetLeaderboardAroundCharacterGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetLeaderboardAroundCharacterGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterGetLeaderboardAroundCharacterResult( result );
            return ValidatePFCharacterGetLeaderboardAroundCharacterResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetLeaderboardAroundCharacterResult>>(testContext);

    PlayFab::CharacterModels::ServerGetLeaderboardAroundCharacterRequest request;
    FillServerGetLeaderboardAroundCharacterRequest( &request );
    LogServerGetLeaderboardAroundCharacterRequest( &request, "TestCharacterServerGetLeaderboardAroundCharacter" );
    HRESULT hr = PFCharacterServerGetLeaderboardAroundCharacterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetLeaderboardAroundCharacterAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetLeaderboardForUserCharacters

void AutoGenCharacterTests::TestCharacterServerGetLeaderboardForUserCharacters(TestContext& testContext)
{
    struct ServerGetLeaderboardForUserCharactersResult : public XAsyncResult
    {
        PFCharacterGetLeaderboardForUsersCharactersResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGetLeaderboardForUserCharactersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGetLeaderboardForUserCharactersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterGetLeaderboardForUsersCharactersResult( result );
            return ValidatePFCharacterGetLeaderboardForUsersCharactersResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetLeaderboardForUserCharactersResult>>(testContext);

    PlayFab::CharacterModels::ServerGetLeaderboardForUsersCharactersRequest request;
    FillServerGetLeaderboardForUsersCharactersRequest( &request );
    LogServerGetLeaderboardForUsersCharactersRequest( &request, "TestCharacterServerGetLeaderboardForUserCharacters" );
    HRESULT hr = PFCharacterServerGetLeaderboardForUserCharactersAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGetLeaderboardForUserCharactersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGrantCharacterToUser

void AutoGenCharacterTests::TestCharacterServerGrantCharacterToUser(TestContext& testContext)
{
    struct ServerGrantCharacterToUserResult : public XAsyncResult
    {
        PFCharacterServerGrantCharacterToUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFCharacterServerGrantCharacterToUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFCharacterServerGrantCharacterToUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterServerGrantCharacterToUserResult( result );
            return ValidatePFCharacterServerGrantCharacterToUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGrantCharacterToUserResult>>(testContext);

    PlayFab::CharacterModels::ServerGrantCharacterToUserRequest request;
    FillServerGrantCharacterToUserRequest( &request );
    LogServerGrantCharacterToUserRequest( &request, "TestCharacterServerGrantCharacterToUser" );
    HRESULT hr = PFCharacterServerGrantCharacterToUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerGrantCharacterToUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerUpdateCharacterData

void AutoGenCharacterTests::TestCharacterServerUpdateCharacterData(TestContext& testContext)
{
    struct ServerUpdateCharacterDataResult : public XAsyncResult
    {
        PFCharacterUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCharacterServerUpdateCharacterDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterUpdateCharacterDataResult( &result );
            return ValidatePFCharacterUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateCharacterDataResult>>(testContext);

    PlayFab::CharacterModels::ServerUpdateCharacterDataRequest request;
    FillServerUpdateCharacterDataRequest( &request );
    LogServerUpdateCharacterDataRequest( &request, "TestCharacterServerUpdateCharacterData" );
    HRESULT hr = PFCharacterServerUpdateCharacterDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerUpdateCharacterDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerUpdateCharacterInternalData

void AutoGenCharacterTests::TestCharacterServerUpdateCharacterInternalData(TestContext& testContext)
{
    struct ServerUpdateCharacterInternalDataResult : public XAsyncResult
    {
        PFCharacterUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCharacterServerUpdateCharacterInternalDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterUpdateCharacterDataResult( &result );
            return ValidatePFCharacterUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateCharacterInternalDataResult>>(testContext);

    PlayFab::CharacterModels::ServerUpdateCharacterDataRequest request;
    FillServerUpdateCharacterDataRequest( &request );
    LogServerUpdateCharacterDataRequest( &request, "TestCharacterServerUpdateCharacterInternalData" );
    HRESULT hr = PFCharacterServerUpdateCharacterInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerUpdateCharacterInternalDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerUpdateCharacterReadOnlyData

void AutoGenCharacterTests::TestCharacterServerUpdateCharacterReadOnlyData(TestContext& testContext)
{
    struct ServerUpdateCharacterReadOnlyDataResult : public XAsyncResult
    {
        PFCharacterUpdateCharacterDataResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFCharacterServerUpdateCharacterReadOnlyDataGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFCharacterUpdateCharacterDataResult( &result );
            return ValidatePFCharacterUpdateCharacterDataResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerUpdateCharacterReadOnlyDataResult>>(testContext);

    PlayFab::CharacterModels::ServerUpdateCharacterDataRequest request;
    FillServerUpdateCharacterDataRequest( &request );
    LogServerUpdateCharacterDataRequest( &request, "TestCharacterServerUpdateCharacterReadOnlyData" );
    HRESULT hr = PFCharacterServerUpdateCharacterReadOnlyDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerUpdateCharacterReadOnlyDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerUpdateCharacterStatistics

void AutoGenCharacterTests::TestCharacterServerUpdateCharacterStatistics(TestContext& testContext)
{
    struct ServerUpdateCharacterStatisticsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerUpdateCharacterStatisticsResult>>(testContext);

    PlayFab::CharacterModels::ServerUpdateCharacterStatisticsRequest request;
    FillServerUpdateCharacterStatisticsRequest( &request );
    LogServerUpdateCharacterStatisticsRequest( &request, "TestCharacterServerUpdateCharacterStatistics" );
    HRESULT hr = PFCharacterServerUpdateCharacterStatisticsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFCharacterCharacterServerUpdateCharacterStatisticsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
