#include "TestAppPch.h"
#include "TestContext.h"
#include "ApiTests.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>

namespace PlayFabUnit
{

std::string FailureMessage(const char* failedApi, HRESULT hr)
{
    std::stringstream message;
    message << "SDK call \"" << failedApi << "\" failed with hr=" << std::hex << hr;
    return message.str();
}

void ApiTests::TestApiStaticSizeResult(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        PlayFabClientGetTimeResult result{};
        HRESULT hr = PlayFabClientGetTimeGetResult(async, &result);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabClientGetTimeGetResult", hr));
            return;
        }
        testContext->Pass();
    };

    HRESULT hr = PlayFabClientGetTimeAsync(entityHandle, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabClientGetTimeAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestApiSerializableResult(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        size_t requiredBufferSize;
        HRESULT hr = PlayFabClientCreateSharedGroupGetResultSize(async, &requiredBufferSize);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabClientCreateSharedGroupGetResultSize", hr));
            return;
        }

        std::vector<char> buffer(requiredBufferSize);
        PlayFabClientCreateSharedGroupResult* result;
        hr = PlayFabClientCreateSharedGroupGetResult(async, buffer.size(), buffer.data(), &result, nullptr);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabClientCreateSharedGroupGetResult", hr));
            return;
        }
        testContext->Pass();
    };

    PlayFabClientCreateSharedGroupRequest request{};
    HRESULT hr = PlayFabClientCreateSharedGroupAsync(entityHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabClientCreateSharedGroupAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestApiResultHandle(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        PlayFabResultHandle resultHandle{};
        PlayFabClientGetPlayerProfileResult* result{ nullptr };
        HRESULT hr = PlayFabClientGetPlayerProfileGetResult(async, &resultHandle, &result);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabClientGetPlayerProfileGetResult", hr));
            return;
        }
        testContext->Pass();
        PlayFabResultCloseHandle(resultHandle);
    };

    PlayFabClientGetPlayerProfileRequest request{};
    HRESULT hr = PlayFabClientGetPlayerProfileAsync(entityHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabClientGetPlayerProfileAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestApiSessionTicket(TestContext& /*testContext*/)
{
    // Above API calls are using SessionTicket for auth, so just skipping this
}

void ApiTests::TestApiEntityToken(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        PlayFabResultHandle resultHandle{};
        PlayFabProfilesGetEntityProfileResponse* result{ nullptr };
        HRESULT hr = PlayFabProfilesGetProfileGetResult(async, &resultHandle, &result);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabProfilesGetProfileGetResult", hr));
            return;
        }
        testContext->Pass();
        PlayFabResultCloseHandle(resultHandle);
    };

    PlayFabProfilesGetEntityProfileRequest request{};
    HRESULT hr = PlayFabProfilesGetProfileAsync(entityHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabProfilesGetProfileAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestApiSecretKey(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        size_t requiredBufferSize;
        HRESULT hr = PlayFabAdminAddNewsGetResultSize(async, &requiredBufferSize);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabAdminAddNewsGetResultSize", hr));
            return;
        }

        std::vector<char> buffer(requiredBufferSize);
        PlayFabAdminAddNewsResult* result;
        hr = PlayFabAdminAddNewsGetResult(async, buffer.size(), buffer.data(), &result, nullptr);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabAdminAddNewsGetResult", hr));
            return;
        }
        testContext->Pass();
    };

    PlayFabAdminAddNewsRequest request{};
    request.body = "News!";
    request.title = "News Title";
    HRESULT hr = PlayFabAdminAddNewsAsync(stateHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabAdminAddNewsAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestApiNoAuth(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        size_t requiredBufferSize;
        HRESULT hr = PlayFabClientGetTitlePublicKeyGetResultSize(async, &requiredBufferSize);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabClientGetTitlePublicKeyGetResultSize", hr));
            return;
        }

        std::vector<char> buffer(requiredBufferSize);
        PlayFabClientGetTitlePublicKeyResult* result;
        hr = PlayFabClientGetTitlePublicKeyGetResult(async, buffer.size(), buffer.data(), &result, nullptr);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabClientGetTitlePublicKeyGetResult", hr));
            return;
        }
        testContext->Pass();
    };

    PlayFabClientGetTitlePublicKeyRequest request{};
    request.titleId = testTitleData.titleId.data();
    request.titleSharedSecret = testTitleData.developerSecretKey.data();
    HRESULT hr = PlayFabClientGetTitlePublicKeyAsync(stateHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabClientGetTitlePublicKeyAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestGetEntityTokenWithAuthContext(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async) 
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        HRESULT hr = XAsyncGetStatus(async, false);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabAuthContextGetEntityTokenAsync->XAsyncGetStatus", hr));
            return;
        }
        testContext->Pass();
    };

    PlayFabAuthenticationGetEntityTokenRequest request{};
    HRESULT hr = PlayFabEntityGetEntityTokenAsync(entityHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabAuthContextGetEntityTokenAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::TestGetEntityTokenWithSecretKey(TestContext& testContext)
{
    auto async = std::make_unique<XAsyncBlock>();
    async->context = &testContext;
    async->callback = [](XAsyncBlock* async)
    {
        std::unique_ptr<XAsyncBlock> reclaim{ async };
        auto testContext = static_cast<TestContext*>(async->context);

        PlayFabEntityHandle newEntityHandle{};
        HRESULT hr = PlayFabGetAuthResult(async, &newEntityHandle);
        if (FAILED(hr))
        {
            testContext->Fail(FailureMessage("PlayFabAuthenticationGetEntityTokenAsync->PlayFabGetAuthResult", hr));
            return;
        }
        testContext->Pass();
        PlayFabEntityCloseHandle(newEntityHandle);
    };

    PlayFabAuthenticationGetEntityTokenRequest request{};
    HRESULT hr = PlayFabAuthenticationGetEntityTokenAsync(stateHandle, &request, async.get());
    if (FAILED(hr))
    {
        testContext.Fail(FailureMessage("PlayFabAuthenticationGetEntityTokenAsync", hr));
        return;
    }
    async.release();
}

void ApiTests::AddTests()
{
    AddTest("TestApiStaticSizeResult", &ApiTests::TestApiStaticSizeResult);
    AddTest("TestApiSerializableResult", &ApiTests::TestApiSerializableResult);
    AddTest("TestApiResultHandle", &ApiTests::TestApiResultHandle);
    //AddTest("TestApiSessionTicket", &ApiTests::TestApiSessionTicket);
    AddTest("TestApiEntityToken", &ApiTests::TestApiEntityToken);
    AddTest("TestApiSecretKey", &ApiTests::TestApiSecretKey);
    //AddTest("TestApiNoAuth", &ApiTests::TestApiNoAuth);
    AddTest("TestGetEntityTokenWithAuthContext", &ApiTests::TestGetEntityTokenWithAuthContext);
    AddTest("TestGetEntityTokenWithSecretKey", &ApiTests::TestGetEntityTokenWithSecretKey);
}

void ApiTests::ClassSetUp()
{
    HRESULT hr = PlayFabInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), &stateHandle);
    if (SUCCEEDED(hr))
    {
        PlayFabClientLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        XAsyncBlock async{};
        hr = PlayFabClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            if (SUCCEEDED(hr))
            {
                PlayFabGetAuthResult(&async, &entityHandle);
            }
        }
    }
}

void ApiTests::ClassTearDown()
{
    PlayFabEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PlayFabCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void ApiTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }
}

}