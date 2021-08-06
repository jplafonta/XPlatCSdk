#include "stdafx.h"
#include "SharedDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{

ItemInstance::ItemInstance() :
    PFItemInstance{}
{
}

ItemInstance::ItemInstance(const ItemInstance& src) :
    PFItemInstance{ src },
    m_annotation{ src.m_annotation },
    m_bundleContents{ src.m_bundleContents },
    m_bundleParent{ src.m_bundleParent },
    m_catalogVersion{ src.m_catalogVersion },
    m_customData{ src.m_customData },
    m_displayName{ src.m_displayName },
    m_expiration{ src.m_expiration },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_purchaseDate{ src.m_purchaseDate },
    m_remainingUses{ src.m_remainingUses },
    m_unitCurrency{ src.m_unitCurrency },
    m_usesIncrementedBy{ src.m_usesIncrementedBy }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

ItemInstance::ItemInstance(ItemInstance&& src) :
    PFItemInstance{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_bundleContents{ std::move(src.m_bundleContents) },
    m_bundleParent{ std::move(src.m_bundleParent) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customData{ std::move(src.m_customData) },
    m_displayName{ std::move(src.m_displayName) },
    m_expiration{ std::move(src.m_expiration) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_purchaseDate{ std::move(src.m_purchaseDate) },
    m_remainingUses{ std::move(src.m_remainingUses) },
    m_unitCurrency{ std::move(src.m_unitCurrency) },
    m_usesIncrementedBy{ std::move(src.m_usesIncrementedBy) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

ItemInstance::ItemInstance(const PFItemInstance& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemInstance::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
    JsonUtils::ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
    JsonUtils::ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
    JsonUtils::ObjectGetMember(input, "UnitPrice", unitPrice);
    JsonUtils::ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
}

JsonValue ItemInstance::ToJson() const
{
    return JsonUtils::ToJson<PFItemInstance>(*this);
}

ScriptExecutionError::ScriptExecutionError() :
    PFScriptExecutionError{}
{
}

ScriptExecutionError::ScriptExecutionError(const ScriptExecutionError& src) :
    PFScriptExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(ScriptExecutionError&& src) :
    PFScriptExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(const PFScriptExecutionError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ScriptExecutionError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
}

JsonValue ScriptExecutionError::ToJson() const
{
    return JsonUtils::ToJson<PFScriptExecutionError>(*this);
}

size_t ScriptExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFScriptExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void ScriptExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFScriptExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFScriptExecutionError);
    memcpy(stringBuffer, m_error.data(), m_error.size() + 1);
    serializedStruct->error = stringBuffer;
    stringBuffer += m_error.size() + 1;
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_stackTrace.data(), m_stackTrace.size() + 1);
    serializedStruct->stackTrace = stringBuffer;
    stringBuffer += m_stackTrace.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LogStatement::LogStatement() :
    PFLogStatement{}
{
}

LogStatement::LogStatement(const LogStatement& src) :
    PFLogStatement{ src },
    m_data{ src.m_data },
    m_level{ src.m_level },
    m_message{ src.m_message }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(LogStatement&& src) :
    PFLogStatement{ src },
    m_data{ std::move(src.m_data) },
    m_level{ std::move(src.m_level) },
    m_message{ std::move(src.m_message) }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(const PFLogStatement& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LogStatement::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data);
    JsonUtils::ObjectGetMember(input, "Level", m_level, level);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
}

JsonValue LogStatement::ToJson() const
{
    return JsonUtils::ToJson<PFLogStatement>(*this);
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult() :
    PFExecuteCloudScriptResult{}
{
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
    PFExecuteCloudScriptResult{ src },
    m_error{ src.m_error },
    m_functionName{ src.m_functionName },
    m_functionResult{ src.m_functionResult },
    m_functionResultTooLarge{ src.m_functionResultTooLarge },
    m_logs{ src.m_logs },
    m_logsTooLarge{ src.m_logsTooLarge }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
    logs = m_logs.Empty() ? nullptr : m_logs.Data();
    logsTooLarge = m_logsTooLarge ? m_logsTooLarge.operator->() : nullptr;
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src) :
    PFExecuteCloudScriptResult{ src },
    m_error{ std::move(src.m_error) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_functionResultTooLarge{ std::move(src.m_functionResultTooLarge) },
    m_logs{ std::move(src.m_logs) },
    m_logsTooLarge{ std::move(src.m_logsTooLarge) }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
    logs = m_logs.Empty() ? nullptr : m_logs.Data();
    logsTooLarge = m_logsTooLarge ? m_logsTooLarge.operator->() : nullptr;
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const PFExecuteCloudScriptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "APIRequestsIssued", aPIRequestsIssued);
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "ExecutionTimeSeconds", executionTimeSeconds);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
    JsonUtils::ObjectGetMember(input, "FunctionResultTooLarge", m_functionResultTooLarge, functionResultTooLarge);
    JsonUtils::ObjectGetMember(input, "HttpRequestsIssued", httpRequestsIssued);
    JsonUtils::ObjectGetMember(input, "Logs", m_logs, logs, logsCount);
    JsonUtils::ObjectGetMember(input, "LogsTooLarge", m_logsTooLarge, logsTooLarge);
    JsonUtils::ObjectGetMember(input, "MemoryConsumedBytes", memoryConsumedBytes);
    JsonUtils::ObjectGetMember(input, "ProcessorTimeSeconds", processorTimeSeconds);
    JsonUtils::ObjectGetMember(input, "Revision", revision);
}

JsonValue ExecuteCloudScriptResult::ToJson() const
{
    return JsonUtils::ToJson<PFExecuteCloudScriptResult>(*this);
}

NameIdentifier::NameIdentifier() :
    PFNameIdentifier{}
{
}

NameIdentifier::NameIdentifier(const NameIdentifier& src) :
    PFNameIdentifier{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(NameIdentifier&& src) :
    PFNameIdentifier{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(const PFNameIdentifier& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NameIdentifier::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue NameIdentifier::ToJson() const
{
    return JsonUtils::ToJson<PFNameIdentifier>(*this);
}

size_t NameIdentifier::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFNameIdentifier) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void NameIdentifier::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFNameIdentifier{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFNameIdentifier);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserDataRecord::UserDataRecord() :
    PFUserDataRecord{}
{
}

UserDataRecord::UserDataRecord(const UserDataRecord& src) :
    PFUserDataRecord{ src },
    m_permission{ src.m_permission },
    m_value{ src.m_value }
{
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

UserDataRecord::UserDataRecord(UserDataRecord&& src) :
    PFUserDataRecord{ src },
    m_permission{ std::move(src.m_permission) },
    m_value{ std::move(src.m_value) }
{
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

UserDataRecord::UserDataRecord(const PFUserDataRecord& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserDataRecord::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LastUpdated", lastUpdated, true);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue UserDataRecord::ToJson() const
{
    return JsonUtils::ToJson<PFUserDataRecord>(*this);
}

PlayerProfileViewConstraints::PlayerProfileViewConstraints() :
    PFPlayerProfileViewConstraints{}
{
}


PlayerProfileViewConstraints::PlayerProfileViewConstraints(const PFPlayerProfileViewConstraints& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfileViewConstraints::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ShowAvatarUrl", showAvatarUrl);
    JsonUtils::ObjectGetMember(input, "ShowBannedUntil", showBannedUntil);
    JsonUtils::ObjectGetMember(input, "ShowCampaignAttributions", showCampaignAttributions);
    JsonUtils::ObjectGetMember(input, "ShowContactEmailAddresses", showContactEmailAddresses);
    JsonUtils::ObjectGetMember(input, "ShowCreated", showCreated);
    JsonUtils::ObjectGetMember(input, "ShowDisplayName", showDisplayName);
    JsonUtils::ObjectGetMember(input, "ShowExperimentVariants", showExperimentVariants);
    JsonUtils::ObjectGetMember(input, "ShowLastLogin", showLastLogin);
    JsonUtils::ObjectGetMember(input, "ShowLinkedAccounts", showLinkedAccounts);
    JsonUtils::ObjectGetMember(input, "ShowLocations", showLocations);
    JsonUtils::ObjectGetMember(input, "ShowMemberships", showMemberships);
    JsonUtils::ObjectGetMember(input, "ShowOrigination", showOrigination);
    JsonUtils::ObjectGetMember(input, "ShowPushNotificationRegistrations", showPushNotificationRegistrations);
    JsonUtils::ObjectGetMember(input, "ShowStatistics", showStatistics);
    JsonUtils::ObjectGetMember(input, "ShowTags", showTags);
    JsonUtils::ObjectGetMember(input, "ShowTotalValueToDateInUsd", showTotalValueToDateInUsd);
    JsonUtils::ObjectGetMember(input, "ShowValuesToDate", showValuesToDate);
}

JsonValue PlayerProfileViewConstraints::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerProfileViewConstraints>(*this);
}

size_t PlayerProfileViewConstraints::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerProfileViewConstraints) };
    return serializedSize;
}

void PlayerProfileViewConstraints::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerProfileViewConstraints{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerProfileViewConstraints);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

AdCampaignAttributionModel::AdCampaignAttributionModel() :
    PFAdCampaignAttributionModel{}
{
}

AdCampaignAttributionModel::AdCampaignAttributionModel(const AdCampaignAttributionModel& src) :
    PFAdCampaignAttributionModel{ src },
    m_campaignId{ src.m_campaignId },
    m_platform{ src.m_platform }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttributionModel::AdCampaignAttributionModel(AdCampaignAttributionModel&& src) :
    PFAdCampaignAttributionModel{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_platform{ std::move(src.m_platform) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttributionModel::AdCampaignAttributionModel(const PFAdCampaignAttributionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignAttributionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AttributedAt", attributedAt, true);
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue AdCampaignAttributionModel::ToJson() const
{
    return JsonUtils::ToJson<PFAdCampaignAttributionModel>(*this);
}

size_t AdCampaignAttributionModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAdCampaignAttributionModel) };
    serializedSize += (m_campaignId.size() + 1);
    serializedSize += (m_platform.size() + 1);
    return serializedSize;
}

void AdCampaignAttributionModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAdCampaignAttributionModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAdCampaignAttributionModel);
    memcpy(stringBuffer, m_campaignId.data(), m_campaignId.size() + 1);
    serializedStruct->campaignId = stringBuffer;
    stringBuffer += m_campaignId.size() + 1;
    memcpy(stringBuffer, m_platform.data(), m_platform.size() + 1);
    serializedStruct->platform = stringBuffer;
    stringBuffer += m_platform.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ContactEmailInfoModel::ContactEmailInfoModel() :
    PFContactEmailInfoModel{}
{
}

ContactEmailInfoModel::ContactEmailInfoModel(const ContactEmailInfoModel& src) :
    PFContactEmailInfoModel{ src },
    m_emailAddress{ src.m_emailAddress },
    m_name{ src.m_name },
    m_verificationStatus{ src.m_verificationStatus }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfoModel::ContactEmailInfoModel(ContactEmailInfoModel&& src) :
    PFContactEmailInfoModel{ src },
    m_emailAddress{ std::move(src.m_emailAddress) },
    m_name{ std::move(src.m_name) },
    m_verificationStatus{ std::move(src.m_verificationStatus) }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfoModel::ContactEmailInfoModel(const PFContactEmailInfoModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContactEmailInfoModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
}

