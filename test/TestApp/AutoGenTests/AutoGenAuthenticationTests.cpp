#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAuthenticationTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenAuthenticationTests::AuthenticationTestData AutoGenAuthenticationTests::testData;

void AutoGenAuthenticationTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenAuthenticationTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenAuthenticationTests::AddTests()
{
    // Generated tests 
    AddTest("TestAuthenticationAdminCreateOpenIdConnection", &AutoGenAuthenticationTests::TestAuthenticationAdminCreateOpenIdConnection);

    AddTest("TestAuthenticationAdminCreatePlayerSharedSecret", &AutoGenAuthenticationTests::TestAuthenticationAdminCreatePlayerSharedSecret);

    AddTest("TestAuthenticationAdminDeleteOpenIdConnection", &AutoGenAuthenticationTests::TestAuthenticationAdminDeleteOpenIdConnection);

    AddTest("TestAuthenticationAdminDeletePlayerSharedSecret", &AutoGenAuthenticationTests::TestAuthenticationAdminDeletePlayerSharedSecret);

    AddTest("TestAuthenticationAdminGetPlayerSharedSecrets", &AutoGenAuthenticationTests::TestAuthenticationAdminGetPlayerSharedSecrets);

    AddTest("TestAuthenticationAdminGetPolicy", &AutoGenAuthenticationTests::TestAuthenticationAdminGetPolicy);

    AddTest("TestAuthenticationAdminListOpenIdConnection", &AutoGenAuthenticationTests::TestAuthenticationAdminListOpenIdConnection);

    AddTest("TestAuthenticationAdminSetPlayerSecret", &AutoGenAuthenticationTests::TestAuthenticationAdminSetPlayerSecret);

    AddTest("TestAuthenticationAdminUpdateOpenIdConnection", &AutoGenAuthenticationTests::TestAuthenticationAdminUpdateOpenIdConnection);

    AddTest("TestAuthenticationAdminUpdatePlayerSharedSecret", &AutoGenAuthenticationTests::TestAuthenticationAdminUpdatePlayerSharedSecret);

    AddTest("TestAuthenticationAdminUpdatePolicy", &AutoGenAuthenticationTests::TestAuthenticationAdminUpdatePolicy);

    AddTest("TestAuthenticationClientGetPhotonAuthenticationToken", &AutoGenAuthenticationTests::TestAuthenticationClientGetPhotonAuthenticationToken);

    AddTest("TestAuthenticationClientGetTitlePublicKey", &AutoGenAuthenticationTests::TestAuthenticationClientGetTitlePublicKey);

    AddTest("TestAuthenticationClientLoginWithAndroidDeviceID", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithAndroidDeviceID);

    AddTest("TestAuthenticationClientLoginWithApple", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithApple);

    AddTest("TestAuthenticationClientLoginWithCustomID", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithCustomID);

    AddTest("TestAuthenticationClientLoginWithEmailAddress", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithEmailAddress);

    AddTest("TestAuthenticationClientLoginWithFacebook", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithFacebook);

    AddTest("TestAuthenticationClientLoginWithFacebookInstantGamesId", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithFacebookInstantGamesId);

    AddTest("TestAuthenticationClientLoginWithGameCenter", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithGameCenter);

    AddTest("TestAuthenticationClientLoginWithGoogleAccount", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithGoogleAccount);

    AddTest("TestAuthenticationClientLoginWithIOSDeviceID", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithIOSDeviceID);

    AddTest("TestAuthenticationClientLoginWithKongregate", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithKongregate);

    AddTest("TestAuthenticationClientLoginWithNintendoServiceAccount", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithNintendoServiceAccount);

    AddTest("TestAuthenticationClientLoginWithNintendoSwitchDeviceId", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithNintendoSwitchDeviceId);

    AddTest("TestAuthenticationClientLoginWithOpenIdConnect", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithOpenIdConnect);

    AddTest("TestAuthenticationClientLoginWithPlayFab", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithPlayFab);

    AddTest("TestAuthenticationClientLoginWithPSN", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithPSN);

    AddTest("TestAuthenticationClientLoginWithSteam", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithSteam);

    AddTest("TestAuthenticationClientLoginWithTwitch", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithTwitch);

    AddTest("TestAuthenticationClientLoginWithXbox", &AutoGenAuthenticationTests::TestAuthenticationClientLoginWithXbox);

    AddTest("TestAuthenticationClientRegisterPlayFabUser", &AutoGenAuthenticationTests::TestAuthenticationClientRegisterPlayFabUser);

    AddTest("TestAuthenticationClientSetPlayerSecret", &AutoGenAuthenticationTests::TestAuthenticationClientSetPlayerSecret);

    AddTest("TestAuthenticationServerAuthenticateSessionTicket", &AutoGenAuthenticationTests::TestAuthenticationServerAuthenticateSessionTicket);

    AddTest("TestAuthenticationServerLoginWithServerCustomId", &AutoGenAuthenticationTests::TestAuthenticationServerLoginWithServerCustomId);

    AddTest("TestAuthenticationServerLoginWithSteamId", &AutoGenAuthenticationTests::TestAuthenticationServerLoginWithSteamId);

    AddTest("TestAuthenticationServerLoginWithXbox", &AutoGenAuthenticationTests::TestAuthenticationServerLoginWithXbox);

    AddTest("TestAuthenticationServerLoginWithXboxId", &AutoGenAuthenticationTests::TestAuthenticationServerLoginWithXboxId);

    AddTest("TestAuthenticationServerSetPlayerSecret", &AutoGenAuthenticationTests::TestAuthenticationServerSetPlayerSecret);

    AddTest("TestAuthenticationGetEntityToken", &AutoGenAuthenticationTests::TestAuthenticationGetEntityToken);

    AddTest("TestAuthenticationValidateEntityToken", &AutoGenAuthenticationTests::TestAuthenticationValidateEntityToken);
}

