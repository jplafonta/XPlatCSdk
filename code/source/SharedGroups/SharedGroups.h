#pragma once

#include "SharedGroupsDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class SharedGroupsAPI
{
public:
    SharedGroupsAPI() = delete;
    SharedGroupsAPI(const SharedGroupsAPI& source) = delete;
    SharedGroupsAPI& operator=(const SharedGroupsAPI& source) = delete;
    ~SharedGroupsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminSetPublisherData(SharedPtr<GlobalState const> state, const PFSetPublisherDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientAddSharedGroupMembers(SharedPtr<TitlePlayer> entity, const PFSharedGroupsAddSharedGroupMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedGroupsModels::CreateSharedGroupResult> ClientCreateSharedGroup(SharedPtr<TitlePlayer> entity, const PFSharedGroupsCreateSharedGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedGroupsModels::GetSharedGroupDataResult> ClientGetSharedGroupData(SharedPtr<TitlePlayer> entity, const PFSharedGroupsGetSharedGroupDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientRemoveSharedGroupMembers(SharedPtr<TitlePlayer> entity, const PFSharedGroupsRemoveSharedGroupMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUpdateSharedGroupData(SharedPtr<TitlePlayer> entity, const PFSharedGroupsUpdateSharedGroupDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerAddSharedGroupMembers(SharedPtr<GlobalState const> state, const PFSharedGroupsAddSharedGroupMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedGroupsModels::CreateSharedGroupResult> ServerCreateSharedGroup(SharedPtr<GlobalState const> state, const PFSharedGroupsCreateSharedGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerDeleteSharedGroup(SharedPtr<GlobalState const> state, const PFSharedGroupsDeleteSharedGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedGroupsModels::GetSharedGroupDataResult> ServerGetSharedGroupData(SharedPtr<GlobalState const> state, const PFSharedGroupsGetSharedGroupDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerRemoveSharedGroupMembers(SharedPtr<GlobalState const> state, const PFSharedGroupsRemoveSharedGroupMembersRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateSharedGroupData(SharedPtr<GlobalState const> state, const PFSharedGroupsUpdateSharedGroupDataRequest& request, const TaskQueue& queue);
};

}
