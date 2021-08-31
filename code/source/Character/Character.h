#pragma once

#include "CharacterDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class CharacterAPI
{
public:
    CharacterAPI() = delete;
    CharacterAPI(const CharacterAPI& source) = delete;
    CharacterAPI& operator=(const CharacterAPI& source) = delete;
    ~CharacterAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminResetCharacterStatistics(SharedPtr<GlobalState const> state, const PFCharacterResetCharacterStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ListUsersCharactersResult> ClientGetAllUsersCharacters(SharedPtr<TitlePlayer> entity, const PFCharacterListUsersCharactersRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ClientGetCharacterDataResult> ClientGetCharacterData(SharedPtr<TitlePlayer> entity, const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetCharacterLeaderboardResult> ClientGetCharacterLeaderboard(SharedPtr<TitlePlayer> entity, const PFCharacterGetCharacterLeaderboardRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ClientGetCharacterDataResult> ClientGetCharacterReadOnlyData(SharedPtr<TitlePlayer> entity, const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ClientGetCharacterStatisticsResult> ClientGetCharacterStatistics(SharedPtr<TitlePlayer> entity, const PFCharacterClientGetCharacterStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetLeaderboardAroundCharacterResult> ClientGetLeaderboardAroundCharacter(SharedPtr<TitlePlayer> entity, const PFCharacterClientGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetLeaderboardForUsersCharactersResult> ClientGetLeaderboardForUserCharacters(SharedPtr<TitlePlayer> entity, const PFCharacterClientGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ClientGrantCharacterToUserResult> ClientGrantCharacterToUser(SharedPtr<TitlePlayer> entity, const PFCharacterClientGrantCharacterToUserRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ClientUpdateCharacterData(SharedPtr<TitlePlayer> entity, const PFCharacterClientUpdateCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientUpdateCharacterStatistics(SharedPtr<TitlePlayer> entity, const PFCharacterClientUpdateCharacterStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerDeleteCharacterFromUser(SharedPtr<GlobalState const> state, const PFCharacterDeleteCharacterFromUserRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ListUsersCharactersResult> ServerGetAllUsersCharacters(SharedPtr<GlobalState const> state, const PFCharacterListUsersCharactersRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterDataResult> ServerGetCharacterData(SharedPtr<GlobalState const> state, const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterDataResult> ServerGetCharacterInternalData(SharedPtr<GlobalState const> state, const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetCharacterLeaderboardResult> ServerGetCharacterLeaderboard(SharedPtr<GlobalState const> state, const PFCharacterGetCharacterLeaderboardRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterDataResult> ServerGetCharacterReadOnlyData(SharedPtr<GlobalState const> state, const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterStatisticsResult> ServerGetCharacterStatistics(SharedPtr<GlobalState const> state, const PFCharacterServerGetCharacterStatisticsRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetLeaderboardAroundCharacterResult> ServerGetLeaderboardAroundCharacter(SharedPtr<GlobalState const> state, const PFCharacterServerGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetLeaderboardForUsersCharactersResult> ServerGetLeaderboardForUserCharacters(SharedPtr<GlobalState const> state, const PFCharacterServerGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGrantCharacterToUserResult> ServerGrantCharacterToUser(SharedPtr<GlobalState const> state, const PFCharacterServerGrantCharacterToUserRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ServerUpdateCharacterData(SharedPtr<GlobalState const> state, const PFCharacterServerUpdateCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ServerUpdateCharacterInternalData(SharedPtr<GlobalState const> state, const PFCharacterServerUpdateCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ServerUpdateCharacterReadOnlyData(SharedPtr<GlobalState const> state, const PFCharacterServerUpdateCharacterDataRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateCharacterStatistics(SharedPtr<GlobalState const> state, const PFCharacterServerUpdateCharacterStatisticsRequest& request, const TaskQueue& queue);
};

}
