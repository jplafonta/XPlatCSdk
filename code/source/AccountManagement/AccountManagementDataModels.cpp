#include "stdafx.h"
#include "AccountManagementDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AccountManagement
{

JsonValue BanRequest::ToJson() const
{
    return BanRequest::ToJson(this->Model());
}

JsonValue BanRequest::ToJson(const PFAccountManagementBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DurationInHours", input.durationInHours);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

JsonValue BanUsersRequest::ToJson() const
{
    return BanUsersRequest::ToJson(this->Model());
}

JsonValue BanUsersRequest::ToJson(const PFAccountManagementBanUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray<BanRequest>(output, "Bans", input.bans, input.bansCount);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

void BanInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", this->m_model.active);

    String banId{};
    JsonUtils::ObjectGetMember(input, "BanId", banId);
    this->SetBanId(std::move(banId));

    StdExtra::optional<time_t> created{};
    JsonUtils::ObjectGetMemberTime(input, "Created", created);
    this->SetCreated(std::move(created));

    StdExtra::optional<time_t> expires{};
    JsonUtils::ObjectGetMemberTime(input, "Expires", expires);
    this->SetExpires(std::move(expires));

    String IPAddress{};
    JsonUtils::ObjectGetMember(input, "IPAddress", IPAddress);
    this->SetIPAddress(std::move(IPAddress));

    String MACAddress{};
    JsonUtils::ObjectGetMember(input, "MACAddress", MACAddress);
    this->SetMACAddress(std::move(MACAddress));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    String reason{};
    JsonUtils::ObjectGetMember(input, "Reason", reason);
    this->SetReason(std::move(reason));
}

size_t BanInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementBanInfo const*> BanInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<BanInfo>(&this->Model());
}

size_t BanInfo::RequiredBufferSize(const PFAccountManagementBanInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.banId)
    {
        requiredSize += (std::strlen(model.banId) + 1);
    }
    if (model.created)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.expires)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.IPAddress)
    {
        requiredSize += (std::strlen(model.IPAddress) + 1);
    }
    if (model.MACAddress)
    {
        requiredSize += (std::strlen(model.MACAddress) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.reason)
    {
        requiredSize += (std::strlen(model.reason) + 1);
    }
    return requiredSize;
}

HRESULT BanInfo::Copy(const PFAccountManagementBanInfo& input, PFAccountManagementBanInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.banId = buffer.CopyTo(input.banId);
    output.created = buffer.CopyTo(input.created);
    output.expires = buffer.CopyTo(input.expires);
    output.IPAddress = buffer.CopyTo(input.IPAddress);
    output.MACAddress = buffer.CopyTo(input.MACAddress);
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.reason = buffer.CopyTo(input.reason);
    return S_OK;
}

void BanUsersResult::FromJson(const JsonValue& input)
{
    ModelVector<BanInfo> banData{};
    JsonUtils::ObjectGetMember<BanInfo>(input, "BanData", banData);
    this->SetBanData(std::move(banData));
}

size_t BanUsersResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementBanUsersResult const*> BanUsersResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<BanUsersResult>(&this->Model());
}

size_t BanUsersResult::RequiredBufferSize(const PFAccountManagementBanUsersResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementBanInfo*) + sizeof(PFAccountManagementBanInfo*) * model.banDataCount);
    for (size_t i = 0; i < model.banDataCount; ++i)
    {
        requiredSize += BanInfo::RequiredBufferSize(*model.banData[i]);
    }
    return requiredSize;
}

HRESULT BanUsersResult::Copy(const PFAccountManagementBanUsersResult& input, PFAccountManagementBanUsersResult& output, ModelBuffer& buffer)
{
    output = input;
    output.banData = buffer.CopyToArray<BanInfo>(input.banData, input.banDataCount);
    return S_OK;
}

JsonValue DeleteMasterPlayerAccountRequest::ToJson() const
{
    return DeleteMasterPlayerAccountRequest::ToJson(this->Model());
}

JsonValue DeleteMasterPlayerAccountRequest::ToJson(const PFAccountManagementDeleteMasterPlayerAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MetaData", input.metaData);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void DeleteMasterPlayerAccountResult::FromJson(const JsonValue& input)
{
    String jobReceiptId{};
    JsonUtils::ObjectGetMember(input, "JobReceiptId", jobReceiptId);
    this->SetJobReceiptId(std::move(jobReceiptId));

    CStringVector titleIds{};
    JsonUtils::ObjectGetMember(input, "TitleIds", titleIds);
    this->SetTitleIds(std::move(titleIds));
}

size_t DeleteMasterPlayerAccountResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementDeleteMasterPlayerAccountResult const*> DeleteMasterPlayerAccountResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<DeleteMasterPlayerAccountResult>(&this->Model());
}

size_t DeleteMasterPlayerAccountResult::RequiredBufferSize(const PFAccountManagementDeleteMasterPlayerAccountResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.jobReceiptId)
    {
        requiredSize += (std::strlen(model.jobReceiptId) + 1);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.titleIdsCount);
    for (size_t i = 0; i < model.titleIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.titleIds[i]) + 1);
    }
    return requiredSize;
}

HRESULT DeleteMasterPlayerAccountResult::Copy(const PFAccountManagementDeleteMasterPlayerAccountResult& input, PFAccountManagementDeleteMasterPlayerAccountResult& output, ModelBuffer& buffer)
{
    output = input;
    output.jobReceiptId = buffer.CopyTo(input.jobReceiptId);
    output.titleIds = buffer.CopyToArray(input.titleIds, input.titleIdsCount);
    return S_OK;
}

JsonValue DeletePlayerRequest::ToJson() const
{
    return DeletePlayerRequest::ToJson(this->Model());
}

JsonValue DeletePlayerRequest::ToJson(const PFAccountManagementDeletePlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue ExportMasterPlayerDataRequest::ToJson() const
{
    return ExportMasterPlayerDataRequest::ToJson(this->Model());
}

JsonValue ExportMasterPlayerDataRequest::ToJson(const PFAccountManagementExportMasterPlayerDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void ExportMasterPlayerDataResult::FromJson(const JsonValue& input)
{
    String jobReceiptId{};
    JsonUtils::ObjectGetMember(input, "JobReceiptId", jobReceiptId);
    this->SetJobReceiptId(std::move(jobReceiptId));
}

size_t ExportMasterPlayerDataResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementExportMasterPlayerDataResult const*> ExportMasterPlayerDataResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ExportMasterPlayerDataResult>(&this->Model());
}

size_t ExportMasterPlayerDataResult::RequiredBufferSize(const PFAccountManagementExportMasterPlayerDataResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.jobReceiptId)
    {
        requiredSize += (std::strlen(model.jobReceiptId) + 1);
    }
    return requiredSize;
}

HRESULT ExportMasterPlayerDataResult::Copy(const PFAccountManagementExportMasterPlayerDataResult& input, PFAccountManagementExportMasterPlayerDataResult& output, ModelBuffer& buffer)
{
    output = input;
    output.jobReceiptId = buffer.CopyTo(input.jobReceiptId);
    return S_OK;
}

JsonValue GetPlayedTitleListRequest::ToJson() const
{
    return GetPlayedTitleListRequest::ToJson(this->Model());
}

JsonValue GetPlayedTitleListRequest::ToJson(const PFAccountManagementGetPlayedTitleListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void GetPlayedTitleListResult::FromJson(const JsonValue& input)
{
    CStringVector titleIds{};
    JsonUtils::ObjectGetMember(input, "TitleIds", titleIds);
    this->SetTitleIds(std::move(titleIds));
}

size_t GetPlayedTitleListResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayedTitleListResult const*> GetPlayedTitleListResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayedTitleListResult>(&this->Model());
}

size_t GetPlayedTitleListResult::RequiredBufferSize(const PFAccountManagementGetPlayedTitleListResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(char*) + sizeof(char*) * model.titleIdsCount);
    for (size_t i = 0; i < model.titleIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.titleIds[i]) + 1);
    }
    return requiredSize;
}

HRESULT GetPlayedTitleListResult::Copy(const PFAccountManagementGetPlayedTitleListResult& input, PFAccountManagementGetPlayedTitleListResult& output, ModelBuffer& buffer)
{
    output = input;
    output.titleIds = buffer.CopyToArray(input.titleIds, input.titleIdsCount);
    return S_OK;
}

JsonValue GetPlayerIdFromAuthTokenRequest::ToJson() const
{
    return GetPlayerIdFromAuthTokenRequest::ToJson(this->Model());
}

JsonValue GetPlayerIdFromAuthTokenRequest::ToJson(const PFAccountManagementGetPlayerIdFromAuthTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Token", input.token);
    JsonUtils::ObjectAddMember(output, "TokenType", input.tokenType);
    return output;
}

void GetPlayerIdFromAuthTokenResult::FromJson(const JsonValue& input)
{
    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t GetPlayerIdFromAuthTokenResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayerIdFromAuthTokenResult const*> GetPlayerIdFromAuthTokenResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayerIdFromAuthTokenResult>(&this->Model());
}

size_t GetPlayerIdFromAuthTokenResult::RequiredBufferSize(const PFAccountManagementGetPlayerIdFromAuthTokenResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT GetPlayerIdFromAuthTokenResult::Copy(const PFAccountManagementGetPlayerIdFromAuthTokenResult& input, PFAccountManagementGetPlayerIdFromAuthTokenResult& output, ModelBuffer& buffer)
{
    output = input;
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

JsonValue GetPlayerProfileRequest::ToJson() const
{
    return GetPlayerProfileRequest::ToJson(this->Model());
}

JsonValue GetPlayerProfileRequest::ToJson(const PFAccountManagementGetPlayerProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember<PlayerProfileViewConstraints>(output, "ProfileConstraints", input.profileConstraints);
    return output;
}

void GetPlayerProfileResult::FromJson(const JsonValue& input)
{
    StdExtra::optional<PlayerProfileModel> playerProfile{};
    JsonUtils::ObjectGetMember(input, "PlayerProfile", playerProfile);
    if (playerProfile)
    {
        this->SetPlayerProfile(std::move(*playerProfile));
    }
}

size_t GetPlayerProfileResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayerProfileResult const*> GetPlayerProfileResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayerProfileResult>(&this->Model());
}

size_t GetPlayerProfileResult::RequiredBufferSize(const PFAccountManagementGetPlayerProfileResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playerProfile)
    {
        requiredSize += PlayerProfileModel::RequiredBufferSize(*model.playerProfile);
    }
    return requiredSize;
}

HRESULT GetPlayerProfileResult::Copy(const PFAccountManagementGetPlayerProfileResult& input, PFAccountManagementGetPlayerProfileResult& output, ModelBuffer& buffer)
{
    output = input;
    output.playerProfile = buffer.CopyTo<PlayerProfileModel>(input.playerProfile);
    return S_OK;
}

JsonValue LookupUserAccountInfoRequest::ToJson() const
{
    return LookupUserAccountInfoRequest::ToJson(this->Model());
}