void AutoGenAuthenticationTests::ClassSetUp()
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

void AutoGenAuthenticationTests::ClassTearDown()
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

void AutoGenAuthenticationTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminCreateOpenIdConnection

void AutoGenAuthenticationTests::TestAuthenticationAdminCreateOpenIdConnection(TestContext& testContext)
{
    struct AdminCreateOpenIdConnectionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminCreateOpenIdConnectionResult>>(testContext);

    PlayFab::AuthenticationModels::CreateOpenIdConnectionRequest request;
    FillCreateOpenIdConnectionRequest( &request );
    LogCreateOpenIdConnectionRequest( &request, "TestAuthenticationAdminCreateOpenIdConnection" );
    HRESULT hr = PFAuthenticationAdminCreateOpenIdConnectionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminCreateOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminCreatePlayerSharedSecret

void AutoGenAuthenticationTests::TestAuthenticationAdminCreatePlayerSharedSecret(TestContext& testContext)
{
    struct AdminCreatePlayerSharedSecretResult : public XAsyncResult
    {
        PFAuthenticationCreatePlayerSharedSecretResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationAdminCreatePlayerSharedSecretGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationAdminCreatePlayerSharedSecretGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationCreatePlayerSharedSecretResult( result );
            return ValidatePFAuthenticationCreatePlayerSharedSecretResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCreatePlayerSharedSecretResult>>(testContext);

    PlayFab::AuthenticationModels::CreatePlayerSharedSecretRequest request;
    FillCreatePlayerSharedSecretRequest( &request );
    LogCreatePlayerSharedSecretRequest( &request, "TestAuthenticationAdminCreatePlayerSharedSecret" );
    HRESULT hr = PFAuthenticationAdminCreatePlayerSharedSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminCreatePlayerSharedSecretAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminDeleteOpenIdConnection

void AutoGenAuthenticationTests::TestAuthenticationAdminDeleteOpenIdConnection(TestContext& testContext)
{
    struct AdminDeleteOpenIdConnectionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeleteOpenIdConnectionResult>>(testContext);

    PlayFab::AuthenticationModels::DeleteOpenIdConnectionRequest request;
    FillDeleteOpenIdConnectionRequest( &request );
    LogDeleteOpenIdConnectionRequest( &request, "TestAuthenticationAdminDeleteOpenIdConnection" );
    HRESULT hr = PFAuthenticationAdminDeleteOpenIdConnectionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminDeleteOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminDeletePlayerSharedSecret

void AutoGenAuthenticationTests::TestAuthenticationAdminDeletePlayerSharedSecret(TestContext& testContext)
{
    struct AdminDeletePlayerSharedSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeletePlayerSharedSecretResult>>(testContext);

    PlayFab::AuthenticationModels::DeletePlayerSharedSecretRequest request;
    FillDeletePlayerSharedSecretRequest( &request );
    LogDeletePlayerSharedSecretRequest( &request, "TestAuthenticationAdminDeletePlayerSharedSecret" );
    HRESULT hr = PFAuthenticationAdminDeletePlayerSharedSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminDeletePlayerSharedSecretAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetPlayerSharedSecrets

void AutoGenAuthenticationTests::TestAuthenticationAdminGetPlayerSharedSecrets(TestContext& testContext)
{
    struct AdminGetPlayerSharedSecretsResult : public XAsyncResult
    {
        PFAuthenticationGetPlayerSharedSecretsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationAdminGetPlayerSharedSecretsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationAdminGetPlayerSharedSecretsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationGetPlayerSharedSecretsResult( result );
            return ValidatePFAuthenticationGetPlayerSharedSecretsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPlayerSharedSecretsResult>>(testContext);

    HRESULT hr = PFAuthenticationAdminGetPlayerSharedSecretsAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminGetPlayerSharedSecretsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetPolicy

void AutoGenAuthenticationTests::TestAuthenticationAdminGetPolicy(TestContext& testContext)
{
    struct AdminGetPolicyResult : public XAsyncResult
    {
        PFAuthenticationGetPolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationAdminGetPolicyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationAdminGetPolicyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationGetPolicyResponse( result );
            return ValidatePFAuthenticationGetPolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPolicyResult>>(testContext);

    PlayFab::AuthenticationModels::GetPolicyRequest request;
    FillGetPolicyRequest( &request );
    LogGetPolicyRequest( &request, "TestAuthenticationAdminGetPolicy" );
    HRESULT hr = PFAuthenticationAdminGetPolicyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminGetPolicyAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminListOpenIdConnection

void AutoGenAuthenticationTests::TestAuthenticationAdminListOpenIdConnection(TestContext& testContext)
{
    struct AdminListOpenIdConnectionResult : public XAsyncResult
    {
        PFAuthenticationListOpenIdConnectionResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationAdminListOpenIdConnectionGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationAdminListOpenIdConnectionGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationListOpenIdConnectionResponse( result );
            return ValidatePFAuthenticationListOpenIdConnectionResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminListOpenIdConnectionResult>>(testContext);

    HRESULT hr = PFAuthenticationAdminListOpenIdConnectionAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminListOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetPlayerSecret

void AutoGenAuthenticationTests::TestAuthenticationAdminSetPlayerSecret(TestContext& testContext)
{
    struct AdminSetPlayerSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetPlayerSecretResult>>(testContext);

    PlayFab::AuthenticationModels::AdminSetPlayerSecretRequest request;
    FillAdminSetPlayerSecretRequest( &request );
    LogAdminSetPlayerSecretRequest( &request, "TestAuthenticationAdminSetPlayerSecret" );
    HRESULT hr = PFAuthenticationAdminSetPlayerSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminSetPlayerSecretAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdateOpenIdConnection

void AutoGenAuthenticationTests::TestAuthenticationAdminUpdateOpenIdConnection(TestContext& testContext)
{
    struct AdminUpdateOpenIdConnectionResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminUpdateOpenIdConnectionResult>>(testContext);

    PlayFab::AuthenticationModels::UpdateOpenIdConnectionRequest request;
    FillUpdateOpenIdConnectionRequest( &request );
    LogUpdateOpenIdConnectionRequest( &request, "TestAuthenticationAdminUpdateOpenIdConnection" );
    HRESULT hr = PFAuthenticationAdminUpdateOpenIdConnectionAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminUpdateOpenIdConnectionAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdatePlayerSharedSecret

void AutoGenAuthenticationTests::TestAuthenticationAdminUpdatePlayerSharedSecret(TestContext& testContext)
{
    struct AdminUpdatePlayerSharedSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminUpdatePlayerSharedSecretResult>>(testContext);

    PlayFab::AuthenticationModels::UpdatePlayerSharedSecretRequest request;
    FillUpdatePlayerSharedSecretRequest( &request );
    LogUpdatePlayerSharedSecretRequest( &request, "TestAuthenticationAdminUpdatePlayerSharedSecret" );
    HRESULT hr = PFAuthenticationAdminUpdatePlayerSharedSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminUpdatePlayerSharedSecretAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdatePolicy

void AutoGenAuthenticationTests::TestAuthenticationAdminUpdatePolicy(TestContext& testContext)
{
    struct AdminUpdatePolicyResult : public XAsyncResult
    {
        PFAuthenticationUpdatePolicyResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationAdminUpdatePolicyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationAdminUpdatePolicyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationUpdatePolicyResponse( result );
            return ValidatePFAuthenticationUpdatePolicyResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdatePolicyResult>>(testContext);

    PlayFab::AuthenticationModels::UpdatePolicyRequest request;
    FillUpdatePolicyRequest( &request );
    LogUpdatePolicyRequest( &request, "TestAuthenticationAdminUpdatePolicy" );
    HRESULT hr = PFAuthenticationAdminUpdatePolicyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationAdminUpdatePolicyAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetPhotonAuthenticationToken

void AutoGenAuthenticationTests::TestAuthenticationClientGetPhotonAuthenticationToken(TestContext& testContext)
{
    struct ClientGetPhotonAuthenticationTokenResult : public XAsyncResult
    {
        PFAuthenticationGetPhotonAuthenticationTokenResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientGetPhotonAuthenticationTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientGetPhotonAuthenticationTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationGetPhotonAuthenticationTokenResult( result );
            return ValidatePFAuthenticationGetPhotonAuthenticationTokenResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPhotonAuthenticationTokenResult>>(testContext);

    PlayFab::AuthenticationModels::GetPhotonAuthenticationTokenRequest request;
    FillGetPhotonAuthenticationTokenRequest( &request );
    LogGetPhotonAuthenticationTokenRequest( &request, "TestAuthenticationClientGetPhotonAuthenticationToken" );
    HRESULT hr = PFAuthenticationClientGetPhotonAuthenticationTokenAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientGetPhotonAuthenticationTokenAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetTitlePublicKey

void AutoGenAuthenticationTests::TestAuthenticationClientGetTitlePublicKey(TestContext& testContext)
{
    struct ClientGetTitlePublicKeyResult : public XAsyncResult
    {
        PFAuthenticationGetTitlePublicKeyResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientGetTitlePublicKeyGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientGetTitlePublicKeyGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationGetTitlePublicKeyResult( result );
            return ValidatePFAuthenticationGetTitlePublicKeyResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetTitlePublicKeyResult>>(testContext);

    PlayFab::AuthenticationModels::GetTitlePublicKeyRequest request;
    FillGetTitlePublicKeyRequest( &request );
    LogGetTitlePublicKeyRequest( &request, "TestAuthenticationClientGetTitlePublicKey" );
    HRESULT hr = PFAuthenticationClientGetTitlePublicKeyAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientGetTitlePublicKeyAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithAndroidDeviceID

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithAndroidDeviceID(TestContext& testContext)
{
    struct ClientLoginWithAndroidDeviceIDResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithAndroidDeviceIDGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithAndroidDeviceIDGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithAndroidDeviceIDResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithAndroidDeviceIDRequest request;
    FillLoginWithAndroidDeviceIDRequest( &request );
    LogLoginWithAndroidDeviceIDRequest( &request, "TestAuthenticationClientLoginWithAndroidDeviceID" );
    HRESULT hr = PFAuthenticationClientLoginWithAndroidDeviceIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithAndroidDeviceIDAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithApple

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithApple(TestContext& testContext)
{
    struct ClientLoginWithAppleResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithAppleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithAppleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithAppleResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithAppleRequest request;
    FillLoginWithAppleRequest( &request );
    LogLoginWithAppleRequest( &request, "TestAuthenticationClientLoginWithApple" );
    HRESULT hr = PFAuthenticationClientLoginWithAppleAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithAppleAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithCustomID

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithCustomID(TestContext& testContext)
{
    struct ClientLoginWithCustomIDResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithCustomIDGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithCustomIDGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithCustomIDResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithCustomIDRequest request;
    FillLoginWithCustomIDRequest( &request );
    LogLoginWithCustomIDRequest( &request, "TestAuthenticationClientLoginWithCustomID" );
    HRESULT hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithCustomIDAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithEmailAddress

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithEmailAddress(TestContext& testContext)
{
    struct ClientLoginWithEmailAddressResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithEmailAddressGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithEmailAddressGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithEmailAddressResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithEmailAddressRequest request;
    FillLoginWithEmailAddressRequest( &request );
    LogLoginWithEmailAddressRequest( &request, "TestAuthenticationClientLoginWithEmailAddress" );
    HRESULT hr = PFAuthenticationClientLoginWithEmailAddressAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithEmailAddressAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithFacebook

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithFacebook(TestContext& testContext)
{
    struct ClientLoginWithFacebookResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithFacebookGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithFacebookGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithFacebookResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithFacebookRequest request;
    FillLoginWithFacebookRequest( &request );
    LogLoginWithFacebookRequest( &request, "TestAuthenticationClientLoginWithFacebook" );
    HRESULT hr = PFAuthenticationClientLoginWithFacebookAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithFacebookAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithFacebookInstantGamesId

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithFacebookInstantGamesId(TestContext& testContext)
{
    struct ClientLoginWithFacebookInstantGamesIdResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithFacebookInstantGamesIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithFacebookInstantGamesIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithFacebookInstantGamesIdResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithFacebookInstantGamesIdRequest request;
    FillLoginWithFacebookInstantGamesIdRequest( &request );
    LogLoginWithFacebookInstantGamesIdRequest( &request, "TestAuthenticationClientLoginWithFacebookInstantGamesId" );
    HRESULT hr = PFAuthenticationClientLoginWithFacebookInstantGamesIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithFacebookInstantGamesIdAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithGameCenter

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithGameCenter(TestContext& testContext)
{
    struct ClientLoginWithGameCenterResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithGameCenterGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithGameCenterGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithGameCenterResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithGameCenterRequest request;
    FillLoginWithGameCenterRequest( &request );
    LogLoginWithGameCenterRequest( &request, "TestAuthenticationClientLoginWithGameCenter" );
    HRESULT hr = PFAuthenticationClientLoginWithGameCenterAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithGameCenterAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithGoogleAccount

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithGoogleAccount(TestContext& testContext)
{
    struct ClientLoginWithGoogleAccountResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithGoogleAccountGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithGoogleAccountGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithGoogleAccountResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithGoogleAccountRequest request;
    FillLoginWithGoogleAccountRequest( &request );
    LogLoginWithGoogleAccountRequest( &request, "TestAuthenticationClientLoginWithGoogleAccount" );
    HRESULT hr = PFAuthenticationClientLoginWithGoogleAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithGoogleAccountAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithIOSDeviceID

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithIOSDeviceID(TestContext& testContext)
{
    struct ClientLoginWithIOSDeviceIDResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithIOSDeviceIDGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithIOSDeviceIDGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithIOSDeviceIDResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithIOSDeviceIDRequest request;
    FillLoginWithIOSDeviceIDRequest( &request );
    LogLoginWithIOSDeviceIDRequest( &request, "TestAuthenticationClientLoginWithIOSDeviceID" );
    HRESULT hr = PFAuthenticationClientLoginWithIOSDeviceIDAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithIOSDeviceIDAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithKongregate

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithKongregate(TestContext& testContext)
{
    struct ClientLoginWithKongregateResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithKongregateGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithKongregateGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithKongregateResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithKongregateRequest request;
    FillLoginWithKongregateRequest( &request );
    LogLoginWithKongregateRequest( &request, "TestAuthenticationClientLoginWithKongregate" );
    HRESULT hr = PFAuthenticationClientLoginWithKongregateAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithKongregateAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithNintendoServiceAccount

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithNintendoServiceAccount(TestContext& testContext)
{
    struct ClientLoginWithNintendoServiceAccountResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithNintendoServiceAccountGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithNintendoServiceAccountGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithNintendoServiceAccountResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithNintendoServiceAccountRequest request;
    FillLoginWithNintendoServiceAccountRequest( &request );
    LogLoginWithNintendoServiceAccountRequest( &request, "TestAuthenticationClientLoginWithNintendoServiceAccount" );
    HRESULT hr = PFAuthenticationClientLoginWithNintendoServiceAccountAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithNintendoServiceAccountAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithNintendoSwitchDeviceId

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithNintendoSwitchDeviceId(TestContext& testContext)
{
    struct ClientLoginWithNintendoSwitchDeviceIdResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithNintendoSwitchDeviceIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithNintendoSwitchDeviceIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithNintendoSwitchDeviceIdResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithNintendoSwitchDeviceIdRequest request;
    FillLoginWithNintendoSwitchDeviceIdRequest( &request );
    LogLoginWithNintendoSwitchDeviceIdRequest( &request, "TestAuthenticationClientLoginWithNintendoSwitchDeviceId" );
    HRESULT hr = PFAuthenticationClientLoginWithNintendoSwitchDeviceIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithNintendoSwitchDeviceIdAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithOpenIdConnect

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithOpenIdConnect(TestContext& testContext)
{
    struct ClientLoginWithOpenIdConnectResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithOpenIdConnectGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithOpenIdConnectGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithOpenIdConnectResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithOpenIdConnectRequest request;
    FillLoginWithOpenIdConnectRequest( &request );
    LogLoginWithOpenIdConnectRequest( &request, "TestAuthenticationClientLoginWithOpenIdConnect" );
    HRESULT hr = PFAuthenticationClientLoginWithOpenIdConnectAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithOpenIdConnectAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithPlayFab

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithPlayFab(TestContext& testContext)
{
    struct ClientLoginWithPlayFabResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithPlayFabGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithPlayFabGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithPlayFabResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithPlayFabRequest request;
    FillLoginWithPlayFabRequest( &request );
    LogLoginWithPlayFabRequest( &request, "TestAuthenticationClientLoginWithPlayFab" );
    HRESULT hr = PFAuthenticationClientLoginWithPlayFabAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithPlayFabAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithPSN

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithPSN(TestContext& testContext)
{
    struct ClientLoginWithPSNResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithPSNGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithPSNGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithPSNResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithPSNRequest request;
    FillLoginWithPSNRequest( &request );
    LogLoginWithPSNRequest( &request, "TestAuthenticationClientLoginWithPSN" );
    HRESULT hr = PFAuthenticationClientLoginWithPSNAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithPSNAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithSteam

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithSteam(TestContext& testContext)
{
    struct ClientLoginWithSteamResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithSteamGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithSteamGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithSteamResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithSteamRequest request;
    FillLoginWithSteamRequest( &request );
    LogLoginWithSteamRequest( &request, "TestAuthenticationClientLoginWithSteam" );
    HRESULT hr = PFAuthenticationClientLoginWithSteamAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithSteamAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithTwitch

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithTwitch(TestContext& testContext)
{
    struct ClientLoginWithTwitchResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithTwitchGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithTwitchGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithTwitchResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithTwitchRequest request;
    FillLoginWithTwitchRequest( &request );
    LogLoginWithTwitchRequest( &request, "TestAuthenticationClientLoginWithTwitch" );
    HRESULT hr = PFAuthenticationClientLoginWithTwitchAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithTwitchAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientLoginWithXbox

void AutoGenAuthenticationTests::TestAuthenticationClientLoginWithXbox(TestContext& testContext)
{
    struct ClientLoginWithXboxResult : public XAsyncResult
    {
        PFAuthenticationLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientLoginWithXboxGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientLoginWithXboxGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationLoginResult( result );
            return ValidatePFAuthenticationLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientLoginWithXboxResult>>(testContext);

    PlayFab::AuthenticationModels::ClientLoginWithXboxRequest request;
    FillClientLoginWithXboxRequest( &request );
    LogClientLoginWithXboxRequest( &request, "TestAuthenticationClientLoginWithXbox" );
    HRESULT hr = PFAuthenticationClientLoginWithXboxAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientLoginWithXboxAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientRegisterPlayFabUser

void AutoGenAuthenticationTests::TestAuthenticationClientRegisterPlayFabUser(TestContext& testContext)
{
    struct ClientRegisterPlayFabUserResult : public XAsyncResult
    {
        PFAuthenticationRegisterPlayFabUserResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationClientRegisterPlayFabUserGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationClientRegisterPlayFabUserGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationRegisterPlayFabUserResult( result );
            return ValidatePFAuthenticationRegisterPlayFabUserResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientRegisterPlayFabUserResult>>(testContext);

    PlayFab::AuthenticationModels::RegisterPlayFabUserRequest request;
    FillRegisterPlayFabUserRequest( &request );
    LogRegisterPlayFabUserRequest( &request, "TestAuthenticationClientRegisterPlayFabUser" );
    HRESULT hr = PFAuthenticationClientRegisterPlayFabUserAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientRegisterPlayFabUserAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientSetPlayerSecret

void AutoGenAuthenticationTests::TestAuthenticationClientSetPlayerSecret(TestContext& testContext)
{
    struct ClientSetPlayerSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientSetPlayerSecretResult>>(testContext);

    PlayFab::AuthenticationModels::ClientSetPlayerSecretRequest request;
    FillClientSetPlayerSecretRequest( &request );
    LogClientSetPlayerSecretRequest( &request, "TestAuthenticationClientSetPlayerSecret" );
    HRESULT hr = PFAuthenticationClientSetPlayerSecretAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationClientSetPlayerSecretAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerAuthenticateSessionTicket

void AutoGenAuthenticationTests::TestAuthenticationServerAuthenticateSessionTicket(TestContext& testContext)
{
    struct ServerAuthenticateSessionTicketResult : public XAsyncResult
    {
        PFAuthenticationAuthenticateSessionTicketResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationServerAuthenticateSessionTicketGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationServerAuthenticateSessionTicketGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationAuthenticateSessionTicketResult( result );
            return ValidatePFAuthenticationAuthenticateSessionTicketResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerAuthenticateSessionTicketResult>>(testContext);

    PlayFab::AuthenticationModels::AuthenticateSessionTicketRequest request;
    FillAuthenticateSessionTicketRequest( &request );
    LogAuthenticateSessionTicketRequest( &request, "TestAuthenticationServerAuthenticateSessionTicket" );
    HRESULT hr = PFAuthenticationServerAuthenticateSessionTicketAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationServerAuthenticateSessionTicketAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerLoginWithServerCustomId

void AutoGenAuthenticationTests::TestAuthenticationServerLoginWithServerCustomId(TestContext& testContext)
{
    struct ServerLoginWithServerCustomIdResult : public XAsyncResult
    {
        PFAuthenticationServerLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationServerLoginWithServerCustomIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationServerLoginWithServerCustomIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationServerLoginResult( result );
            return ValidatePFAuthenticationServerLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerLoginWithServerCustomIdResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithServerCustomIdRequest request;
    FillLoginWithServerCustomIdRequest( &request );
    LogLoginWithServerCustomIdRequest( &request, "TestAuthenticationServerLoginWithServerCustomId" );
    HRESULT hr = PFAuthenticationServerLoginWithServerCustomIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationServerLoginWithServerCustomIdAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerLoginWithSteamId

void AutoGenAuthenticationTests::TestAuthenticationServerLoginWithSteamId(TestContext& testContext)
{
    struct ServerLoginWithSteamIdResult : public XAsyncResult
    {
        PFAuthenticationServerLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationServerLoginWithSteamIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationServerLoginWithSteamIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationServerLoginResult( result );
            return ValidatePFAuthenticationServerLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerLoginWithSteamIdResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithSteamIdRequest request;
    FillLoginWithSteamIdRequest( &request );
    LogLoginWithSteamIdRequest( &request, "TestAuthenticationServerLoginWithSteamId" );
    HRESULT hr = PFAuthenticationServerLoginWithSteamIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationServerLoginWithSteamIdAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerLoginWithXbox

void AutoGenAuthenticationTests::TestAuthenticationServerLoginWithXbox(TestContext& testContext)
{
    struct ServerLoginWithXboxResult : public XAsyncResult
    {
        PFAuthenticationServerLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationServerLoginWithXboxGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationServerLoginWithXboxGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationServerLoginResult( result );
            return ValidatePFAuthenticationServerLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerLoginWithXboxResult>>(testContext);

    PlayFab::AuthenticationModels::ServerLoginWithXboxRequest request;
    FillServerLoginWithXboxRequest( &request );
    LogServerLoginWithXboxRequest( &request, "TestAuthenticationServerLoginWithXbox" );
    HRESULT hr = PFAuthenticationServerLoginWithXboxAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationServerLoginWithXboxAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerLoginWithXboxId

void AutoGenAuthenticationTests::TestAuthenticationServerLoginWithXboxId(TestContext& testContext)
{
    struct ServerLoginWithXboxIdResult : public XAsyncResult
    {
        PFAuthenticationServerLoginResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationServerLoginWithXboxIdGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationServerLoginWithXboxIdGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationServerLoginResult( result );
            return ValidatePFAuthenticationServerLoginResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerLoginWithXboxIdResult>>(testContext);

    PlayFab::AuthenticationModels::LoginWithXboxIdRequest request;
    FillLoginWithXboxIdRequest( &request );
    LogLoginWithXboxIdRequest( &request, "TestAuthenticationServerLoginWithXboxId" );
    HRESULT hr = PFAuthenticationServerLoginWithXboxIdAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationServerLoginWithXboxIdAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetPlayerSecret

void AutoGenAuthenticationTests::TestAuthenticationServerSetPlayerSecret(TestContext& testContext)
{
    struct ServerSetPlayerSecretResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSetPlayerSecretResult>>(testContext);

    PlayFab::AuthenticationModels::ServerSetPlayerSecretRequest request;
    FillServerSetPlayerSecretRequest( &request );
    LogServerSetPlayerSecretRequest( &request, "TestAuthenticationServerSetPlayerSecret" );
    HRESULT hr = PFAuthenticationServerSetPlayerSecretAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationServerSetPlayerSecretAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetEntityToken

void AutoGenAuthenticationTests::TestAuthenticationGetEntityToken(TestContext& testContext)
{
    struct GetEntityTokenResult : public XAsyncResult
    {
        PFAuthenticationGetEntityTokenResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationGetEntityTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationGetEntityTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationGetEntityTokenResponse( result );
            return ValidatePFAuthenticationGetEntityTokenResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetEntityTokenResult>>(testContext);

    PlayFab::AuthenticationModels::GetEntityTokenRequest request;
    FillGetEntityTokenRequest( &request );
    LogGetEntityTokenRequest( &request, "TestAuthenticationGetEntityToken" );
    HRESULT hr = PFAuthenticationGetEntityTokenAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationGetEntityTokenAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ValidateEntityToken

void AutoGenAuthenticationTests::TestAuthenticationValidateEntityToken(TestContext& testContext)
{
    struct ValidateEntityTokenResult : public XAsyncResult
    {
        PFAuthenticationValidateEntityTokenResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFAuthenticationValidateEntityTokenGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFAuthenticationValidateEntityTokenGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFAuthenticationValidateEntityTokenResponse( result );
            return ValidatePFAuthenticationValidateEntityTokenResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ValidateEntityTokenResult>>(testContext);

    PlayFab::AuthenticationModels::ValidateEntityTokenRequest request;
    FillValidateEntityTokenRequest( &request );
    LogValidateEntityTokenRequest( &request, "TestAuthenticationValidateEntityToken" );
    HRESULT hr = PFAuthenticationValidateEntityTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAuthenticationAuthenticationValidateEntityTokenAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
