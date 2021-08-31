#include "stdafx.h"
#include "CharacterDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace CharacterModels
{

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest() :
    PFCharacterResetCharacterStatisticsRequest{}
{
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest(const ResetCharacterStatisticsRequest& src) :
    PFCharacterResetCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest(ResetCharacterStatisticsRequest&& src) :
    PFCharacterResetCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetCharacterStatisticsRequest::ResetCharacterStatisticsRequest(const PFCharacterResetCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResetCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ResetCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterResetCharacterStatisticsRequest>(*this);
}

ListUsersCharactersRequest::ListUsersCharactersRequest() :
    PFCharacterListUsersCharactersRequest{}
{
}

ListUsersCharactersRequest::ListUsersCharactersRequest(const ListUsersCharactersRequest& src) :
    PFCharacterListUsersCharactersRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ListUsersCharactersRequest::ListUsersCharactersRequest(ListUsersCharactersRequest&& src) :
    PFCharacterListUsersCharactersRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ListUsersCharactersRequest::ListUsersCharactersRequest(const PFCharacterListUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ListUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterListUsersCharactersRequest>(*this);
}

size_t ListUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterListUsersCharactersRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ListUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterListUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterListUsersCharactersRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListUsersCharactersResult::ListUsersCharactersResult() :
    PFCharacterListUsersCharactersResult{}
{
}

ListUsersCharactersResult::ListUsersCharactersResult(const ListUsersCharactersResult& src) :
    PFCharacterListUsersCharactersResult{ src },
    m_characters{ src.m_characters }
{
    characters = m_characters.Empty() ? nullptr : m_characters.Data();
}

ListUsersCharactersResult::ListUsersCharactersResult(ListUsersCharactersResult&& src) :
    PFCharacterListUsersCharactersResult{ src },
    m_characters{ std::move(src.m_characters) }
{
    characters = m_characters.Empty() ? nullptr : m_characters.Data();
}

ListUsersCharactersResult::ListUsersCharactersResult(const PFCharacterListUsersCharactersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListUsersCharactersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Characters", m_characters, characters, charactersCount);
}

JsonValue ListUsersCharactersResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterListUsersCharactersResult>(*this);
}

GetCharacterDataRequest::GetCharacterDataRequest() :
    PFCharacterGetCharacterDataRequest{}
{
}

GetCharacterDataRequest::GetCharacterDataRequest(const GetCharacterDataRequest& src) :
    PFCharacterGetCharacterDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
    m_keys{ src.m_keys },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterDataRequest::GetCharacterDataRequest(GetCharacterDataRequest&& src) :
    PFCharacterGetCharacterDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_ifChangedFromDataVersion{ std::move(src.m_ifChangedFromDataVersion) },
    m_keys{ std::move(src.m_keys) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterDataRequest::GetCharacterDataRequest(const PFCharacterGetCharacterDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetCharacterDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterGetCharacterDataRequest>(*this);
}

ClientGetCharacterDataResult::ClientGetCharacterDataResult() :
    PFCharacterClientGetCharacterDataResult{}
{
}

ClientGetCharacterDataResult::ClientGetCharacterDataResult(const ClientGetCharacterDataResult& src) :
    PFCharacterClientGetCharacterDataResult{ src },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
}

ClientGetCharacterDataResult::ClientGetCharacterDataResult(ClientGetCharacterDataResult&& src) :
    PFCharacterClientGetCharacterDataResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
}

