#pragma once

#include "CharacterDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class CharacterAPI
{
public:
    CharacterAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    CharacterAPI(const CharacterAPI& source) = delete;
    CharacterAPI& operator=(const CharacterAPI& source) = delete;
    ~CharacterAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminResetCharacterStatistics(const PFCharacterResetCharacterStatisticsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<CharacterModels::ListUsersCharactersResult> ClientGetAllUsersCharacters(const PFCharacterListUsersCharactersRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::ClientGetCharacterDataResult> ClientGetCharacterData(const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::GetCharacterLeaderboardResult> ClientGetCharacterLeaderboard(const PFCharacterGetCharacterLeaderboardRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::ClientGetCharacterDataResult> ClientGetCharacterReadOnlyData(const PFCharacterGetCharacterDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::ClientGetCharacterStatisticsResult> ClientGetCharacterStatistics(const PFCharacterClientGetCharacterStatisticsRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::GetLeaderboardAroundCharacterResult> ClientGetLeaderboardAroundCharacter(const PFCharacterClientGetLeaderboardAroundCharacterRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::GetLeaderboardForUsersCharactersResult> ClientGetLeaderboardForUserCharacters(const PFCharacterClientGetLeaderboardForUsersCharactersRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::ClientGrantCharacterToUserResult> ClientGrantCharacterToUser(const PFCharacterClientGrantCharacterToUserRequest& request, const TaskQueue& queue) const;
    AsyncOp<CharacterModels::UpdateCharacterDataResult> ClientUpdateCharacterData(const PFCharacterClientUpdateCharacterDataRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientUpdateCharacterStatistics(const PFCharacterClientUpdateCharacterStatisticsRequest& request, const TaskQueue& queue) const;
    static AsyncOp<void> ServerDeleteCharacterFromUser(const PFCharacterDeleteCharacterFromUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ListUsersCharactersResult> ServerGetAllUsersCharacters(const PFCharacterListUsersCharactersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterDataResult> ServerGetCharacterData(const PFCharacterGetCharacterDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterDataResult> ServerGetCharacterInternalData(const PFCharacterGetCharacterDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetCharacterLeaderboardResult> ServerGetCharacterLeaderboard(const PFCharacterGetCharacterLeaderboardRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterDataResult> ServerGetCharacterReadOnlyData(const PFCharacterGetCharacterDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGetCharacterStatisticsResult> ServerGetCharacterStatistics(const PFCharacterServerGetCharacterStatisticsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetLeaderboardAroundCharacterResult> ServerGetLeaderboardAroundCharacter(const PFCharacterServerGetLeaderboardAroundCharacterRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::GetLeaderboardForUsersCharactersResult> ServerGetLeaderboardForUserCharacters(const PFCharacterServerGetLeaderboardForUsersCharactersRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::ServerGrantCharacterToUserResult> ServerGrantCharacterToUser(const PFCharacterServerGrantCharacterToUserRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ServerUpdateCharacterData(const PFCharacterServerUpdateCharacterDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ServerUpdateCharacterInternalData(const PFCharacterServerUpdateCharacterDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CharacterModels::UpdateCharacterDataResult> ServerUpdateCharacterReadOnlyData(const PFCharacterServerUpdateCharacterDataRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerUpdateCharacterStatistics(const PFCharacterServerUpdateCharacterStatisticsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
