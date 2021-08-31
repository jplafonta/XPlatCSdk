#pragma once

#include <playfab/PFCharacterDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace CharacterModels
{

// Character Classes
struct ResetCharacterStatisticsRequest : public PFCharacterResetCharacterStatisticsRequest, public BaseModel
{
    ResetCharacterStatisticsRequest();
    ResetCharacterStatisticsRequest(const ResetCharacterStatisticsRequest& src);
    ResetCharacterStatisticsRequest(ResetCharacterStatisticsRequest&& src);
    ResetCharacterStatisticsRequest(const PFCharacterResetCharacterStatisticsRequest& src);
    ResetCharacterStatisticsRequest& operator=(const ResetCharacterStatisticsRequest&) = delete;
    ~ResetCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ListUsersCharactersRequest : public PFCharacterListUsersCharactersRequest, public SerializableModel
{
    ListUsersCharactersRequest();
    ListUsersCharactersRequest(const ListUsersCharactersRequest& src);
    ListUsersCharactersRequest(ListUsersCharactersRequest&& src);
    ListUsersCharactersRequest(const PFCharacterListUsersCharactersRequest& src);
    ListUsersCharactersRequest& operator=(const ListUsersCharactersRequest&) = delete;
    ~ListUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct ListUsersCharactersResult : public PFCharacterListUsersCharactersResult, public BaseModel, public ApiResult
{
    ListUsersCharactersResult();
    ListUsersCharactersResult(const ListUsersCharactersResult& src);
    ListUsersCharactersResult(ListUsersCharactersResult&& src);
    ListUsersCharactersResult(const PFCharacterListUsersCharactersResult& src);
    ListUsersCharactersResult& operator=(const ListUsersCharactersResult&) = delete;
    ~ListUsersCharactersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCharacterResult, CharacterResult> m_characters;
};

struct GetCharacterDataRequest : public PFCharacterGetCharacterDataRequest, public BaseModel
{
    GetCharacterDataRequest();
    GetCharacterDataRequest(const GetCharacterDataRequest& src);
    GetCharacterDataRequest(GetCharacterDataRequest&& src);
    GetCharacterDataRequest(const PFCharacterGetCharacterDataRequest& src);
    GetCharacterDataRequest& operator=(const GetCharacterDataRequest&) = delete;
    ~GetCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct ClientGetCharacterDataResult : public PFCharacterClientGetCharacterDataResult, public BaseModel, public ApiResult
{
    ClientGetCharacterDataResult();
    ClientGetCharacterDataResult(const ClientGetCharacterDataResult& src);
    ClientGetCharacterDataResult(ClientGetCharacterDataResult&& src);
    ClientGetCharacterDataResult(const PFCharacterClientGetCharacterDataResult& src);
    ClientGetCharacterDataResult& operator=(const ClientGetCharacterDataResult&) = delete;
    ~ClientGetCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_data;
};

struct GetCharacterLeaderboardRequest : public PFCharacterGetCharacterLeaderboardRequest, public SerializableModel
{
    GetCharacterLeaderboardRequest();
    GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src);
    GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest&& src);
    GetCharacterLeaderboardRequest(const PFCharacterGetCharacterLeaderboardRequest& src);
    GetCharacterLeaderboardRequest& operator=(const GetCharacterLeaderboardRequest&) = delete;
    ~GetCharacterLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterType;
    String m_statisticName;
};

struct CharacterLeaderboardEntry : public PFCharacterCharacterLeaderboardEntry, public SerializableModel
{
    CharacterLeaderboardEntry();
    CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src);
    CharacterLeaderboardEntry(CharacterLeaderboardEntry&& src);
    CharacterLeaderboardEntry(const PFCharacterCharacterLeaderboardEntry& src);
    CharacterLeaderboardEntry& operator=(const CharacterLeaderboardEntry&) = delete;
    ~CharacterLeaderboardEntry() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterName;
    String m_characterType;
    String m_displayName;
    String m_playFabId;
};

struct GetCharacterLeaderboardResult : public PFCharacterGetCharacterLeaderboardResult, public BaseModel, public ApiResult
{
    GetCharacterLeaderboardResult();
    GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src);
    GetCharacterLeaderboardResult(GetCharacterLeaderboardResult&& src);
    GetCharacterLeaderboardResult(const PFCharacterGetCharacterLeaderboardResult& src);
    GetCharacterLeaderboardResult& operator=(const GetCharacterLeaderboardResult&) = delete;
    ~GetCharacterLeaderboardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCharacterCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct ClientGetCharacterStatisticsRequest : public PFCharacterClientGetCharacterStatisticsRequest, public SerializableModel
{
    ClientGetCharacterStatisticsRequest();
    ClientGetCharacterStatisticsRequest(const ClientGetCharacterStatisticsRequest& src);
    ClientGetCharacterStatisticsRequest(ClientGetCharacterStatisticsRequest&& src);
    ClientGetCharacterStatisticsRequest(const PFCharacterClientGetCharacterStatisticsRequest& src);
    ClientGetCharacterStatisticsRequest& operator=(const ClientGetCharacterStatisticsRequest&) = delete;
    ~ClientGetCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
};

struct ClientGetCharacterStatisticsResult : public PFCharacterClientGetCharacterStatisticsResult, public BaseModel, public ApiResult
{
    ClientGetCharacterStatisticsResult();
    ClientGetCharacterStatisticsResult(const ClientGetCharacterStatisticsResult& src);
    ClientGetCharacterStatisticsResult(ClientGetCharacterStatisticsResult&& src);
    ClientGetCharacterStatisticsResult(const PFCharacterClientGetCharacterStatisticsResult& src);
    ClientGetCharacterStatisticsResult& operator=(const ClientGetCharacterStatisticsResult&) = delete;
    ~ClientGetCharacterStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_characterStatistics;
};

struct ClientGetLeaderboardAroundCharacterRequest : public PFCharacterClientGetLeaderboardAroundCharacterRequest, public BaseModel
{
    ClientGetLeaderboardAroundCharacterRequest();
    ClientGetLeaderboardAroundCharacterRequest(const ClientGetLeaderboardAroundCharacterRequest& src);
    ClientGetLeaderboardAroundCharacterRequest(ClientGetLeaderboardAroundCharacterRequest&& src);
    ClientGetLeaderboardAroundCharacterRequest(const PFCharacterClientGetLeaderboardAroundCharacterRequest& src);
    ClientGetLeaderboardAroundCharacterRequest& operator=(const ClientGetLeaderboardAroundCharacterRequest&) = delete;
    ~ClientGetLeaderboardAroundCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    String m_characterType;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_statisticName;
};

struct GetLeaderboardAroundCharacterResult : public PFCharacterGetLeaderboardAroundCharacterResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundCharacterResult();
    GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src);
    GetLeaderboardAroundCharacterResult(GetLeaderboardAroundCharacterResult&& src);
    GetLeaderboardAroundCharacterResult(const PFCharacterGetLeaderboardAroundCharacterResult& src);
    GetLeaderboardAroundCharacterResult& operator=(const GetLeaderboardAroundCharacterResult&) = delete;
    ~GetLeaderboardAroundCharacterResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCharacterCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct ClientGetLeaderboardForUsersCharactersRequest : public PFCharacterClientGetLeaderboardForUsersCharactersRequest, public SerializableModel
{
    ClientGetLeaderboardForUsersCharactersRequest();
    ClientGetLeaderboardForUsersCharactersRequest(const ClientGetLeaderboardForUsersCharactersRequest& src);
    ClientGetLeaderboardForUsersCharactersRequest(ClientGetLeaderboardForUsersCharactersRequest&& src);
    ClientGetLeaderboardForUsersCharactersRequest(const PFCharacterClientGetLeaderboardForUsersCharactersRequest& src);
    ClientGetLeaderboardForUsersCharactersRequest& operator=(const ClientGetLeaderboardForUsersCharactersRequest&) = delete;
    ~ClientGetLeaderboardForUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct GetLeaderboardForUsersCharactersResult : public PFCharacterGetLeaderboardForUsersCharactersResult, public BaseModel, public ApiResult
{
    GetLeaderboardForUsersCharactersResult();
    GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src);
    GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult&& src);
    GetLeaderboardForUsersCharactersResult(const PFCharacterGetLeaderboardForUsersCharactersResult& src);
    GetLeaderboardForUsersCharactersResult& operator=(const GetLeaderboardForUsersCharactersResult&) = delete;
    ~GetLeaderboardForUsersCharactersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFCharacterCharacterLeaderboardEntry, CharacterLeaderboardEntry> m_leaderboard;
};