ClientGetCharacterDataResult::ClientGetCharacterDataResult(const PFCharacterClientGetCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue ClientGetCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGetCharacterDataResult>(*this);
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest() :
    PFCharacterGetCharacterLeaderboardRequest{}
{
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
    PFCharacterGetCharacterLeaderboardRequest{ src },
    m_characterType{ src.m_characterType },
    m_statisticName{ src.m_statisticName }
{
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest&& src) :
    PFCharacterGetCharacterLeaderboardRequest{ src },
    m_characterType{ std::move(src.m_characterType) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(const PFCharacterGetCharacterLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetCharacterLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterGetCharacterLeaderboardRequest>(*this);
}

size_t GetCharacterLeaderboardRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterGetCharacterLeaderboardRequest) };
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void GetCharacterLeaderboardRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterGetCharacterLeaderboardRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterGetCharacterLeaderboardRequest);
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry() :
    PFCharacterCharacterLeaderboardEntry{}
{
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
    PFCharacterCharacterLeaderboardEntry{ src },
    m_characterId{ src.m_characterId },
    m_characterName{ src.m_characterName },
    m_characterType{ src.m_characterType },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(CharacterLeaderboardEntry&& src) :
    PFCharacterCharacterLeaderboardEntry{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterName{ std::move(src.m_characterName) },
    m_characterType{ std::move(src.m_characterType) },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(const PFCharacterCharacterLeaderboardEntry& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CharacterLeaderboardEntry::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Position", position);
    JsonUtils::ObjectGetMember(input, "StatValue", statValue);
}

JsonValue CharacterLeaderboardEntry::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterCharacterLeaderboardEntry>(*this);
}

size_t CharacterLeaderboardEntry::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterCharacterLeaderboardEntry) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterName.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_displayName.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void CharacterLeaderboardEntry::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterCharacterLeaderboardEntry{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterCharacterLeaderboardEntry);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterName.data(), m_characterName.size() + 1);
    serializedStruct->characterName = stringBuffer;
    stringBuffer += m_characterName.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult() :
    PFCharacterGetCharacterLeaderboardResult{}
{
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
    PFCharacterGetCharacterLeaderboardResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(GetCharacterLeaderboardResult&& src) :
    PFCharacterGetCharacterLeaderboardResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(const PFCharacterGetCharacterLeaderboardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterLeaderboardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetCharacterLeaderboardResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterGetCharacterLeaderboardResult>(*this);
}

ClientGetCharacterStatisticsRequest::ClientGetCharacterStatisticsRequest() :
    PFCharacterClientGetCharacterStatisticsRequest{}
{
}

ClientGetCharacterStatisticsRequest::ClientGetCharacterStatisticsRequest(const ClientGetCharacterStatisticsRequest& src) :
    PFCharacterClientGetCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

ClientGetCharacterStatisticsRequest::ClientGetCharacterStatisticsRequest(ClientGetCharacterStatisticsRequest&& src) :
    PFCharacterClientGetCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

ClientGetCharacterStatisticsRequest::ClientGetCharacterStatisticsRequest(const PFCharacterClientGetCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
}

JsonValue ClientGetCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGetCharacterStatisticsRequest>(*this);
}

size_t ClientGetCharacterStatisticsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterClientGetCharacterStatisticsRequest) };
    serializedSize += (m_characterId.size() + 1);
    return serializedSize;
}

void ClientGetCharacterStatisticsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterClientGetCharacterStatisticsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterClientGetCharacterStatisticsRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientGetCharacterStatisticsResult::ClientGetCharacterStatisticsResult() :
    PFCharacterClientGetCharacterStatisticsResult{}
{
}

ClientGetCharacterStatisticsResult::ClientGetCharacterStatisticsResult(const ClientGetCharacterStatisticsResult& src) :
    PFCharacterClientGetCharacterStatisticsResult{ src },
    m_characterStatistics{ src.m_characterStatistics }
{
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
}

ClientGetCharacterStatisticsResult::ClientGetCharacterStatisticsResult(ClientGetCharacterStatisticsResult&& src) :
    PFCharacterClientGetCharacterStatisticsResult{ src },
    m_characterStatistics{ std::move(src.m_characterStatistics) }
{
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
}

ClientGetCharacterStatisticsResult::ClientGetCharacterStatisticsResult(const PFCharacterClientGetCharacterStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetCharacterStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
}

JsonValue ClientGetCharacterStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGetCharacterStatisticsResult>(*this);
}

ClientGetLeaderboardAroundCharacterRequest::ClientGetLeaderboardAroundCharacterRequest() :
    PFCharacterClientGetLeaderboardAroundCharacterRequest{}
{
}

