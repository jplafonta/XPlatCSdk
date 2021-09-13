#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenTitleDataManagementTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenTitleDataManagementTests::TitleDataManagementTestData AutoGenTitleDataManagementTests::testData;

void AutoGenTitleDataManagementTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenTitleDataManagementTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenTitleDataManagementTests::AddTests()
{
    // Generated tests 
    AddTest("TestTitleDataManagementAdminAddLocalizedNews", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminAddLocalizedNews);

    AddTest("TestTitleDataManagementAdminAddNews", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminAddNews);

    AddTest("TestTitleDataManagementAdminAddVirtualCurrencyTypes", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminAddVirtualCurrencyTypes);

    AddTest("TestTitleDataManagementAdminDeleteStore", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminDeleteStore);

    AddTest("TestTitleDataManagementAdminDeleteTitleDataOverride", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminDeleteTitleDataOverride);

    AddTest("TestTitleDataManagementAdminGetCatalogItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetCatalogItems);

    AddTest("TestTitleDataManagementAdminGetPublisherData", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetPublisherData);

    AddTest("TestTitleDataManagementAdminGetRandomResultTables", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetRandomResultTables);

    AddTest("TestTitleDataManagementAdminGetStoreItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetStoreItems);

    AddTest("TestTitleDataManagementAdminGetTitleData", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetTitleData);

    AddTest("TestTitleDataManagementAdminGetTitleInternalData", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetTitleInternalData);

    AddTest("TestTitleDataManagementAdminListVirtualCurrencyTypes", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminListVirtualCurrencyTypes);

    AddTest("TestTitleDataManagementAdminRemoveVirtualCurrencyTypes", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminRemoveVirtualCurrencyTypes);

    AddTest("TestTitleDataManagementAdminSetCatalogItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetCatalogItems);

    AddTest("TestTitleDataManagementAdminSetStoreItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetStoreItems);

    AddTest("TestTitleDataManagementAdminSetTitleData", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetTitleData);

    AddTest("TestTitleDataManagementAdminSetTitleDataAndOverrides", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetTitleDataAndOverrides);

    AddTest("TestTitleDataManagementAdminSetTitleInternalData", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetTitleInternalData);

    AddTest("TestTitleDataManagementAdminSetupPushNotification", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetupPushNotification);

    AddTest("TestTitleDataManagementAdminUpdateCatalogItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminUpdateCatalogItems);

    AddTest("TestTitleDataManagementAdminUpdateRandomResultTables", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminUpdateRandomResultTables);

    AddTest("TestTitleDataManagementAdminUpdateStoreItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementAdminUpdateStoreItems);

    AddTest("TestTitleDataManagementClientGetCatalogItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetCatalogItems);

    AddTest("TestTitleDataManagementClientGetPublisherData", &AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetPublisherData);

    AddTest("TestTitleDataManagementClientGetStoreItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetStoreItems);

    AddTest("TestTitleDataManagementClientGetTime", &AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTime);

    AddTest("TestTitleDataManagementClientGetTitleData", &AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTitleData);

    AddTest("TestTitleDataManagementClientGetTitleNews", &AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTitleNews);

    AddTest("TestTitleDataManagementServerGetCatalogItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetCatalogItems);

    AddTest("TestTitleDataManagementServerGetPublisherData", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetPublisherData);

    AddTest("TestTitleDataManagementServerGetStoreItems", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetStoreItems);

    AddTest("TestTitleDataManagementServerGetTime", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTime);

    AddTest("TestTitleDataManagementServerGetTitleData", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleData);

    AddTest("TestTitleDataManagementServerGetTitleInternalData", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleInternalData);

    AddTest("TestTitleDataManagementServerGetTitleNews", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleNews);

    AddTest("TestTitleDataManagementServerSetPublisherData", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerSetPublisherData);

    AddTest("TestTitleDataManagementServerSetTitleData", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerSetTitleData);

    AddTest("TestTitleDataManagementServerSetTitleInternalData", &AutoGenTitleDataManagementTests::TestTitleDataManagementServerSetTitleInternalData);
}

void AutoGenTitleDataManagementTests::ClassSetUp()
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

void AutoGenTitleDataManagementTests::ClassTearDown()
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

void AutoGenTitleDataManagementTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminAddLocalizedNews

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminAddLocalizedNews(TestContext& testContext)
{
    struct AdminAddLocalizedNewsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminAddLocalizedNewsResult>>(testContext);

    PlayFab::TitleDataManagementModels::AddLocalizedNewsRequest request;
    FillAddLocalizedNewsRequest( &request );
    LogAddLocalizedNewsRequest( &request, "TestTitleDataManagementAdminAddLocalizedNews" );
    HRESULT hr = PFTitleDataManagementAdminAddLocalizedNewsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminAddLocalizedNewsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminAddNews

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminAddNews(TestContext& testContext)
{
    struct AdminAddNewsResult : public XAsyncResult
    {
        PFTitleDataManagementAddNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminAddNewsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminAddNewsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementAddNewsResult( result );
            return ValidatePFTitleDataManagementAddNewsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminAddNewsResult>>(testContext);

    PlayFab::TitleDataManagementModels::AddNewsRequest request;
    FillAddNewsRequest( &request );
    LogAddNewsRequest( &request, "TestTitleDataManagementAdminAddNews" );
    HRESULT hr = PFTitleDataManagementAdminAddNewsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminAddNewsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminAddVirtualCurrencyTypes

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminAddVirtualCurrencyTypes(TestContext& testContext)
{
    struct AdminAddVirtualCurrencyTypesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminAddVirtualCurrencyTypesResult>>(testContext);

    PlayFab::TitleDataManagementModels::AddVirtualCurrencyTypesRequest request;
    FillAddVirtualCurrencyTypesRequest( &request );
    LogAddVirtualCurrencyTypesRequest( &request, "TestTitleDataManagementAdminAddVirtualCurrencyTypes" );
    HRESULT hr = PFTitleDataManagementAdminAddVirtualCurrencyTypesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminAddVirtualCurrencyTypesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminDeleteStore

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminDeleteStore(TestContext& testContext)
{
    struct AdminDeleteStoreResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeleteStoreResult>>(testContext);

    PlayFab::TitleDataManagementModels::DeleteStoreRequest request;
    FillDeleteStoreRequest( &request );
    LogDeleteStoreRequest( &request, "TestTitleDataManagementAdminDeleteStore" );
    HRESULT hr = PFTitleDataManagementAdminDeleteStoreAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminDeleteStoreAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminDeleteTitleDataOverride

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminDeleteTitleDataOverride(TestContext& testContext)
{
    struct AdminDeleteTitleDataOverrideResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminDeleteTitleDataOverrideResult>>(testContext);

    PlayFab::TitleDataManagementModels::DeleteTitleDataOverrideRequest request;
    FillDeleteTitleDataOverrideRequest( &request );
    LogDeleteTitleDataOverrideRequest( &request, "TestTitleDataManagementAdminDeleteTitleDataOverride" );
    HRESULT hr = PFTitleDataManagementAdminDeleteTitleDataOverrideAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminDeleteTitleDataOverrideAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetCatalogItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetCatalogItems(TestContext& testContext)
{
    struct AdminGetCatalogItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminGetCatalogItemsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminGetCatalogItemsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetCatalogItemsResult( result );
            return ValidatePFTitleDataManagementGetCatalogItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetCatalogItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetCatalogItemsRequest request;
    FillGetCatalogItemsRequest( &request );
    LogGetCatalogItemsRequest( &request, "TestTitleDataManagementAdminGetCatalogItems" );
    HRESULT hr = PFTitleDataManagementAdminGetCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetPublisherData

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetPublisherData(TestContext& testContext)
{
    struct AdminGetPublisherDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminGetPublisherDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminGetPublisherDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetPublisherDataResult( result );
            return ValidatePFTitleDataManagementGetPublisherDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetPublisherDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetPublisherDataRequest request;
    FillGetPublisherDataRequest( &request );
    LogGetPublisherDataRequest( &request, "TestTitleDataManagementAdminGetPublisherData" );
    HRESULT hr = PFTitleDataManagementAdminGetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetRandomResultTables

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetRandomResultTables(TestContext& testContext)
{
    struct AdminGetRandomResultTablesResult : public XAsyncResult
    {
        PFGetRandomResultTablesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminGetRandomResultTablesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminGetRandomResultTablesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGetRandomResultTablesResult( result );
            return ValidatePFGetRandomResultTablesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetRandomResultTablesResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetRandomResultTablesRequest request;
    FillGetRandomResultTablesRequest( &request );
    LogGetRandomResultTablesRequest( &request, "TestTitleDataManagementAdminGetRandomResultTables" );
    HRESULT hr = PFTitleDataManagementAdminGetRandomResultTablesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminGetRandomResultTablesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetStoreItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetStoreItems(TestContext& testContext)
{
    struct AdminGetStoreItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminGetStoreItemsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminGetStoreItemsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetStoreItemsResult( result );
            return ValidatePFTitleDataManagementGetStoreItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetStoreItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetStoreItemsRequest request;
    FillGetStoreItemsRequest( &request );
    LogGetStoreItemsRequest( &request, "TestTitleDataManagementAdminGetStoreItems" );
    HRESULT hr = PFTitleDataManagementAdminGetStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetTitleData

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetTitleData(TestContext& testContext)
{
    struct AdminGetTitleDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminGetTitleDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminGetTitleDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleDataResult( result );
            return ValidatePFTitleDataManagementGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetTitleDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleDataRequest request;
    FillGetTitleDataRequest( &request );
    LogGetTitleDataRequest( &request, "TestTitleDataManagementAdminGetTitleData" );
    HRESULT hr = PFTitleDataManagementAdminGetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetTitleInternalData

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetTitleInternalData(TestContext& testContext)
{
    struct AdminGetTitleInternalDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminGetTitleInternalDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminGetTitleInternalDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleDataResult( result );
            return ValidatePFTitleDataManagementGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetTitleInternalDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleDataRequest request;
    FillGetTitleDataRequest( &request );
    LogGetTitleDataRequest( &request, "TestTitleDataManagementAdminGetTitleInternalData" );
    HRESULT hr = PFTitleDataManagementAdminGetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminGetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminListVirtualCurrencyTypes

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminListVirtualCurrencyTypes(TestContext& testContext)
{
    struct AdminListVirtualCurrencyTypesResult : public XAsyncResult
    {
        PFTitleDataManagementListVirtualCurrencyTypesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminListVirtualCurrencyTypesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminListVirtualCurrencyTypesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementListVirtualCurrencyTypesResult( result );
            return ValidatePFTitleDataManagementListVirtualCurrencyTypesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminListVirtualCurrencyTypesResult>>(testContext);

    HRESULT hr = PFTitleDataManagementAdminListVirtualCurrencyTypesAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminListVirtualCurrencyTypesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminRemoveVirtualCurrencyTypes

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminRemoveVirtualCurrencyTypes(TestContext& testContext)
{
    struct AdminRemoveVirtualCurrencyTypesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminRemoveVirtualCurrencyTypesResult>>(testContext);

    PlayFab::TitleDataManagementModels::RemoveVirtualCurrencyTypesRequest request;
    FillRemoveVirtualCurrencyTypesRequest( &request );
    LogRemoveVirtualCurrencyTypesRequest( &request, "TestTitleDataManagementAdminRemoveVirtualCurrencyTypes" );
    HRESULT hr = PFTitleDataManagementAdminRemoveVirtualCurrencyTypesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminRemoveVirtualCurrencyTypesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetCatalogItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetCatalogItems(TestContext& testContext)
{
    struct AdminSetCatalogItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetCatalogItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::UpdateCatalogItemsRequest request;
    FillUpdateCatalogItemsRequest( &request );
    LogUpdateCatalogItemsRequest( &request, "TestTitleDataManagementAdminSetCatalogItems" );
    HRESULT hr = PFTitleDataManagementAdminSetCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminSetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetStoreItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetStoreItems(TestContext& testContext)
{
    struct AdminSetStoreItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetStoreItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::UpdateStoreItemsRequest request;
    FillUpdateStoreItemsRequest( &request );
    LogUpdateStoreItemsRequest( &request, "TestTitleDataManagementAdminSetStoreItems" );
    HRESULT hr = PFTitleDataManagementAdminSetStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminSetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetTitleData

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetTitleData(TestContext& testContext)
{
    struct AdminSetTitleDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetTitleDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::SetTitleDataRequest request;
    FillSetTitleDataRequest( &request );
    LogSetTitleDataRequest( &request, "TestTitleDataManagementAdminSetTitleData" );
    HRESULT hr = PFTitleDataManagementAdminSetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminSetTitleDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetTitleDataAndOverrides

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetTitleDataAndOverrides(TestContext& testContext)
{
    struct AdminSetTitleDataAndOverridesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetTitleDataAndOverridesResult>>(testContext);

    PlayFab::TitleDataManagementModels::SetTitleDataAndOverridesRequest request;
    FillSetTitleDataAndOverridesRequest( &request );
    LogSetTitleDataAndOverridesRequest( &request, "TestTitleDataManagementAdminSetTitleDataAndOverrides" );
    HRESULT hr = PFTitleDataManagementAdminSetTitleDataAndOverridesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminSetTitleDataAndOverridesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetTitleInternalData

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetTitleInternalData(TestContext& testContext)
{
    struct AdminSetTitleInternalDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminSetTitleInternalDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::SetTitleDataRequest request;
    FillSetTitleDataRequest( &request );
    LogSetTitleDataRequest( &request, "TestTitleDataManagementAdminSetTitleInternalData" );
    HRESULT hr = PFTitleDataManagementAdminSetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminSetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminSetupPushNotification

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminSetupPushNotification(TestContext& testContext)
{
    struct AdminSetupPushNotificationResult : public XAsyncResult
    {
        PFTitleDataManagementSetupPushNotificationResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementAdminSetupPushNotificationGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementAdminSetupPushNotificationGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementSetupPushNotificationResult( result );
            return ValidatePFTitleDataManagementSetupPushNotificationResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminSetupPushNotificationResult>>(testContext);

    PlayFab::TitleDataManagementModels::SetupPushNotificationRequest request;
    FillSetupPushNotificationRequest( &request );
    LogSetupPushNotificationRequest( &request, "TestTitleDataManagementAdminSetupPushNotification" );
    HRESULT hr = PFTitleDataManagementAdminSetupPushNotificationAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminSetupPushNotificationAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdateCatalogItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminUpdateCatalogItems(TestContext& testContext)
{
    struct AdminUpdateCatalogItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminUpdateCatalogItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::UpdateCatalogItemsRequest request;
    FillUpdateCatalogItemsRequest( &request );
    LogUpdateCatalogItemsRequest( &request, "TestTitleDataManagementAdminUpdateCatalogItems" );
    HRESULT hr = PFTitleDataManagementAdminUpdateCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminUpdateCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdateRandomResultTables

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminUpdateRandomResultTables(TestContext& testContext)
{
    struct AdminUpdateRandomResultTablesResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminUpdateRandomResultTablesResult>>(testContext);

    PlayFab::TitleDataManagementModels::UpdateRandomResultTablesRequest request;
    FillUpdateRandomResultTablesRequest( &request );
    LogUpdateRandomResultTablesRequest( &request, "TestTitleDataManagementAdminUpdateRandomResultTables" );
    HRESULT hr = PFTitleDataManagementAdminUpdateRandomResultTablesAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminUpdateRandomResultTablesAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdateStoreItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminUpdateStoreItems(TestContext& testContext)
{
    struct AdminUpdateStoreItemsResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AdminUpdateStoreItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::UpdateStoreItemsRequest request;
    FillUpdateStoreItemsRequest( &request );
    LogUpdateStoreItemsRequest( &request, "TestTitleDataManagementAdminUpdateStoreItems" );
    HRESULT hr = PFTitleDataManagementAdminUpdateStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementAdminUpdateStoreItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetCatalogItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetCatalogItems(TestContext& testContext)
{
    struct ClientGetCatalogItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementClientGetCatalogItemsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementClientGetCatalogItemsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetCatalogItemsResult( result );
            return ValidatePFTitleDataManagementGetCatalogItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetCatalogItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetCatalogItemsRequest request;
    FillGetCatalogItemsRequest( &request );
    LogGetCatalogItemsRequest( &request, "TestTitleDataManagementClientGetCatalogItems" );
    HRESULT hr = PFTitleDataManagementClientGetCatalogItemsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetPublisherData

void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetPublisherData(TestContext& testContext)
{
    struct ClientGetPublisherDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementClientGetPublisherDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementClientGetPublisherDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetPublisherDataResult( result );
            return ValidatePFTitleDataManagementGetPublisherDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetPublisherDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetPublisherDataRequest request;
    FillGetPublisherDataRequest( &request );
    LogGetPublisherDataRequest( &request, "TestTitleDataManagementClientGetPublisherData" );
    HRESULT hr = PFTitleDataManagementClientGetPublisherDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetStoreItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetStoreItems(TestContext& testContext)
{
    struct ClientGetStoreItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementClientGetStoreItemsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementClientGetStoreItemsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetStoreItemsResult( result );
            return ValidatePFTitleDataManagementGetStoreItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetStoreItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetStoreItemsRequest request;
    FillGetStoreItemsRequest( &request );
    LogGetStoreItemsRequest( &request, "TestTitleDataManagementClientGetStoreItems" );
    HRESULT hr = PFTitleDataManagementClientGetStoreItemsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetTime

void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTime(TestContext& testContext)
{
    struct ClientGetTimeResult : public XAsyncResult
    {
        PFTitleDataManagementGetTimeResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementClientGetTimeGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTimeResult( &result );
            return ValidatePFTitleDataManagementGetTimeResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetTimeResult>>(testContext);

    HRESULT hr = PFTitleDataManagementClientGetTimeAsync(titlePlayerHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetTimeAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetTitleData

void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTitleData(TestContext& testContext)
{
    struct ClientGetTitleDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementClientGetTitleDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementClientGetTitleDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleDataResult( result );
            return ValidatePFTitleDataManagementGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetTitleDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleDataRequest request;
    FillGetTitleDataRequest( &request );
    LogGetTitleDataRequest( &request, "TestTitleDataManagementClientGetTitleData" );
    HRESULT hr = PFTitleDataManagementClientGetTitleDataAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetTitleNews

void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTitleNews(TestContext& testContext)
{
    struct ClientGetTitleNewsResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementClientGetTitleNewsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementClientGetTitleNewsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleNewsResult( result );
            return ValidatePFTitleDataManagementGetTitleNewsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetTitleNewsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleNewsRequest request;
    FillGetTitleNewsRequest( &request );
    LogGetTitleNewsRequest( &request, "TestTitleDataManagementClientGetTitleNews" );
    HRESULT hr = PFTitleDataManagementClientGetTitleNewsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetTitleNewsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetCatalogItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetCatalogItems(TestContext& testContext)
{
    struct ServerGetCatalogItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementServerGetCatalogItemsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementServerGetCatalogItemsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetCatalogItemsResult( result );
            return ValidatePFTitleDataManagementGetCatalogItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetCatalogItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetCatalogItemsRequest request;
    FillGetCatalogItemsRequest( &request );
    LogGetCatalogItemsRequest( &request, "TestTitleDataManagementServerGetCatalogItems" );
    HRESULT hr = PFTitleDataManagementServerGetCatalogItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetPublisherData

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetPublisherData(TestContext& testContext)
{
    struct ServerGetPublisherDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementServerGetPublisherDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementServerGetPublisherDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetPublisherDataResult( result );
            return ValidatePFTitleDataManagementGetPublisherDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetPublisherDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetPublisherDataRequest request;
    FillGetPublisherDataRequest( &request );
    LogGetPublisherDataRequest( &request, "TestTitleDataManagementServerGetPublisherData" );
    HRESULT hr = PFTitleDataManagementServerGetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetStoreItems

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetStoreItems(TestContext& testContext)
{
    struct ServerGetStoreItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementServerGetStoreItemsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementServerGetStoreItemsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetStoreItemsResult( result );
            return ValidatePFTitleDataManagementGetStoreItemsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetStoreItemsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetStoreItemsServerRequest request;
    FillGetStoreItemsServerRequest( &request );
    LogGetStoreItemsServerRequest( &request, "TestTitleDataManagementServerGetStoreItems" );
    HRESULT hr = PFTitleDataManagementServerGetStoreItemsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetTime

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTime(TestContext& testContext)
{
    struct ServerGetTimeResult : public XAsyncResult
    {
        PFTitleDataManagementGetTimeResult result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetTimeGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTimeResult( &result );
            return ValidatePFTitleDataManagementGetTimeResult( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetTimeResult>>(testContext);

    HRESULT hr = PFTitleDataManagementServerGetTimeAsync(stateHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetTimeAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetTitleData

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleData(TestContext& testContext)
{
    struct ServerGetTitleDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementServerGetTitleDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementServerGetTitleDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleDataResult( result );
            return ValidatePFTitleDataManagementGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetTitleDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleDataRequest request;
    FillGetTitleDataRequest( &request );
    LogGetTitleDataRequest( &request, "TestTitleDataManagementServerGetTitleData" );
    HRESULT hr = PFTitleDataManagementServerGetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetTitleInternalData

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleInternalData(TestContext& testContext)
{
    struct ServerGetTitleInternalDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementServerGetTitleInternalDataGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementServerGetTitleInternalDataGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleDataResult( result );
            return ValidatePFTitleDataManagementGetTitleDataResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetTitleInternalDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleDataRequest request;
    FillGetTitleDataRequest( &request );
    LogGetTitleDataRequest( &request, "TestTitleDataManagementServerGetTitleInternalData" );
    HRESULT hr = PFTitleDataManagementServerGetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetTitleNews

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleNews(TestContext& testContext)
{
    struct ServerGetTitleNewsResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFTitleDataManagementServerGetTitleNewsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFTitleDataManagementServerGetTitleNewsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFTitleDataManagementGetTitleNewsResult( result );
            return ValidatePFTitleDataManagementGetTitleNewsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetTitleNewsResult>>(testContext);

    PlayFab::TitleDataManagementModels::GetTitleNewsRequest request;
    FillGetTitleNewsRequest( &request );
    LogGetTitleNewsRequest( &request, "TestTitleDataManagementServerGetTitleNews" );
    HRESULT hr = PFTitleDataManagementServerGetTitleNewsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerGetTitleNewsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetPublisherData

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerSetPublisherData(TestContext& testContext)
{
    struct ServerSetPublisherDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSetPublisherDataResult>>(testContext);

    PlayFab::SetPublisherDataRequest request;
    FillSetPublisherDataRequest( &request );
    LogSetPublisherDataRequest( &request, "TestTitleDataManagementServerSetPublisherData" );
    HRESULT hr = PFTitleDataManagementServerSetPublisherDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerSetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetTitleData

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerSetTitleData(TestContext& testContext)
{
    struct ServerSetTitleDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSetTitleDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::SetTitleDataRequest request;
    FillSetTitleDataRequest( &request );
    LogSetTitleDataRequest( &request, "TestTitleDataManagementServerSetTitleData" );
    HRESULT hr = PFTitleDataManagementServerSetTitleDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerSetTitleDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerSetTitleInternalData

void AutoGenTitleDataManagementTests::TestTitleDataManagementServerSetTitleInternalData(TestContext& testContext)
{
    struct ServerSetTitleInternalDataResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ServerSetTitleInternalDataResult>>(testContext);

    PlayFab::TitleDataManagementModels::SetTitleDataRequest request;
    FillSetTitleDataRequest( &request );
    LogSetTitleDataRequest( &request, "TestTitleDataManagementServerSetTitleInternalData" );
    HRESULT hr = PFTitleDataManagementServerSetTitleInternalDataAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementServerSetTitleInternalDataAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