JsonValue LookupUserAccountInfoRequest::ToJson(const PFAccountManagementLookupUserAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

void LookupUserAccountInfoResult::FromJson(const JsonValue& input)
{
    StdExtra::optional<UserAccountInfo> userInfo{};
    JsonUtils::ObjectGetMember(input, "UserInfo", userInfo);
    if (userInfo)
    {
        this->SetUserInfo(std::move(*userInfo));
    }
}

size_t LookupUserAccountInfoResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementLookupUserAccountInfoResult const*> LookupUserAccountInfoResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<LookupUserAccountInfoResult>(&this->Model());
}

size_t LookupUserAccountInfoResult::RequiredBufferSize(const PFAccountManagementLookupUserAccountInfoResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.userInfo)
    {
        requiredSize += UserAccountInfo::RequiredBufferSize(*model.userInfo);
    }
    return requiredSize;
}

HRESULT LookupUserAccountInfoResult::Copy(const PFAccountManagementLookupUserAccountInfoResult& input, PFAccountManagementLookupUserAccountInfoResult& output, ModelBuffer& buffer)
{
    output = input;
    output.userInfo = buffer.CopyTo<UserAccountInfo>(input.userInfo);
    return S_OK;
}

JsonValue GetUserBansRequest::ToJson() const
{
    return GetUserBansRequest::ToJson(this->Model());
}

JsonValue GetUserBansRequest::ToJson(const PFAccountManagementGetUserBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void GetUserBansResult::FromJson(const JsonValue& input)
{
    ModelVector<BanInfo> banData{};
    JsonUtils::ObjectGetMember<BanInfo>(input, "BanData", banData);
    this->SetBanData(std::move(banData));
}

size_t GetUserBansResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetUserBansResult const*> GetUserBansResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetUserBansResult>(&this->Model());
}

size_t GetUserBansResult::RequiredBufferSize(const PFAccountManagementGetUserBansResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementBanInfo*) + sizeof(PFAccountManagementBanInfo*) * model.banDataCount);
    for (size_t i = 0; i < model.banDataCount; ++i)
    {
        requiredSize += BanInfo::RequiredBufferSize(*model.banData[i]);
    }
    return requiredSize;
}

HRESULT GetUserBansResult::Copy(const PFAccountManagementGetUserBansResult& input, PFAccountManagementGetUserBansResult& output, ModelBuffer& buffer)
{
    output = input;
    output.banData = buffer.CopyToArray<BanInfo>(input.banData, input.banDataCount);
    return S_OK;
}

JsonValue ResetPasswordRequest::ToJson() const
{
    return ResetPasswordRequest::ToJson(this->Model());
}

JsonValue ResetPasswordRequest::ToJson(const PFAccountManagementResetPasswordRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Token", input.token);
    return output;
}

JsonValue RevokeAllBansForUserRequest::ToJson() const
{
    return RevokeAllBansForUserRequest::ToJson(this->Model());
}

JsonValue RevokeAllBansForUserRequest::ToJson(const PFAccountManagementRevokeAllBansForUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void RevokeAllBansForUserResult::FromJson(const JsonValue& input)
{
    ModelVector<BanInfo> banData{};
    JsonUtils::ObjectGetMember<BanInfo>(input, "BanData", banData);
    this->SetBanData(std::move(banData));
}

size_t RevokeAllBansForUserResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementRevokeAllBansForUserResult const*> RevokeAllBansForUserResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<RevokeAllBansForUserResult>(&this->Model());
}

size_t RevokeAllBansForUserResult::RequiredBufferSize(const PFAccountManagementRevokeAllBansForUserResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementBanInfo*) + sizeof(PFAccountManagementBanInfo*) * model.banDataCount);
    for (size_t i = 0; i < model.banDataCount; ++i)
    {
        requiredSize += BanInfo::RequiredBufferSize(*model.banData[i]);
    }
    return requiredSize;
}

HRESULT RevokeAllBansForUserResult::Copy(const PFAccountManagementRevokeAllBansForUserResult& input, PFAccountManagementRevokeAllBansForUserResult& output, ModelBuffer& buffer)
{
    output = input;
    output.banData = buffer.CopyToArray<BanInfo>(input.banData, input.banDataCount);
    return S_OK;
}

JsonValue RevokeBansRequest::ToJson() const
{
    return RevokeBansRequest::ToJson(this->Model());
}

JsonValue RevokeBansRequest::ToJson(const PFAccountManagementRevokeBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "BanIds", input.banIds, input.banIdsCount);
    return output;
}

void RevokeBansResult::FromJson(const JsonValue& input)
{
    ModelVector<BanInfo> banData{};
    JsonUtils::ObjectGetMember<BanInfo>(input, "BanData", banData);
    this->SetBanData(std::move(banData));
}

size_t RevokeBansResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementRevokeBansResult const*> RevokeBansResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<RevokeBansResult>(&this->Model());
}

size_t RevokeBansResult::RequiredBufferSize(const PFAccountManagementRevokeBansResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementBanInfo*) + sizeof(PFAccountManagementBanInfo*) * model.banDataCount);
    for (size_t i = 0; i < model.banDataCount; ++i)
    {
        requiredSize += BanInfo::RequiredBufferSize(*model.banData[i]);
    }
    return requiredSize;
}

HRESULT RevokeBansResult::Copy(const PFAccountManagementRevokeBansResult& input, PFAccountManagementRevokeBansResult& output, ModelBuffer& buffer)
{
    output = input;
    output.banData = buffer.CopyToArray<BanInfo>(input.banData, input.banDataCount);
    return S_OK;
}

JsonValue AdminSendAccountRecoveryEmailRequest::ToJson() const
{
    return AdminSendAccountRecoveryEmailRequest::ToJson(this->Model());
}

JsonValue AdminSendAccountRecoveryEmailRequest::ToJson(const PFAccountManagementAdminSendAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    return output;
}

JsonValue UpdateBanRequest::ToJson() const
{
    return UpdateBanRequest::ToJson(this->Model());
}

JsonValue UpdateBanRequest::ToJson(const PFAccountManagementUpdateBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMemberTime(output, "Expires", input.expires);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "Permanent", input.permanent);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

JsonValue UpdateBansRequest::ToJson() const
{
    return UpdateBansRequest::ToJson(this->Model());
}

JsonValue UpdateBansRequest::ToJson(const PFAccountManagementUpdateBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray<UpdateBanRequest>(output, "Bans", input.bans, input.bansCount);
    return output;
}

void UpdateBansResult::FromJson(const JsonValue& input)
{
    ModelVector<BanInfo> banData{};
    JsonUtils::ObjectGetMember<BanInfo>(input, "BanData", banData);
    this->SetBanData(std::move(banData));
}

size_t UpdateBansResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementUpdateBansResult const*> UpdateBansResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UpdateBansResult>(&this->Model());
}

size_t UpdateBansResult::RequiredBufferSize(const PFAccountManagementUpdateBansResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementBanInfo*) + sizeof(PFAccountManagementBanInfo*) * model.banDataCount);
    for (size_t i = 0; i < model.banDataCount; ++i)
    {
        requiredSize += BanInfo::RequiredBufferSize(*model.banData[i]);
    }
    return requiredSize;
}

HRESULT UpdateBansResult::Copy(const PFAccountManagementUpdateBansResult& input, PFAccountManagementUpdateBansResult& output, ModelBuffer& buffer)
{
    output = input;
    output.banData = buffer.CopyToArray<BanInfo>(input.banData, input.banDataCount);
    return S_OK;
}

JsonValue AdminUpdateUserTitleDisplayNameRequest::ToJson() const
{
    return AdminUpdateUserTitleDisplayNameRequest::ToJson(this->Model());
}

JsonValue AdminUpdateUserTitleDisplayNameRequest::ToJson(const PFAccountManagementAdminUpdateUserTitleDisplayNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void UpdateUserTitleDisplayNameResult::FromJson(const JsonValue& input)
{
    String displayName{};
    JsonUtils::ObjectGetMember(input, "DisplayName", displayName);
    this->SetDisplayName(std::move(displayName));
}

size_t UpdateUserTitleDisplayNameResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementUpdateUserTitleDisplayNameResult const*> UpdateUserTitleDisplayNameResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UpdateUserTitleDisplayNameResult>(&this->Model());
}

size_t UpdateUserTitleDisplayNameResult::RequiredBufferSize(const PFAccountManagementUpdateUserTitleDisplayNameResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.displayName)
    {
        requiredSize += (std::strlen(model.displayName) + 1);
    }
    return requiredSize;
}

HRESULT UpdateUserTitleDisplayNameResult::Copy(const PFAccountManagementUpdateUserTitleDisplayNameResult& input, PFAccountManagementUpdateUserTitleDisplayNameResult& output, ModelBuffer& buffer)
{
    output = input;
    output.displayName = buffer.CopyTo(input.displayName);
    return S_OK;
}

JsonValue GenericServiceId::ToJson() const
{
    return GenericServiceId::ToJson(this->Model());
}

JsonValue GenericServiceId::ToJson(const PFAccountManagementGenericServiceId& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ServiceName", input.serviceName);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    return output;
}

void GenericServiceId::FromJson(const JsonValue& input)
{
    String serviceName{};
    JsonUtils::ObjectGetMember(input, "ServiceName", serviceName);
    this->SetServiceName(std::move(serviceName));

    String userId{};
    JsonUtils::ObjectGetMember(input, "UserId", userId);
    this->SetUserId(std::move(userId));
}

size_t GenericServiceId::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGenericServiceId const*> GenericServiceId::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GenericServiceId>(&this->Model());
}

size_t GenericServiceId::RequiredBufferSize(const PFAccountManagementGenericServiceId& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.serviceName)
    {
        requiredSize += (std::strlen(model.serviceName) + 1);
    }
    if (model.userId)
    {
        requiredSize += (std::strlen(model.userId) + 1);
    }
    return requiredSize;
}

HRESULT GenericServiceId::Copy(const PFAccountManagementGenericServiceId& input, PFAccountManagementGenericServiceId& output, ModelBuffer& buffer)
{
    output = input;
    output.serviceName = buffer.CopyTo(input.serviceName);
    output.userId = buffer.CopyTo(input.userId);
    return S_OK;
}

JsonValue ClientAddGenericIDRequest::ToJson() const
{
    return ClientAddGenericIDRequest::ToJson(this->Model());
}

JsonValue ClientAddGenericIDRequest::ToJson(const PFAccountManagementClientAddGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember<GenericServiceId>(output, "GenericId", input.genericId);
    return output;
}

JsonValue AddOrUpdateContactEmailRequest::ToJson() const
{
    return AddOrUpdateContactEmailRequest::ToJson(this->Model());
}

JsonValue AddOrUpdateContactEmailRequest::ToJson(const PFAccountManagementAddOrUpdateContactEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    return output;
}

JsonValue AddUsernamePasswordRequest::ToJson() const
{
    return AddUsernamePasswordRequest::ToJson(this->Model());
}