ClientGetLeaderboardAroundCharacterRequest::ClientGetLeaderboardAroundCharacterRequest(const ClientGetLeaderboardAroundCharacterRequest& src) :
    PFCharacterClientGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterType{ src.m_characterType },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_statisticName{ src.m_statisticName }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ClientGetLeaderboardAroundCharacterRequest::ClientGetLeaderboardAroundCharacterRequest(ClientGetLeaderboardAroundCharacterRequest&& src) :
    PFCharacterClientGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterType{ std::move(src.m_characterType) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ClientGetLeaderboardAroundCharacterRequest::ClientGetLeaderboardAroundCharacterRequest(const PFCharacterClientGetLeaderboardAroundCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetLeaderboardAroundCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue ClientGetLeaderboardAroundCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGetLeaderboardAroundCharacterRequest>(*this);
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult() :
    PFCharacterGetLeaderboardAroundCharacterResult{}
{
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
    PFCharacterGetLeaderboardAroundCharacterResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(GetLeaderboardAroundCharacterResult&& src) :
    PFCharacterGetLeaderboardAroundCharacterResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(const PFCharacterGetLeaderboardAroundCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundCharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetLeaderboardAroundCharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterGetLeaderboardAroundCharacterResult>(*this);
}

ClientGetLeaderboardForUsersCharactersRequest::ClientGetLeaderboardForUsersCharactersRequest() :
    PFCharacterClientGetLeaderboardForUsersCharactersRequest{}
{
}

ClientGetLeaderboardForUsersCharactersRequest::ClientGetLeaderboardForUsersCharactersRequest(const ClientGetLeaderboardForUsersCharactersRequest& src) :
    PFCharacterClientGetLeaderboardForUsersCharactersRequest{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ClientGetLeaderboardForUsersCharactersRequest::ClientGetLeaderboardForUsersCharactersRequest(ClientGetLeaderboardForUsersCharactersRequest&& src) :
    PFCharacterClientGetLeaderboardForUsersCharactersRequest{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ClientGetLeaderboardForUsersCharactersRequest::ClientGetLeaderboardForUsersCharactersRequest(const PFCharacterClientGetLeaderboardForUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetLeaderboardForUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue ClientGetLeaderboardForUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGetLeaderboardForUsersCharactersRequest>(*this);
}

size_t ClientGetLeaderboardForUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterClientGetLeaderboardForUsersCharactersRequest) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void ClientGetLeaderboardForUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterClientGetLeaderboardForUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterClientGetLeaderboardForUsersCharactersRequest);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult() :
    PFCharacterGetLeaderboardForUsersCharactersResult{}
{
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
    PFCharacterGetLeaderboardForUsersCharactersResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult&& src) :
    PFCharacterGetLeaderboardForUsersCharactersResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(const PFCharacterGetLeaderboardForUsersCharactersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardForUsersCharactersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetLeaderboardForUsersCharactersResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterGetLeaderboardForUsersCharactersResult>(*this);
}

ClientGrantCharacterToUserRequest::ClientGrantCharacterToUserRequest() :
    PFCharacterClientGrantCharacterToUserRequest{}
{
}

ClientGrantCharacterToUserRequest::ClientGrantCharacterToUserRequest(const ClientGrantCharacterToUserRequest& src) :
    PFCharacterClientGrantCharacterToUserRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterName{ src.m_characterName },
    m_customTags{ src.m_customTags },
    m_itemId{ src.m_itemId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

ClientGrantCharacterToUserRequest::ClientGrantCharacterToUserRequest(ClientGrantCharacterToUserRequest&& src) :
    PFCharacterClientGrantCharacterToUserRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterName{ std::move(src.m_characterName) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

ClientGrantCharacterToUserRequest::ClientGrantCharacterToUserRequest(const PFCharacterClientGrantCharacterToUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGrantCharacterToUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue ClientGrantCharacterToUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGrantCharacterToUserRequest>(*this);
}

ClientGrantCharacterToUserResult::ClientGrantCharacterToUserResult() :
    PFCharacterClientGrantCharacterToUserResult{}
{
}

ClientGrantCharacterToUserResult::ClientGrantCharacterToUserResult(const ClientGrantCharacterToUserResult& src) :
    PFCharacterClientGrantCharacterToUserResult{ src },
    m_characterId{ src.m_characterId },
    m_characterType{ src.m_characterType }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

ClientGrantCharacterToUserResult::ClientGrantCharacterToUserResult(ClientGrantCharacterToUserResult&& src) :
    PFCharacterClientGrantCharacterToUserResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterType{ std::move(src.m_characterType) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

ClientGrantCharacterToUserResult::ClientGrantCharacterToUserResult(const PFCharacterClientGrantCharacterToUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGrantCharacterToUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "Result", result);
}

JsonValue ClientGrantCharacterToUserResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientGrantCharacterToUserResult>(*this);
}

size_t ClientGrantCharacterToUserResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterClientGrantCharacterToUserResult) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    return serializedSize;
}

void ClientGrantCharacterToUserResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterClientGrantCharacterToUserResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterClientGrantCharacterToUserResult);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientUpdateCharacterDataRequest::ClientUpdateCharacterDataRequest() :
    PFCharacterClientUpdateCharacterDataRequest{}
{
}

ClientUpdateCharacterDataRequest::ClientUpdateCharacterDataRequest(const ClientUpdateCharacterDataRequest& src) :
    PFCharacterClientUpdateCharacterDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

ClientUpdateCharacterDataRequest::ClientUpdateCharacterDataRequest(ClientUpdateCharacterDataRequest&& src) :
    PFCharacterClientUpdateCharacterDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

ClientUpdateCharacterDataRequest::ClientUpdateCharacterDataRequest(const PFCharacterClientUpdateCharacterDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUpdateCharacterDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
}

JsonValue ClientUpdateCharacterDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientUpdateCharacterDataRequest>(*this);
}