JsonValue ContactEmailInfoModel::ToJson() const
{
    return JsonUtils::ToJson<PFContactEmailInfoModel>(*this);
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel() :
    PFLinkedPlatformAccountModel{}
{
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel(const LinkedPlatformAccountModel& src) :
    PFLinkedPlatformAccountModel{ src },
    m_email{ src.m_email },
    m_platform{ src.m_platform },
    m_platformUserId{ src.m_platformUserId },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel(LinkedPlatformAccountModel&& src) :
    PFLinkedPlatformAccountModel{ src },
    m_email{ std::move(src.m_email) },
    m_platform{ std::move(src.m_platform) },
    m_platformUserId{ std::move(src.m_platformUserId) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LinkedPlatformAccountModel::LinkedPlatformAccountModel(const PFLinkedPlatformAccountModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkedPlatformAccountModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
    JsonUtils::ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue LinkedPlatformAccountModel::ToJson() const
{
    return JsonUtils::ToJson<PFLinkedPlatformAccountModel>(*this);
}

LocationModel::LocationModel() :
    PFLocationModel{}
{
}

LocationModel::LocationModel(const LocationModel& src) :
    PFLocationModel{ src },
    m_city{ src.m_city },
    m_continentCode{ src.m_continentCode },
    m_countryCode{ src.m_countryCode },
    m_latitude{ src.m_latitude },
    m_longitude{ src.m_longitude }
{
    city = m_city.empty() ? nullptr : m_city.data();
    continentCode = m_continentCode ? m_continentCode.operator->() : nullptr;
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

LocationModel::LocationModel(LocationModel&& src) :
    PFLocationModel{ src },
    m_city{ std::move(src.m_city) },
    m_continentCode{ std::move(src.m_continentCode) },
    m_countryCode{ std::move(src.m_countryCode) },
    m_latitude{ std::move(src.m_latitude) },
    m_longitude{ std::move(src.m_longitude) }
{
    city = m_city.empty() ? nullptr : m_city.data();
    continentCode = m_continentCode ? m_continentCode.operator->() : nullptr;
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

LocationModel::LocationModel(const PFLocationModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LocationModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "City", m_city, city);
    JsonUtils::ObjectGetMember(input, "ContinentCode", m_continentCode, continentCode);
    JsonUtils::ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
    JsonUtils::ObjectGetMember(input, "Latitude", m_latitude, latitude);
    JsonUtils::ObjectGetMember(input, "Longitude", m_longitude, longitude);
}

JsonValue LocationModel::ToJson() const
{
    return JsonUtils::ToJson<PFLocationModel>(*this);
}

SubscriptionModel::SubscriptionModel() :
    PFSubscriptionModel{}
{
}

SubscriptionModel::SubscriptionModel(const SubscriptionModel& src) :
    PFSubscriptionModel{ src },
    m_status{ src.m_status },
    m_subscriptionId{ src.m_subscriptionId },
    m_subscriptionItemId{ src.m_subscriptionItemId },
    m_subscriptionProvider{ src.m_subscriptionProvider }
{
    status = m_status ? m_status.operator->() : nullptr;
    subscriptionId = m_subscriptionId.empty() ? nullptr : m_subscriptionId.data();
    subscriptionItemId = m_subscriptionItemId.empty() ? nullptr : m_subscriptionItemId.data();
    subscriptionProvider = m_subscriptionProvider.empty() ? nullptr : m_subscriptionProvider.data();
}

SubscriptionModel::SubscriptionModel(SubscriptionModel&& src) :
    PFSubscriptionModel{ src },
    m_status{ std::move(src.m_status) },
    m_subscriptionId{ std::move(src.m_subscriptionId) },
    m_subscriptionItemId{ std::move(src.m_subscriptionItemId) },
    m_subscriptionProvider{ std::move(src.m_subscriptionProvider) }
{
    status = m_status ? m_status.operator->() : nullptr;
    subscriptionId = m_subscriptionId.empty() ? nullptr : m_subscriptionId.data();
    subscriptionItemId = m_subscriptionItemId.empty() ? nullptr : m_subscriptionItemId.data();
    subscriptionProvider = m_subscriptionProvider.empty() ? nullptr : m_subscriptionProvider.data();
}

SubscriptionModel::SubscriptionModel(const PFSubscriptionModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubscriptionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Expiration", expiration, true);
    JsonUtils::ObjectGetMember(input, "InitialSubscriptionTime", initialSubscriptionTime, true);
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "SubscriptionId", m_subscriptionId, subscriptionId);
    JsonUtils::ObjectGetMember(input, "SubscriptionItemId", m_subscriptionItemId, subscriptionItemId);
    JsonUtils::ObjectGetMember(input, "SubscriptionProvider", m_subscriptionProvider, subscriptionProvider);
}

JsonValue SubscriptionModel::ToJson() const
{
    return JsonUtils::ToJson<PFSubscriptionModel>(*this);
}

MembershipModel::MembershipModel() :
    PFMembershipModel{}
{
}

MembershipModel::MembershipModel(const MembershipModel& src) :
    PFMembershipModel{ src },
    m_membershipId{ src.m_membershipId },
    m_overrideExpiration{ src.m_overrideExpiration },
    m_subscriptions{ src.m_subscriptions }
{
    membershipId = m_membershipId.empty() ? nullptr : m_membershipId.data();
    overrideExpiration = m_overrideExpiration ? m_overrideExpiration.operator->() : nullptr;
    subscriptions = m_subscriptions.Empty() ? nullptr : m_subscriptions.Data();
}

MembershipModel::MembershipModel(MembershipModel&& src) :
    PFMembershipModel{ src },
    m_membershipId{ std::move(src.m_membershipId) },
    m_overrideExpiration{ std::move(src.m_overrideExpiration) },
    m_subscriptions{ std::move(src.m_subscriptions) }
{
    membershipId = m_membershipId.empty() ? nullptr : m_membershipId.data();
    overrideExpiration = m_overrideExpiration ? m_overrideExpiration.operator->() : nullptr;
    subscriptions = m_subscriptions.Empty() ? nullptr : m_subscriptions.Data();
}

MembershipModel::MembershipModel(const PFMembershipModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MembershipModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsActive", isActive);
    JsonUtils::ObjectGetMember(input, "MembershipExpiration", membershipExpiration, true);
    JsonUtils::ObjectGetMember(input, "MembershipId", m_membershipId, membershipId);
    JsonUtils::ObjectGetMember(input, "OverrideExpiration", m_overrideExpiration, overrideExpiration, true);
    JsonUtils::ObjectGetMember(input, "Subscriptions", m_subscriptions, subscriptions, subscriptionsCount);
}

JsonValue MembershipModel::ToJson() const
{
    return JsonUtils::ToJson<PFMembershipModel>(*this);
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel() :
    PFPushNotificationRegistrationModel{}
{
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel(const PushNotificationRegistrationModel& src) :
    PFPushNotificationRegistrationModel{ src },
    m_notificationEndpointARN{ src.m_notificationEndpointARN },
    m_platform{ src.m_platform }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel(PushNotificationRegistrationModel&& src) :
    PFPushNotificationRegistrationModel{ src },
    m_notificationEndpointARN{ std::move(src.m_notificationEndpointARN) },
    m_platform{ std::move(src.m_platform) }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistrationModel::PushNotificationRegistrationModel(const PFPushNotificationRegistrationModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationRegistrationModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue PushNotificationRegistrationModel::ToJson() const
{
    return JsonUtils::ToJson<PFPushNotificationRegistrationModel>(*this);
}

StatisticModel::StatisticModel() :
    PFStatisticModel{}
{
}

StatisticModel::StatisticModel(const StatisticModel& src) :
    PFStatisticModel{ src },
    m_name{ src.m_name }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

StatisticModel::StatisticModel(StatisticModel&& src) :
    PFStatisticModel{ src },
    m_name{ std::move(src.m_name) }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

StatisticModel::StatisticModel(const PFStatisticModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Value", value);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue StatisticModel::ToJson() const
{
    return JsonUtils::ToJson<PFStatisticModel>(*this);
}

size_t StatisticModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFStatisticModel) };
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void StatisticModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFStatisticModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFStatisticModel);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

TagModel::TagModel() :
    PFTagModel{}
{
}

TagModel::TagModel(const TagModel& src) :
    PFTagModel{ src },
    m_tagValue{ src.m_tagValue }
{
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagModel::TagModel(TagModel&& src) :
    PFTagModel{ src },
    m_tagValue{ std::move(src.m_tagValue) }
{
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagModel::TagModel(const PFTagModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TagModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
}

JsonValue TagModel::ToJson() const
{
    return JsonUtils::ToJson<PFTagModel>(*this);
}

size_t TagModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTagModel) };
    serializedSize += (m_tagValue.size() + 1);
    return serializedSize;
}

void TagModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTagModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTagModel);
    memcpy(stringBuffer, m_tagValue.data(), m_tagValue.size() + 1);
    serializedStruct->tagValue = stringBuffer;
    stringBuffer += m_tagValue.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ValueToDateModel::ValueToDateModel() :
    PFValueToDateModel{}
{
}

ValueToDateModel::ValueToDateModel(const ValueToDateModel& src) :
    PFValueToDateModel{ src },
    m_currency{ src.m_currency },
    m_totalValueAsDecimal{ src.m_totalValueAsDecimal }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    totalValueAsDecimal = m_totalValueAsDecimal.empty() ? nullptr : m_totalValueAsDecimal.data();
}

ValueToDateModel::ValueToDateModel(ValueToDateModel&& src) :
    PFValueToDateModel{ src },
    m_currency{ std::move(src.m_currency) },
    m_totalValueAsDecimal{ std::move(src.m_totalValueAsDecimal) }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    totalValueAsDecimal = m_totalValueAsDecimal.empty() ? nullptr : m_totalValueAsDecimal.data();
}

ValueToDateModel::ValueToDateModel(const PFValueToDateModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValueToDateModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
    JsonUtils::ObjectGetMember(input, "TotalValue", totalValue);
    JsonUtils::ObjectGetMember(input, "TotalValueAsDecimal", m_totalValueAsDecimal, totalValueAsDecimal);
}

JsonValue ValueToDateModel::ToJson() const
{
    return JsonUtils::ToJson<PFValueToDateModel>(*this);
}

size_t ValueToDateModel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFValueToDateModel) };
    serializedSize += (m_currency.size() + 1);
    serializedSize += (m_totalValueAsDecimal.size() + 1);
    return serializedSize;
}

void ValueToDateModel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFValueToDateModel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFValueToDateModel);
    memcpy(stringBuffer, m_currency.data(), m_currency.size() + 1);
    serializedStruct->currency = stringBuffer;
    stringBuffer += m_currency.size() + 1;
    memcpy(stringBuffer, m_totalValueAsDecimal.data(), m_totalValueAsDecimal.size() + 1);
    serializedStruct->totalValueAsDecimal = stringBuffer;
    stringBuffer += m_totalValueAsDecimal.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerProfileModel::PlayerProfileModel() :
    PFPlayerProfileModel{}
{
}

PlayerProfileModel::PlayerProfileModel(const PlayerProfileModel& src) :
    PFPlayerProfileModel{ src },
    m_adCampaignAttributions{ src.m_adCampaignAttributions },
    m_avatarUrl{ src.m_avatarUrl },
    m_bannedUntil{ src.m_bannedUntil },
    m_contactEmailAddresses{ src.m_contactEmailAddresses },
    m_created{ src.m_created },
    m_displayName{ src.m_displayName },
    m_experimentVariants{ src.m_experimentVariants },
    m_lastLogin{ src.m_lastLogin },
    m_linkedAccounts{ src.m_linkedAccounts },
    m_locations{ src.m_locations },
    m_memberships{ src.m_memberships },
    m_origination{ src.m_origination },
    m_playerId{ src.m_playerId },
    m_publisherId{ src.m_publisherId },
    m_pushNotificationRegistrations{ src.m_pushNotificationRegistrations },
    m_statistics{ src.m_statistics },
    m_tags{ src.m_tags },
    m_titleId{ src.m_titleId },
    m_totalValueToDateInUSD{ src.m_totalValueToDateInUSD },
    m_valuesToDate{ src.m_valuesToDate }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    memberships = m_memberships.Empty() ? nullptr : m_memberships.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
}

PlayerProfileModel::PlayerProfileModel(PlayerProfileModel&& src) :
    PFPlayerProfileModel{ src },
    m_adCampaignAttributions{ std::move(src.m_adCampaignAttributions) },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_bannedUntil{ std::move(src.m_bannedUntil) },
    m_contactEmailAddresses{ std::move(src.m_contactEmailAddresses) },
    m_created{ std::move(src.m_created) },
    m_displayName{ std::move(src.m_displayName) },
    m_experimentVariants{ std::move(src.m_experimentVariants) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_linkedAccounts{ std::move(src.m_linkedAccounts) },
    m_locations{ std::move(src.m_locations) },
    m_memberships{ std::move(src.m_memberships) },
    m_origination{ std::move(src.m_origination) },
    m_playerId{ std::move(src.m_playerId) },
    m_publisherId{ std::move(src.m_publisherId) },
    m_pushNotificationRegistrations{ std::move(src.m_pushNotificationRegistrations) },
    m_statistics{ std::move(src.m_statistics) },
    m_tags{ std::move(src.m_tags) },
    m_titleId{ std::move(src.m_titleId) },
    m_totalValueToDateInUSD{ std::move(src.m_totalValueToDateInUSD) },
    m_valuesToDate{ std::move(src.m_valuesToDate) }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    memberships = m_memberships.Empty() ? nullptr : m_memberships.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
}

