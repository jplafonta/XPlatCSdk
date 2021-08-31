#pragma once

#include "GameServerDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class GameServerAPI
{
public:
    GameServerAPI() = delete;
    GameServerAPI(const GameServerAPI& source) = delete;
    GameServerAPI& operator=(const GameServerAPI& source) = delete;
    ~GameServerAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<GameServerModels::AddServerBuildResult> AdminAddServerBuild(SharedPtr<GlobalState const> state, const PFGameServerAddServerBuildRequest& request, const TaskQueue& queue);
    static AsyncOp<GameServerModels::GetServerBuildInfoResult> AdminGetServerBuildInfo(SharedPtr<GlobalState const> state, const PFGameServerGetServerBuildInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<GameServerModels::GetServerBuildUploadURLResult> AdminGetServerBuildUploadUrl(SharedPtr<GlobalState const> state, const PFGameServerGetServerBuildUploadURLRequest& request, const TaskQueue& queue);
    static AsyncOp<GameServerModels::ListBuildsResult> AdminListServerBuilds(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<GameServerModels::ModifyServerBuildResult> AdminModifyServerBuild(SharedPtr<GlobalState const> state, const PFGameServerModifyServerBuildRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminRemoveServerBuild(SharedPtr<GlobalState const> state, const PFGameServerRemoveServerBuildRequest& request, const TaskQueue& queue);
};

}