UpdateCharacterDataResult::UpdateCharacterDataResult() :
    PFCharacterUpdateCharacterDataResult{}
{
}


UpdateCharacterDataResult::UpdateCharacterDataResult(const PFCharacterUpdateCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterUpdateCharacterDataResult>(*this);
}

size_t UpdateCharacterDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterUpdateCharacterDataResult) };
    return serializedSize;
}

void UpdateCharacterDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterUpdateCharacterDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterUpdateCharacterDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ClientUpdateCharacterStatisticsRequest::ClientUpdateCharacterStatisticsRequest() :
    PFCharacterClientUpdateCharacterStatisticsRequest{}
{
}

ClientUpdateCharacterStatisticsRequest::ClientUpdateCharacterStatisticsRequest(const ClientUpdateCharacterStatisticsRequest& src) :
    PFCharacterClientUpdateCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterStatistics{ src.m_characterStatistics },
    m_customTags{ src.m_customTags }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUpdateCharacterStatisticsRequest::ClientUpdateCharacterStatisticsRequest(ClientUpdateCharacterStatisticsRequest&& src) :
    PFCharacterClientUpdateCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterStatistics{ std::move(src.m_characterStatistics) },
    m_customTags{ std::move(src.m_customTags) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ClientUpdateCharacterStatisticsRequest::ClientUpdateCharacterStatisticsRequest(const PFCharacterClientUpdateCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUpdateCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ClientUpdateCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterClientUpdateCharacterStatisticsRequest>(*this);
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest() :
    PFCharacterDeleteCharacterFromUserRequest{}
{
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest(const DeleteCharacterFromUserRequest& src) :
    PFCharacterDeleteCharacterFromUserRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest(DeleteCharacterFromUserRequest&& src) :
    PFCharacterDeleteCharacterFromUserRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest(const PFCharacterDeleteCharacterFromUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteCharacterFromUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "SaveCharacterInventory", saveCharacterInventory);
}

JsonValue DeleteCharacterFromUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterDeleteCharacterFromUserRequest>(*this);
}

ServerGetCharacterDataResult::ServerGetCharacterDataResult() :
    PFCharacterServerGetCharacterDataResult{}
{
}

ServerGetCharacterDataResult::ServerGetCharacterDataResult(const ServerGetCharacterDataResult& src) :
    PFCharacterServerGetCharacterDataResult{ src },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterDataResult::ServerGetCharacterDataResult(ServerGetCharacterDataResult&& src) :
    PFCharacterServerGetCharacterDataResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterDataResult::ServerGetCharacterDataResult(const PFCharacterServerGetCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGetCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGetCharacterDataResult>(*this);
}

ServerGetCharacterStatisticsRequest::ServerGetCharacterStatisticsRequest() :
    PFCharacterServerGetCharacterStatisticsRequest{}
{
}

ServerGetCharacterStatisticsRequest::ServerGetCharacterStatisticsRequest(const ServerGetCharacterStatisticsRequest& src) :
    PFCharacterServerGetCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterStatisticsRequest::ServerGetCharacterStatisticsRequest(ServerGetCharacterStatisticsRequest&& src) :
    PFCharacterServerGetCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterStatisticsRequest::ServerGetCharacterStatisticsRequest(const PFCharacterServerGetCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGetCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGetCharacterStatisticsRequest>(*this);
}

size_t ServerGetCharacterStatisticsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterServerGetCharacterStatisticsRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ServerGetCharacterStatisticsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterServerGetCharacterStatisticsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterServerGetCharacterStatisticsRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerGetCharacterStatisticsResult::ServerGetCharacterStatisticsResult() :
    PFCharacterServerGetCharacterStatisticsResult{}
{
}

ServerGetCharacterStatisticsResult::ServerGetCharacterStatisticsResult(const ServerGetCharacterStatisticsResult& src) :
    PFCharacterServerGetCharacterStatisticsResult{ src },
    m_characterId{ src.m_characterId },
    m_characterStatistics{ src.m_characterStatistics },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterStatisticsResult::ServerGetCharacterStatisticsResult(ServerGetCharacterStatisticsResult&& src) :
    PFCharacterServerGetCharacterStatisticsResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterStatistics{ std::move(src.m_characterStatistics) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetCharacterStatisticsResult::ServerGetCharacterStatisticsResult(const PFCharacterServerGetCharacterStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetCharacterStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGetCharacterStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGetCharacterStatisticsResult>(*this);
}

ServerGetLeaderboardAroundCharacterRequest::ServerGetLeaderboardAroundCharacterRequest() :
    PFCharacterServerGetLeaderboardAroundCharacterRequest{}
{
}

ServerGetLeaderboardAroundCharacterRequest::ServerGetLeaderboardAroundCharacterRequest(const ServerGetLeaderboardAroundCharacterRequest& src) :
    PFCharacterServerGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterType{ src.m_characterType },
    m_playFabId{ src.m_playFabId },
    m_statisticName{ src.m_statisticName }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ServerGetLeaderboardAroundCharacterRequest::ServerGetLeaderboardAroundCharacterRequest(ServerGetLeaderboardAroundCharacterRequest&& src) :
    PFCharacterServerGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterType{ std::move(src.m_characterType) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ServerGetLeaderboardAroundCharacterRequest::ServerGetLeaderboardAroundCharacterRequest(const PFCharacterServerGetLeaderboardAroundCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetLeaderboardAroundCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue ServerGetLeaderboardAroundCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGetLeaderboardAroundCharacterRequest>(*this);
}

size_t ServerGetLeaderboardAroundCharacterRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterServerGetLeaderboardAroundCharacterRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void ServerGetLeaderboardAroundCharacterRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterServerGetLeaderboardAroundCharacterRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterServerGetLeaderboardAroundCharacterRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerGetLeaderboardForUsersCharactersRequest::ServerGetLeaderboardForUsersCharactersRequest() :
    PFCharacterServerGetLeaderboardForUsersCharactersRequest{}
{
}

ServerGetLeaderboardForUsersCharactersRequest::ServerGetLeaderboardForUsersCharactersRequest(const ServerGetLeaderboardForUsersCharactersRequest& src) :
    PFCharacterServerGetLeaderboardForUsersCharactersRequest{ src },
    m_playFabId{ src.m_playFabId },
    m_statisticName{ src.m_statisticName }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ServerGetLeaderboardForUsersCharactersRequest::ServerGetLeaderboardForUsersCharactersRequest(ServerGetLeaderboardForUsersCharactersRequest&& src) :
    PFCharacterServerGetLeaderboardForUsersCharactersRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

ServerGetLeaderboardForUsersCharactersRequest::ServerGetLeaderboardForUsersCharactersRequest(const PFCharacterServerGetLeaderboardForUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetLeaderboardForUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue ServerGetLeaderboardForUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGetLeaderboardForUsersCharactersRequest>(*this);
}

size_t ServerGetLeaderboardForUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterServerGetLeaderboardForUsersCharactersRequest) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void ServerGetLeaderboardForUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterServerGetLeaderboardForUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterServerGetLeaderboardForUsersCharactersRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerGrantCharacterToUserRequest::ServerGrantCharacterToUserRequest() :
    PFCharacterServerGrantCharacterToUserRequest{}
{
}

ServerGrantCharacterToUserRequest::ServerGrantCharacterToUserRequest(const ServerGrantCharacterToUserRequest& src) :
    PFCharacterServerGrantCharacterToUserRequest{ src },
    m_characterName{ src.m_characterName },
    m_characterType{ src.m_characterType },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGrantCharacterToUserRequest::ServerGrantCharacterToUserRequest(ServerGrantCharacterToUserRequest&& src) :
    PFCharacterServerGrantCharacterToUserRequest{ src },
    m_characterName{ std::move(src.m_characterName) },
    m_characterType{ std::move(src.m_characterType) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGrantCharacterToUserRequest::ServerGrantCharacterToUserRequest(const PFCharacterServerGrantCharacterToUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGrantCharacterToUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGrantCharacterToUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGrantCharacterToUserRequest>(*this);
}

ServerGrantCharacterToUserResult::ServerGrantCharacterToUserResult() :
    PFCharacterServerGrantCharacterToUserResult{}
{
}

ServerGrantCharacterToUserResult::ServerGrantCharacterToUserResult(const ServerGrantCharacterToUserResult& src) :
    PFCharacterServerGrantCharacterToUserResult{ src },
    m_characterId{ src.m_characterId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

ServerGrantCharacterToUserResult::ServerGrantCharacterToUserResult(ServerGrantCharacterToUserResult&& src) :
    PFCharacterServerGrantCharacterToUserResult{ src },
    m_characterId{ std::move(src.m_characterId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

ServerGrantCharacterToUserResult::ServerGrantCharacterToUserResult(const PFCharacterServerGrantCharacterToUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGrantCharacterToUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
}

JsonValue ServerGrantCharacterToUserResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerGrantCharacterToUserResult>(*this);
}

size_t ServerGrantCharacterToUserResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterServerGrantCharacterToUserResult) };
    serializedSize += (m_characterId.size() + 1);
    return serializedSize;
}

void ServerGrantCharacterToUserResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterServerGrantCharacterToUserResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterServerGrantCharacterToUserResult);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerUpdateCharacterDataRequest::ServerUpdateCharacterDataRequest() :
    PFCharacterServerUpdateCharacterDataRequest{}
{
}

ServerUpdateCharacterDataRequest::ServerUpdateCharacterDataRequest(const ServerUpdateCharacterDataRequest& src) :
    PFCharacterServerUpdateCharacterDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateCharacterDataRequest::ServerUpdateCharacterDataRequest(ServerUpdateCharacterDataRequest&& src) :
    PFCharacterServerUpdateCharacterDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateCharacterDataRequest::ServerUpdateCharacterDataRequest(const PFCharacterServerUpdateCharacterDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUpdateCharacterDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUpdateCharacterDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerUpdateCharacterDataRequest>(*this);
}

ServerUpdateCharacterStatisticsRequest::ServerUpdateCharacterStatisticsRequest() :
    PFCharacterServerUpdateCharacterStatisticsRequest{}
{
}

ServerUpdateCharacterStatisticsRequest::ServerUpdateCharacterStatisticsRequest(const ServerUpdateCharacterStatisticsRequest& src) :
    PFCharacterServerUpdateCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterStatistics{ src.m_characterStatistics },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateCharacterStatisticsRequest::ServerUpdateCharacterStatisticsRequest(ServerUpdateCharacterStatisticsRequest&& src) :
    PFCharacterServerUpdateCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterStatistics{ std::move(src.m_characterStatistics) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateCharacterStatisticsRequest::ServerUpdateCharacterStatisticsRequest(const PFCharacterServerUpdateCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUpdateCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUpdateCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterServerUpdateCharacterStatisticsRequest>(*this);
}

} // namespace CharacterModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFCharacterResetCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterListUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterListUsersCharactersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Characters", input.characters, input.charactersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterGetCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGetCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterGetCharacterLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterCharacterLeaderboardEntry& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Position", input.position);
    JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterGetCharacterLeaderboardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGetCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGetCharacterStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGetLeaderboardAroundCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterGetLeaderboardAroundCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGetLeaderboardForUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterGetLeaderboardForUsersCharactersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGrantCharacterToUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientGrantCharacterToUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientUpdateCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterUpdateCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterClientUpdateCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterDeleteCharacterFromUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "SaveCharacterInventory", input.saveCharacterInventory);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGetCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGetCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGetCharacterStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGetLeaderboardAroundCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGetLeaderboardForUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGrantCharacterToUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerGrantCharacterToUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerUpdateCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterServerUpdateCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