PlayerProfileModel::PlayerProfileModel(const PFPlayerProfileModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfileModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
    JsonUtils::ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "ExperimentVariants", m_experimentVariants, experimentVariants, experimentVariantsCount);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
    JsonUtils::ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
    JsonUtils::ObjectGetMember(input, "Memberships", m_memberships, memberships, membershipsCount);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
    JsonUtils::ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
    JsonUtils::ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
}

JsonValue PlayerProfileModel::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerProfileModel>(*this);
}

UserFacebookInfo::UserFacebookInfo() :
    PFUserFacebookInfo{}
{
}

UserFacebookInfo::UserFacebookInfo(const UserFacebookInfo& src) :
    PFUserFacebookInfo{ src },
    m_facebookId{ src.m_facebookId },
    m_fullName{ src.m_fullName }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    fullName = m_fullName.empty() ? nullptr : m_fullName.data();
}

UserFacebookInfo::UserFacebookInfo(UserFacebookInfo&& src) :
    PFUserFacebookInfo{ src },
    m_facebookId{ std::move(src.m_facebookId) },
    m_fullName{ std::move(src.m_fullName) }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    fullName = m_fullName.empty() ? nullptr : m_fullName.data();
}

UserFacebookInfo::UserFacebookInfo(const PFUserFacebookInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserFacebookInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
    JsonUtils::ObjectGetMember(input, "FullName", m_fullName, fullName);
}

JsonValue UserFacebookInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserFacebookInfo>(*this);
}

size_t UserFacebookInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserFacebookInfo) };
    serializedSize += (m_facebookId.size() + 1);
    serializedSize += (m_fullName.size() + 1);
    return serializedSize;
}

void UserFacebookInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserFacebookInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserFacebookInfo);
    memcpy(stringBuffer, m_facebookId.data(), m_facebookId.size() + 1);
    serializedStruct->facebookId = stringBuffer;
    stringBuffer += m_facebookId.size() + 1;
    memcpy(stringBuffer, m_fullName.data(), m_fullName.size() + 1);
    serializedStruct->fullName = stringBuffer;
    stringBuffer += m_fullName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserGameCenterInfo::UserGameCenterInfo() :
    PFUserGameCenterInfo{}
{
}

UserGameCenterInfo::UserGameCenterInfo(const UserGameCenterInfo& src) :
    PFUserGameCenterInfo{ src },
    m_gameCenterId{ src.m_gameCenterId }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
}

UserGameCenterInfo::UserGameCenterInfo(UserGameCenterInfo&& src) :
    PFUserGameCenterInfo{ src },
    m_gameCenterId{ std::move(src.m_gameCenterId) }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
}

UserGameCenterInfo::UserGameCenterInfo(const PFUserGameCenterInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserGameCenterInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
}

JsonValue UserGameCenterInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserGameCenterInfo>(*this);
}

size_t UserGameCenterInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserGameCenterInfo) };
    serializedSize += (m_gameCenterId.size() + 1);
    return serializedSize;
}

void UserGameCenterInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserGameCenterInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserGameCenterInfo);
    memcpy(stringBuffer, m_gameCenterId.data(), m_gameCenterId.size() + 1);
    serializedStruct->gameCenterId = stringBuffer;
    stringBuffer += m_gameCenterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserPsnInfo::UserPsnInfo() :
    PFUserPsnInfo{}
{
}

UserPsnInfo::UserPsnInfo(const UserPsnInfo& src) :
    PFUserPsnInfo{ src },
    m_psnAccountId{ src.m_psnAccountId },
    m_psnOnlineId{ src.m_psnOnlineId }
{
    psnAccountId = m_psnAccountId.empty() ? nullptr : m_psnAccountId.data();
    psnOnlineId = m_psnOnlineId.empty() ? nullptr : m_psnOnlineId.data();
}

UserPsnInfo::UserPsnInfo(UserPsnInfo&& src) :
    PFUserPsnInfo{ src },
    m_psnAccountId{ std::move(src.m_psnAccountId) },
    m_psnOnlineId{ std::move(src.m_psnOnlineId) }
{
    psnAccountId = m_psnAccountId.empty() ? nullptr : m_psnAccountId.data();
    psnOnlineId = m_psnOnlineId.empty() ? nullptr : m_psnOnlineId.data();
}

UserPsnInfo::UserPsnInfo(const PFUserPsnInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserPsnInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PsnAccountId", m_psnAccountId, psnAccountId);
    JsonUtils::ObjectGetMember(input, "PsnOnlineId", m_psnOnlineId, psnOnlineId);
}

JsonValue UserPsnInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserPsnInfo>(*this);
}

size_t UserPsnInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserPsnInfo) };
    serializedSize += (m_psnAccountId.size() + 1);
    serializedSize += (m_psnOnlineId.size() + 1);
    return serializedSize;
}

void UserPsnInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserPsnInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserPsnInfo);
    memcpy(stringBuffer, m_psnAccountId.data(), m_psnAccountId.size() + 1);
    serializedStruct->psnAccountId = stringBuffer;
    stringBuffer += m_psnAccountId.size() + 1;
    memcpy(stringBuffer, m_psnOnlineId.data(), m_psnOnlineId.size() + 1);
    serializedStruct->psnOnlineId = stringBuffer;
    stringBuffer += m_psnOnlineId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserSteamInfo::UserSteamInfo() :
    PFUserSteamInfo{}
{
}

UserSteamInfo::UserSteamInfo(const UserSteamInfo& src) :
    PFUserSteamInfo{ src },
    m_steamActivationStatus{ src.m_steamActivationStatus },
    m_steamCountry{ src.m_steamCountry },
    m_steamCurrency{ src.m_steamCurrency },
    m_steamId{ src.m_steamId },
    m_steamName{ src.m_steamName }
{
    steamActivationStatus = m_steamActivationStatus ? m_steamActivationStatus.operator->() : nullptr;
    steamCountry = m_steamCountry.empty() ? nullptr : m_steamCountry.data();
    steamCurrency = m_steamCurrency ? m_steamCurrency.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
    steamName = m_steamName.empty() ? nullptr : m_steamName.data();
}

UserSteamInfo::UserSteamInfo(UserSteamInfo&& src) :
    PFUserSteamInfo{ src },
    m_steamActivationStatus{ std::move(src.m_steamActivationStatus) },
    m_steamCountry{ std::move(src.m_steamCountry) },
    m_steamCurrency{ std::move(src.m_steamCurrency) },
    m_steamId{ std::move(src.m_steamId) },
    m_steamName{ std::move(src.m_steamName) }
{
    steamActivationStatus = m_steamActivationStatus ? m_steamActivationStatus.operator->() : nullptr;
    steamCountry = m_steamCountry.empty() ? nullptr : m_steamCountry.data();
    steamCurrency = m_steamCurrency ? m_steamCurrency.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
    steamName = m_steamName.empty() ? nullptr : m_steamName.data();
}

UserSteamInfo::UserSteamInfo(const PFUserSteamInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserSteamInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SteamActivationStatus", m_steamActivationStatus, steamActivationStatus);
    JsonUtils::ObjectGetMember(input, "SteamCountry", m_steamCountry, steamCountry);
    JsonUtils::ObjectGetMember(input, "SteamCurrency", m_steamCurrency, steamCurrency);
    JsonUtils::ObjectGetMember(input, "SteamId", m_steamId, steamId);
    JsonUtils::ObjectGetMember(input, "SteamName", m_steamName, steamName);
}

JsonValue UserSteamInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserSteamInfo>(*this);
}

UserXboxInfo::UserXboxInfo() :
    PFUserXboxInfo{}
{
}

UserXboxInfo::UserXboxInfo(const UserXboxInfo& src) :
    PFUserXboxInfo{ src },
    m_xboxUserId{ src.m_xboxUserId }
{
    xboxUserId = m_xboxUserId.empty() ? nullptr : m_xboxUserId.data();
}

UserXboxInfo::UserXboxInfo(UserXboxInfo&& src) :
    PFUserXboxInfo{ src },
    m_xboxUserId{ std::move(src.m_xboxUserId) }
{
    xboxUserId = m_xboxUserId.empty() ? nullptr : m_xboxUserId.data();
}

UserXboxInfo::UserXboxInfo(const PFUserXboxInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserXboxInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "XboxUserId", m_xboxUserId, xboxUserId);
}

JsonValue UserXboxInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserXboxInfo>(*this);
}

size_t UserXboxInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserXboxInfo) };
    serializedSize += (m_xboxUserId.size() + 1);
    return serializedSize;
}

void UserXboxInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserXboxInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserXboxInfo);
    memcpy(stringBuffer, m_xboxUserId.data(), m_xboxUserId.size() + 1);
    serializedStruct->xboxUserId = stringBuffer;
    stringBuffer += m_xboxUserId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CharacterResult::CharacterResult() :
    PFCharacterResult{}
{
}

CharacterResult::CharacterResult(const CharacterResult& src) :
    PFCharacterResult{ src },
    m_characterId{ src.m_characterId },
    m_characterName{ src.m_characterName },
    m_characterType{ src.m_characterType }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

CharacterResult::CharacterResult(CharacterResult&& src) :
    PFCharacterResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterName{ std::move(src.m_characterName) },
    m_characterType{ std::move(src.m_characterType) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

CharacterResult::CharacterResult(const PFCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
}

JsonValue CharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterResult>(*this);
}

size_t CharacterResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFCharacterResult) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterName.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    return serializedSize;
}

void CharacterResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFCharacterResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFCharacterResult);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterName.data(), m_characterName.size() + 1);
    serializedStruct->characterName = stringBuffer;
    stringBuffer += m_characterName.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

VirtualCurrencyRechargeTime::VirtualCurrencyRechargeTime() :
    PFVirtualCurrencyRechargeTime{}
{
}


VirtualCurrencyRechargeTime::VirtualCurrencyRechargeTime(const PFVirtualCurrencyRechargeTime& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualCurrencyRechargeTime::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RechargeMax", rechargeMax);
    JsonUtils::ObjectGetMember(input, "RechargeTime", rechargeTime, true);
    JsonUtils::ObjectGetMember(input, "SecondsToRecharge", secondsToRecharge);
}

JsonValue VirtualCurrencyRechargeTime::ToJson() const
{
    return JsonUtils::ToJson<PFVirtualCurrencyRechargeTime>(*this);
}

size_t VirtualCurrencyRechargeTime::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFVirtualCurrencyRechargeTime) };
    return serializedSize;
}

void VirtualCurrencyRechargeTime::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFVirtualCurrencyRechargeTime{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFVirtualCurrencyRechargeTime);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

StatisticValue::StatisticValue() :
    PFStatisticValue{}
{
}