struct ClientGrantCharacterToUserRequest : public PFCharacterClientGrantCharacterToUserRequest, public BaseModel
{
    ClientGrantCharacterToUserRequest();
    ClientGrantCharacterToUserRequest(const ClientGrantCharacterToUserRequest& src);
    ClientGrantCharacterToUserRequest(ClientGrantCharacterToUserRequest&& src);
    ClientGrantCharacterToUserRequest(const PFCharacterClientGrantCharacterToUserRequest& src);
    ClientGrantCharacterToUserRequest& operator=(const ClientGrantCharacterToUserRequest&) = delete;
    ~ClientGrantCharacterToUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_characterName;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_itemId;
};

struct ClientGrantCharacterToUserResult : public PFCharacterClientGrantCharacterToUserResult, public SerializableModel, public ApiResult
{
    ClientGrantCharacterToUserResult();
    ClientGrantCharacterToUserResult(const ClientGrantCharacterToUserResult& src);
    ClientGrantCharacterToUserResult(ClientGrantCharacterToUserResult&& src);
    ClientGrantCharacterToUserResult(const PFCharacterClientGrantCharacterToUserResult& src);
    ClientGrantCharacterToUserResult& operator=(const ClientGrantCharacterToUserResult&) = delete;
    ~ClientGrantCharacterToUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterType;
};

