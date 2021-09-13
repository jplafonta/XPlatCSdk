#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenGroupsTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenGroupsTests::GroupsTestData AutoGenGroupsTests::testData;

void AutoGenGroupsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenGroupsTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenGroupsTests::AddTests()
{
    // Generated tests 
    AddTest("TestGroupsAcceptGroupApplicationPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsAcceptGroupApplicationPrerequisiteGetGroup);
    AddTest("TestGroupsAcceptGroupApplicationPrerequisiteApplyToGroup", &AutoGenGroupsTests::TestGroupsAcceptGroupApplicationPrerequisiteApplyToGroup);
    AddTest("TestGroupsAcceptGroupApplication", &AutoGenGroupsTests::TestGroupsAcceptGroupApplication);
    AddTest("TestGroupsAcceptGroupApplicationCleanupRemoveMembers", &AutoGenGroupsTests::TestGroupsAcceptGroupApplicationCleanupRemoveMembers);

    AddTest("TestGroupsAcceptGroupInvitationPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsAcceptGroupInvitationPrerequisiteGetGroup);
    AddTest("TestGroupsAcceptGroupInvitationPrerequisiteInviteToGroup", &AutoGenGroupsTests::TestGroupsAcceptGroupInvitationPrerequisiteInviteToGroup);
    AddTest("TestGroupsAcceptGroupInvitation", &AutoGenGroupsTests::TestGroupsAcceptGroupInvitation);
    AddTest("TestGroupsAcceptGroupInvitationCleanupRemoveMembers", &AutoGenGroupsTests::TestGroupsAcceptGroupInvitationCleanupRemoveMembers);

    AddTest("TestGroupsAddMembersPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsAddMembersPrerequisiteGetGroup);
    AddTest("TestGroupsAddMembers", &AutoGenGroupsTests::TestGroupsAddMembers);
    AddTest("TestGroupsAddMembersCleanupRemoveMembers", &AutoGenGroupsTests::TestGroupsAddMembersCleanupRemoveMembers);

    AddTest("TestGroupsApplyToGroupPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsApplyToGroupPrerequisiteGetGroup);
    AddTest("TestGroupsApplyToGroup", &AutoGenGroupsTests::TestGroupsApplyToGroup);
    AddTest("TestGroupsApplyToGroupCleanupRemoveGroupApplication", &AutoGenGroupsTests::TestGroupsApplyToGroupCleanupRemoveGroupApplication);

    AddTest("TestGroupsBlockEntityPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsBlockEntityPrerequisiteGetGroup);
    AddTest("TestGroupsBlockEntity", &AutoGenGroupsTests::TestGroupsBlockEntity);
    AddTest("TestGroupsBlockEntityCleanupUnblockEntity", &AutoGenGroupsTests::TestGroupsBlockEntityCleanupUnblockEntity);

    AddTest("TestGroupsChangeMemberRolePrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsChangeMemberRolePrerequisiteGetGroup);
    AddTest("TestGroupsChangeMemberRole", &AutoGenGroupsTests::TestGroupsChangeMemberRole);
    AddTest("TestGroupsChangeMemberRoleCleanupChangeMemberRole", &AutoGenGroupsTests::TestGroupsChangeMemberRoleCleanupChangeMemberRole);

    AddTest("TestGroupsCreateGroup", &AutoGenGroupsTests::TestGroupsCreateGroup);
    AddTest("TestGroupsCreateGroupCleanupGetGroup", &AutoGenGroupsTests::TestGroupsCreateGroupCleanupGetGroup);
    AddTest("TestGroupsCreateGroupCleanupDeleteGroup", &AutoGenGroupsTests::TestGroupsCreateGroupCleanupDeleteGroup);

    AddTest("TestGroupsCreateRolePrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsCreateRolePrerequisiteGetGroup);
    AddTest("TestGroupsCreateRole", &AutoGenGroupsTests::TestGroupsCreateRole);
    AddTest("TestGroupsCreateRoleCleanupDeleteRole", &AutoGenGroupsTests::TestGroupsCreateRoleCleanupDeleteRole);

    AddTest("TestGroupsDeleteGroupPrerequisiteCreateGroup", &AutoGenGroupsTests::TestGroupsDeleteGroupPrerequisiteCreateGroup);
    AddTest("TestGroupsDeleteGroup", &AutoGenGroupsTests::TestGroupsDeleteGroup);

    AddTest("TestGroupsDeleteRolePrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsDeleteRolePrerequisiteGetGroup);
    AddTest("TestGroupsDeleteRolePrerequisiteCreateRole", &AutoGenGroupsTests::TestGroupsDeleteRolePrerequisiteCreateRole);
    AddTest("TestGroupsDeleteRole", &AutoGenGroupsTests::TestGroupsDeleteRole);

    AddTest("TestGroupsGetGroup", &AutoGenGroupsTests::TestGroupsGetGroup);

    AddTest("TestGroupsInviteToGroupPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsInviteToGroupPrerequisiteGetGroup);
    AddTest("TestGroupsInviteToGroup", &AutoGenGroupsTests::TestGroupsInviteToGroup);
    AddTest("TestGroupsInviteToGroupCleanupRemoveGroupInvitation", &AutoGenGroupsTests::TestGroupsInviteToGroupCleanupRemoveGroupInvitation);

    AddTest("TestGroupsIsMemberPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsIsMemberPrerequisiteGetGroup);
    AddTest("TestGroupsIsMember", &AutoGenGroupsTests::TestGroupsIsMember);

    AddTest("TestGroupsListGroupApplicationsPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsListGroupApplicationsPrerequisiteGetGroup);
    AddTest("TestGroupsListGroupApplications", &AutoGenGroupsTests::TestGroupsListGroupApplications);

    AddTest("TestGroupsListGroupBlocksPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsListGroupBlocksPrerequisiteGetGroup);
    AddTest("TestGroupsListGroupBlocks", &AutoGenGroupsTests::TestGroupsListGroupBlocks);

    AddTest("TestGroupsListGroupInvitationsPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsListGroupInvitationsPrerequisiteGetGroup);
    AddTest("TestGroupsListGroupInvitations", &AutoGenGroupsTests::TestGroupsListGroupInvitations);

    AddTest("TestGroupsListGroupMembersPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsListGroupMembersPrerequisiteGetGroup);
    AddTest("TestGroupsListGroupMembers", &AutoGenGroupsTests::TestGroupsListGroupMembers);

    AddTest("TestGroupsListMembershipPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsListMembershipPrerequisiteGetGroup);
    AddTest("TestGroupsListMembership", &AutoGenGroupsTests::TestGroupsListMembership);

    AddTest("TestGroupsListMembershipOpportunitiesPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsListMembershipOpportunitiesPrerequisiteGetGroup);
    AddTest("TestGroupsListMembershipOpportunitiesPrerequisiteApplyToGroup", &AutoGenGroupsTests::TestGroupsListMembershipOpportunitiesPrerequisiteApplyToGroup);
    AddTest("TestGroupsListMembershipOpportunities", &AutoGenGroupsTests::TestGroupsListMembershipOpportunities);
    AddTest("TestGroupsListMembershipOpportunitiesCleanupRemoveGroupApplication", &AutoGenGroupsTests::TestGroupsListMembershipOpportunitiesCleanupRemoveGroupApplication);

    AddTest("TestGroupsRemoveGroupApplicationPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsRemoveGroupApplicationPrerequisiteGetGroup);
    AddTest("TestGroupsRemoveGroupApplicationPrerequisiteApplyToGroup", &AutoGenGroupsTests::TestGroupsRemoveGroupApplicationPrerequisiteApplyToGroup);
    AddTest("TestGroupsRemoveGroupApplication", &AutoGenGroupsTests::TestGroupsRemoveGroupApplication);

    AddTest("TestGroupsRemoveGroupInvitationPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsRemoveGroupInvitationPrerequisiteGetGroup);
    AddTest("TestGroupsRemoveGroupInvitationPrerequisiteInviteToGroup", &AutoGenGroupsTests::TestGroupsRemoveGroupInvitationPrerequisiteInviteToGroup);
    AddTest("TestGroupsRemoveGroupInvitation", &AutoGenGroupsTests::TestGroupsRemoveGroupInvitation);

    AddTest("TestGroupsRemoveMembersPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsRemoveMembersPrerequisiteGetGroup);
    AddTest("TestGroupsRemoveMembersPrerequisiteAddMembers", &AutoGenGroupsTests::TestGroupsRemoveMembersPrerequisiteAddMembers);
    AddTest("TestGroupsRemoveMembers", &AutoGenGroupsTests::TestGroupsRemoveMembers);

    AddTest("TestGroupsUnblockEntityPrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsUnblockEntityPrerequisiteGetGroup);
    AddTest("TestGroupsUnblockEntityPrerequisiteBlockEntity", &AutoGenGroupsTests::TestGroupsUnblockEntityPrerequisiteBlockEntity);
    AddTest("TestGroupsUnblockEntity", &AutoGenGroupsTests::TestGroupsUnblockEntity);

    AddTest("TestGroupsUpdateGroupPrerequisiteCreateGroup", &AutoGenGroupsTests::TestGroupsUpdateGroupPrerequisiteCreateGroup);
    AddTest("TestGroupsUpdateGroup", &AutoGenGroupsTests::TestGroupsUpdateGroup);
    AddTest("TestGroupsUpdateGroupCleanupDeleteGroup", &AutoGenGroupsTests::TestGroupsUpdateGroupCleanupDeleteGroup);

    AddTest("TestGroupsUpdateRolePrerequisiteGetGroup", &AutoGenGroupsTests::TestGroupsUpdateRolePrerequisiteGetGroup);
    AddTest("TestGroupsUpdateRolePrerequisiteUpdateRole", &AutoGenGroupsTests::TestGroupsUpdateRolePrerequisiteUpdateRole);
    AddTest("TestGroupsUpdateRole", &AutoGenGroupsTests::TestGroupsUpdateRole);
}

void AutoGenGroupsTests::ClassSetUp()
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

void AutoGenGroupsTests::ClassTearDown()
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

void AutoGenGroupsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AcceptGroupApplication

void AutoGenGroupsTests::TestGroupsAcceptGroupApplicationPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreAcceptGroupApplicationPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillAcceptGroupApplicationPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsUpdateRole" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupApplicationPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAcceptGroupApplicationPrerequisiteApplyToGroup(TestContext& testContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PFGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsApplyToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsApplyToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsApplyToGroupResponse( result );
            return StoreAcceptGroupApplicationPrerequisitePFGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(testContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillAcceptGroupApplicationPrerequisiteApplyToGroupRequest( &request );
    LogApplyToGroupRequest( &request, "TestGroupsUpdateRole" );
    HRESULT hr = PFGroupsApplyToGroupAsync(entityHandle2, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupApplicationPrerequisiteApplyToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAcceptGroupApplication(TestContext& testContext)
{
    struct AcceptGroupApplicationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AcceptGroupApplicationResult>>(testContext);

    PlayFab::GroupsModels::AcceptGroupApplicationRequest request;
    FillAcceptGroupApplicationRequest( &request );
    LogAcceptGroupApplicationRequest( &request, "TestGroupsAcceptGroupApplication" );
    HRESULT hr = PFGroupsAcceptGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupApplicationAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsAcceptGroupApplicationCleanupRemoveMembers(TestContext& testContext)
{
    struct RemoveMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveMembersRequest request;
    FillAcceptGroupApplicationCleanupRemoveMembersRequest( &request );
    LogRemoveMembersRequest( &request, "TestGroupsAcceptGroupApplicationCleanupRemoveMembers" );
    HRESULT hr = PFGroupsRemoveMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupApplicationCleanupRemoveMembersAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region AcceptGroupInvitation

void AutoGenGroupsTests::TestGroupsAcceptGroupInvitationPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreAcceptGroupInvitationPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillAcceptGroupInvitationPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsAcceptGroupApplication" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupInvitationPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAcceptGroupInvitationPrerequisiteInviteToGroup(TestContext& testContext)
{
    struct InviteToGroupResult : public XAsyncResult
    {
        PFGroupsInviteToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsInviteToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsInviteToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsInviteToGroupResponse( result );
            return StoreAcceptGroupInvitationPrerequisitePFGroupsInviteToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InviteToGroupResult>>(testContext);

    PlayFab::GroupsModels::InviteToGroupRequest request;
    FillAcceptGroupInvitationPrerequisiteInviteToGroupRequest( &request );
    LogInviteToGroupRequest( &request, "TestGroupsAcceptGroupApplication" );
    HRESULT hr = PFGroupsInviteToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupInvitationPrerequisiteInviteToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAcceptGroupInvitation(TestContext& testContext)
{
    struct AcceptGroupInvitationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AcceptGroupInvitationResult>>(testContext);

    PlayFab::GroupsModels::AcceptGroupInvitationRequest request;
    FillAcceptGroupInvitationRequest( &request );
    LogAcceptGroupInvitationRequest( &request, "TestGroupsAcceptGroupInvitation" );
    HRESULT hr = PFGroupsAcceptGroupInvitationAsync(entityHandle2, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupInvitationAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsAcceptGroupInvitationCleanupRemoveMembers(TestContext& testContext)
{
    struct RemoveMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveMembersRequest request;
    FillAcceptGroupInvitationCleanupRemoveMembersRequest( &request );
    LogRemoveMembersRequest( &request, "TestGroupsAcceptGroupInvitationCleanupRemoveMembers" );
    HRESULT hr = PFGroupsRemoveMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAcceptGroupInvitationCleanupRemoveMembersAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region AddMembers

void AutoGenGroupsTests::TestGroupsAddMembersPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreAddMembersPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillAddMembersPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsAcceptGroupInvitation" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAddMembersPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsAddMembers(TestContext& testContext)
{
    struct AddMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddMembersResult>>(testContext);

    PlayFab::GroupsModels::AddMembersRequest request;
    FillAddMembersRequest( &request );
    LogAddMembersRequest( &request, "TestGroupsAddMembers" );
    HRESULT hr = PFGroupsAddMembersAsync(titleEntityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAddMembersAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsAddMembersCleanupRemoveMembers(TestContext& testContext)
{
    struct RemoveMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveMembersRequest request;
    FillAddMembersCleanupRemoveMembersRequest( &request );
    LogRemoveMembersRequest( &request, "TestGroupsAddMembersCleanupRemoveMembers" );
    HRESULT hr = PFGroupsRemoveMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsAddMembersCleanupRemoveMembersAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region ApplyToGroup

void AutoGenGroupsTests::TestGroupsApplyToGroupPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreApplyToGroupPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillApplyToGroupPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsAddMembers" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsApplyToGroupPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsApplyToGroup(TestContext& testContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PFGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsApplyToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsApplyToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsApplyToGroupResponse( result );
            return ValidatePFGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(testContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillApplyToGroupRequest( &request );
    LogApplyToGroupRequest( &request, "TestGroupsApplyToGroup" );
    HRESULT hr = PFGroupsApplyToGroupAsync(entityHandle2, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsApplyToGroupAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsApplyToGroupCleanupRemoveGroupApplication(TestContext& testContext)
{
    struct RemoveGroupApplicationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveGroupApplicationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupApplicationRequest request;
    FillApplyToGroupCleanupRemoveGroupApplicationRequest( &request );
    LogRemoveGroupApplicationRequest( &request, "TestGroupsApplyToGroupCleanupRemoveGroupApplication" );
    HRESULT hr = PFGroupsRemoveGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsApplyToGroupCleanupRemoveGroupApplicationAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region BlockEntity

void AutoGenGroupsTests::TestGroupsBlockEntityPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreBlockEntityPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillBlockEntityPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsApplyToGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsBlockEntityPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsBlockEntity(TestContext& testContext)
{
    struct BlockEntityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<BlockEntityResult>>(testContext);

    PlayFab::GroupsModels::BlockEntityRequest request;
    FillBlockEntityRequest( &request );
    LogBlockEntityRequest( &request, "TestGroupsBlockEntity" );
    HRESULT hr = PFGroupsBlockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsBlockEntityAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsBlockEntityCleanupUnblockEntity(TestContext& testContext)
{
    struct UnblockEntityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnblockEntityResult>>(testContext);

    PlayFab::GroupsModels::UnblockEntityRequest request;
    FillBlockEntityCleanupUnblockEntityRequest( &request );
    LogUnblockEntityRequest( &request, "TestGroupsBlockEntityCleanupUnblockEntity" );
    HRESULT hr = PFGroupsUnblockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsBlockEntityCleanupUnblockEntityAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region ChangeMemberRole

void AutoGenGroupsTests::TestGroupsChangeMemberRolePrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreChangeMemberRolePrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillChangeMemberRolePrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsBlockEntity" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsChangeMemberRolePrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsChangeMemberRole(TestContext& testContext)
{
    struct ChangeMemberRoleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ChangeMemberRoleResult>>(testContext);

    PlayFab::GroupsModels::ChangeMemberRoleRequest request;
    FillChangeMemberRoleRequest( &request );
    LogChangeMemberRoleRequest( &request, "TestGroupsChangeMemberRole" );
    HRESULT hr = PFGroupsChangeMemberRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsChangeMemberRoleAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsChangeMemberRoleCleanupChangeMemberRole(TestContext& testContext)
{
    struct ChangeMemberRoleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ChangeMemberRoleResult>>(testContext);

    PlayFab::GroupsModels::ChangeMemberRoleRequest request;
    FillChangeMemberRoleCleanupChangeMemberRoleRequest( &request );
    LogChangeMemberRoleRequest( &request, "TestGroupsChangeMemberRoleCleanupChangeMemberRole" );
    HRESULT hr = PFGroupsChangeMemberRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsChangeMemberRoleCleanupChangeMemberRoleAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region CreateGroup

void AutoGenGroupsTests::TestGroupsCreateGroup(TestContext& testContext)
{
    struct CreateGroupResult : public XAsyncResult
    {
        PFGroupsCreateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsCreateGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsCreateGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupResponse( result );
            return ValidatePFGroupsCreateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRequest request;
    FillCreateGroupRequest( &request );
    LogCreateGroupRequest( &request, "TestGroupsCreateGroup" );
    HRESULT hr = PFGroupsCreateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateGroupAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsCreateGroupCleanupGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreCreateGroupCleanupPFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillCreateGroupCleanupGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsCreateGroupCleanupGetGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateGroupCleanupGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsCreateGroupCleanupDeleteGroup(TestContext& testContext)
{
    struct DeleteGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteGroupResult>>(testContext);

    PlayFab::GroupsModels::DeleteGroupRequest request;
    FillCreateGroupCleanupDeleteGroupRequest( &request );
    LogDeleteGroupRequest( &request, "TestGroupsCreateGroupCleanupDeleteGroup" );
    HRESULT hr = PFGroupsDeleteGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateGroupCleanupDeleteGroupAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region CreateRole

void AutoGenGroupsTests::TestGroupsCreateRolePrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreCreateRolePrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillCreateRolePrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsCreateGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateRolePrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsCreateRole(TestContext& testContext)
{
    struct CreateRoleResult : public XAsyncResult
    {
        PFGroupsCreateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsCreateRoleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsCreateRoleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupRoleResponse( result );
            return ValidatePFGroupsCreateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateRoleResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRoleRequest request;
    FillCreateGroupRoleRequest( &request );
    LogCreateGroupRoleRequest( &request, "TestGroupsCreateRole" );
    HRESULT hr = PFGroupsCreateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateRoleAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsCreateRoleCleanupDeleteRole(TestContext& testContext)
{
    struct DeleteRoleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteRoleResult>>(testContext);

    PlayFab::GroupsModels::DeleteRoleRequest request;
    FillCreateRoleCleanupDeleteRoleRequest( &request );
    LogDeleteRoleRequest( &request, "TestGroupsCreateRoleCleanupDeleteRole" );
    HRESULT hr = PFGroupsDeleteRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsCreateRoleCleanupDeleteRoleAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region DeleteGroup

void AutoGenGroupsTests::TestGroupsDeleteGroupPrerequisiteCreateGroup(TestContext& testContext)
{
    struct CreateGroupResult : public XAsyncResult
    {
        PFGroupsCreateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsCreateGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsCreateGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupResponse( result );
            return StoreDeleteGroupPrerequisitePFGroupsCreateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRequest request;
    FillDeleteGroupPrerequisiteCreateGroupRequest( &request );
    LogCreateGroupRequest( &request, "TestGroupsCreateRole" );
    HRESULT hr = PFGroupsCreateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteGroupPrerequisiteCreateGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsDeleteGroup(TestContext& testContext)
{
    struct DeleteGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteGroupResult>>(testContext);

    PlayFab::GroupsModels::DeleteGroupRequest request;
    FillDeleteGroupRequest( &request );
    LogDeleteGroupRequest( &request, "TestGroupsDeleteGroup" );
    HRESULT hr = PFGroupsDeleteGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteGroupAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region DeleteRole

void AutoGenGroupsTests::TestGroupsDeleteRolePrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreDeleteRolePrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillDeleteRolePrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsDeleteGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteRolePrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsDeleteRolePrerequisiteCreateRole(TestContext& testContext)
{
    struct CreateRoleResult : public XAsyncResult
    {
        PFGroupsCreateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsCreateRoleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsCreateRoleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupRoleResponse( result );
            return StoreDeleteRolePrerequisitePFGroupsCreateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateRoleResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRoleRequest request;
    FillDeleteRolePrerequisiteCreateGroupRoleRequest( &request );
    LogCreateGroupRoleRequest( &request, "TestGroupsDeleteGroup" );
    HRESULT hr = PFGroupsCreateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteRolePrerequisiteCreateRoleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsDeleteRole(TestContext& testContext)
{
    struct DeleteRoleResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteRoleResult>>(testContext);

    PlayFab::GroupsModels::DeleteRoleRequest request;
    FillDeleteRoleRequest( &request );
    LogDeleteRoleRequest( &request, "TestGroupsDeleteRole" );
    HRESULT hr = PFGroupsDeleteRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsDeleteRoleAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region GetGroup

void AutoGenGroupsTests::TestGroupsGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return ValidatePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsGetGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsGetGroupAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region InviteToGroup

void AutoGenGroupsTests::TestGroupsInviteToGroupPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreInviteToGroupPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillInviteToGroupPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsGetGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsInviteToGroupPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsInviteToGroup(TestContext& testContext)
{
    struct InviteToGroupResult : public XAsyncResult
    {
        PFGroupsInviteToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsInviteToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsInviteToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsInviteToGroupResponse( result );
            return ValidatePFGroupsInviteToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InviteToGroupResult>>(testContext);

    PlayFab::GroupsModels::InviteToGroupRequest request;
    FillInviteToGroupRequest( &request );
    LogInviteToGroupRequest( &request, "TestGroupsInviteToGroup" );
    HRESULT hr = PFGroupsInviteToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsInviteToGroupAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsInviteToGroupCleanupRemoveGroupInvitation(TestContext& testContext)
{
    struct RemoveGroupInvitationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveGroupInvitationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupInvitationRequest request;
    FillInviteToGroupCleanupRemoveGroupInvitationRequest( &request );
    LogRemoveGroupInvitationRequest( &request, "TestGroupsInviteToGroupCleanupRemoveGroupInvitation" );
    HRESULT hr = PFGroupsRemoveGroupInvitationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsInviteToGroupCleanupRemoveGroupInvitationAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region IsMember

void AutoGenGroupsTests::TestGroupsIsMemberPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreIsMemberPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillIsMemberPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsInviteToGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsIsMemberPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsIsMember(TestContext& testContext)
{
    struct IsMemberResult : public XAsyncResult
    {
        PFGroupsIsMemberResponse result{};
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFGroupsIsMemberGetResult(async, &result)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsIsMemberResponse( &result );
            return ValidatePFGroupsIsMemberResponse( &result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<IsMemberResult>>(testContext);

    PlayFab::GroupsModels::IsMemberRequest request;
    FillIsMemberRequest( &request );
    LogIsMemberRequest( &request, "TestGroupsIsMember" );
    HRESULT hr = PFGroupsIsMemberAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsIsMemberAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListGroupApplications

void AutoGenGroupsTests::TestGroupsListGroupApplicationsPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreListGroupApplicationsPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillListGroupApplicationsPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsIsMember" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupApplicationsPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupApplications(TestContext& testContext)
{
    struct ListGroupApplicationsResult : public XAsyncResult
    {
        PFGroupsListGroupApplicationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsListGroupApplicationsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsListGroupApplicationsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupApplicationsResponse( result );
            return ValidatePFGroupsListGroupApplicationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupApplicationsResult>>(testContext);

    PlayFab::GroupsModels::ListGroupApplicationsRequest request;
    FillListGroupApplicationsRequest( &request );
    LogListGroupApplicationsRequest( &request, "TestGroupsListGroupApplications" );
    HRESULT hr = PFGroupsListGroupApplicationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupApplicationsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListGroupBlocks

void AutoGenGroupsTests::TestGroupsListGroupBlocksPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreListGroupBlocksPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillListGroupBlocksPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsListGroupApplications" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupBlocksPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupBlocks(TestContext& testContext)
{
    struct ListGroupBlocksResult : public XAsyncResult
    {
        PFGroupsListGroupBlocksResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsListGroupBlocksGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsListGroupBlocksGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupBlocksResponse( result );
            return ValidatePFGroupsListGroupBlocksResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupBlocksResult>>(testContext);

    PlayFab::GroupsModels::ListGroupBlocksRequest request;
    FillListGroupBlocksRequest( &request );
    LogListGroupBlocksRequest( &request, "TestGroupsListGroupBlocks" );
    HRESULT hr = PFGroupsListGroupBlocksAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupBlocksAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListGroupInvitations

void AutoGenGroupsTests::TestGroupsListGroupInvitationsPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreListGroupInvitationsPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillListGroupInvitationsPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsListGroupBlocks" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupInvitationsPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupInvitations(TestContext& testContext)
{
    struct ListGroupInvitationsResult : public XAsyncResult
    {
        PFGroupsListGroupInvitationsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsListGroupInvitationsGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsListGroupInvitationsGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupInvitationsResponse( result );
            return ValidatePFGroupsListGroupInvitationsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupInvitationsResult>>(testContext);

    PlayFab::GroupsModels::ListGroupInvitationsRequest request;
    FillListGroupInvitationsRequest( &request );
    LogListGroupInvitationsRequest( &request, "TestGroupsListGroupInvitations" );
    HRESULT hr = PFGroupsListGroupInvitationsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupInvitationsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListGroupMembers

void AutoGenGroupsTests::TestGroupsListGroupMembersPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreListGroupMembersPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillListGroupMembersPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsListGroupInvitations" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupMembersPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListGroupMembers(TestContext& testContext)
{
    struct ListGroupMembersResult : public XAsyncResult
    {
        PFGroupsListGroupMembersResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsListGroupMembersGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsListGroupMembersGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListGroupMembersResponse( result );
            return ValidatePFGroupsListGroupMembersResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListGroupMembersResult>>(testContext);

    PlayFab::GroupsModels::ListGroupMembersRequest request;
    FillListGroupMembersRequest( &request );
    LogListGroupMembersRequest( &request, "TestGroupsListGroupMembers" );
    HRESULT hr = PFGroupsListGroupMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListGroupMembersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListMembership

void AutoGenGroupsTests::TestGroupsListMembershipPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreListMembershipPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillListMembershipPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsListGroupMembers" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListMembership(TestContext& testContext)
{
    struct ListMembershipResult : public XAsyncResult
    {
        PFGroupsListMembershipResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsListMembershipGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsListMembershipGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListMembershipResponse( result );
            return ValidatePFGroupsListMembershipResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMembershipResult>>(testContext);

    PlayFab::GroupsModels::ListMembershipRequest request;
    FillListMembershipRequest( &request );
    LogListMembershipRequest( &request, "TestGroupsListMembership" );
    HRESULT hr = PFGroupsListMembershipAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ListMembershipOpportunities

void AutoGenGroupsTests::TestGroupsListMembershipOpportunitiesPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreListMembershipOpportunitiesPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillListMembershipOpportunitiesPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsListMembership" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipOpportunitiesPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListMembershipOpportunitiesPrerequisiteApplyToGroup(TestContext& testContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PFGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsApplyToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsApplyToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsApplyToGroupResponse( result );
            return StoreListMembershipOpportunitiesPrerequisitePFGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(testContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillListMembershipOpportunitiesPrerequisiteApplyToGroupRequest( &request );
    LogApplyToGroupRequest( &request, "TestGroupsListMembership" );
    HRESULT hr = PFGroupsApplyToGroupAsync(entityHandle2, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipOpportunitiesPrerequisiteApplyToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsListMembershipOpportunities(TestContext& testContext)
{
    struct ListMembershipOpportunitiesResult : public XAsyncResult
    {
        PFGroupsListMembershipOpportunitiesResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsListMembershipOpportunitiesGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsListMembershipOpportunitiesGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsListMembershipOpportunitiesResponse( result );
            return ValidatePFGroupsListMembershipOpportunitiesResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ListMembershipOpportunitiesResult>>(testContext);

    PlayFab::GroupsModels::ListMembershipOpportunitiesRequest request;
    FillListMembershipOpportunitiesRequest( &request );
    LogListMembershipOpportunitiesRequest( &request, "TestGroupsListMembershipOpportunities" );
    HRESULT hr = PFGroupsListMembershipOpportunitiesAsync(entityHandle2, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipOpportunitiesAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsListMembershipOpportunitiesCleanupRemoveGroupApplication(TestContext& testContext)
{
    struct RemoveGroupApplicationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveGroupApplicationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupApplicationRequest request;
    FillListMembershipOpportunitiesCleanupRemoveGroupApplicationRequest( &request );
    LogRemoveGroupApplicationRequest( &request, "TestGroupsListMembershipOpportunitiesCleanupRemoveGroupApplication" );
    HRESULT hr = PFGroupsRemoveGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsListMembershipOpportunitiesCleanupRemoveGroupApplicationAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region RemoveGroupApplication

void AutoGenGroupsTests::TestGroupsRemoveGroupApplicationPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreRemoveGroupApplicationPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillRemoveGroupApplicationPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsListMembershipOpportunities" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupApplicationPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveGroupApplicationPrerequisiteApplyToGroup(TestContext& testContext)
{
    struct ApplyToGroupResult : public XAsyncResult
    {
        PFGroupsApplyToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsApplyToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsApplyToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsApplyToGroupResponse( result );
            return StoreRemoveGroupApplicationPrerequisitePFGroupsApplyToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ApplyToGroupResult>>(testContext);

    PlayFab::GroupsModels::ApplyToGroupRequest request;
    FillRemoveGroupApplicationPrerequisiteApplyToGroupRequest( &request );
    LogApplyToGroupRequest( &request, "TestGroupsListMembershipOpportunities" );
    HRESULT hr = PFGroupsApplyToGroupAsync(entityHandle2, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupApplicationPrerequisiteApplyToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveGroupApplication(TestContext& testContext)
{
    struct RemoveGroupApplicationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveGroupApplicationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupApplicationRequest request;
    FillRemoveGroupApplicationRequest( &request );
    LogRemoveGroupApplicationRequest( &request, "TestGroupsRemoveGroupApplication" );
    HRESULT hr = PFGroupsRemoveGroupApplicationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupApplicationAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region RemoveGroupInvitation

void AutoGenGroupsTests::TestGroupsRemoveGroupInvitationPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreRemoveGroupInvitationPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillRemoveGroupInvitationPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsRemoveGroupApplication" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupInvitationPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveGroupInvitationPrerequisiteInviteToGroup(TestContext& testContext)
{
    struct InviteToGroupResult : public XAsyncResult
    {
        PFGroupsInviteToGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsInviteToGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsInviteToGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsInviteToGroupResponse( result );
            return StoreRemoveGroupInvitationPrerequisitePFGroupsInviteToGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<InviteToGroupResult>>(testContext);

    PlayFab::GroupsModels::InviteToGroupRequest request;
    FillRemoveGroupInvitationPrerequisiteInviteToGroupRequest( &request );
    LogInviteToGroupRequest( &request, "TestGroupsRemoveGroupApplication" );
    HRESULT hr = PFGroupsInviteToGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupInvitationPrerequisiteInviteToGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveGroupInvitation(TestContext& testContext)
{
    struct RemoveGroupInvitationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveGroupInvitationResult>>(testContext);

    PlayFab::GroupsModels::RemoveGroupInvitationRequest request;
    FillRemoveGroupInvitationRequest( &request );
    LogRemoveGroupInvitationRequest( &request, "TestGroupsRemoveGroupInvitation" );
    HRESULT hr = PFGroupsRemoveGroupInvitationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveGroupInvitationAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region RemoveMembers

void AutoGenGroupsTests::TestGroupsRemoveMembersPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreRemoveMembersPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillRemoveMembersPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsRemoveGroupInvitation" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveMembersPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveMembersPrerequisiteAddMembers(TestContext& testContext)
{
    struct AddMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<AddMembersResult>>(testContext);

    PlayFab::GroupsModels::AddMembersRequest request;
    FillRemoveMembersPrerequisiteAddMembersRequest( &request );
    LogAddMembersRequest( &request, "TestGroupsRemoveGroupInvitation" );
    HRESULT hr = PFGroupsAddMembersAsync(titleEntityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveMembersPrerequisiteAddMembersAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsRemoveMembers(TestContext& testContext)
{
    struct RemoveMembersResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<RemoveMembersResult>>(testContext);

    PlayFab::GroupsModels::RemoveMembersRequest request;
    FillRemoveMembersRequest( &request );
    LogRemoveMembersRequest( &request, "TestGroupsRemoveMembers" );
    HRESULT hr = PFGroupsRemoveMembersAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsRemoveMembersAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UnblockEntity

void AutoGenGroupsTests::TestGroupsUnblockEntityPrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreUnblockEntityPrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillUnblockEntityPrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsRemoveMembers" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUnblockEntityPrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUnblockEntityPrerequisiteBlockEntity(TestContext& testContext)
{
    struct BlockEntityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<BlockEntityResult>>(testContext);

    PlayFab::GroupsModels::BlockEntityRequest request;
    FillUnblockEntityPrerequisiteBlockEntityRequest( &request );
    LogBlockEntityRequest( &request, "TestGroupsRemoveMembers" );
    HRESULT hr = PFGroupsBlockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUnblockEntityPrerequisiteBlockEntityAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUnblockEntity(TestContext& testContext)
{
    struct UnblockEntityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<UnblockEntityResult>>(testContext);

    PlayFab::GroupsModels::UnblockEntityRequest request;
    FillUnblockEntityRequest( &request );
    LogUnblockEntityRequest( &request, "TestGroupsUnblockEntity" );
    HRESULT hr = PFGroupsUnblockEntityAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUnblockEntityAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region UpdateGroup

void AutoGenGroupsTests::TestGroupsUpdateGroupPrerequisiteCreateGroup(TestContext& testContext)
{
    struct CreateGroupResult : public XAsyncResult
    {
        PFGroupsCreateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsCreateGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsCreateGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsCreateGroupResponse( result );
            return StoreUpdateGroupPrerequisitePFGroupsCreateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<CreateGroupResult>>(testContext);

    PlayFab::GroupsModels::CreateGroupRequest request;
    FillUpdateGroupPrerequisiteCreateGroupRequest( &request );
    LogCreateGroupRequest( &request, "TestGroupsUnblockEntity" );
    HRESULT hr = PFGroupsCreateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateGroupPrerequisiteCreateGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUpdateGroup(TestContext& testContext)
{
    struct UpdateGroupResult : public XAsyncResult
    {
        PFGroupsUpdateGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsUpdateGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsUpdateGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsUpdateGroupResponse( result );
            return ValidatePFGroupsUpdateGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateGroupResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRequest request;
    FillUpdateGroupRequest( &request );
    LogUpdateGroupRequest( &request, "TestGroupsUpdateGroup" );
    HRESULT hr = PFGroupsUpdateGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateGroupAsync", hr);
        return;
    }
    async.release(); 
}
void AutoGenGroupsTests::TestGroupsUpdateGroupCleanupDeleteGroup(TestContext& testContext)
{
    struct DeleteGroupResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<DeleteGroupResult>>(testContext);

    PlayFab::GroupsModels::DeleteGroupRequest request;
    FillUpdateGroupCleanupDeleteGroupRequest( &request );
    LogDeleteGroupRequest( &request, "TestGroupsUpdateGroupCleanupDeleteGroup" );
    HRESULT hr = PFGroupsDeleteGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateGroupCleanupDeleteGroupAsync", hr);
        return;
    }
    async.release(); 
} 

#pragma endregion

#pragma region UpdateRole

void AutoGenGroupsTests::TestGroupsUpdateRolePrerequisiteGetGroup(TestContext& testContext)
{
    struct GetGroupResult : public XAsyncResult
    {
        PFGroupsGetGroupResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsGetGroupGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsGetGroupGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsGetGroupResponse( result );
            return StoreUpdateRolePrerequisitePFGroupsGetGroupResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetGroupResult>>(testContext);

    PlayFab::GroupsModels::GetGroupRequest request;
    FillUpdateRolePrerequisiteGetGroupRequest( &request );
    LogGetGroupRequest( &request, "TestGroupsUpdateGroup" );
    HRESULT hr = PFGroupsGetGroupAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateRolePrerequisiteGetGroupAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUpdateRolePrerequisiteUpdateRole(TestContext& testContext)
{
    struct UpdateRoleResult : public XAsyncResult
    {
        PFGroupsUpdateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsUpdateRoleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsUpdateRoleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr));
        }

        HRESULT Validate()
        {
            LogPFGroupsUpdateGroupRoleResponse( result );
            return StoreUpdateRolePrerequisitePFGroupsUpdateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateRoleResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRoleRequest request;
    FillUpdateRolePrerequisiteUpdateGroupRoleRequest( &request );
    LogUpdateGroupRoleRequest( &request, "TestGroupsUpdateGroup" );
    HRESULT hr = PFGroupsUpdateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateRolePrerequisiteUpdateRoleAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenGroupsTests::TestGroupsUpdateRole(TestContext& testContext)
{
    struct UpdateRoleResult : public XAsyncResult
    {
        PFGroupsUpdateGroupRoleResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFGroupsUpdateRoleGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFGroupsUpdateRoleGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFGroupsUpdateGroupRoleResponse( result );
            return ValidatePFGroupsUpdateGroupRoleResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<UpdateRoleResult>>(testContext);

    PlayFab::GroupsModels::UpdateGroupRoleRequest request;
    FillUpdateGroupRoleRequest( &request );
    LogUpdateGroupRoleRequest( &request, "TestGroupsUpdateRole" );
    HRESULT hr = PFGroupsUpdateRoleAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFGroupsGroupsUpdateRoleAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