StatisticValue::StatisticValue(const StatisticValue& src) :
    PFStatisticValue{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticValue::StatisticValue(StatisticValue&& src) :
    PFStatisticValue{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticValue::StatisticValue(const PFStatisticValue& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticValue::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Value", value);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue StatisticValue::ToJson() const
{
    return JsonUtils::ToJson<PFStatisticValue>(*this);
}

size_t StatisticValue::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFStatisticValue) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void StatisticValue::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFStatisticValue{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFStatisticValue);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams() :
    PFGetPlayerCombinedInfoRequestParams{}
{
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src) :
    PFGetPlayerCombinedInfoRequestParams{ src },
    m_playerStatisticNames{ src.m_playerStatisticNames },
    m_profileConstraints{ src.m_profileConstraints },
    m_titleDataKeys{ src.m_titleDataKeys },
    m_userDataKeys{ src.m_userDataKeys },
    m_userReadOnlyDataKeys{ src.m_userReadOnlyDataKeys }
{
    playerStatisticNames = m_playerStatisticNames.Empty() ? nullptr : m_playerStatisticNames.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    titleDataKeys = m_titleDataKeys.Empty() ? nullptr : m_titleDataKeys.Data();
    userDataKeys = m_userDataKeys.Empty() ? nullptr : m_userDataKeys.Data();
    userReadOnlyDataKeys = m_userReadOnlyDataKeys.Empty() ? nullptr : m_userReadOnlyDataKeys.Data();
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams&& src) :
    PFGetPlayerCombinedInfoRequestParams{ src },
    m_playerStatisticNames{ std::move(src.m_playerStatisticNames) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_titleDataKeys{ std::move(src.m_titleDataKeys) },
    m_userDataKeys{ std::move(src.m_userDataKeys) },
    m_userReadOnlyDataKeys{ std::move(src.m_userReadOnlyDataKeys) }
{
    playerStatisticNames = m_playerStatisticNames.Empty() ? nullptr : m_playerStatisticNames.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    titleDataKeys = m_titleDataKeys.Empty() ? nullptr : m_titleDataKeys.Data();
    userDataKeys = m_userDataKeys.Empty() ? nullptr : m_userDataKeys.Data();
    userReadOnlyDataKeys = m_userReadOnlyDataKeys.Empty() ? nullptr : m_userReadOnlyDataKeys.Data();
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(const PFGetPlayerCombinedInfoRequestParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoRequestParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GetCharacterInventories", getCharacterInventories);
    JsonUtils::ObjectGetMember(input, "GetCharacterList", getCharacterList);
    JsonUtils::ObjectGetMember(input, "GetPlayerProfile", getPlayerProfile);
    JsonUtils::ObjectGetMember(input, "GetPlayerStatistics", getPlayerStatistics);
    JsonUtils::ObjectGetMember(input, "GetTitleData", getTitleData);
    JsonUtils::ObjectGetMember(input, "GetUserAccountInfo", getUserAccountInfo);
    JsonUtils::ObjectGetMember(input, "GetUserData", getUserData);
    JsonUtils::ObjectGetMember(input, "GetUserInventory", getUserInventory);
    JsonUtils::ObjectGetMember(input, "GetUserReadOnlyData", getUserReadOnlyData);
    JsonUtils::ObjectGetMember(input, "GetUserVirtualCurrency", getUserVirtualCurrency);
    JsonUtils::ObjectGetMember(input, "PlayerStatisticNames", m_playerStatisticNames, playerStatisticNames, playerStatisticNamesCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "TitleDataKeys", m_titleDataKeys, titleDataKeys, titleDataKeysCount);
    JsonUtils::ObjectGetMember(input, "UserDataKeys", m_userDataKeys, userDataKeys, userDataKeysCount);
    JsonUtils::ObjectGetMember(input, "UserReadOnlyDataKeys", m_userReadOnlyDataKeys, userReadOnlyDataKeys, userReadOnlyDataKeysCount);
}

JsonValue GetPlayerCombinedInfoRequestParams::ToJson() const
{
    return JsonUtils::ToJson<PFGetPlayerCombinedInfoRequestParams>(*this);
}

EntityKey::EntityKey() :
    PFEntityKey{}
{
}

EntityKey::EntityKey(const EntityKey& src) :
    PFEntityKey{ src },
    m_id{ src.m_id },
    m_type{ src.m_type }
{
    id = m_id.empty() ? nullptr : m_id.data();
    type = m_type.empty() ? nullptr : m_type.data();
}

EntityKey::EntityKey(EntityKey&& src) :
    PFEntityKey{ src },
    m_id{ std::move(src.m_id) },
    m_type{ std::move(src.m_type) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    type = m_type.empty() ? nullptr : m_type.data();
}

EntityKey::EntityKey(const PFEntityKey& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityKey::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Type", m_type, type);
}

JsonValue EntityKey::ToJson() const
{
    return JsonUtils::ToJson<PFEntityKey>(*this);
}

size_t EntityKey::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFEntityKey) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_type.size() + 1);
    return serializedSize;
}

void EntityKey::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFEntityKey{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFEntityKey);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_type.data(), m_type.size() + 1);
    serializedStruct->type = stringBuffer;
    stringBuffer += m_type.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo() :
    PFUserAndroidDeviceInfo{}
{
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo(const UserAndroidDeviceInfo& src) :
    PFUserAndroidDeviceInfo{ src },
    m_androidDeviceId{ src.m_androidDeviceId }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo(UserAndroidDeviceInfo&& src) :
    PFUserAndroidDeviceInfo{ src },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
}

UserAndroidDeviceInfo::UserAndroidDeviceInfo(const PFUserAndroidDeviceInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserAndroidDeviceInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
}

JsonValue UserAndroidDeviceInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserAndroidDeviceInfo>(*this);
}

size_t UserAndroidDeviceInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserAndroidDeviceInfo) };
    serializedSize += (m_androidDeviceId.size() + 1);
    return serializedSize;
}

void UserAndroidDeviceInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserAndroidDeviceInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserAndroidDeviceInfo);
    memcpy(stringBuffer, m_androidDeviceId.data(), m_androidDeviceId.size() + 1);
    serializedStruct->androidDeviceId = stringBuffer;
    stringBuffer += m_androidDeviceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserAppleIdInfo::UserAppleIdInfo() :
    PFUserAppleIdInfo{}
{
}

UserAppleIdInfo::UserAppleIdInfo(const UserAppleIdInfo& src) :
    PFUserAppleIdInfo{ src },
    m_appleSubjectId{ src.m_appleSubjectId }
{
    appleSubjectId = m_appleSubjectId.empty() ? nullptr : m_appleSubjectId.data();
}

UserAppleIdInfo::UserAppleIdInfo(UserAppleIdInfo&& src) :
    PFUserAppleIdInfo{ src },
    m_appleSubjectId{ std::move(src.m_appleSubjectId) }
{
    appleSubjectId = m_appleSubjectId.empty() ? nullptr : m_appleSubjectId.data();
}

UserAppleIdInfo::UserAppleIdInfo(const PFUserAppleIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserAppleIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AppleSubjectId", m_appleSubjectId, appleSubjectId);
}

JsonValue UserAppleIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserAppleIdInfo>(*this);
}

size_t UserAppleIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserAppleIdInfo) };
    serializedSize += (m_appleSubjectId.size() + 1);
    return serializedSize;
}

void UserAppleIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserAppleIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserAppleIdInfo);
    memcpy(stringBuffer, m_appleSubjectId.data(), m_appleSubjectId.size() + 1);
    serializedStruct->appleSubjectId = stringBuffer;
    stringBuffer += m_appleSubjectId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserCustomIdInfo::UserCustomIdInfo() :
    PFUserCustomIdInfo{}
{
}

UserCustomIdInfo::UserCustomIdInfo(const UserCustomIdInfo& src) :
    PFUserCustomIdInfo{ src },
    m_customId{ src.m_customId }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
}

UserCustomIdInfo::UserCustomIdInfo(UserCustomIdInfo&& src) :
    PFUserCustomIdInfo{ src },
    m_customId{ std::move(src.m_customId) }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
}

UserCustomIdInfo::UserCustomIdInfo(const PFUserCustomIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserCustomIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
}

JsonValue UserCustomIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserCustomIdInfo>(*this);
}

size_t UserCustomIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserCustomIdInfo) };
    serializedSize += (m_customId.size() + 1);
    return serializedSize;
}

void UserCustomIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserCustomIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserCustomIdInfo);
    memcpy(stringBuffer, m_customId.data(), m_customId.size() + 1);
    serializedStruct->customId = stringBuffer;
    stringBuffer += m_customId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo() :
    PFUserFacebookInstantGamesIdInfo{}
{
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo(const UserFacebookInstantGamesIdInfo& src) :
    PFUserFacebookInstantGamesIdInfo{ src },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo(UserFacebookInstantGamesIdInfo&& src) :
    PFUserFacebookInstantGamesIdInfo{ src },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo(const PFUserFacebookInstantGamesIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserFacebookInstantGamesIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
}

JsonValue UserFacebookInstantGamesIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserFacebookInstantGamesIdInfo>(*this);
}

size_t UserFacebookInstantGamesIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserFacebookInstantGamesIdInfo) };
    serializedSize += (m_facebookInstantGamesId.size() + 1);
    return serializedSize;
}

void UserFacebookInstantGamesIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserFacebookInstantGamesIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserFacebookInstantGamesIdInfo);
    memcpy(stringBuffer, m_facebookInstantGamesId.data(), m_facebookInstantGamesId.size() + 1);
    serializedStruct->facebookInstantGamesId = stringBuffer;
    stringBuffer += m_facebookInstantGamesId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserGoogleInfo::UserGoogleInfo() :
    PFUserGoogleInfo{}
{
}

UserGoogleInfo::UserGoogleInfo(const UserGoogleInfo& src) :
    PFUserGoogleInfo{ src },
    m_googleEmail{ src.m_googleEmail },
    m_googleGender{ src.m_googleGender },
    m_googleId{ src.m_googleId },
    m_googleLocale{ src.m_googleLocale },
    m_googleName{ src.m_googleName }
{
    googleEmail = m_googleEmail.empty() ? nullptr : m_googleEmail.data();
    googleGender = m_googleGender.empty() ? nullptr : m_googleGender.data();
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    googleLocale = m_googleLocale.empty() ? nullptr : m_googleLocale.data();
    googleName = m_googleName.empty() ? nullptr : m_googleName.data();
}

UserGoogleInfo::UserGoogleInfo(UserGoogleInfo&& src) :
    PFUserGoogleInfo{ src },
    m_googleEmail{ std::move(src.m_googleEmail) },
    m_googleGender{ std::move(src.m_googleGender) },
    m_googleId{ std::move(src.m_googleId) },
    m_googleLocale{ std::move(src.m_googleLocale) },
    m_googleName{ std::move(src.m_googleName) }
{
    googleEmail = m_googleEmail.empty() ? nullptr : m_googleEmail.data();
    googleGender = m_googleGender.empty() ? nullptr : m_googleGender.data();
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    googleLocale = m_googleLocale.empty() ? nullptr : m_googleLocale.data();
    googleName = m_googleName.empty() ? nullptr : m_googleName.data();
}

UserGoogleInfo::UserGoogleInfo(const PFUserGoogleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserGoogleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GoogleEmail", m_googleEmail, googleEmail);
    JsonUtils::ObjectGetMember(input, "GoogleGender", m_googleGender, googleGender);
    JsonUtils::ObjectGetMember(input, "GoogleId", m_googleId, googleId);
    JsonUtils::ObjectGetMember(input, "GoogleLocale", m_googleLocale, googleLocale);
    JsonUtils::ObjectGetMember(input, "GoogleName", m_googleName, googleName);
}

JsonValue UserGoogleInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserGoogleInfo>(*this);
}

size_t UserGoogleInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserGoogleInfo) };
    serializedSize += (m_googleEmail.size() + 1);
    serializedSize += (m_googleGender.size() + 1);
    serializedSize += (m_googleId.size() + 1);
    serializedSize += (m_googleLocale.size() + 1);
    serializedSize += (m_googleName.size() + 1);
    return serializedSize;
}

void UserGoogleInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserGoogleInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserGoogleInfo);
    memcpy(stringBuffer, m_googleEmail.data(), m_googleEmail.size() + 1);
    serializedStruct->googleEmail = stringBuffer;
    stringBuffer += m_googleEmail.size() + 1;
    memcpy(stringBuffer, m_googleGender.data(), m_googleGender.size() + 1);
    serializedStruct->googleGender = stringBuffer;
    stringBuffer += m_googleGender.size() + 1;
    memcpy(stringBuffer, m_googleId.data(), m_googleId.size() + 1);
    serializedStruct->googleId = stringBuffer;
    stringBuffer += m_googleId.size() + 1;
    memcpy(stringBuffer, m_googleLocale.data(), m_googleLocale.size() + 1);
    serializedStruct->googleLocale = stringBuffer;
    stringBuffer += m_googleLocale.size() + 1;
    memcpy(stringBuffer, m_googleName.data(), m_googleName.size() + 1);
    serializedStruct->googleName = stringBuffer;
    stringBuffer += m_googleName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserIosDeviceInfo::UserIosDeviceInfo() :
    PFUserIosDeviceInfo{}
{
}

UserIosDeviceInfo::UserIosDeviceInfo(const UserIosDeviceInfo& src) :
    PFUserIosDeviceInfo{ src },
    m_iosDeviceId{ src.m_iosDeviceId }
{
    iosDeviceId = m_iosDeviceId.empty() ? nullptr : m_iosDeviceId.data();
}

UserIosDeviceInfo::UserIosDeviceInfo(UserIosDeviceInfo&& src) :
    PFUserIosDeviceInfo{ src },
    m_iosDeviceId{ std::move(src.m_iosDeviceId) }
{
    iosDeviceId = m_iosDeviceId.empty() ? nullptr : m_iosDeviceId.data();
}