struct ClientUpdateCharacterDataRequest : public PFCharacterClientUpdateCharacterDataRequest, public BaseModel
{
    ClientUpdateCharacterDataRequest();
    ClientUpdateCharacterDataRequest(const ClientUpdateCharacterDataRequest& src);
    ClientUpdateCharacterDataRequest(ClientUpdateCharacterDataRequest&& src);
    ClientUpdateCharacterDataRequest(const PFCharacterClientUpdateCharacterDataRequest& src);
    ClientUpdateCharacterDataRequest& operator=(const ClientUpdateCharacterDataRequest&) = delete;
    ~ClientUpdateCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PFUserDataPermission> m_permission;
};

struct UpdateCharacterDataResult : public PFCharacterUpdateCharacterDataResult, public SerializableModel, public ApiResult
{
    UpdateCharacterDataResult();
    UpdateCharacterDataResult(const UpdateCharacterDataResult&) = default;
    UpdateCharacterDataResult(UpdateCharacterDataResult&&) = default;
    UpdateCharacterDataResult(const PFCharacterUpdateCharacterDataResult& src);
    UpdateCharacterDataResult& operator=(const UpdateCharacterDataResult&) = delete;
    ~UpdateCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ClientUpdateCharacterStatisticsRequest : public PFCharacterClientUpdateCharacterStatisticsRequest, public BaseModel
{
    ClientUpdateCharacterStatisticsRequest();
    ClientUpdateCharacterStatisticsRequest(const ClientUpdateCharacterStatisticsRequest& src);
    ClientUpdateCharacterStatisticsRequest(ClientUpdateCharacterStatisticsRequest&& src);
    ClientUpdateCharacterStatisticsRequest(const PFCharacterClientUpdateCharacterStatisticsRequest& src);
    ClientUpdateCharacterStatisticsRequest& operator=(const ClientUpdateCharacterStatisticsRequest&) = delete;
    ~ClientUpdateCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_characterStatistics;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct DeleteCharacterFromUserRequest : public PFCharacterDeleteCharacterFromUserRequest, public BaseModel
{
    DeleteCharacterFromUserRequest();
    DeleteCharacterFromUserRequest(const DeleteCharacterFromUserRequest& src);
    DeleteCharacterFromUserRequest(DeleteCharacterFromUserRequest&& src);
    DeleteCharacterFromUserRequest(const PFCharacterDeleteCharacterFromUserRequest& src);
    DeleteCharacterFromUserRequest& operator=(const DeleteCharacterFromUserRequest&) = delete;
    ~DeleteCharacterFromUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ServerGetCharacterDataResult : public PFCharacterServerGetCharacterDataResult, public BaseModel, public ApiResult
{
    ServerGetCharacterDataResult();
    ServerGetCharacterDataResult(const ServerGetCharacterDataResult& src);
    ServerGetCharacterDataResult(ServerGetCharacterDataResult&& src);
    ServerGetCharacterDataResult(const PFCharacterServerGetCharacterDataResult& src);
    ServerGetCharacterDataResult& operator=(const ServerGetCharacterDataResult&) = delete;
    ~ServerGetCharacterDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_data;
    String m_playFabId;
};

struct ServerGetCharacterStatisticsRequest : public PFCharacterServerGetCharacterStatisticsRequest, public SerializableModel
{
    ServerGetCharacterStatisticsRequest();
    ServerGetCharacterStatisticsRequest(const ServerGetCharacterStatisticsRequest& src);
    ServerGetCharacterStatisticsRequest(ServerGetCharacterStatisticsRequest&& src);
    ServerGetCharacterStatisticsRequest(const PFCharacterServerGetCharacterStatisticsRequest& src);
    ServerGetCharacterStatisticsRequest& operator=(const ServerGetCharacterStatisticsRequest&) = delete;
    ~ServerGetCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_playFabId;
};

struct ServerGetCharacterStatisticsResult : public PFCharacterServerGetCharacterStatisticsResult, public BaseModel, public ApiResult
{
    ServerGetCharacterStatisticsResult();
    ServerGetCharacterStatisticsResult(const ServerGetCharacterStatisticsResult& src);
    ServerGetCharacterStatisticsResult(ServerGetCharacterStatisticsResult&& src);
    ServerGetCharacterStatisticsResult(const PFCharacterServerGetCharacterStatisticsResult& src);
    ServerGetCharacterStatisticsResult& operator=(const ServerGetCharacterStatisticsResult&) = delete;
    ~ServerGetCharacterStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_characterStatistics;
    String m_playFabId;
};

struct ServerGetLeaderboardAroundCharacterRequest : public PFCharacterServerGetLeaderboardAroundCharacterRequest, public SerializableModel
{
    ServerGetLeaderboardAroundCharacterRequest();
    ServerGetLeaderboardAroundCharacterRequest(const ServerGetLeaderboardAroundCharacterRequest& src);
    ServerGetLeaderboardAroundCharacterRequest(ServerGetLeaderboardAroundCharacterRequest&& src);
    ServerGetLeaderboardAroundCharacterRequest(const PFCharacterServerGetLeaderboardAroundCharacterRequest& src);
    ServerGetLeaderboardAroundCharacterRequest& operator=(const ServerGetLeaderboardAroundCharacterRequest&) = delete;
    ~ServerGetLeaderboardAroundCharacterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_characterType;
    String m_playFabId;
    String m_statisticName;
};

struct ServerGetLeaderboardForUsersCharactersRequest : public PFCharacterServerGetLeaderboardForUsersCharactersRequest, public SerializableModel
{
    ServerGetLeaderboardForUsersCharactersRequest();
    ServerGetLeaderboardForUsersCharactersRequest(const ServerGetLeaderboardForUsersCharactersRequest& src);
    ServerGetLeaderboardForUsersCharactersRequest(ServerGetLeaderboardForUsersCharactersRequest&& src);
    ServerGetLeaderboardForUsersCharactersRequest(const PFCharacterServerGetLeaderboardForUsersCharactersRequest& src);
    ServerGetLeaderboardForUsersCharactersRequest& operator=(const ServerGetLeaderboardForUsersCharactersRequest&) = delete;
    ~ServerGetLeaderboardForUsersCharactersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_statisticName;
};

struct ServerGrantCharacterToUserRequest : public PFCharacterServerGrantCharacterToUserRequest, public BaseModel
{
    ServerGrantCharacterToUserRequest();
    ServerGrantCharacterToUserRequest(const ServerGrantCharacterToUserRequest& src);
    ServerGrantCharacterToUserRequest(ServerGrantCharacterToUserRequest&& src);
    ServerGrantCharacterToUserRequest(const PFCharacterServerGrantCharacterToUserRequest& src);
    ServerGrantCharacterToUserRequest& operator=(const ServerGrantCharacterToUserRequest&) = delete;
    ~ServerGrantCharacterToUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterName;
    String m_characterType;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ServerGrantCharacterToUserResult : public PFCharacterServerGrantCharacterToUserResult, public SerializableModel, public ApiResult
{
    ServerGrantCharacterToUserResult();
    ServerGrantCharacterToUserResult(const ServerGrantCharacterToUserResult& src);
    ServerGrantCharacterToUserResult(ServerGrantCharacterToUserResult&& src);
    ServerGrantCharacterToUserResult(const PFCharacterServerGrantCharacterToUserResult& src);
    ServerGrantCharacterToUserResult& operator=(const ServerGrantCharacterToUserResult&) = delete;
    ~ServerGrantCharacterToUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
};

struct ServerUpdateCharacterDataRequest : public PFCharacterServerUpdateCharacterDataRequest, public BaseModel
{
    ServerUpdateCharacterDataRequest();
    ServerUpdateCharacterDataRequest(const ServerUpdateCharacterDataRequest& src);
    ServerUpdateCharacterDataRequest(ServerUpdateCharacterDataRequest&& src);
    ServerUpdateCharacterDataRequest(const PFCharacterServerUpdateCharacterDataRequest& src);
    ServerUpdateCharacterDataRequest& operator=(const ServerUpdateCharacterDataRequest&) = delete;
    ~ServerUpdateCharacterDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PFUserDataPermission> m_permission;
    String m_playFabId;
};

struct ServerUpdateCharacterStatisticsRequest : public PFCharacterServerUpdateCharacterStatisticsRequest, public BaseModel
{
    ServerUpdateCharacterStatisticsRequest();
    ServerUpdateCharacterStatisticsRequest(const ServerUpdateCharacterStatisticsRequest& src);
    ServerUpdateCharacterStatisticsRequest(ServerUpdateCharacterStatisticsRequest&& src);
    ServerUpdateCharacterStatisticsRequest(const PFCharacterServerUpdateCharacterStatisticsRequest& src);
    ServerUpdateCharacterStatisticsRequest& operator=(const ServerUpdateCharacterStatisticsRequest&) = delete;
    ~ServerUpdateCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_characterStatistics;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

} // namespace CharacterModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFCharacterResetCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterListUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterListUsersCharactersResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterGetCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGetCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterGetCharacterLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterCharacterLeaderboardEntry& input);
template<> inline JsonValue ToJson<>(const PFCharacterGetCharacterLeaderboardResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGetCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGetCharacterStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGetLeaderboardAroundCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterGetLeaderboardAroundCharacterResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGetLeaderboardForUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterGetLeaderboardForUsersCharactersResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGrantCharacterToUserRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientGrantCharacterToUserResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientUpdateCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterUpdateCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterClientUpdateCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterDeleteCharacterFromUserRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGetCharacterDataResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGetCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGetCharacterStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGetLeaderboardAroundCharacterRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGetLeaderboardForUsersCharactersRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGrantCharacterToUserRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerGrantCharacterToUserResult& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerUpdateCharacterDataRequest& input);
template<> inline JsonValue ToJson<>(const PFCharacterServerUpdateCharacterStatisticsRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