JsonValue AddUsernamePasswordRequest::ToJson(const PFAccountManagementAddUsernamePasswordRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

void AddUsernamePasswordResult::FromJson(const JsonValue& input)
{
    String username{};
    JsonUtils::ObjectGetMember(input, "Username", username);
    this->SetUsername(std::move(username));
}

size_t AddUsernamePasswordResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementAddUsernamePasswordResult const*> AddUsernamePasswordResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<AddUsernamePasswordResult>(&this->Model());
}

size_t AddUsernamePasswordResult::RequiredBufferSize(const PFAccountManagementAddUsernamePasswordResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.username)
    {
        requiredSize += (std::strlen(model.username) + 1);
    }
    return requiredSize;
}

HRESULT AddUsernamePasswordResult::Copy(const PFAccountManagementAddUsernamePasswordResult& input, PFAccountManagementAddUsernamePasswordResult& output, ModelBuffer& buffer)
{
    output = input;
    output.username = buffer.CopyTo(input.username);
    return S_OK;
}

JsonValue GetAccountInfoRequest::ToJson() const
{
    return GetAccountInfoRequest::ToJson(this->Model());
}

JsonValue GetAccountInfoRequest::ToJson(const PFAccountManagementGetAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

void GetAccountInfoResult::FromJson(const JsonValue& input)
{
    StdExtra::optional<UserAccountInfo> accountInfo{};
    JsonUtils::ObjectGetMember(input, "AccountInfo", accountInfo);
    if (accountInfo)
    {
        this->SetAccountInfo(std::move(*accountInfo));
    }
}

size_t GetAccountInfoResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetAccountInfoResult const*> GetAccountInfoResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetAccountInfoResult>(&this->Model());
}

size_t GetAccountInfoResult::RequiredBufferSize(const PFAccountManagementGetAccountInfoResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.accountInfo)
    {
        requiredSize += UserAccountInfo::RequiredBufferSize(*model.accountInfo);
    }
    return requiredSize;
}

HRESULT GetAccountInfoResult::Copy(const PFAccountManagementGetAccountInfoResult& input, PFAccountManagementGetAccountInfoResult& output, ModelBuffer& buffer)
{
    output = input;
    output.accountInfo = buffer.CopyTo<UserAccountInfo>(input.accountInfo);
    return S_OK;
}

JsonValue GetPlayFabIDsFromFacebookIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromFacebookIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromFacebookIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromFacebookIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "FacebookIDs", input.facebookIDs, input.facebookIDsCount);
    return output;
}

void FacebookPlayFabIdPair::FromJson(const JsonValue& input)
{
    String facebookId{};
    JsonUtils::ObjectGetMember(input, "FacebookId", facebookId);
    this->SetFacebookId(std::move(facebookId));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t FacebookPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementFacebookPlayFabIdPair const*> FacebookPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<FacebookPlayFabIdPair>(&this->Model());
}