UserIosDeviceInfo::UserIosDeviceInfo(const PFUserIosDeviceInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserIosDeviceInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IosDeviceId", m_iosDeviceId, iosDeviceId);
}

JsonValue UserIosDeviceInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserIosDeviceInfo>(*this);
}

size_t UserIosDeviceInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserIosDeviceInfo) };
    serializedSize += (m_iosDeviceId.size() + 1);
    return serializedSize;
}

void UserIosDeviceInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserIosDeviceInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserIosDeviceInfo);
    memcpy(stringBuffer, m_iosDeviceId.data(), m_iosDeviceId.size() + 1);
    serializedStruct->iosDeviceId = stringBuffer;
    stringBuffer += m_iosDeviceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserKongregateInfo::UserKongregateInfo() :
    PFUserKongregateInfo{}
{
}

UserKongregateInfo::UserKongregateInfo(const UserKongregateInfo& src) :
    PFUserKongregateInfo{ src },
    m_kongregateId{ src.m_kongregateId },
    m_kongregateName{ src.m_kongregateName }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    kongregateName = m_kongregateName.empty() ? nullptr : m_kongregateName.data();
}

UserKongregateInfo::UserKongregateInfo(UserKongregateInfo&& src) :
    PFUserKongregateInfo{ src },
    m_kongregateId{ std::move(src.m_kongregateId) },
    m_kongregateName{ std::move(src.m_kongregateName) }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    kongregateName = m_kongregateName.empty() ? nullptr : m_kongregateName.data();
}

UserKongregateInfo::UserKongregateInfo(const PFUserKongregateInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserKongregateInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
    JsonUtils::ObjectGetMember(input, "KongregateName", m_kongregateName, kongregateName);
}

JsonValue UserKongregateInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserKongregateInfo>(*this);
}

size_t UserKongregateInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserKongregateInfo) };
    serializedSize += (m_kongregateId.size() + 1);
    serializedSize += (m_kongregateName.size() + 1);
    return serializedSize;
}

void UserKongregateInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserKongregateInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserKongregateInfo);
    memcpy(stringBuffer, m_kongregateId.data(), m_kongregateId.size() + 1);
    serializedStruct->kongregateId = stringBuffer;
    stringBuffer += m_kongregateId.size() + 1;
    memcpy(stringBuffer, m_kongregateName.data(), m_kongregateName.size() + 1);
    serializedStruct->kongregateName = stringBuffer;
    stringBuffer += m_kongregateName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo() :
    PFUserNintendoSwitchAccountIdInfo{}
{
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo(const UserNintendoSwitchAccountIdInfo& src) :
    PFUserNintendoSwitchAccountIdInfo{ src },
    m_nintendoSwitchAccountSubjectId{ src.m_nintendoSwitchAccountSubjectId }
{
    nintendoSwitchAccountSubjectId = m_nintendoSwitchAccountSubjectId.empty() ? nullptr : m_nintendoSwitchAccountSubjectId.data();
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo(UserNintendoSwitchAccountIdInfo&& src) :
    PFUserNintendoSwitchAccountIdInfo{ src },
    m_nintendoSwitchAccountSubjectId{ std::move(src.m_nintendoSwitchAccountSubjectId) }
{
    nintendoSwitchAccountSubjectId = m_nintendoSwitchAccountSubjectId.empty() ? nullptr : m_nintendoSwitchAccountSubjectId.data();
}

UserNintendoSwitchAccountIdInfo::UserNintendoSwitchAccountIdInfo(const PFUserNintendoSwitchAccountIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserNintendoSwitchAccountIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchAccountSubjectId", m_nintendoSwitchAccountSubjectId, nintendoSwitchAccountSubjectId);
}

JsonValue UserNintendoSwitchAccountIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserNintendoSwitchAccountIdInfo>(*this);
}

size_t UserNintendoSwitchAccountIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserNintendoSwitchAccountIdInfo) };
    serializedSize += (m_nintendoSwitchAccountSubjectId.size() + 1);
    return serializedSize;
}

void UserNintendoSwitchAccountIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserNintendoSwitchAccountIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserNintendoSwitchAccountIdInfo);
    memcpy(stringBuffer, m_nintendoSwitchAccountSubjectId.data(), m_nintendoSwitchAccountSubjectId.size() + 1);
    serializedStruct->nintendoSwitchAccountSubjectId = stringBuffer;
    stringBuffer += m_nintendoSwitchAccountSubjectId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo() :
    PFUserNintendoSwitchDeviceIdInfo{}
{
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo(const UserNintendoSwitchDeviceIdInfo& src) :
    PFUserNintendoSwitchDeviceIdInfo{ src },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo(UserNintendoSwitchDeviceIdInfo&& src) :
    PFUserNintendoSwitchDeviceIdInfo{ src },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UserNintendoSwitchDeviceIdInfo::UserNintendoSwitchDeviceIdInfo(const PFUserNintendoSwitchDeviceIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserNintendoSwitchDeviceIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
}

JsonValue UserNintendoSwitchDeviceIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserNintendoSwitchDeviceIdInfo>(*this);
}

size_t UserNintendoSwitchDeviceIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserNintendoSwitchDeviceIdInfo) };
    serializedSize += (m_nintendoSwitchDeviceId.size() + 1);
    return serializedSize;
}

void UserNintendoSwitchDeviceIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserNintendoSwitchDeviceIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserNintendoSwitchDeviceIdInfo);
    memcpy(stringBuffer, m_nintendoSwitchDeviceId.data(), m_nintendoSwitchDeviceId.size() + 1);
    serializedStruct->nintendoSwitchDeviceId = stringBuffer;
    stringBuffer += m_nintendoSwitchDeviceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserOpenIdInfo::UserOpenIdInfo() :
    PFUserOpenIdInfo{}
{
}

UserOpenIdInfo::UserOpenIdInfo(const UserOpenIdInfo& src) :
    PFUserOpenIdInfo{ src },
    m_connectionId{ src.m_connectionId },
    m_issuer{ src.m_issuer },
    m_subject{ src.m_subject }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

UserOpenIdInfo::UserOpenIdInfo(UserOpenIdInfo&& src) :
    PFUserOpenIdInfo{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_issuer{ std::move(src.m_issuer) },
    m_subject{ std::move(src.m_subject) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

UserOpenIdInfo::UserOpenIdInfo(const PFUserOpenIdInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserOpenIdInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "Issuer", m_issuer, issuer);
    JsonUtils::ObjectGetMember(input, "Subject", m_subject, subject);
}

JsonValue UserOpenIdInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserOpenIdInfo>(*this);
}

size_t UserOpenIdInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserOpenIdInfo) };
    serializedSize += (m_connectionId.size() + 1);
    serializedSize += (m_issuer.size() + 1);
    serializedSize += (m_subject.size() + 1);
    return serializedSize;
}

void UserOpenIdInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserOpenIdInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserOpenIdInfo);
    memcpy(stringBuffer, m_connectionId.data(), m_connectionId.size() + 1);
    serializedStruct->connectionId = stringBuffer;
    stringBuffer += m_connectionId.size() + 1;
    memcpy(stringBuffer, m_issuer.data(), m_issuer.size() + 1);
    serializedStruct->issuer = stringBuffer;
    stringBuffer += m_issuer.size() + 1;
    memcpy(stringBuffer, m_subject.data(), m_subject.size() + 1);
    serializedStruct->subject = stringBuffer;
    stringBuffer += m_subject.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserPrivateAccountInfo::UserPrivateAccountInfo() :
    PFUserPrivateAccountInfo{}
{
}

UserPrivateAccountInfo::UserPrivateAccountInfo(const UserPrivateAccountInfo& src) :
    PFUserPrivateAccountInfo{ src },
    m_email{ src.m_email }
{
    email = m_email.empty() ? nullptr : m_email.data();
}

UserPrivateAccountInfo::UserPrivateAccountInfo(UserPrivateAccountInfo&& src) :
    PFUserPrivateAccountInfo{ src },
    m_email{ std::move(src.m_email) }
{
    email = m_email.empty() ? nullptr : m_email.data();
}

UserPrivateAccountInfo::UserPrivateAccountInfo(const PFUserPrivateAccountInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserPrivateAccountInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
}

JsonValue UserPrivateAccountInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserPrivateAccountInfo>(*this);
}

size_t UserPrivateAccountInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserPrivateAccountInfo) };
    serializedSize += (m_email.size() + 1);
    return serializedSize;
}

void UserPrivateAccountInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserPrivateAccountInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserPrivateAccountInfo);
    memcpy(stringBuffer, m_email.data(), m_email.size() + 1);
    serializedStruct->email = stringBuffer;
    stringBuffer += m_email.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserTitleInfo::UserTitleInfo() :
    PFUserTitleInfo{}
{
}

UserTitleInfo::UserTitleInfo(const UserTitleInfo& src) :
    PFUserTitleInfo{ src },
    m_avatarUrl{ src.m_avatarUrl },
    m_displayName{ src.m_displayName },
    m_firstLogin{ src.m_firstLogin },
    m_isBanned{ src.m_isBanned },
    m_lastLogin{ src.m_lastLogin },
    m_origination{ src.m_origination },
    m_titlePlayerAccount{ src.m_titlePlayerAccount }
{
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    firstLogin = m_firstLogin ? m_firstLogin.operator->() : nullptr;
    isBanned = m_isBanned ? m_isBanned.operator->() : nullptr;
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    origination = m_origination ? m_origination.operator->() : nullptr;
    titlePlayerAccount = m_titlePlayerAccount ? m_titlePlayerAccount.operator->() : nullptr;
}

UserTitleInfo::UserTitleInfo(UserTitleInfo&& src) :
    PFUserTitleInfo{ src },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_displayName{ std::move(src.m_displayName) },
    m_firstLogin{ std::move(src.m_firstLogin) },
    m_isBanned{ std::move(src.m_isBanned) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_origination{ std::move(src.m_origination) },
    m_titlePlayerAccount{ std::move(src.m_titlePlayerAccount) }
{
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    firstLogin = m_firstLogin ? m_firstLogin.operator->() : nullptr;
    isBanned = m_isBanned ? m_isBanned.operator->() : nullptr;
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    origination = m_origination ? m_origination.operator->() : nullptr;
    titlePlayerAccount = m_titlePlayerAccount ? m_titlePlayerAccount.operator->() : nullptr;
}

UserTitleInfo::UserTitleInfo(const PFUserTitleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserTitleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "FirstLogin", m_firstLogin, firstLogin, true);
    JsonUtils::ObjectGetMember(input, "isBanned", m_isBanned, isBanned);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccount", m_titlePlayerAccount, titlePlayerAccount);
}

JsonValue UserTitleInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserTitleInfo>(*this);
}

UserTwitchInfo::UserTwitchInfo() :
    PFUserTwitchInfo{}
{
}

UserTwitchInfo::UserTwitchInfo(const UserTwitchInfo& src) :
    PFUserTwitchInfo{ src },
    m_twitchId{ src.m_twitchId },
    m_twitchUserName{ src.m_twitchUserName }
{
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
    twitchUserName = m_twitchUserName.empty() ? nullptr : m_twitchUserName.data();
}

UserTwitchInfo::UserTwitchInfo(UserTwitchInfo&& src) :
    PFUserTwitchInfo{ src },
    m_twitchId{ std::move(src.m_twitchId) },
    m_twitchUserName{ std::move(src.m_twitchUserName) }
{
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
    twitchUserName = m_twitchUserName.empty() ? nullptr : m_twitchUserName.data();
}

UserTwitchInfo::UserTwitchInfo(const PFUserTwitchInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserTwitchInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
    JsonUtils::ObjectGetMember(input, "TwitchUserName", m_twitchUserName, twitchUserName);
}

JsonValue UserTwitchInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserTwitchInfo>(*this);
}

size_t UserTwitchInfo::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFUserTwitchInfo) };
    serializedSize += (m_twitchId.size() + 1);
    serializedSize += (m_twitchUserName.size() + 1);
    return serializedSize;
}

