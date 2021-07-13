#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAuthenticationTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

namespace PlayFabUnit
{

void AutoGenAuthenticationTests::Log(std::stringstream& ss)
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

void AutoGenAuthenticationTests::AddTests()
{
    // Generated tests 
    AddTest("TestAuthenticationValidateEntityToken", &AutoGenAuthenticationTests::TestAuthenticationValidateEntityToken);
}

void AutoGenAuthenticationTests::ClassSetUp()
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

void AutoGenAuthenticationTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
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

void AutoGenAuthenticationTests::TestAuthenticationValidateEntityToken(TestContext& testContext)
{
    struct ValidateEntityTokenResult : public XAsyncResult
    {
        PlayFabAuthenticationValidateEntityTokenResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PlayFabAuthenticationValidateEntityTokenGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPlayFabAuthenticationValidateEntityTokenResponse( result );
            return ValidatePlayFabAuthenticationValidateEntityTokenResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ValidateEntityTokenResult>>(testContext);

    PlayFab::AuthenticationModels::ValidateEntityTokenRequest request;
    FillPlayFabAuthenticationValidateEntityTokenRequest( &request );
    LogPlayFabAuthenticationValidateEntityTokenRequest( &request, "TestAuthenticationValidateEntityToken" );
    HRESULT hr = PlayFabAuthenticationValidateEntityTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PlayFabAuthenticationValidateEntityTokenAsync", hr);
        return;
    }
    async.release(); 
} 


}