size_t FacebookPlayFabIdPair::RequiredBufferSize(const PFAccountManagementFacebookPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.facebookId)
    {
        requiredSize += (std::strlen(model.facebookId) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT FacebookPlayFabIdPair::Copy(const PFAccountManagementFacebookPlayFabIdPair& input, PFAccountManagementFacebookPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.facebookId = buffer.CopyTo(input.facebookId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromFacebookIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<FacebookPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<FacebookPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromFacebookIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromFacebookIDsResult const*> GetPlayFabIDsFromFacebookIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromFacebookIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromFacebookIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementFacebookPlayFabIdPair*) + sizeof(PFAccountManagementFacebookPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += FacebookPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromFacebookIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& input, PFAccountManagementGetPlayFabIDsFromFacebookIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<FacebookPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsRequest::ToJson() const
{
    return GetPlayFabIDsFromFacebookInstantGamesIdsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "FacebookInstantGamesIds", input.facebookInstantGamesIds, input.facebookInstantGamesIdsCount);
    return output;
}

void FacebookInstantGamesPlayFabIdPair::FromJson(const JsonValue& input)
{
    String facebookInstantGamesId{};
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", facebookInstantGamesId);
    this->SetFacebookInstantGamesId(std::move(facebookInstantGamesId));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t FacebookInstantGamesPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementFacebookInstantGamesPlayFabIdPair const*> FacebookInstantGamesPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<FacebookInstantGamesPlayFabIdPair>(&this->Model());
}

size_t FacebookInstantGamesPlayFabIdPair::RequiredBufferSize(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.facebookInstantGamesId)
    {
        requiredSize += (std::strlen(model.facebookInstantGamesId) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT FacebookInstantGamesPlayFabIdPair::Copy(const PFAccountManagementFacebookInstantGamesPlayFabIdPair& input, PFAccountManagementFacebookInstantGamesPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.facebookInstantGamesId = buffer.CopyTo(input.facebookInstantGamesId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromFacebookInstantGamesIdsResult::FromJson(const JsonValue& input)
{
    ModelVector<FacebookInstantGamesPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<FacebookInstantGamesPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromFacebookInstantGamesIdsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult const*> GetPlayFabIDsFromFacebookInstantGamesIdsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromFacebookInstantGamesIdsResult>(&this->Model());
}

size_t GetPlayFabIDsFromFacebookInstantGamesIdsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementFacebookInstantGamesPlayFabIdPair*) + sizeof(PFAccountManagementFacebookInstantGamesPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += FacebookInstantGamesPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromFacebookInstantGamesIdsResult::Copy(const PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& input, PFAccountManagementGetPlayFabIDsFromFacebookInstantGamesIdsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<FacebookInstantGamesPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromGameCenterIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromGameCenterIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromGameCenterIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "GameCenterIDs", input.gameCenterIDs, input.gameCenterIDsCount);
    return output;
}

void GameCenterPlayFabIdPair::FromJson(const JsonValue& input)
{
    String gameCenterId{};
    JsonUtils::ObjectGetMember(input, "GameCenterId", gameCenterId);
    this->SetGameCenterId(std::move(gameCenterId));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t GameCenterPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGameCenterPlayFabIdPair const*> GameCenterPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GameCenterPlayFabIdPair>(&this->Model());
}

size_t GameCenterPlayFabIdPair::RequiredBufferSize(const PFAccountManagementGameCenterPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.gameCenterId)
    {
        requiredSize += (std::strlen(model.gameCenterId) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT GameCenterPlayFabIdPair::Copy(const PFAccountManagementGameCenterPlayFabIdPair& input, PFAccountManagementGameCenterPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.gameCenterId = buffer.CopyTo(input.gameCenterId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromGameCenterIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<GameCenterPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<GameCenterPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromGameCenterIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult const*> GetPlayFabIDsFromGameCenterIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromGameCenterIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromGameCenterIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementGameCenterPlayFabIdPair*) + sizeof(PFAccountManagementGameCenterPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += GameCenterPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromGameCenterIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& input, PFAccountManagementGetPlayFabIDsFromGameCenterIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<GameCenterPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromGenericIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromGenericIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromGenericIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromGenericIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray<GenericServiceId>(output, "GenericIDs", input.genericIDs, input.genericIDsCount);
    return output;
}

void GenericPlayFabIdPair::FromJson(const JsonValue& input)
{
    StdExtra::optional<GenericServiceId> genericId{};
    JsonUtils::ObjectGetMember(input, "GenericId", genericId);
    if (genericId)
    {
        this->SetGenericId(std::move(*genericId));
    }

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t GenericPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGenericPlayFabIdPair const*> GenericPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GenericPlayFabIdPair>(&this->Model());
}

size_t GenericPlayFabIdPair::RequiredBufferSize(const PFAccountManagementGenericPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.genericId)
    {
        requiredSize += GenericServiceId::RequiredBufferSize(*model.genericId);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT GenericPlayFabIdPair::Copy(const PFAccountManagementGenericPlayFabIdPair& input, PFAccountManagementGenericPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.genericId = buffer.CopyTo<GenericServiceId>(input.genericId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromGenericIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<GenericPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<GenericPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromGenericIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromGenericIDsResult const*> GetPlayFabIDsFromGenericIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromGenericIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromGenericIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementGenericPlayFabIdPair*) + sizeof(PFAccountManagementGenericPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += GenericPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromGenericIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromGenericIDsResult& input, PFAccountManagementGetPlayFabIDsFromGenericIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<GenericPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromGoogleIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromGoogleIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromGoogleIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromGoogleIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "GoogleIDs", input.googleIDs, input.googleIDsCount);
    return output;
}

void GooglePlayFabIdPair::FromJson(const JsonValue& input)
{
    String googleId{};
    JsonUtils::ObjectGetMember(input, "GoogleId", googleId);
    this->SetGoogleId(std::move(googleId));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t GooglePlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGooglePlayFabIdPair const*> GooglePlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GooglePlayFabIdPair>(&this->Model());
}

size_t GooglePlayFabIdPair::RequiredBufferSize(const PFAccountManagementGooglePlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.googleId)
    {
        requiredSize += (std::strlen(model.googleId) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT GooglePlayFabIdPair::Copy(const PFAccountManagementGooglePlayFabIdPair& input, PFAccountManagementGooglePlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.googleId = buffer.CopyTo(input.googleId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromGoogleIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<GooglePlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<GooglePlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromGoogleIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromGoogleIDsResult const*> GetPlayFabIDsFromGoogleIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromGoogleIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromGoogleIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementGooglePlayFabIdPair*) + sizeof(PFAccountManagementGooglePlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += GooglePlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromGoogleIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& input, PFAccountManagementGetPlayFabIDsFromGoogleIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<GooglePlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromKongregateIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromKongregateIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromKongregateIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromKongregateIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "KongregateIDs", input.kongregateIDs, input.kongregateIDsCount);
    return output;
}

void KongregatePlayFabIdPair::FromJson(const JsonValue& input)
{
    String kongregateId{};
    JsonUtils::ObjectGetMember(input, "KongregateId", kongregateId);
    this->SetKongregateId(std::move(kongregateId));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t KongregatePlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementKongregatePlayFabIdPair const*> KongregatePlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<KongregatePlayFabIdPair>(&this->Model());
}

size_t KongregatePlayFabIdPair::RequiredBufferSize(const PFAccountManagementKongregatePlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.kongregateId)
    {
        requiredSize += (std::strlen(model.kongregateId) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT KongregatePlayFabIdPair::Copy(const PFAccountManagementKongregatePlayFabIdPair& input, PFAccountManagementKongregatePlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.kongregateId = buffer.CopyTo(input.kongregateId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromKongregateIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<KongregatePlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<KongregatePlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromKongregateIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromKongregateIDsResult const*> GetPlayFabIDsFromKongregateIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromKongregateIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromKongregateIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementKongregatePlayFabIdPair*) + sizeof(PFAccountManagementKongregatePlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += KongregatePlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromKongregateIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& input, PFAccountManagementGetPlayFabIDsFromKongregateIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<KongregatePlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::ToJson() const
{
    return GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "NintendoSwitchDeviceIds", input.nintendoSwitchDeviceIds, input.nintendoSwitchDeviceIdsCount);
    return output;
}

void NintendoSwitchPlayFabIdPair::FromJson(const JsonValue& input)
{
    String nintendoSwitchDeviceId{};
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", nintendoSwitchDeviceId);
    this->SetNintendoSwitchDeviceId(std::move(nintendoSwitchDeviceId));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t NintendoSwitchPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementNintendoSwitchPlayFabIdPair const*> NintendoSwitchPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<NintendoSwitchPlayFabIdPair>(&this->Model());
}

size_t NintendoSwitchPlayFabIdPair::RequiredBufferSize(const PFAccountManagementNintendoSwitchPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.nintendoSwitchDeviceId)
    {
        requiredSize += (std::strlen(model.nintendoSwitchDeviceId) + 1);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT NintendoSwitchPlayFabIdPair::Copy(const PFAccountManagementNintendoSwitchPlayFabIdPair& input, PFAccountManagementNintendoSwitchPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.nintendoSwitchDeviceId = buffer.CopyTo(input.nintendoSwitchDeviceId);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::FromJson(const JsonValue& input)
{
    ModelVector<NintendoSwitchPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<NintendoSwitchPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult const*> GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(&this->Model());
}

size_t GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementNintendoSwitchPlayFabIdPair*) + sizeof(PFAccountManagementNintendoSwitchPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += NintendoSwitchPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::Copy(const PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input, PFAccountManagementGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<NintendoSwitchPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromPSNAccountIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromPSNAccountIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromPSNAccountIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMemberArray(output, "PSNAccountIDs", input.PSNAccountIDs, input.PSNAccountIDsCount);
    return output;
}

void PSNAccountPlayFabIdPair::FromJson(const JsonValue& input)
{
    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    String PSNAccountId{};
    JsonUtils::ObjectGetMember(input, "PSNAccountId", PSNAccountId);
    this->SetPSNAccountId(std::move(PSNAccountId));
}

size_t PSNAccountPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementPSNAccountPlayFabIdPair const*> PSNAccountPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<PSNAccountPlayFabIdPair>(&this->Model());
}

size_t PSNAccountPlayFabIdPair::RequiredBufferSize(const PFAccountManagementPSNAccountPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.PSNAccountId)
    {
        requiredSize += (std::strlen(model.PSNAccountId) + 1);
    }
    return requiredSize;
}

HRESULT PSNAccountPlayFabIdPair::Copy(const PFAccountManagementPSNAccountPlayFabIdPair& input, PFAccountManagementPSNAccountPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.PSNAccountId = buffer.CopyTo(input.PSNAccountId);
    return S_OK;
}

void GetPlayFabIDsFromPSNAccountIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<PSNAccountPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<PSNAccountPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromPSNAccountIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult const*> GetPlayFabIDsFromPSNAccountIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromPSNAccountIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromPSNAccountIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementPSNAccountPlayFabIdPair*) + sizeof(PFAccountManagementPSNAccountPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += PSNAccountPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromPSNAccountIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& input, PFAccountManagementGetPlayFabIDsFromPSNAccountIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<PSNAccountPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromSteamIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromSteamIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromSteamIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromSteamIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "SteamStringIDs", input.steamStringIDs, input.steamStringIDsCount);
    return output;
}

void SteamPlayFabIdPair::FromJson(const JsonValue& input)
{
    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    String steamStringId{};
    JsonUtils::ObjectGetMember(input, "SteamStringId", steamStringId);
    this->SetSteamStringId(std::move(steamStringId));
}

size_t SteamPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementSteamPlayFabIdPair const*> SteamPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<SteamPlayFabIdPair>(&this->Model());
}

size_t SteamPlayFabIdPair::RequiredBufferSize(const PFAccountManagementSteamPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.steamStringId)
    {
        requiredSize += (std::strlen(model.steamStringId) + 1);
    }
    return requiredSize;
}

HRESULT SteamPlayFabIdPair::Copy(const PFAccountManagementSteamPlayFabIdPair& input, PFAccountManagementSteamPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.steamStringId = buffer.CopyTo(input.steamStringId);
    return S_OK;
}

void GetPlayFabIDsFromSteamIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<SteamPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<SteamPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromSteamIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromSteamIDsResult const*> GetPlayFabIDsFromSteamIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromSteamIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromSteamIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementSteamPlayFabIdPair*) + sizeof(PFAccountManagementSteamPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += SteamPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromSteamIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromSteamIDsResult& input, PFAccountManagementGetPlayFabIDsFromSteamIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<SteamPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromTwitchIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromTwitchIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromTwitchIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromTwitchIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "TwitchIds", input.twitchIds, input.twitchIdsCount);
    return output;
}

void TwitchPlayFabIdPair::FromJson(const JsonValue& input)
{
    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    String twitchId{};
    JsonUtils::ObjectGetMember(input, "TwitchId", twitchId);
    this->SetTwitchId(std::move(twitchId));
}

size_t TwitchPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementTwitchPlayFabIdPair const*> TwitchPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<TwitchPlayFabIdPair>(&this->Model());
}

size_t TwitchPlayFabIdPair::RequiredBufferSize(const PFAccountManagementTwitchPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.twitchId)
    {
        requiredSize += (std::strlen(model.twitchId) + 1);
    }
    return requiredSize;
}

HRESULT TwitchPlayFabIdPair::Copy(const PFAccountManagementTwitchPlayFabIdPair& input, PFAccountManagementTwitchPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.twitchId = buffer.CopyTo(input.twitchId);
    return S_OK;
}

void GetPlayFabIDsFromTwitchIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<TwitchPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<TwitchPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromTwitchIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromTwitchIDsResult const*> GetPlayFabIDsFromTwitchIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromTwitchIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromTwitchIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementTwitchPlayFabIdPair*) + sizeof(PFAccountManagementTwitchPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += TwitchPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromTwitchIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& input, PFAccountManagementGetPlayFabIDsFromTwitchIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<TwitchPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetPlayFabIDsFromXboxLiveIDsRequest::ToJson() const
{
    return GetPlayFabIDsFromXboxLiveIDsRequest::ToJson(this->Model());
}

JsonValue GetPlayFabIDsFromXboxLiveIDsRequest::ToJson(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
    JsonUtils::ObjectAddMemberArray(output, "XboxLiveAccountIDs", input.xboxLiveAccountIDs, input.xboxLiveAccountIDsCount);
    return output;
}

void XboxLiveAccountPlayFabIdPair::FromJson(const JsonValue& input)
{
    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    String xboxLiveAccountId{};
    JsonUtils::ObjectGetMember(input, "XboxLiveAccountId", xboxLiveAccountId);
    this->SetXboxLiveAccountId(std::move(xboxLiveAccountId));
}

size_t XboxLiveAccountPlayFabIdPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementXboxLiveAccountPlayFabIdPair const*> XboxLiveAccountPlayFabIdPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<XboxLiveAccountPlayFabIdPair>(&this->Model());
}

size_t XboxLiveAccountPlayFabIdPair::RequiredBufferSize(const PFAccountManagementXboxLiveAccountPlayFabIdPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.xboxLiveAccountId)
    {
        requiredSize += (std::strlen(model.xboxLiveAccountId) + 1);
    }
    return requiredSize;
}

HRESULT XboxLiveAccountPlayFabIdPair::Copy(const PFAccountManagementXboxLiveAccountPlayFabIdPair& input, PFAccountManagementXboxLiveAccountPlayFabIdPair& output, ModelBuffer& buffer)
{
    output = input;
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.xboxLiveAccountId = buffer.CopyTo(input.xboxLiveAccountId);
    return S_OK;
}

void GetPlayFabIDsFromXboxLiveIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<XboxLiveAccountPlayFabIdPair> data{};
    JsonUtils::ObjectGetMember<XboxLiveAccountPlayFabIdPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetPlayFabIDsFromXboxLiveIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult const*> GetPlayFabIDsFromXboxLiveIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayFabIDsFromXboxLiveIDsResult>(&this->Model());
}

size_t GetPlayFabIDsFromXboxLiveIDsResult::RequiredBufferSize(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementXboxLiveAccountPlayFabIdPair*) + sizeof(PFAccountManagementXboxLiveAccountPlayFabIdPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += XboxLiveAccountPlayFabIdPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetPlayFabIDsFromXboxLiveIDsResult::Copy(const PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& input, PFAccountManagementGetPlayFabIDsFromXboxLiveIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<XboxLiveAccountPlayFabIdPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue LinkAndroidDeviceIDRequest::ToJson() const
{
    return LinkAndroidDeviceIDRequest::ToJson(this->Model());
}

JsonValue LinkAndroidDeviceIDRequest::ToJson(const PFAccountManagementLinkAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    return output;
}

JsonValue LinkAppleRequest::ToJson() const
{
    return LinkAppleRequest::ToJson(this->Model());
}

JsonValue LinkAppleRequest::ToJson(const PFAccountManagementLinkAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    return output;
}

JsonValue LinkCustomIDRequest::ToJson() const
{
    return LinkCustomIDRequest::ToJson(this->Model());
}

JsonValue LinkCustomIDRequest::ToJson(const PFAccountManagementLinkCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

JsonValue LinkFacebookAccountRequest::ToJson() const
{
    return LinkFacebookAccountRequest::ToJson(this->Model());
}

JsonValue LinkFacebookAccountRequest::ToJson(const PFAccountManagementLinkFacebookAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

JsonValue LinkFacebookInstantGamesIdRequest::ToJson() const
{
    return LinkFacebookInstantGamesIdRequest::ToJson(this->Model());
}

JsonValue LinkFacebookInstantGamesIdRequest::ToJson(const PFAccountManagementLinkFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

JsonValue LinkGameCenterAccountRequest::ToJson() const
{
    return LinkGameCenterAccountRequest::ToJson(this->Model());
}

JsonValue LinkGameCenterAccountRequest::ToJson(const PFAccountManagementLinkGameCenterAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
    JsonUtils::ObjectAddMember(output, "Salt", input.salt);
    JsonUtils::ObjectAddMember(output, "Signature", input.signature);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
    return output;
}

JsonValue LinkGoogleAccountRequest::ToJson() const
{
    return LinkGoogleAccountRequest::ToJson(this->Model());
}

JsonValue LinkGoogleAccountRequest::ToJson(const PFAccountManagementLinkGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
    return output;
}

JsonValue LinkIOSDeviceIDRequest::ToJson() const
{
    return LinkIOSDeviceIDRequest::ToJson(this->Model());
}

JsonValue LinkIOSDeviceIDRequest::ToJson(const PFAccountManagementLinkIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    return output;
}

JsonValue LinkKongregateAccountRequest::ToJson() const
{
    return LinkKongregateAccountRequest::ToJson(this->Model());
}

JsonValue LinkKongregateAccountRequest::ToJson(const PFAccountManagementLinkKongregateAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    return output;
}

JsonValue LinkNintendoServiceAccountRequest::ToJson() const
{
    return LinkNintendoServiceAccountRequest::ToJson(this->Model());
}

JsonValue LinkNintendoServiceAccountRequest::ToJson(const PFAccountManagementLinkNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    return output;
}

JsonValue LinkNintendoSwitchDeviceIdRequest::ToJson() const
{
    return LinkNintendoSwitchDeviceIdRequest::ToJson(this->Model());
}

JsonValue LinkNintendoSwitchDeviceIdRequest::ToJson(const PFAccountManagementLinkNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

JsonValue LinkOpenIdConnectRequest::ToJson() const
{
    return LinkOpenIdConnectRequest::ToJson(this->Model());
}

JsonValue LinkOpenIdConnectRequest::ToJson(const PFAccountManagementLinkOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
    return output;
}

JsonValue ClientLinkPSNAccountRequest::ToJson() const
{
    return ClientLinkPSNAccountRequest::ToJson(this->Model());
}

JsonValue ClientLinkPSNAccountRequest::ToJson(const PFAccountManagementClientLinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

JsonValue LinkSteamAccountRequest::ToJson() const
{
    return LinkSteamAccountRequest::ToJson(this->Model());
}

JsonValue LinkSteamAccountRequest::ToJson(const PFAccountManagementLinkSteamAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
    return output;
}

JsonValue LinkTwitchAccountRequest::ToJson() const
{
    return LinkTwitchAccountRequest::ToJson(this->Model());
}

JsonValue LinkTwitchAccountRequest::ToJson(const PFAccountManagementLinkTwitchAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

JsonValue ClientLinkXboxAccountRequest::ToJson() const
{
    return ClientLinkXboxAccountRequest::ToJson(this->Model());
}

JsonValue ClientLinkXboxAccountRequest::ToJson(const PFAccountManagementClientLinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

JsonValue RemoveContactEmailRequest::ToJson() const
{
    return RemoveContactEmailRequest::ToJson(this->Model());
}

JsonValue RemoveContactEmailRequest::ToJson(const PFAccountManagementRemoveContactEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue ClientRemoveGenericIDRequest::ToJson() const
{
    return ClientRemoveGenericIDRequest::ToJson(this->Model());
}

JsonValue ClientRemoveGenericIDRequest::ToJson(const PFAccountManagementClientRemoveGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember<GenericServiceId>(output, "GenericId", input.genericId);
    return output;
}

JsonValue ReportPlayerClientRequest::ToJson() const
{
    return ReportPlayerClientRequest::ToJson(this->Model());
}

JsonValue ReportPlayerClientRequest::ToJson(const PFAccountManagementReportPlayerClientRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
    return output;
}

void ReportPlayerClientResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SubmissionsRemaining", this->m_model.submissionsRemaining);
}

size_t ReportPlayerClientResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementReportPlayerClientResult const*> ReportPlayerClientResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ReportPlayerClientResult>(&this->Model());
}

size_t ReportPlayerClientResult::RequiredBufferSize(const PFAccountManagementReportPlayerClientResult& model)
{
    UNREFERENCED_PARAMETER(model); // Fixed size
    return sizeof(ModelType);
}

HRESULT ReportPlayerClientResult::Copy(const PFAccountManagementReportPlayerClientResult& input, PFAccountManagementReportPlayerClientResult& output, ModelBuffer& buffer)
{
    output = input;
    UNREFERENCED_PARAMETER(buffer); // Fixed size
    return S_OK;
}

JsonValue ClientSendAccountRecoveryEmailRequest::ToJson() const
{
    return ClientSendAccountRecoveryEmailRequest::ToJson(this->Model());
}

JsonValue ClientSendAccountRecoveryEmailRequest::ToJson(const PFAccountManagementClientSendAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

JsonValue UnlinkAndroidDeviceIDRequest::ToJson() const
{
    return UnlinkAndroidDeviceIDRequest::ToJson(this->Model());
}

JsonValue UnlinkAndroidDeviceIDRequest::ToJson(const PFAccountManagementUnlinkAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkAppleRequest::ToJson() const
{
    return UnlinkAppleRequest::ToJson(this->Model());
}

JsonValue UnlinkAppleRequest::ToJson(const PFAccountManagementUnlinkAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkCustomIDRequest::ToJson() const
{
    return UnlinkCustomIDRequest::ToJson(this->Model());
}

JsonValue UnlinkCustomIDRequest::ToJson(const PFAccountManagementUnlinkCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkFacebookAccountRequest::ToJson() const
{
    return UnlinkFacebookAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkFacebookAccountRequest::ToJson(const PFAccountManagementUnlinkFacebookAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkFacebookInstantGamesIdRequest::ToJson() const
{
    return UnlinkFacebookInstantGamesIdRequest::ToJson(this->Model());
}

JsonValue UnlinkFacebookInstantGamesIdRequest::ToJson(const PFAccountManagementUnlinkFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    return output;
}

JsonValue UnlinkGameCenterAccountRequest::ToJson() const
{
    return UnlinkGameCenterAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkGameCenterAccountRequest::ToJson(const PFAccountManagementUnlinkGameCenterAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkGoogleAccountRequest::ToJson() const
{
    return UnlinkGoogleAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkGoogleAccountRequest::ToJson(const PFAccountManagementUnlinkGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkIOSDeviceIDRequest::ToJson() const
{
    return UnlinkIOSDeviceIDRequest::ToJson(this->Model());
}

JsonValue UnlinkIOSDeviceIDRequest::ToJson(const PFAccountManagementUnlinkIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    return output;
}

JsonValue UnlinkKongregateAccountRequest::ToJson() const
{
    return UnlinkKongregateAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkKongregateAccountRequest::ToJson(const PFAccountManagementUnlinkKongregateAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkNintendoServiceAccountRequest::ToJson() const
{
    return UnlinkNintendoServiceAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkNintendoServiceAccountRequest::ToJson(const PFAccountManagementUnlinkNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkNintendoSwitchDeviceIdRequest::ToJson() const
{
    return UnlinkNintendoSwitchDeviceIdRequest::ToJson(this->Model());
}

JsonValue UnlinkNintendoSwitchDeviceIdRequest::ToJson(const PFAccountManagementUnlinkNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

JsonValue UnlinkOpenIdConnectRequest::ToJson() const
{
    return UnlinkOpenIdConnectRequest::ToJson(this->Model());
}

JsonValue UnlinkOpenIdConnectRequest::ToJson(const PFAccountManagementUnlinkOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue ClientUnlinkPSNAccountRequest::ToJson() const
{
    return ClientUnlinkPSNAccountRequest::ToJson(this->Model());
}

JsonValue ClientUnlinkPSNAccountRequest::ToJson(const PFAccountManagementClientUnlinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkSteamAccountRequest::ToJson() const
{
    return UnlinkSteamAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkSteamAccountRequest::ToJson(const PFAccountManagementUnlinkSteamAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue UnlinkTwitchAccountRequest::ToJson() const
{
    return UnlinkTwitchAccountRequest::ToJson(this->Model());
}

JsonValue UnlinkTwitchAccountRequest::ToJson(const PFAccountManagementUnlinkTwitchAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue ClientUnlinkXboxAccountRequest::ToJson() const
{
    return ClientUnlinkXboxAccountRequest::ToJson(this->Model());
}

JsonValue ClientUnlinkXboxAccountRequest::ToJson(const PFAccountManagementClientUnlinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue ClientUpdateAvatarUrlRequest::ToJson() const
{
    return ClientUpdateAvatarUrlRequest::ToJson(this->Model());
}

JsonValue ClientUpdateAvatarUrlRequest::ToJson(const PFAccountManagementClientUpdateAvatarUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
    return output;
}

JsonValue ClientUpdateUserTitleDisplayNameRequest::ToJson() const
{
    return ClientUpdateUserTitleDisplayNameRequest::ToJson(this->Model());
}

JsonValue ClientUpdateUserTitleDisplayNameRequest::ToJson(const PFAccountManagementClientUpdateUserTitleDisplayNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    return output;
}

JsonValue ServerAddGenericIDRequest::ToJson() const
{
    return ServerAddGenericIDRequest::ToJson(this->Model());
}

JsonValue ServerAddGenericIDRequest::ToJson(const PFAccountManagementServerAddGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember<GenericServiceId>(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue DeletePushNotificationTemplateRequest::ToJson() const
{
    return DeletePushNotificationTemplateRequest::ToJson(this->Model());
}

JsonValue DeletePushNotificationTemplateRequest::ToJson(const PFAccountManagementDeletePushNotificationTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

JsonValue GetServerCustomIDsFromPlayFabIDsRequest::ToJson() const
{
    return GetServerCustomIDsFromPlayFabIDsRequest::ToJson(this->Model());
}

JsonValue GetServerCustomIDsFromPlayFabIDsRequest::ToJson(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "PlayFabIDs", input.playFabIDs, input.playFabIDsCount);
    return output;
}

void ServerCustomIDPlayFabIDPair::FromJson(const JsonValue& input)
{
    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    String serverCustomId{};
    JsonUtils::ObjectGetMember(input, "ServerCustomId", serverCustomId);
    this->SetServerCustomId(std::move(serverCustomId));
}

size_t ServerCustomIDPlayFabIDPair::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementServerCustomIDPlayFabIDPair const*> ServerCustomIDPlayFabIDPair::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ServerCustomIDPlayFabIDPair>(&this->Model());
}

size_t ServerCustomIDPlayFabIDPair::RequiredBufferSize(const PFAccountManagementServerCustomIDPlayFabIDPair& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.serverCustomId)
    {
        requiredSize += (std::strlen(model.serverCustomId) + 1);
    }
    return requiredSize;
}

HRESULT ServerCustomIDPlayFabIDPair::Copy(const PFAccountManagementServerCustomIDPlayFabIDPair& input, PFAccountManagementServerCustomIDPlayFabIDPair& output, ModelBuffer& buffer)
{
    output = input;
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.serverCustomId = buffer.CopyTo(input.serverCustomId);
    return S_OK;
}

void GetServerCustomIDsFromPlayFabIDsResult::FromJson(const JsonValue& input)
{
    ModelVector<ServerCustomIDPlayFabIDPair> data{};
    JsonUtils::ObjectGetMember<ServerCustomIDPlayFabIDPair>(input, "Data", data);
    this->SetData(std::move(data));
}

size_t GetServerCustomIDsFromPlayFabIDsResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult const*> GetServerCustomIDsFromPlayFabIDsResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetServerCustomIDsFromPlayFabIDsResult>(&this->Model());
}

size_t GetServerCustomIDsFromPlayFabIDsResult::RequiredBufferSize(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementServerCustomIDPlayFabIDPair*) + sizeof(PFAccountManagementServerCustomIDPlayFabIDPair*) * model.dataCount);
    for (size_t i = 0; i < model.dataCount; ++i)
    {
        requiredSize += ServerCustomIDPlayFabIDPair::RequiredBufferSize(*model.data[i]);
    }
    return requiredSize;
}

HRESULT GetServerCustomIDsFromPlayFabIDsResult::Copy(const PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& input, PFAccountManagementGetServerCustomIDsFromPlayFabIDsResult& output, ModelBuffer& buffer)
{
    output = input;
    output.data = buffer.CopyToArray<ServerCustomIDPlayFabIDPair>(input.data, input.dataCount);
    return S_OK;
}

JsonValue GetUserAccountInfoRequest::ToJson() const
{
    return GetUserAccountInfoRequest::ToJson(this->Model());
}

JsonValue GetUserAccountInfoRequest::ToJson(const PFAccountManagementGetUserAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void GetUserAccountInfoResult::FromJson(const JsonValue& input)
{
    StdExtra::optional<UserAccountInfo> userInfo{};
    JsonUtils::ObjectGetMember(input, "UserInfo", userInfo);
    if (userInfo)
    {
        this->SetUserInfo(std::move(*userInfo));
    }
}

size_t GetUserAccountInfoResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetUserAccountInfoResult const*> GetUserAccountInfoResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetUserAccountInfoResult>(&this->Model());
}

size_t GetUserAccountInfoResult::RequiredBufferSize(const PFAccountManagementGetUserAccountInfoResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.userInfo)
    {
        requiredSize += UserAccountInfo::RequiredBufferSize(*model.userInfo);
    }
    return requiredSize;
}

HRESULT GetUserAccountInfoResult::Copy(const PFAccountManagementGetUserAccountInfoResult& input, PFAccountManagementGetUserAccountInfoResult& output, ModelBuffer& buffer)
{
    output = input;
    output.userInfo = buffer.CopyTo<UserAccountInfo>(input.userInfo);
    return S_OK;
}

JsonValue ServerLinkPSNAccountRequest::ToJson() const
{
    return ServerLinkPSNAccountRequest::ToJson(this->Model());
}

JsonValue ServerLinkPSNAccountRequest::ToJson(const PFAccountManagementServerLinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

JsonValue LinkServerCustomIdRequest::ToJson() const
{
    return LinkServerCustomIdRequest::ToJson(this->Model());
}

JsonValue LinkServerCustomIdRequest::ToJson(const PFAccountManagementLinkServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

JsonValue ServerLinkXboxAccountRequest::ToJson() const
{
    return ServerLinkXboxAccountRequest::ToJson(this->Model());
}

JsonValue ServerLinkXboxAccountRequest::ToJson(const PFAccountManagementServerLinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

JsonValue ServerRemoveGenericIDRequest::ToJson() const
{
    return ServerRemoveGenericIDRequest::ToJson(this->Model());
}

JsonValue ServerRemoveGenericIDRequest::ToJson(const PFAccountManagementServerRemoveGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember<GenericServiceId>(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue LocalizedPushNotificationProperties::ToJson() const
{
    return LocalizedPushNotificationProperties::ToJson(this->Model());
}

JsonValue LocalizedPushNotificationProperties::ToJson(const PFAccountManagementLocalizedPushNotificationProperties& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    return output;
}

JsonValue SavePushNotificationTemplateRequest::ToJson() const
{
    return SavePushNotificationTemplateRequest::ToJson(this->Model());
}

JsonValue SavePushNotificationTemplateRequest::ToJson(const PFAccountManagementSavePushNotificationTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidPayload", input.androidPayload);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "IOSPayload", input.iOSPayload);
    JsonUtils::ObjectAddMemberDictionary<LocalizedPushNotificationProperties>(output, "LocalizedPushNotificationTemplates", input.localizedPushNotificationTemplates, input.localizedPushNotificationTemplatesCount);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

void SavePushNotificationTemplateResult::FromJson(const JsonValue& input)
{
    String pushNotificationTemplateId{};
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", pushNotificationTemplateId);
    this->SetPushNotificationTemplateId(std::move(pushNotificationTemplateId));
}

size_t SavePushNotificationTemplateResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementSavePushNotificationTemplateResult const*> SavePushNotificationTemplateResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<SavePushNotificationTemplateResult>(&this->Model());
}

size_t SavePushNotificationTemplateResult::RequiredBufferSize(const PFAccountManagementSavePushNotificationTemplateResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.pushNotificationTemplateId)
    {
        requiredSize += (std::strlen(model.pushNotificationTemplateId) + 1);
    }
    return requiredSize;
}

HRESULT SavePushNotificationTemplateResult::Copy(const PFAccountManagementSavePushNotificationTemplateResult& input, PFAccountManagementSavePushNotificationTemplateResult& output, ModelBuffer& buffer)
{
    output = input;
    output.pushNotificationTemplateId = buffer.CopyTo(input.pushNotificationTemplateId);
    return S_OK;
}

JsonValue SendCustomAccountRecoveryEmailRequest::ToJson() const
{
    return SendCustomAccountRecoveryEmailRequest::ToJson(this->Model());
}

JsonValue SendCustomAccountRecoveryEmailRequest::ToJson(const PFAccountManagementSendCustomAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

JsonValue SendEmailFromTemplateRequest::ToJson() const
{
    return SendEmailFromTemplateRequest::ToJson(this->Model());
}

JsonValue SendEmailFromTemplateRequest::ToJson(const PFAccountManagementSendEmailFromTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue AdvancedPushPlatformMsg::ToJson() const
{
    return AdvancedPushPlatformMsg::ToJson(this->Model());
}

JsonValue AdvancedPushPlatformMsg::ToJson(const PFAccountManagementAdvancedPushPlatformMsg& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GCMDataOnly", input.gCMDataOnly);
    JsonUtils::ObjectAddMember(output, "Json", input.json);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

JsonValue PushNotificationPackage::ToJson() const
{
    return PushNotificationPackage::ToJson(this->Model());
}

JsonValue PushNotificationPackage::ToJson(const PFAccountManagementPushNotificationPackage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Badge", input.badge);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "Icon", input.icon);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Sound", input.sound);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

JsonValue SendPushNotificationRequest::ToJson() const
{
    return SendPushNotificationRequest::ToJson(this->Model());
}

JsonValue SendPushNotificationRequest::ToJson(const PFAccountManagementSendPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray<AdvancedPushPlatformMsg>(output, "AdvancedPlatformDelivery", input.advancedPlatformDelivery, input.advancedPlatformDeliveryCount);
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember<PushNotificationPackage>(output, "Package", input.package);
    JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    JsonUtils::ObjectAddMemberArray(output, "TargetPlatforms", input.targetPlatforms, input.targetPlatformsCount);
    return output;
}

JsonValue SendPushNotificationFromTemplateRequest::ToJson() const
{
    return SendPushNotificationFromTemplateRequest::ToJson(this->Model());
}

JsonValue SendPushNotificationFromTemplateRequest::ToJson(const PFAccountManagementSendPushNotificationFromTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
    return output;
}

JsonValue ServerUnlinkPSNAccountRequest::ToJson() const
{
    return ServerUnlinkPSNAccountRequest::ToJson(this->Model());
}

JsonValue ServerUnlinkPSNAccountRequest::ToJson(const PFAccountManagementServerUnlinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue UnlinkServerCustomIdRequest::ToJson() const
{
    return UnlinkServerCustomIdRequest::ToJson(this->Model());
}

JsonValue UnlinkServerCustomIdRequest::ToJson(const PFAccountManagementUnlinkServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

JsonValue ServerUnlinkXboxAccountRequest::ToJson() const
{
    return ServerUnlinkXboxAccountRequest::ToJson(this->Model());
}

JsonValue ServerUnlinkXboxAccountRequest::ToJson(const PFAccountManagementServerUnlinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue ServerUpdateAvatarUrlRequest::ToJson() const
{
    return ServerUpdateAvatarUrlRequest::ToJson(this->Model());
}

JsonValue ServerUpdateAvatarUrlRequest::ToJson(const PFAccountManagementServerUpdateAvatarUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue GetGlobalPolicyRequest::ToJson() const
{
    return GetGlobalPolicyRequest::ToJson(this->Model());
}

JsonValue GetGlobalPolicyRequest::ToJson(const PFAccountManagementGetGlobalPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

JsonValue EntityPermissionStatement::ToJson() const
{
    return EntityPermissionStatement::ToJson(this->Model());
}

JsonValue EntityPermissionStatement::ToJson(const PFAccountManagementEntityPermissionStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Action", input.action);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "Condition", input.condition);
    JsonUtils::ObjectAddMember(output, "Effect", input.effect);
    JsonUtils::ObjectAddMember(output, "Principal", input.principal);
    JsonUtils::ObjectAddMember(output, "Resource", input.resource);
    return output;
}

void EntityPermissionStatement::FromJson(const JsonValue& input)
{
    String action{};
    JsonUtils::ObjectGetMember(input, "Action", action);
    this->SetAction(std::move(action));

    String comment{};
    JsonUtils::ObjectGetMember(input, "Comment", comment);
    this->SetComment(std::move(comment));

    JsonObject condition{};
    JsonUtils::ObjectGetMember(input, "Condition", condition);
    this->SetCondition(std::move(condition));

    JsonUtils::ObjectGetMember(input, "Effect", this->m_model.effect);

    JsonObject principal{};
    JsonUtils::ObjectGetMember(input, "Principal", principal);
    this->SetPrincipal(std::move(principal));

    String resource{};
    JsonUtils::ObjectGetMember(input, "Resource", resource);
    this->SetResource(std::move(resource));
}

size_t EntityPermissionStatement::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementEntityPermissionStatement const*> EntityPermissionStatement::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityPermissionStatement>(&this->Model());
}

size_t EntityPermissionStatement::RequiredBufferSize(const PFAccountManagementEntityPermissionStatement& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.action)
    {
        requiredSize += (std::strlen(model.action) + 1);
    }
    if (model.comment)
    {
        requiredSize += (std::strlen(model.comment) + 1);
    }
    if (model.condition.stringValue)
    {
    requiredSize += (std::strlen(model.condition.stringValue) + 1);
    }
    if (model.principal.stringValue)
    {
    requiredSize += (std::strlen(model.principal.stringValue) + 1);
    }
    if (model.resource)
    {
        requiredSize += (std::strlen(model.resource) + 1);
    }
    return requiredSize;
}

HRESULT EntityPermissionStatement::Copy(const PFAccountManagementEntityPermissionStatement& input, PFAccountManagementEntityPermissionStatement& output, ModelBuffer& buffer)
{
    output = input;
    output.action = buffer.CopyTo(input.action);
    output.comment = buffer.CopyTo(input.comment);
    output.condition.stringValue = buffer.CopyTo(input.condition.stringValue);
    output.principal.stringValue = buffer.CopyTo(input.principal.stringValue);
    output.resource = buffer.CopyTo(input.resource);
    return S_OK;
}

void GetGlobalPolicyResponse::FromJson(const JsonValue& input)
{
    ModelVector<EntityPermissionStatement> permissions{};
    JsonUtils::ObjectGetMember<EntityPermissionStatement>(input, "Permissions", permissions);
    this->SetPermissions(std::move(permissions));
}

size_t GetGlobalPolicyResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetGlobalPolicyResponse const*> GetGlobalPolicyResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetGlobalPolicyResponse>(&this->Model());
}

size_t GetGlobalPolicyResponse::RequiredBufferSize(const PFAccountManagementGetGlobalPolicyResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementEntityPermissionStatement*) + sizeof(PFAccountManagementEntityPermissionStatement*) * model.permissionsCount);
    for (size_t i = 0; i < model.permissionsCount; ++i)
    {
        requiredSize += EntityPermissionStatement::RequiredBufferSize(*model.permissions[i]);
    }
    return requiredSize;
}

HRESULT GetGlobalPolicyResponse::Copy(const PFAccountManagementGetGlobalPolicyResponse& input, PFAccountManagementGetGlobalPolicyResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.permissions = buffer.CopyToArray<EntityPermissionStatement>(input.permissions, input.permissionsCount);
    return S_OK;
}

JsonValue GetEntityProfileRequest::ToJson() const
{
    return GetEntityProfileRequest::ToJson(this->Model());
}

JsonValue GetEntityProfileRequest::ToJson(const PFAccountManagementGetEntityProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    return output;
}

void EntityProfileFileMetadata::FromJson(const JsonValue& input)
{
    String checksum{};
    JsonUtils::ObjectGetMember(input, "Checksum", checksum);
    this->SetChecksum(std::move(checksum));

    String fileName{};
    JsonUtils::ObjectGetMember(input, "FileName", fileName);
    this->SetFileName(std::move(fileName));

    JsonUtils::ObjectGetMemberTime(input, "LastModified", this->m_model.lastModified);

    JsonUtils::ObjectGetMember(input, "Size", this->m_model.size);
}

size_t EntityProfileFileMetadata::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementEntityProfileFileMetadata const*> EntityProfileFileMetadata::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityProfileFileMetadata>(&this->Model());
}

size_t EntityProfileFileMetadata::RequiredBufferSize(const PFAccountManagementEntityProfileFileMetadata& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.checksum)
    {
        requiredSize += (std::strlen(model.checksum) + 1);
    }
    if (model.fileName)
    {
        requiredSize += (std::strlen(model.fileName) + 1);
    }
    return requiredSize;
}

HRESULT EntityProfileFileMetadata::Copy(const PFAccountManagementEntityProfileFileMetadata& input, PFAccountManagementEntityProfileFileMetadata& output, ModelBuffer& buffer)
{
    output = input;
    output.checksum = buffer.CopyTo(input.checksum);
    output.fileName = buffer.CopyTo(input.fileName);
    return S_OK;
}

void EntityDataObject::FromJson(const JsonValue& input)
{
    JsonObject dataObject{};
    JsonUtils::ObjectGetMember(input, "DataObject", dataObject);
    this->SetDataObject(std::move(dataObject));

    String escapedDataObject{};
    JsonUtils::ObjectGetMember(input, "EscapedDataObject", escapedDataObject);
    this->SetEscapedDataObject(std::move(escapedDataObject));

    String objectName{};
    JsonUtils::ObjectGetMember(input, "ObjectName", objectName);
    this->SetObjectName(std::move(objectName));
}

size_t EntityDataObject::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementEntityDataObject const*> EntityDataObject::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityDataObject>(&this->Model());
}

size_t EntityDataObject::RequiredBufferSize(const PFAccountManagementEntityDataObject& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.dataObject.stringValue)
    {
    requiredSize += (std::strlen(model.dataObject.stringValue) + 1);
    }
    if (model.escapedDataObject)
    {
        requiredSize += (std::strlen(model.escapedDataObject) + 1);
    }
    if (model.objectName)
    {
        requiredSize += (std::strlen(model.objectName) + 1);
    }
    return requiredSize;
}

HRESULT EntityDataObject::Copy(const PFAccountManagementEntityDataObject& input, PFAccountManagementEntityDataObject& output, ModelBuffer& buffer)
{
    output = input;
    output.dataObject.stringValue = buffer.CopyTo(input.dataObject.stringValue);
    output.escapedDataObject = buffer.CopyTo(input.escapedDataObject);
    output.objectName = buffer.CopyTo(input.objectName);
    return S_OK;
}

void EntityStatisticChildValue::FromJson(const JsonValue& input)
{
    String childName{};
    JsonUtils::ObjectGetMember(input, "ChildName", childName);
    this->SetChildName(std::move(childName));

    String metadata{};
    JsonUtils::ObjectGetMember(input, "Metadata", metadata);
    this->SetMetadata(std::move(metadata));

    JsonUtils::ObjectGetMember(input, "Value", this->m_model.value);
}

size_t EntityStatisticChildValue::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementEntityStatisticChildValue const*> EntityStatisticChildValue::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityStatisticChildValue>(&this->Model());
}

size_t EntityStatisticChildValue::RequiredBufferSize(const PFAccountManagementEntityStatisticChildValue& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.childName)
    {
        requiredSize += (std::strlen(model.childName) + 1);
    }
    if (model.metadata)
    {
        requiredSize += (std::strlen(model.metadata) + 1);
    }
    return requiredSize;
}

HRESULT EntityStatisticChildValue::Copy(const PFAccountManagementEntityStatisticChildValue& input, PFAccountManagementEntityStatisticChildValue& output, ModelBuffer& buffer)
{
    output = input;
    output.childName = buffer.CopyTo(input.childName);
    output.metadata = buffer.CopyTo(input.metadata);
    return S_OK;
}

void EntityStatisticValue::FromJson(const JsonValue& input)
{
    ModelDictionaryEntryVector<EntityStatisticChildValue> childStatistics{};
    JsonUtils::ObjectGetMember<EntityStatisticChildValue>(input, "ChildStatistics", childStatistics);
    this->SetChildStatistics(std::move(childStatistics));

    String metadata{};
    JsonUtils::ObjectGetMember(input, "Metadata", metadata);
    this->SetMetadata(std::move(metadata));

    String name{};
    JsonUtils::ObjectGetMember(input, "Name", name);
    this->SetName(std::move(name));

    StdExtra::optional<int32_t> value{};
    JsonUtils::ObjectGetMember(input, "Value", value);
    this->SetValue(std::move(value));

    JsonUtils::ObjectGetMember(input, "Version", this->m_model.version);
}

size_t EntityStatisticValue::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementEntityStatisticValue const*> EntityStatisticValue::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityStatisticValue>(&this->Model());
}

size_t EntityStatisticValue::RequiredBufferSize(const PFAccountManagementEntityStatisticValue& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementEntityStatisticChildValueDictionaryEntry) + sizeof(PFAccountManagementEntityStatisticChildValueDictionaryEntry) * model.childStatisticsCount);
    for (size_t i = 0; i < model.childStatisticsCount; ++i)
    {
        requiredSize += (std::strlen(model.childStatistics[i].key) + 1);
        requiredSize += EntityStatisticChildValue::RequiredBufferSize(*model.childStatistics[i].value);
    }
    if (model.metadata)
    {
        requiredSize += (std::strlen(model.metadata) + 1);
    }
    if (model.name)
    {
        requiredSize += (std::strlen(model.name) + 1);
    }
    if (model.value)
    {
        requiredSize += (alignof(int32_t) + sizeof(int32_t));
    }
    return requiredSize;
}

HRESULT EntityStatisticValue::Copy(const PFAccountManagementEntityStatisticValue& input, PFAccountManagementEntityStatisticValue& output, ModelBuffer& buffer)
{
    output = input;
    output.childStatistics = buffer.CopyToDictionary<EntityStatisticChildValue>(input.childStatistics, input.childStatisticsCount);
    output.metadata = buffer.CopyTo(input.metadata);
    output.name = buffer.CopyTo(input.name);
    output.value = buffer.CopyTo(input.value);
    return S_OK;
}

void EntityProfileBody::FromJson(const JsonValue& input)
{
    String avatarUrl{};
    JsonUtils::ObjectGetMember(input, "AvatarUrl", avatarUrl);
    this->SetAvatarUrl(std::move(avatarUrl));

    JsonUtils::ObjectGetMemberTime(input, "Created", this->m_model.created);

    String displayName{};
    JsonUtils::ObjectGetMember(input, "DisplayName", displayName);
    this->SetDisplayName(std::move(displayName));

    StdExtra::optional<EntityKey> entity{};
    JsonUtils::ObjectGetMember(input, "Entity", entity);
    if (entity)
    {
        this->SetEntity(std::move(*entity));
    }

    String entityChain{};
    JsonUtils::ObjectGetMember(input, "EntityChain", entityChain);
    this->SetEntityChain(std::move(entityChain));

    CStringVector experimentVariants{};
    JsonUtils::ObjectGetMember(input, "ExperimentVariants", experimentVariants);
    this->SetExperimentVariants(std::move(experimentVariants));

    ModelDictionaryEntryVector<EntityProfileFileMetadata> files{};
    JsonUtils::ObjectGetMember<EntityProfileFileMetadata>(input, "Files", files);
    this->SetFiles(std::move(files));

    String language{};
    JsonUtils::ObjectGetMember(input, "Language", language);
    this->SetLanguage(std::move(language));

    String leaderboardMetadata{};
    JsonUtils::ObjectGetMember(input, "LeaderboardMetadata", leaderboardMetadata);
    this->SetLeaderboardMetadata(std::move(leaderboardMetadata));

    StdExtra::optional<EntityLineage> lineage{};
    JsonUtils::ObjectGetMember(input, "Lineage", lineage);
    if (lineage)
    {
        this->SetLineage(std::move(*lineage));
    }

    ModelDictionaryEntryVector<EntityDataObject> objects{};
    JsonUtils::ObjectGetMember<EntityDataObject>(input, "Objects", objects);
    this->SetObjects(std::move(objects));

    ModelVector<EntityPermissionStatement> permissions{};
    JsonUtils::ObjectGetMember<EntityPermissionStatement>(input, "Permissions", permissions);
    this->SetPermissions(std::move(permissions));

    ModelDictionaryEntryVector<EntityStatisticValue> statistics{};
    JsonUtils::ObjectGetMember<EntityStatisticValue>(input, "Statistics", statistics);
    this->SetStatistics(std::move(statistics));

    JsonUtils::ObjectGetMember(input, "VersionNumber", this->m_model.versionNumber);
}

size_t EntityProfileBody::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementEntityProfileBody const*> EntityProfileBody::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityProfileBody>(&this->Model());
}

size_t EntityProfileBody::RequiredBufferSize(const PFAccountManagementEntityProfileBody& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.avatarUrl)
    {
        requiredSize += (std::strlen(model.avatarUrl) + 1);
    }
    if (model.displayName)
    {
        requiredSize += (std::strlen(model.displayName) + 1);
    }
    if (model.entity)
    {
        requiredSize += EntityKey::RequiredBufferSize(*model.entity);
    }
    if (model.entityChain)
    {
        requiredSize += (std::strlen(model.entityChain) + 1);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.experimentVariantsCount);
    for (size_t i = 0; i < model.experimentVariantsCount; ++i)
    {
        requiredSize += (std::strlen(model.experimentVariants[i]) + 1);
    }
    requiredSize += (alignof(PFAccountManagementEntityProfileFileMetadataDictionaryEntry) + sizeof(PFAccountManagementEntityProfileFileMetadataDictionaryEntry) * model.filesCount);
    for (size_t i = 0; i < model.filesCount; ++i)
    {
        requiredSize += (std::strlen(model.files[i].key) + 1);
        requiredSize += EntityProfileFileMetadata::RequiredBufferSize(*model.files[i].value);
    }
    if (model.language)
    {
        requiredSize += (std::strlen(model.language) + 1);
    }
    if (model.leaderboardMetadata)
    {
        requiredSize += (std::strlen(model.leaderboardMetadata) + 1);
    }
    if (model.lineage)
    {
        requiredSize += EntityLineage::RequiredBufferSize(*model.lineage);
    }
    requiredSize += (alignof(PFAccountManagementEntityDataObjectDictionaryEntry) + sizeof(PFAccountManagementEntityDataObjectDictionaryEntry) * model.objectsCount);
    for (size_t i = 0; i < model.objectsCount; ++i)
    {
        requiredSize += (std::strlen(model.objects[i].key) + 1);
        requiredSize += EntityDataObject::RequiredBufferSize(*model.objects[i].value);
    }
    requiredSize += (alignof(PFAccountManagementEntityPermissionStatement*) + sizeof(PFAccountManagementEntityPermissionStatement*) * model.permissionsCount);
    for (size_t i = 0; i < model.permissionsCount; ++i)
    {
        requiredSize += EntityPermissionStatement::RequiredBufferSize(*model.permissions[i]);
    }
    requiredSize += (alignof(PFAccountManagementEntityStatisticValueDictionaryEntry) + sizeof(PFAccountManagementEntityStatisticValueDictionaryEntry) * model.statisticsCount);
    for (size_t i = 0; i < model.statisticsCount; ++i)
    {
        requiredSize += (std::strlen(model.statistics[i].key) + 1);
        requiredSize += EntityStatisticValue::RequiredBufferSize(*model.statistics[i].value);
    }
    return requiredSize;
}

HRESULT EntityProfileBody::Copy(const PFAccountManagementEntityProfileBody& input, PFAccountManagementEntityProfileBody& output, ModelBuffer& buffer)
{
    output = input;
    output.avatarUrl = buffer.CopyTo(input.avatarUrl);
    output.displayName = buffer.CopyTo(input.displayName);
    output.entity = buffer.CopyTo<EntityKey>(input.entity);
    output.entityChain = buffer.CopyTo(input.entityChain);
    output.experimentVariants = buffer.CopyToArray(input.experimentVariants, input.experimentVariantsCount);
    output.files = buffer.CopyToDictionary<EntityProfileFileMetadata>(input.files, input.filesCount);
    output.language = buffer.CopyTo(input.language);
    output.leaderboardMetadata = buffer.CopyTo(input.leaderboardMetadata);
    output.lineage = buffer.CopyTo<EntityLineage>(input.lineage);
    output.objects = buffer.CopyToDictionary<EntityDataObject>(input.objects, input.objectsCount);
    output.permissions = buffer.CopyToArray<EntityPermissionStatement>(input.permissions, input.permissionsCount);
    output.statistics = buffer.CopyToDictionary<EntityStatisticValue>(input.statistics, input.statisticsCount);
    return S_OK;
}

void GetEntityProfileResponse::FromJson(const JsonValue& input)
{
    StdExtra::optional<EntityProfileBody> profile{};
    JsonUtils::ObjectGetMember(input, "Profile", profile);
    if (profile)
    {
        this->SetProfile(std::move(*profile));
    }
}

size_t GetEntityProfileResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetEntityProfileResponse const*> GetEntityProfileResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetEntityProfileResponse>(&this->Model());
}

size_t GetEntityProfileResponse::RequiredBufferSize(const PFAccountManagementGetEntityProfileResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.profile)
    {
        requiredSize += EntityProfileBody::RequiredBufferSize(*model.profile);
    }
    return requiredSize;
}

HRESULT GetEntityProfileResponse::Copy(const PFAccountManagementGetEntityProfileResponse& input, PFAccountManagementGetEntityProfileResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.profile = buffer.CopyTo<EntityProfileBody>(input.profile);
    return S_OK;
}

JsonValue GetEntityProfilesRequest::ToJson() const
{
    return GetEntityProfilesRequest::ToJson(this->Model());
}

JsonValue GetEntityProfilesRequest::ToJson(const PFAccountManagementGetEntityProfilesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
    JsonUtils::ObjectAddMemberArray<EntityKey>(output, "Entities", input.entities, input.entitiesCount);
    return output;
}

void GetEntityProfilesResponse::FromJson(const JsonValue& input)
{
    ModelVector<EntityProfileBody> profiles{};
    JsonUtils::ObjectGetMember<EntityProfileBody>(input, "Profiles", profiles);
    this->SetProfiles(std::move(profiles));
}

size_t GetEntityProfilesResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetEntityProfilesResponse const*> GetEntityProfilesResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetEntityProfilesResponse>(&this->Model());
}

size_t GetEntityProfilesResponse::RequiredBufferSize(const PFAccountManagementGetEntityProfilesResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementEntityProfileBody*) + sizeof(PFAccountManagementEntityProfileBody*) * model.profilesCount);
    for (size_t i = 0; i < model.profilesCount; ++i)
    {
        requiredSize += EntityProfileBody::RequiredBufferSize(*model.profiles[i]);
    }
    return requiredSize;
}

HRESULT GetEntityProfilesResponse::Copy(const PFAccountManagementGetEntityProfilesResponse& input, PFAccountManagementGetEntityProfilesResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.profiles = buffer.CopyToArray<EntityProfileBody>(input.profiles, input.profilesCount);
    return S_OK;
}

JsonValue GetTitlePlayersFromMasterPlayerAccountIdsRequest::ToJson() const
{
    return GetTitlePlayersFromMasterPlayerAccountIdsRequest::ToJson(this->Model());
}

JsonValue GetTitlePlayersFromMasterPlayerAccountIdsRequest::ToJson(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMemberArray(output, "MasterPlayerAccountIds", input.masterPlayerAccountIds, input.masterPlayerAccountIdsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

void GetTitlePlayersFromMasterPlayerAccountIdsResponse::FromJson(const JsonValue& input)
{
    String titleId{};
    JsonUtils::ObjectGetMember(input, "TitleId", titleId);
    this->SetTitleId(std::move(titleId));

    ModelDictionaryEntryVector<EntityKey> titlePlayerAccounts{};
    JsonUtils::ObjectGetMember<EntityKey>(input, "TitlePlayerAccounts", titlePlayerAccounts);
    this->SetTitlePlayerAccounts(std::move(titlePlayerAccounts));
}

size_t GetTitlePlayersFromMasterPlayerAccountIdsResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse const*> GetTitlePlayersFromMasterPlayerAccountIdsResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetTitlePlayersFromMasterPlayerAccountIdsResponse>(&this->Model());
}

size_t GetTitlePlayersFromMasterPlayerAccountIdsResponse::RequiredBufferSize(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.titleId)
    {
        requiredSize += (std::strlen(model.titleId) + 1);
    }
    requiredSize += (alignof(PFEntityKeyDictionaryEntry) + sizeof(PFEntityKeyDictionaryEntry) * model.titlePlayerAccountsCount);
    for (size_t i = 0; i < model.titlePlayerAccountsCount; ++i)
    {
        requiredSize += (std::strlen(model.titlePlayerAccounts[i].key) + 1);
        requiredSize += EntityKey::RequiredBufferSize(*model.titlePlayerAccounts[i].value);
    }
    return requiredSize;
}

HRESULT GetTitlePlayersFromMasterPlayerAccountIdsResponse::Copy(const PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& input, PFAccountManagementGetTitlePlayersFromMasterPlayerAccountIdsResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.titleId = buffer.CopyTo(input.titleId);
    output.titlePlayerAccounts = buffer.CopyToDictionary<EntityKey>(input.titlePlayerAccounts, input.titlePlayerAccountsCount);
    return S_OK;
}

JsonValue SetGlobalPolicyRequest::ToJson() const
{
    return SetGlobalPolicyRequest::ToJson(this->Model());
}

JsonValue SetGlobalPolicyRequest::ToJson(const PFAccountManagementSetGlobalPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMemberArray<EntityPermissionStatement>(output, "Permissions", input.permissions, input.permissionsCount);
    return output;
}

JsonValue SetProfileLanguageRequest::ToJson() const
{
    return SetProfileLanguageRequest::ToJson(this->Model());
}

JsonValue SetProfileLanguageRequest::ToJson(const PFAccountManagementSetProfileLanguageRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "ExpectedVersion", input.expectedVersion);
    JsonUtils::ObjectAddMember(output, "Language", input.language);
    return output;
}

void SetProfileLanguageResponse::FromJson(const JsonValue& input)
{
    StdExtra::optional<PFOperationTypes> operationResult{};
    JsonUtils::ObjectGetMember(input, "OperationResult", operationResult);
    this->SetOperationResult(std::move(operationResult));

    StdExtra::optional<int32_t> versionNumber{};
    JsonUtils::ObjectGetMember(input, "VersionNumber", versionNumber);
    this->SetVersionNumber(std::move(versionNumber));
}

size_t SetProfileLanguageResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementSetProfileLanguageResponse const*> SetProfileLanguageResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<SetProfileLanguageResponse>(&this->Model());
}

size_t SetProfileLanguageResponse::RequiredBufferSize(const PFAccountManagementSetProfileLanguageResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.operationResult)
    {
        requiredSize += (alignof(PFOperationTypes) + sizeof(PFOperationTypes));
    }
    if (model.versionNumber)
    {
        requiredSize += (alignof(int32_t) + sizeof(int32_t));
    }
    return requiredSize;
}

HRESULT SetProfileLanguageResponse::Copy(const PFAccountManagementSetProfileLanguageResponse& input, PFAccountManagementSetProfileLanguageResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.operationResult = buffer.CopyTo(input.operationResult);
    output.versionNumber = buffer.CopyTo(input.versionNumber);
    return S_OK;
}

JsonValue SetEntityProfilePolicyRequest::ToJson() const
{
    return SetEntityProfilePolicyRequest::ToJson(this->Model());
}

JsonValue SetEntityProfilePolicyRequest::ToJson(const PFAccountManagementSetEntityProfilePolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<EntityKey>(output, "Entity", input.entity);
    JsonUtils::ObjectAddMemberArray<EntityPermissionStatement>(output, "Statements", input.statements, input.statementsCount);
    return output;
}

void SetEntityProfilePolicyResponse::FromJson(const JsonValue& input)
{
    ModelVector<EntityPermissionStatement> permissions{};
    JsonUtils::ObjectGetMember<EntityPermissionStatement>(input, "Permissions", permissions);
    this->SetPermissions(std::move(permissions));
}

size_t SetEntityProfilePolicyResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAccountManagementSetEntityProfilePolicyResponse const*> SetEntityProfilePolicyResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<SetEntityProfilePolicyResponse>(&this->Model());
}

size_t SetEntityProfilePolicyResponse::RequiredBufferSize(const PFAccountManagementSetEntityProfilePolicyResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAccountManagementEntityPermissionStatement*) + sizeof(PFAccountManagementEntityPermissionStatement*) * model.permissionsCount);
    for (size_t i = 0; i < model.permissionsCount; ++i)
    {
        requiredSize += EntityPermissionStatement::RequiredBufferSize(*model.permissions[i]);
    }
    return requiredSize;
}

HRESULT SetEntityProfilePolicyResponse::Copy(const PFAccountManagementSetEntityProfilePolicyResponse& input, PFAccountManagementSetEntityProfilePolicyResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.permissions = buffer.CopyToArray<EntityPermissionStatement>(input.permissions, input.permissionsCount);
    return S_OK;
}

} // namespace AccountManagement
} // namespace PlayFab