void UserTwitchInfo::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFUserTwitchInfo{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFUserTwitchInfo);
    memcpy(stringBuffer, m_twitchId.data(), m_twitchId.size() + 1);
    serializedStruct->twitchId = stringBuffer;
    stringBuffer += m_twitchId.size() + 1;
    memcpy(stringBuffer, m_twitchUserName.data(), m_twitchUserName.size() + 1);
    serializedStruct->twitchUserName = stringBuffer;
    stringBuffer += m_twitchUserName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserAccountInfo::UserAccountInfo() :
    PFUserAccountInfo{}
{
}

UserAccountInfo::UserAccountInfo(const UserAccountInfo& src) :
    PFUserAccountInfo{ src },
    m_androidDeviceInfo{ src.m_androidDeviceInfo },
    m_appleAccountInfo{ src.m_appleAccountInfo },
    m_customIdInfo{ src.m_customIdInfo },
    m_facebookInfo{ src.m_facebookInfo },
    m_facebookInstantGamesIdInfo{ src.m_facebookInstantGamesIdInfo },
    m_gameCenterInfo{ src.m_gameCenterInfo },
    m_googleInfo{ src.m_googleInfo },
    m_iosDeviceInfo{ src.m_iosDeviceInfo },
    m_kongregateInfo{ src.m_kongregateInfo },
    m_nintendoSwitchAccountInfo{ src.m_nintendoSwitchAccountInfo },
    m_nintendoSwitchDeviceIdInfo{ src.m_nintendoSwitchDeviceIdInfo },
    m_openIdInfo{ src.m_openIdInfo },
    m_playFabId{ src.m_playFabId },
    m_privateInfo{ src.m_privateInfo },
    m_psnInfo{ src.m_psnInfo },
    m_steamInfo{ src.m_steamInfo },
    m_titleInfo{ src.m_titleInfo },
    m_twitchInfo{ src.m_twitchInfo },
    m_username{ src.m_username },
    m_xboxInfo{ src.m_xboxInfo }
{
    androidDeviceInfo = m_androidDeviceInfo ? m_androidDeviceInfo.operator->() : nullptr;
    appleAccountInfo = m_appleAccountInfo ? m_appleAccountInfo.operator->() : nullptr;
    customIdInfo = m_customIdInfo ? m_customIdInfo.operator->() : nullptr;
    facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
    facebookInstantGamesIdInfo = m_facebookInstantGamesIdInfo ? m_facebookInstantGamesIdInfo.operator->() : nullptr;
    gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
    googleInfo = m_googleInfo ? m_googleInfo.operator->() : nullptr;
    iosDeviceInfo = m_iosDeviceInfo ? m_iosDeviceInfo.operator->() : nullptr;
    kongregateInfo = m_kongregateInfo ? m_kongregateInfo.operator->() : nullptr;
    nintendoSwitchAccountInfo = m_nintendoSwitchAccountInfo ? m_nintendoSwitchAccountInfo.operator->() : nullptr;
    nintendoSwitchDeviceIdInfo = m_nintendoSwitchDeviceIdInfo ? m_nintendoSwitchDeviceIdInfo.operator->() : nullptr;
    openIdInfo = m_openIdInfo.Empty() ? nullptr : m_openIdInfo.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    privateInfo = m_privateInfo ? m_privateInfo.operator->() : nullptr;
    psnInfo = m_psnInfo ? m_psnInfo.operator->() : nullptr;
    steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
    titleInfo = m_titleInfo ? m_titleInfo.operator->() : nullptr;
    twitchInfo = m_twitchInfo ? m_twitchInfo.operator->() : nullptr;
    username = m_username.empty() ? nullptr : m_username.data();
    xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
}

UserAccountInfo::UserAccountInfo(UserAccountInfo&& src) :
    PFUserAccountInfo{ src },
    m_androidDeviceInfo{ std::move(src.m_androidDeviceInfo) },
    m_appleAccountInfo{ std::move(src.m_appleAccountInfo) },
    m_customIdInfo{ std::move(src.m_customIdInfo) },
    m_facebookInfo{ std::move(src.m_facebookInfo) },
    m_facebookInstantGamesIdInfo{ std::move(src.m_facebookInstantGamesIdInfo) },
    m_gameCenterInfo{ std::move(src.m_gameCenterInfo) },
    m_googleInfo{ std::move(src.m_googleInfo) },
    m_iosDeviceInfo{ std::move(src.m_iosDeviceInfo) },
    m_kongregateInfo{ std::move(src.m_kongregateInfo) },
    m_nintendoSwitchAccountInfo{ std::move(src.m_nintendoSwitchAccountInfo) },
    m_nintendoSwitchDeviceIdInfo{ std::move(src.m_nintendoSwitchDeviceIdInfo) },
    m_openIdInfo{ std::move(src.m_openIdInfo) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_privateInfo{ std::move(src.m_privateInfo) },
    m_psnInfo{ std::move(src.m_psnInfo) },
    m_steamInfo{ std::move(src.m_steamInfo) },
    m_titleInfo{ std::move(src.m_titleInfo) },
    m_twitchInfo{ std::move(src.m_twitchInfo) },
    m_username{ std::move(src.m_username) },
    m_xboxInfo{ std::move(src.m_xboxInfo) }
{
    androidDeviceInfo = m_androidDeviceInfo ? m_androidDeviceInfo.operator->() : nullptr;
    appleAccountInfo = m_appleAccountInfo ? m_appleAccountInfo.operator->() : nullptr;
    customIdInfo = m_customIdInfo ? m_customIdInfo.operator->() : nullptr;
    facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
    facebookInstantGamesIdInfo = m_facebookInstantGamesIdInfo ? m_facebookInstantGamesIdInfo.operator->() : nullptr;
    gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
    googleInfo = m_googleInfo ? m_googleInfo.operator->() : nullptr;
    iosDeviceInfo = m_iosDeviceInfo ? m_iosDeviceInfo.operator->() : nullptr;
    kongregateInfo = m_kongregateInfo ? m_kongregateInfo.operator->() : nullptr;
    nintendoSwitchAccountInfo = m_nintendoSwitchAccountInfo ? m_nintendoSwitchAccountInfo.operator->() : nullptr;
    nintendoSwitchDeviceIdInfo = m_nintendoSwitchDeviceIdInfo ? m_nintendoSwitchDeviceIdInfo.operator->() : nullptr;
    openIdInfo = m_openIdInfo.Empty() ? nullptr : m_openIdInfo.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    privateInfo = m_privateInfo ? m_privateInfo.operator->() : nullptr;
    psnInfo = m_psnInfo ? m_psnInfo.operator->() : nullptr;
    steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
    titleInfo = m_titleInfo ? m_titleInfo.operator->() : nullptr;
    twitchInfo = m_twitchInfo ? m_twitchInfo.operator->() : nullptr;
    username = m_username.empty() ? nullptr : m_username.data();
    xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
}

UserAccountInfo::UserAccountInfo(const PFUserAccountInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserAccountInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDeviceInfo", m_androidDeviceInfo, androidDeviceInfo);
    JsonUtils::ObjectGetMember(input, "AppleAccountInfo", m_appleAccountInfo, appleAccountInfo);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "CustomIdInfo", m_customIdInfo, customIdInfo);
    JsonUtils::ObjectGetMember(input, "FacebookInfo", m_facebookInfo, facebookInfo);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesIdInfo", m_facebookInstantGamesIdInfo, facebookInstantGamesIdInfo);
    JsonUtils::ObjectGetMember(input, "GameCenterInfo", m_gameCenterInfo, gameCenterInfo);
    JsonUtils::ObjectGetMember(input, "GoogleInfo", m_googleInfo, googleInfo);
    JsonUtils::ObjectGetMember(input, "IosDeviceInfo", m_iosDeviceInfo, iosDeviceInfo);
    JsonUtils::ObjectGetMember(input, "KongregateInfo", m_kongregateInfo, kongregateInfo);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchAccountInfo", m_nintendoSwitchAccountInfo, nintendoSwitchAccountInfo);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceIdInfo", m_nintendoSwitchDeviceIdInfo, nintendoSwitchDeviceIdInfo);
    JsonUtils::ObjectGetMember(input, "OpenIdInfo", m_openIdInfo, openIdInfo, openIdInfoCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PrivateInfo", m_privateInfo, privateInfo);
    JsonUtils::ObjectGetMember(input, "PsnInfo", m_psnInfo, psnInfo);
    JsonUtils::ObjectGetMember(input, "SteamInfo", m_steamInfo, steamInfo);
    JsonUtils::ObjectGetMember(input, "TitleInfo", m_titleInfo, titleInfo);
    JsonUtils::ObjectGetMember(input, "TwitchInfo", m_twitchInfo, twitchInfo);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
    JsonUtils::ObjectGetMember(input, "XboxInfo", m_xboxInfo, xboxInfo);
}

JsonValue UserAccountInfo::ToJson() const
{
    return JsonUtils::ToJson<PFUserAccountInfo>(*this);
}

CharacterInventory::CharacterInventory() :
    PFCharacterInventory{}
{
}

CharacterInventory::CharacterInventory(const CharacterInventory& src) :
    PFCharacterInventory{ src },
    m_characterId{ src.m_characterId },
    m_inventory{ src.m_inventory }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
}

