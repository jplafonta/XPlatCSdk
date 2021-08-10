#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenTitleDataManagementTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

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
    // Generated prerequisites

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
                hr = PFAuthenticationClientLoginGetResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenTitleDataManagementTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetCatalogItems(TestContext& testContext)
{
    struct AdminGetCatalogItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminGetCatalogItemsGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetPublisherData(TestContext& testContext)
{
    struct AdminGetPublisherDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminGetPublisherDataGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetRandomResultTables(TestContext& testContext)
{
    struct AdminGetRandomResultTablesResult : public XAsyncResult
    {
        PFGetRandomResultTablesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminGetRandomResultTablesGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetStoreItems(TestContext& testContext)
{
    struct AdminGetStoreItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminGetStoreItemsGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetTitleData(TestContext& testContext)
{
    struct AdminGetTitleDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminGetTitleDataGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminGetTitleInternalData(TestContext& testContext)
{
    struct AdminGetTitleInternalDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminGetTitleInternalDataGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementAdminListVirtualCurrencyTypes(TestContext& testContext)
{
    struct AdminListVirtualCurrencyTypesResult : public XAsyncResult
    {
        PFTitleDataManagementListVirtualCurrencyTypesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementAdminListVirtualCurrencyTypesGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetCatalogItems(TestContext& testContext)
{
    struct ClientGetCatalogItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementClientGetCatalogItemsGetResult(async, &resultHandle, &result)); 
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
    HRESULT hr = PFTitleDataManagementClientGetCatalogItemsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetCatalogItemsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetPublisherData(TestContext& testContext)
{
    struct ClientGetPublisherDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementClientGetPublisherDataGetResult(async, &resultHandle, &result)); 
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
    HRESULT hr = PFTitleDataManagementClientGetPublisherDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetPublisherDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetStoreItems(TestContext& testContext)
{
    struct ClientGetStoreItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementClientGetStoreItemsGetResult(async, &resultHandle, &result)); 
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
    HRESULT hr = PFTitleDataManagementClientGetStoreItemsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetStoreItemsAsync", hr);
        return;
    }
    async.release(); 
} 
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

    HRESULT hr = PFTitleDataManagementClientGetTimeAsync(entityHandle, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetTimeAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTitleData(TestContext& testContext)
{
    struct ClientGetTitleDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementClientGetTitleDataGetResult(async, &resultHandle, &result)); 
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
    HRESULT hr = PFTitleDataManagementClientGetTitleDataAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetTitleDataAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTitleDataManagementTests::TestTitleDataManagementClientGetTitleNews(TestContext& testContext)
{
    struct ClientGetTitleNewsResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementClientGetTitleNewsGetResult(async, &resultHandle, &result)); 
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
    HRESULT hr = PFTitleDataManagementClientGetTitleNewsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFTitleDataManagementTitleDataManagementClientGetTitleNewsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetCatalogItems(TestContext& testContext)
{
    struct ServerGetCatalogItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetCatalogItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetCatalogItemsGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetPublisherData(TestContext& testContext)
{
    struct ServerGetPublisherDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetPublisherDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetPublisherDataGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetStoreItems(TestContext& testContext)
{
    struct ServerGetStoreItemsResult : public XAsyncResult
    {
        PFTitleDataManagementGetStoreItemsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetStoreItemsGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleData(TestContext& testContext)
{
    struct ServerGetTitleDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetTitleDataGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleInternalData(TestContext& testContext)
{
    struct ServerGetTitleInternalDataResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleDataResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetTitleInternalDataGetResult(async, &resultHandle, &result)); 
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
void AutoGenTitleDataManagementTests::TestTitleDataManagementServerGetTitleNews(TestContext& testContext)
{
    struct ServerGetTitleNewsResult : public XAsyncResult
    {
        PFTitleDataManagementGetTitleNewsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFTitleDataManagementServerGetTitleNewsGetResult(async, &resultHandle, &result)); 
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

}