CharacterInventory::CharacterInventory(CharacterInventory&& src) :
    PFCharacterInventory{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_inventory{ std::move(src.m_inventory) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
}

CharacterInventory::CharacterInventory(const PFCharacterInventory& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CharacterInventory::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
}

JsonValue CharacterInventory::ToJson() const
{
    return JsonUtils::ToJson<PFCharacterInventory>(*this);
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload() :
    PFGetPlayerCombinedInfoResultPayload{}
{
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload(const GetPlayerCombinedInfoResultPayload& src) :
    PFGetPlayerCombinedInfoResultPayload{ src },
    m_accountInfo{ src.m_accountInfo },
    m_characterInventories{ src.m_characterInventories },
    m_characterList{ src.m_characterList },
    m_playerProfile{ src.m_playerProfile },
    m_playerStatistics{ src.m_playerStatistics },
    m_titleData{ src.m_titleData },
    m_userData{ src.m_userData },
    m_userInventory{ src.m_userInventory },
    m_userReadOnlyData{ src.m_userReadOnlyData },
    m_userVirtualCurrency{ src.m_userVirtualCurrency },
    m_userVirtualCurrencyRechargeTimes{ src.m_userVirtualCurrencyRechargeTimes }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
    characterInventories = m_characterInventories.Empty() ? nullptr : m_characterInventories.Data();
    characterList = m_characterList.Empty() ? nullptr : m_characterList.Data();
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    titleData = m_titleData.Empty() ? nullptr : m_titleData.Data();
    userData = m_userData.Empty() ? nullptr : m_userData.Data();
    userInventory = m_userInventory.Empty() ? nullptr : m_userInventory.Data();
    userReadOnlyData = m_userReadOnlyData.Empty() ? nullptr : m_userReadOnlyData.Data();
    userVirtualCurrency = m_userVirtualCurrency.Empty() ? nullptr : m_userVirtualCurrency.Data();
    userVirtualCurrencyRechargeTimes = m_userVirtualCurrencyRechargeTimes.Empty() ? nullptr : m_userVirtualCurrencyRechargeTimes.Data();
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload&& src) :
    PFGetPlayerCombinedInfoResultPayload{ src },
    m_accountInfo{ std::move(src.m_accountInfo) },
    m_characterInventories{ std::move(src.m_characterInventories) },
    m_characterList{ std::move(src.m_characterList) },
    m_playerProfile{ std::move(src.m_playerProfile) },
    m_playerStatistics{ std::move(src.m_playerStatistics) },
    m_titleData{ std::move(src.m_titleData) },
    m_userData{ std::move(src.m_userData) },
    m_userInventory{ std::move(src.m_userInventory) },
    m_userReadOnlyData{ std::move(src.m_userReadOnlyData) },
    m_userVirtualCurrency{ std::move(src.m_userVirtualCurrency) },
    m_userVirtualCurrencyRechargeTimes{ std::move(src.m_userVirtualCurrencyRechargeTimes) }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
    characterInventories = m_characterInventories.Empty() ? nullptr : m_characterInventories.Data();
    characterList = m_characterList.Empty() ? nullptr : m_characterList.Data();
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    titleData = m_titleData.Empty() ? nullptr : m_titleData.Data();
    userData = m_userData.Empty() ? nullptr : m_userData.Data();
    userInventory = m_userInventory.Empty() ? nullptr : m_userInventory.Data();
    userReadOnlyData = m_userReadOnlyData.Empty() ? nullptr : m_userReadOnlyData.Data();
    userVirtualCurrency = m_userVirtualCurrency.Empty() ? nullptr : m_userVirtualCurrency.Data();
    userVirtualCurrencyRechargeTimes = m_userVirtualCurrencyRechargeTimes.Empty() ? nullptr : m_userVirtualCurrencyRechargeTimes.Data();
}

GetPlayerCombinedInfoResultPayload::GetPlayerCombinedInfoResultPayload(const PFGetPlayerCombinedInfoResultPayload& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoResultPayload::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccountInfo", m_accountInfo, accountInfo);
    JsonUtils::ObjectGetMember(input, "CharacterInventories", m_characterInventories, characterInventories, characterInventoriesCount);
    JsonUtils::ObjectGetMember(input, "CharacterList", m_characterList, characterList, characterListCount);
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
    JsonUtils::ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
    JsonUtils::ObjectGetMember(input, "TitleData", m_titleData, titleData, titleDataCount);
    JsonUtils::ObjectGetMember(input, "UserData", m_userData, userData, userDataCount);
    JsonUtils::ObjectGetMember(input, "UserDataVersion", userDataVersion);
    JsonUtils::ObjectGetMember(input, "UserInventory", m_userInventory, userInventory, userInventoryCount);
    JsonUtils::ObjectGetMember(input, "UserReadOnlyData", m_userReadOnlyData, userReadOnlyData, userReadOnlyDataCount);
    JsonUtils::ObjectGetMember(input, "UserReadOnlyDataVersion", userReadOnlyDataVersion);
    JsonUtils::ObjectGetMember(input, "UserVirtualCurrency", m_userVirtualCurrency, userVirtualCurrency, userVirtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "UserVirtualCurrencyRechargeTimes", m_userVirtualCurrencyRechargeTimes, userVirtualCurrencyRechargeTimes, userVirtualCurrencyRechargeTimesCount);
}

JsonValue GetPlayerCombinedInfoResultPayload::ToJson() const
{
    return JsonUtils::ToJson<PFGetPlayerCombinedInfoResultPayload>(*this);
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest() :
    PFGetPlayerCombinedInfoRequest{}
{
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src) :
    PFGetPlayerCombinedInfoRequest{ src },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = (PFGetPlayerCombinedInfoRequestParams const*)&m_infoRequestParameters;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest&& src) :
    PFGetPlayerCombinedInfoRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = (PFGetPlayerCombinedInfoRequestParams const*)&m_infoRequestParameters;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(const PFGetPlayerCombinedInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerCombinedInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFGetPlayerCombinedInfoRequest>(*this);
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult() :
    PFGetPlayerCombinedInfoResult{}
{
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src) :
    PFGetPlayerCombinedInfoResult{ src },
    m_infoResultPayload{ src.m_infoResultPayload },
    m_playFabId{ src.m_playFabId }
{
    infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult&& src) :
    PFGetPlayerCombinedInfoResult{ src },
    m_infoResultPayload{ std::move(src.m_infoResultPayload) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(const PFGetPlayerCombinedInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "InfoResultPayload", m_infoResultPayload, infoResultPayload);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerCombinedInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PFGetPlayerCombinedInfoResult>(*this);
}

ResultTableNode::ResultTableNode() :
    PFResultTableNode{}
{
}

ResultTableNode::ResultTableNode(const ResultTableNode& src) :
    PFResultTableNode{ src },
    m_resultItem{ src.m_resultItem }
{
    resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
}

ResultTableNode::ResultTableNode(ResultTableNode&& src) :
    PFResultTableNode{ src },
    m_resultItem{ std::move(src.m_resultItem) }
{
    resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
}

ResultTableNode::ResultTableNode(const PFResultTableNode& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResultTableNode::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ResultItem", m_resultItem, resultItem);
    JsonUtils::ObjectGetMember(input, "ResultItemType", resultItemType);
    JsonUtils::ObjectGetMember(input, "Weight", weight);
}

JsonValue ResultTableNode::ToJson() const
{
    return JsonUtils::ToJson<PFResultTableNode>(*this);
}

size_t ResultTableNode::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFResultTableNode) };
    serializedSize += (m_resultItem.size() + 1);
    return serializedSize;
}

void ResultTableNode::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFResultTableNode{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFResultTableNode);
    memcpy(stringBuffer, m_resultItem.data(), m_resultItem.size() + 1);
    serializedStruct->resultItem = stringBuffer;
    stringBuffer += m_resultItem.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RandomResultTableListing::RandomResultTableListing() :
    PFRandomResultTableListing{}
{
}

RandomResultTableListing::RandomResultTableListing(const RandomResultTableListing& src) :
    PFRandomResultTableListing{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_nodes{ src.m_nodes },
    m_tableId{ src.m_tableId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTableListing::RandomResultTableListing(RandomResultTableListing&& src) :
    PFRandomResultTableListing{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_nodes{ std::move(src.m_nodes) },
    m_tableId{ std::move(src.m_tableId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTableListing::RandomResultTableListing(const PFRandomResultTableListing& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RandomResultTableListing::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue RandomResultTableListing::ToJson() const
{
    return JsonUtils::ToJson<PFRandomResultTableListing>(*this);
}

GetRandomResultTablesResult::GetRandomResultTablesResult() :
    PFGetRandomResultTablesResult{}
{
}

GetRandomResultTablesResult::GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
    PFGetRandomResultTablesResult{ src },
    m_tables{ src.m_tables }
{
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

GetRandomResultTablesResult::GetRandomResultTablesResult(GetRandomResultTablesResult&& src) :
    PFGetRandomResultTablesResult{ src },
    m_tables{ std::move(src.m_tables) }
{
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

GetRandomResultTablesResult::GetRandomResultTablesResult(const PFGetRandomResultTablesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
}

JsonValue GetRandomResultTablesResult::ToJson() const
{
    return JsonUtils::ToJson<PFGetRandomResultTablesResult>(*this);
}

SetPublisherDataRequest::SetPublisherDataRequest() :
    PFSetPublisherDataRequest{}
{
}

SetPublisherDataRequest::SetPublisherDataRequest(const SetPublisherDataRequest& src) :
    PFSetPublisherDataRequest{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetPublisherDataRequest::SetPublisherDataRequest(SetPublisherDataRequest&& src) :
    PFSetPublisherDataRequest{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetPublisherDataRequest::SetPublisherDataRequest(const PFSetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSetPublisherDataRequest>(*this);
}

size_t SetPublisherDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSetPublisherDataRequest) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void SetPublisherDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSetPublisherDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSetPublisherDataRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

Variable::Variable() :
    PFVariable{}
{
}

Variable::Variable(const Variable& src) :
    PFVariable{ src },
    m_name{ src.m_name },
    m_value{ src.m_value }
{
    name = m_name.empty() ? nullptr : m_name.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

Variable::Variable(Variable&& src) :
    PFVariable{ src },
    m_name{ std::move(src.m_name) },
    m_value{ std::move(src.m_value) }
{
    name = m_name.empty() ? nullptr : m_name.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

Variable::Variable(const PFVariable& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Variable::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue Variable::ToJson() const
{
    return JsonUtils::ToJson<PFVariable>(*this);
}

size_t Variable::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFVariable) };
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void Variable::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFVariable{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFVariable);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

TreatmentAssignment::TreatmentAssignment() :
    PFTreatmentAssignment{}
{
}

TreatmentAssignment::TreatmentAssignment(const TreatmentAssignment& src) :
    PFTreatmentAssignment{ src },
    m_variables{ src.m_variables },
    m_variants{ src.m_variants }
{
    variables = m_variables.Empty() ? nullptr : m_variables.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

TreatmentAssignment::TreatmentAssignment(TreatmentAssignment&& src) :
    PFTreatmentAssignment{ src },
    m_variables{ std::move(src.m_variables) },
    m_variants{ std::move(src.m_variants) }
{
    variables = m_variables.Empty() ? nullptr : m_variables.Data();
    variants = m_variants.Empty() ? nullptr : m_variants.Data();
}

TreatmentAssignment::TreatmentAssignment(const PFTreatmentAssignment& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TreatmentAssignment::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Variables", m_variables, variables, variablesCount);
    JsonUtils::ObjectGetMember(input, "Variants", m_variants, variants, variantsCount);
}

JsonValue TreatmentAssignment::ToJson() const
{
    return JsonUtils::ToJson<PFTreatmentAssignment>(*this);
}

Port::Port() :
    PFPort{}
{
}

Port::Port(const Port& src) :
    PFPort{ src },
    m_name{ src.m_name }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

Port::Port(Port&& src) :
    PFPort{ src },
    m_name{ std::move(src.m_name) }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

Port::Port(const PFPort& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Port::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Num", num);
    JsonUtils::ObjectGetMember(input, "Protocol", protocol);
}

JsonValue Port::ToJson() const
{
    return JsonUtils::ToJson<PFPort>(*this);
}

size_t Port::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPort) };
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void Port::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPort{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPort);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EntityLineage::EntityLineage() :
    PFEntityLineage{}
{
}

EntityLineage::EntityLineage(const EntityLineage& src) :
    PFEntityLineage{ src },
    m_characterId{ src.m_characterId },
    m_groupId{ src.m_groupId },
    m_masterPlayerAccountId{ src.m_masterPlayerAccountId },
    m_namespaceId{ src.m_namespaceId },
    m_titleId{ src.m_titleId },
    m_titlePlayerAccountId{ src.m_titlePlayerAccountId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    groupId = m_groupId.empty() ? nullptr : m_groupId.data();
    masterPlayerAccountId = m_masterPlayerAccountId.empty() ? nullptr : m_masterPlayerAccountId.data();
    namespaceId = m_namespaceId.empty() ? nullptr : m_namespaceId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccountId = m_titlePlayerAccountId.empty() ? nullptr : m_titlePlayerAccountId.data();
}

EntityLineage::EntityLineage(EntityLineage&& src) :
    PFEntityLineage{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_groupId{ std::move(src.m_groupId) },
    m_masterPlayerAccountId{ std::move(src.m_masterPlayerAccountId) },
    m_namespaceId{ std::move(src.m_namespaceId) },
    m_titleId{ std::move(src.m_titleId) },
    m_titlePlayerAccountId{ std::move(src.m_titlePlayerAccountId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    groupId = m_groupId.empty() ? nullptr : m_groupId.data();
    masterPlayerAccountId = m_masterPlayerAccountId.empty() ? nullptr : m_masterPlayerAccountId.data();
    namespaceId = m_namespaceId.empty() ? nullptr : m_namespaceId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titlePlayerAccountId = m_titlePlayerAccountId.empty() ? nullptr : m_titlePlayerAccountId.data();
}

EntityLineage::EntityLineage(const PFEntityLineage& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityLineage::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "GroupId", m_groupId, groupId);
    JsonUtils::ObjectGetMember(input, "MasterPlayerAccountId", m_masterPlayerAccountId, masterPlayerAccountId);
    JsonUtils::ObjectGetMember(input, "NamespaceId", m_namespaceId, namespaceId);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccountId", m_titlePlayerAccountId, titlePlayerAccountId);
}

JsonValue EntityLineage::ToJson() const
{
    return JsonUtils::ToJson<PFEntityLineage>(*this);
}

size_t EntityLineage::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFEntityLineage) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_groupId.size() + 1);
    serializedSize += (m_masterPlayerAccountId.size() + 1);
    serializedSize += (m_namespaceId.size() + 1);
    serializedSize += (m_titleId.size() + 1);
    serializedSize += (m_titlePlayerAccountId.size() + 1);
    return serializedSize;
}

void EntityLineage::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFEntityLineage{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFEntityLineage);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_groupId.data(), m_groupId.size() + 1);
    serializedStruct->groupId = stringBuffer;
    stringBuffer += m_groupId.size() + 1;
    memcpy(stringBuffer, m_masterPlayerAccountId.data(), m_masterPlayerAccountId.size() + 1);
    serializedStruct->masterPlayerAccountId = stringBuffer;
    stringBuffer += m_masterPlayerAccountId.size() + 1;
    memcpy(stringBuffer, m_namespaceId.data(), m_namespaceId.size() + 1);
    serializedStruct->namespaceId = stringBuffer;
    stringBuffer += m_namespaceId.size() + 1;
    memcpy(stringBuffer, m_titleId.data(), m_titleId.size() + 1);
    serializedStruct->titleId = stringBuffer;
    stringBuffer += m_titleId.size() + 1;
    memcpy(stringBuffer, m_titlePlayerAccountId.data(), m_titlePlayerAccountId.size() + 1);
    serializedStruct->titlePlayerAccountId = stringBuffer;
    stringBuffer += m_titlePlayerAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}


namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFItemInstance& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "BundleContents", input.bundleContents, input.bundleContentsCount);
    JsonUtils::ObjectAddMember(output, "BundleParent", input.bundleParent);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData, input.customDataCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    JsonUtils::ObjectAddMember(output, "UnitCurrency", input.unitCurrency);
    JsonUtils::ObjectAddMember(output, "UnitPrice", input.unitPrice);
    JsonUtils::ObjectAddMember(output, "UsesIncrementedBy", input.usesIncrementedBy);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFScriptExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFLogStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data);
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFExecuteCloudScriptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "APIRequestsIssued", input.aPIRequestsIssued);
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "ExecutionTimeSeconds", input.executionTimeSeconds);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "FunctionResultTooLarge", input.functionResultTooLarge);
    JsonUtils::ObjectAddMember(output, "HttpRequestsIssued", input.httpRequestsIssued);
    JsonUtils::ObjectAddMember(output, "Logs", input.logs, input.logsCount);
    JsonUtils::ObjectAddMember(output, "LogsTooLarge", input.logsTooLarge);
    JsonUtils::ObjectAddMember(output, "MemoryConsumedBytes", input.memoryConsumedBytes);
    JsonUtils::ObjectAddMember(output, "ProcessorTimeSeconds", input.processorTimeSeconds);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFNameIdentifier& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserDataRecord& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerProfileViewConstraints& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ShowAvatarUrl", input.showAvatarUrl);
    JsonUtils::ObjectAddMember(output, "ShowBannedUntil", input.showBannedUntil);
    JsonUtils::ObjectAddMember(output, "ShowCampaignAttributions", input.showCampaignAttributions);
    JsonUtils::ObjectAddMember(output, "ShowContactEmailAddresses", input.showContactEmailAddresses);
    JsonUtils::ObjectAddMember(output, "ShowCreated", input.showCreated);
    JsonUtils::ObjectAddMember(output, "ShowDisplayName", input.showDisplayName);
    JsonUtils::ObjectAddMember(output, "ShowExperimentVariants", input.showExperimentVariants);
    JsonUtils::ObjectAddMember(output, "ShowLastLogin", input.showLastLogin);
    JsonUtils::ObjectAddMember(output, "ShowLinkedAccounts", input.showLinkedAccounts);
    JsonUtils::ObjectAddMember(output, "ShowLocations", input.showLocations);
    JsonUtils::ObjectAddMember(output, "ShowMemberships", input.showMemberships);
    JsonUtils::ObjectAddMember(output, "ShowOrigination", input.showOrigination);
    JsonUtils::ObjectAddMember(output, "ShowPushNotificationRegistrations", input.showPushNotificationRegistrations);
    JsonUtils::ObjectAddMember(output, "ShowStatistics", input.showStatistics);
    JsonUtils::ObjectAddMember(output, "ShowTags", input.showTags);
    JsonUtils::ObjectAddMember(output, "ShowTotalValueToDateInUsd", input.showTotalValueToDateInUsd);
    JsonUtils::ObjectAddMember(output, "ShowValuesToDate", input.showValuesToDate);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAdCampaignAttributionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFContactEmailInfoModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFLinkedPlatformAccountModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFLocationModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "City", input.city);
    JsonUtils::ObjectAddMember(output, "ContinentCode", input.continentCode);
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    JsonUtils::ObjectAddMember(output, "Latitude", input.latitude);
    JsonUtils::ObjectAddMember(output, "Longitude", input.longitude);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSubscriptionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "InitialSubscriptionTime", input.initialSubscriptionTime, true);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "SubscriptionId", input.subscriptionId);
    JsonUtils::ObjectAddMember(output, "SubscriptionItemId", input.subscriptionItemId);
    JsonUtils::ObjectAddMember(output, "SubscriptionProvider", input.subscriptionProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMembershipModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "MembershipExpiration", input.membershipExpiration, true);
    JsonUtils::ObjectAddMember(output, "MembershipId", input.membershipId);
    JsonUtils::ObjectAddMember(output, "OverrideExpiration", input.overrideExpiration, true);
    JsonUtils::ObjectAddMember(output, "Subscriptions", input.subscriptions, input.subscriptionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPushNotificationRegistrationModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFStatisticModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTagModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFValueToDateModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
    JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerProfileModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "BannedUntil", input.bannedUntil, true);
    JsonUtils::ObjectAddMember(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "ExperimentVariants", input.experimentVariants, input.experimentVariantsCount);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
    JsonUtils::ObjectAddMember(output, "Locations", input.locations, input.locationsCount);
    JsonUtils::ObjectAddMember(output, "Memberships", input.memberships, input.membershipsCount);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
    JsonUtils::ObjectAddMember(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
    JsonUtils::ObjectAddMember(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserFacebookInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
    JsonUtils::ObjectAddMember(output, "FullName", input.fullName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserGameCenterInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserPsnInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PsnAccountId", input.psnAccountId);
    JsonUtils::ObjectAddMember(output, "PsnOnlineId", input.psnOnlineId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserSteamInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SteamActivationStatus", input.steamActivationStatus);
    JsonUtils::ObjectAddMember(output, "SteamCountry", input.steamCountry);
    JsonUtils::ObjectAddMember(output, "SteamCurrency", input.steamCurrency);
    JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
    JsonUtils::ObjectAddMember(output, "SteamName", input.steamName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserXboxInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "XboxUserId", input.xboxUserId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFVirtualCurrencyRechargeTime& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RechargeMax", input.rechargeMax);
    JsonUtils::ObjectAddMember(output, "RechargeTime", input.rechargeTime, true);
    JsonUtils::ObjectAddMember(output, "SecondsToRecharge", input.secondsToRecharge);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFStatisticValue& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoRequestParams& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GetCharacterInventories", input.getCharacterInventories);
    JsonUtils::ObjectAddMember(output, "GetCharacterList", input.getCharacterList);
    JsonUtils::ObjectAddMember(output, "GetPlayerProfile", input.getPlayerProfile);
    JsonUtils::ObjectAddMember(output, "GetPlayerStatistics", input.getPlayerStatistics);
    JsonUtils::ObjectAddMember(output, "GetTitleData", input.getTitleData);
    JsonUtils::ObjectAddMember(output, "GetUserAccountInfo", input.getUserAccountInfo);
    JsonUtils::ObjectAddMember(output, "GetUserData", input.getUserData);
    JsonUtils::ObjectAddMember(output, "GetUserInventory", input.getUserInventory);
    JsonUtils::ObjectAddMember(output, "GetUserReadOnlyData", input.getUserReadOnlyData);
    JsonUtils::ObjectAddMember(output, "GetUserVirtualCurrency", input.getUserVirtualCurrency);
    JsonUtils::ObjectAddMember(output, "PlayerStatisticNames", input.playerStatisticNames, input.playerStatisticNamesCount);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "TitleDataKeys", input.titleDataKeys, input.titleDataKeysCount);
    JsonUtils::ObjectAddMember(output, "UserDataKeys", input.userDataKeys, input.userDataKeysCount);
    JsonUtils::ObjectAddMember(output, "UserReadOnlyDataKeys", input.userReadOnlyDataKeys, input.userReadOnlyDataKeysCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFEntityKey& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Type", input.type);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserAndroidDeviceInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserAppleIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AppleSubjectId", input.appleSubjectId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserCustomIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserFacebookInstantGamesIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserGoogleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GoogleEmail", input.googleEmail);
    JsonUtils::ObjectAddMember(output, "GoogleGender", input.googleGender);
    JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
    JsonUtils::ObjectAddMember(output, "GoogleLocale", input.googleLocale);
    JsonUtils::ObjectAddMember(output, "GoogleName", input.googleName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserIosDeviceInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IosDeviceId", input.iosDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserKongregateInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    JsonUtils::ObjectAddMember(output, "KongregateName", input.kongregateName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserNintendoSwitchAccountIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountSubjectId", input.nintendoSwitchAccountSubjectId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserNintendoSwitchDeviceIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserOpenIdInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserPrivateAccountInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserTitleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "FirstLogin", input.firstLogin, true);
    JsonUtils::ObjectAddMember(output, "isBanned", input.isBanned);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccount", input.titlePlayerAccount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserTwitchInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
    JsonUtils::ObjectAddMember(output, "TwitchUserName", input.twitchUserName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFUserAccountInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceInfo", input.androidDeviceInfo);
    JsonUtils::ObjectAddMember(output, "AppleAccountInfo", input.appleAccountInfo);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "CustomIdInfo", input.customIdInfo);
    JsonUtils::ObjectAddMember(output, "FacebookInfo", input.facebookInfo);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIdInfo", input.facebookInstantGamesIdInfo);
    JsonUtils::ObjectAddMember(output, "GameCenterInfo", input.gameCenterInfo);
    JsonUtils::ObjectAddMember(output, "GoogleInfo", input.googleInfo);
    JsonUtils::ObjectAddMember(output, "IosDeviceInfo", input.iosDeviceInfo);
    JsonUtils::ObjectAddMember(output, "KongregateInfo", input.kongregateInfo);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchAccountInfo", input.nintendoSwitchAccountInfo);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIdInfo", input.nintendoSwitchDeviceIdInfo);
    JsonUtils::ObjectAddMember(output, "OpenIdInfo", input.openIdInfo, input.openIdInfoCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PrivateInfo", input.privateInfo);
    JsonUtils::ObjectAddMember(output, "PsnInfo", input.psnInfo);
    JsonUtils::ObjectAddMember(output, "SteamInfo", input.steamInfo);
    JsonUtils::ObjectAddMember(output, "TitleInfo", input.titleInfo);
    JsonUtils::ObjectAddMember(output, "TwitchInfo", input.twitchInfo);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    JsonUtils::ObjectAddMember(output, "XboxInfo", input.xboxInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFCharacterInventory& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoResultPayload& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccountInfo", input.accountInfo);
    JsonUtils::ObjectAddMember(output, "CharacterInventories", input.characterInventories, input.characterInventoriesCount);
    JsonUtils::ObjectAddMember(output, "CharacterList", input.characterList, input.characterListCount);
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    JsonUtils::ObjectAddMember(output, "PlayerStatistics", input.playerStatistics, input.playerStatisticsCount);
    JsonUtils::ObjectAddMember(output, "TitleData", input.titleData, input.titleDataCount);
    JsonUtils::ObjectAddMember(output, "UserData", input.userData, input.userDataCount);
    JsonUtils::ObjectAddMember(output, "UserDataVersion", input.userDataVersion);
    JsonUtils::ObjectAddMember(output, "UserInventory", input.userInventory, input.userInventoryCount);
    JsonUtils::ObjectAddMember(output, "UserReadOnlyData", input.userReadOnlyData, input.userReadOnlyDataCount);
    JsonUtils::ObjectAddMember(output, "UserReadOnlyDataVersion", input.userReadOnlyDataVersion);
    JsonUtils::ObjectAddMember(output, "UserVirtualCurrency", input.userVirtualCurrency, input.userVirtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "UserVirtualCurrencyRechargeTimes", input.userVirtualCurrencyRechargeTimes, input.userVirtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGetPlayerCombinedInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "InfoResultPayload", input.infoResultPayload);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFResultTableNode& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ResultItem", input.resultItem);
    JsonUtils::ObjectAddMember(output, "ResultItemType", input.resultItemType);
    JsonUtils::ObjectAddMember(output, "Weight", input.weight);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFRandomResultTableListing& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFGetRandomResultTablesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFVariable& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTreatmentAssignment& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Variables", input.variables, input.variablesCount);
    JsonUtils::ObjectAddMember(output, "Variants", input.variants, input.variantsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPort& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Num", input.num);
    JsonUtils::ObjectAddMember(output, "Protocol", input.protocol);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFEntityLineage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "GroupId", input.groupId);
    JsonUtils::ObjectAddMember(output, "MasterPlayerAccountId", input.masterPlayerAccountId);
    JsonUtils::ObjectAddMember(output, "NamespaceId", input.namespaceId);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TitlePlayerAccountId", input.titlePlayerAccountId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
