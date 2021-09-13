#include "stdafx.h"
#include "SharedDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{

void ItemInstance::FromJson(const JsonValue& input)
{
    String annotation{};
    JsonUtils::ObjectGetMember(input, "Annotation", annotation);
    this->SetAnnotation(std::move(annotation));

    CStringVector bundleContents{};
    JsonUtils::ObjectGetMember(input, "BundleContents", bundleContents);
    this->SetBundleContents(std::move(bundleContents));

    String bundleParent{};
    JsonUtils::ObjectGetMember(input, "BundleParent", bundleParent);
    this->SetBundleParent(std::move(bundleParent));

    String catalogVersion{};
    JsonUtils::ObjectGetMember(input, "CatalogVersion", catalogVersion);
    this->SetCatalogVersion(std::move(catalogVersion));

    StringDictionaryEntryVector customData{};
    JsonUtils::ObjectGetMember(input, "CustomData", customData);
    this->SetCustomData(std::move(customData));

    String displayName{};
    JsonUtils::ObjectGetMember(input, "DisplayName", displayName);
    this->SetDisplayName(std::move(displayName));

    StdExtra::optional<time_t> expiration{};
    JsonUtils::ObjectGetMemberTime(input, "Expiration", expiration);
    this->SetExpiration(std::move(expiration));

    String itemClass{};
    JsonUtils::ObjectGetMember(input, "ItemClass", itemClass);
    this->SetItemClass(std::move(itemClass));

    String itemId{};
    JsonUtils::ObjectGetMember(input, "ItemId", itemId);
    this->SetItemId(std::move(itemId));

    String itemInstanceId{};
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", itemInstanceId);
    this->SetItemInstanceId(std::move(itemInstanceId));

    StdExtra::optional<time_t> purchaseDate{};
    JsonUtils::ObjectGetMemberTime(input, "PurchaseDate", purchaseDate);
    this->SetPurchaseDate(std::move(purchaseDate));

    StdExtra::optional<int32_t> remainingUses{};
    JsonUtils::ObjectGetMember(input, "RemainingUses", remainingUses);
    this->SetRemainingUses(std::move(remainingUses));

    String unitCurrency{};
    JsonUtils::ObjectGetMember(input, "UnitCurrency", unitCurrency);
    this->SetUnitCurrency(std::move(unitCurrency));

    JsonUtils::ObjectGetMember(input, "UnitPrice", this->m_model.unitPrice);

    StdExtra::optional<int32_t> usesIncrementedBy{};
    JsonUtils::ObjectGetMember(input, "UsesIncrementedBy", usesIncrementedBy);
    this->SetUsesIncrementedBy(std::move(usesIncrementedBy));
}

size_t ItemInstance::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFItemInstance const*> ItemInstance::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ItemInstance>(&this->Model());
}

size_t ItemInstance::RequiredBufferSize(const PFItemInstance& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.annotation)
    {
        requiredSize += (std::strlen(model.annotation) + 1);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.bundleContentsCount);
    for (size_t i = 0; i < model.bundleContentsCount; ++i)
    {
        requiredSize += (std::strlen(model.bundleContents[i]) + 1);
    }
    if (model.bundleParent)
    {
        requiredSize += (std::strlen(model.bundleParent) + 1);
    }
    if (model.catalogVersion)
    {
        requiredSize += (std::strlen(model.catalogVersion) + 1);
    }
    requiredSize += (alignof(PFStringDictionaryEntry) + sizeof(PFStringDictionaryEntry) * model.customDataCount);
    for (size_t i = 0; i < model.customDataCount; ++i)
    {
        requiredSize += (std::strlen(model.customData[i].key) + 1);
        requiredSize += (std::strlen(model.customData[i].value) + 1);
    }
    if (model.displayName)
    {
        requiredSize += (std::strlen(model.displayName) + 1);
    }
    if (model.expiration)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.itemClass)
    {
        requiredSize += (std::strlen(model.itemClass) + 1);
    }
    if (model.itemId)
    {
        requiredSize += (std::strlen(model.itemId) + 1);
    }
    if (model.itemInstanceId)
    {
        requiredSize += (std::strlen(model.itemInstanceId) + 1);
    }
    if (model.purchaseDate)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.remainingUses)
    {
        requiredSize += (alignof(int32_t) + sizeof(int32_t));
    }
    if (model.unitCurrency)
    {
        requiredSize += (std::strlen(model.unitCurrency) + 1);
    }
    if (model.usesIncrementedBy)
    {
        requiredSize += (alignof(int32_t) + sizeof(int32_t));
    }
    return requiredSize;
}

HRESULT ItemInstance::Copy(const PFItemInstance& input, PFItemInstance& output, ModelBuffer& buffer)
{
    output = input;
    output.annotation = buffer.CopyTo(input.annotation);
    output.bundleContents = buffer.CopyToArray(input.bundleContents, input.bundleContentsCount);
    output.bundleParent = buffer.CopyTo(input.bundleParent);
    output.catalogVersion = buffer.CopyTo(input.catalogVersion);
    output.customData = buffer.CopyToDictionary(input.customData, input.customDataCount);
    output.displayName = buffer.CopyTo(input.displayName);
    output.expiration = buffer.CopyTo(input.expiration);
    output.itemClass = buffer.CopyTo(input.itemClass);
    output.itemId = buffer.CopyTo(input.itemId);
    output.itemInstanceId = buffer.CopyTo(input.itemInstanceId);
    output.purchaseDate = buffer.CopyTo(input.purchaseDate);
    output.remainingUses = buffer.CopyTo(input.remainingUses);
    output.unitCurrency = buffer.CopyTo(input.unitCurrency);
    output.usesIncrementedBy = buffer.CopyTo(input.usesIncrementedBy);
    return S_OK;
}

void ScriptExecutionError::FromJson(const JsonValue& input)
{
    String error{};
    JsonUtils::ObjectGetMember(input, "Error", error);
    this->SetError(std::move(error));

    String message{};
    JsonUtils::ObjectGetMember(input, "Message", message);
    this->SetMessage(std::move(message));

    String stackTrace{};
    JsonUtils::ObjectGetMember(input, "StackTrace", stackTrace);
    this->SetStackTrace(std::move(stackTrace));
}

size_t ScriptExecutionError::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFScriptExecutionError const*> ScriptExecutionError::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ScriptExecutionError>(&this->Model());
}

size_t ScriptExecutionError::RequiredBufferSize(const PFScriptExecutionError& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.error)
    {
        requiredSize += (std::strlen(model.error) + 1);
    }
    if (model.message)
    {
        requiredSize += (std::strlen(model.message) + 1);
    }
    if (model.stackTrace)
    {
        requiredSize += (std::strlen(model.stackTrace) + 1);
    }
    return requiredSize;
}

HRESULT ScriptExecutionError::Copy(const PFScriptExecutionError& input, PFScriptExecutionError& output, ModelBuffer& buffer)
{
    output = input;
    output.error = buffer.CopyTo(input.error);
    output.message = buffer.CopyTo(input.message);
    output.stackTrace = buffer.CopyTo(input.stackTrace);
    return S_OK;
}

void LogStatement::FromJson(const JsonValue& input)
{
    JsonObject data{};
    JsonUtils::ObjectGetMember(input, "Data", data);
    this->SetData(std::move(data));

    String level{};
    JsonUtils::ObjectGetMember(input, "Level", level);
    this->SetLevel(std::move(level));

    String message{};
    JsonUtils::ObjectGetMember(input, "Message", message);
    this->SetMessage(std::move(message));
}

size_t LogStatement::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFLogStatement const*> LogStatement::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<LogStatement>(&this->Model());
}

size_t LogStatement::RequiredBufferSize(const PFLogStatement& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.data.stringValue)
    {
    requiredSize += (std::strlen(model.data.stringValue) + 1);
    }
    if (model.level)
    {
        requiredSize += (std::strlen(model.level) + 1);
    }
    if (model.message)
    {
        requiredSize += (std::strlen(model.message) + 1);
    }
    return requiredSize;
}

HRESULT LogStatement::Copy(const PFLogStatement& input, PFLogStatement& output, ModelBuffer& buffer)
{
    output = input;
    output.data.stringValue = buffer.CopyTo(input.data.stringValue);
    output.level = buffer.CopyTo(input.level);
    output.message = buffer.CopyTo(input.message);
    return S_OK;
}

void ExecuteCloudScriptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "APIRequestsIssued", this->m_model.aPIRequestsIssued);

    StdExtra::optional<ScriptExecutionError> error{};
    JsonUtils::ObjectGetMember(input, "Error", error);
    if (error)
    {
        this->SetError(std::move(*error));
    }

    JsonUtils::ObjectGetMember(input, "ExecutionTimeSeconds", this->m_model.executionTimeSeconds);

    String functionName{};
    JsonUtils::ObjectGetMember(input, "FunctionName", functionName);
    this->SetFunctionName(std::move(functionName));

    JsonObject functionResult{};
    JsonUtils::ObjectGetMember(input, "FunctionResult", functionResult);
    this->SetFunctionResult(std::move(functionResult));

    StdExtra::optional<bool> functionResultTooLarge{};
    JsonUtils::ObjectGetMember(input, "FunctionResultTooLarge", functionResultTooLarge);
    this->SetFunctionResultTooLarge(std::move(functionResultTooLarge));

    JsonUtils::ObjectGetMember(input, "HttpRequestsIssued", this->m_model.httpRequestsIssued);

    ModelVector<LogStatement> logs{};
    JsonUtils::ObjectGetMember<LogStatement>(input, "Logs", logs);
    this->SetLogs(std::move(logs));

    StdExtra::optional<bool> logsTooLarge{};
    JsonUtils::ObjectGetMember(input, "LogsTooLarge", logsTooLarge);
    this->SetLogsTooLarge(std::move(logsTooLarge));

    JsonUtils::ObjectGetMember(input, "MemoryConsumedBytes", this->m_model.memoryConsumedBytes);

    JsonUtils::ObjectGetMember(input, "ProcessorTimeSeconds", this->m_model.processorTimeSeconds);

    JsonUtils::ObjectGetMember(input, "Revision", this->m_model.revision);
}

size_t ExecuteCloudScriptResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFExecuteCloudScriptResult const*> ExecuteCloudScriptResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ExecuteCloudScriptResult>(&this->Model());
}

size_t ExecuteCloudScriptResult::RequiredBufferSize(const PFExecuteCloudScriptResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.error)
    {
        requiredSize += ScriptExecutionError::RequiredBufferSize(*model.error);
    }
    if (model.functionName)
    {
        requiredSize += (std::strlen(model.functionName) + 1);
    }
    if (model.functionResult.stringValue)
    {
    requiredSize += (std::strlen(model.functionResult.stringValue) + 1);
    }
    if (model.functionResultTooLarge)
    {
        requiredSize += (alignof(bool) + sizeof(bool));
    }
    requiredSize += (alignof(PFLogStatement*) + sizeof(PFLogStatement*) * model.logsCount);
    for (size_t i = 0; i < model.logsCount; ++i)
    {
        requiredSize += LogStatement::RequiredBufferSize(*model.logs[i]);
    }
    if (model.logsTooLarge)
    {
        requiredSize += (alignof(bool) + sizeof(bool));
    }
    return requiredSize;
}

HRESULT ExecuteCloudScriptResult::Copy(const PFExecuteCloudScriptResult& input, PFExecuteCloudScriptResult& output, ModelBuffer& buffer)
{
    output = input;
    output.error = buffer.CopyTo<ScriptExecutionError>(input.error);
    output.functionName = buffer.CopyTo(input.functionName);
    output.functionResult.stringValue = buffer.CopyTo(input.functionResult.stringValue);
    output.functionResultTooLarge = buffer.CopyTo(input.functionResultTooLarge);
    output.logs = buffer.CopyToArray<LogStatement>(input.logs, input.logsCount);
    output.logsTooLarge = buffer.CopyTo(input.logsTooLarge);
    return S_OK;
}

JsonValue NameIdentifier::ToJson() const
{
    return NameIdentifier::ToJson(this->Model());
}

JsonValue NameIdentifier::ToJson(const PFNameIdentifier& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

void NameIdentifier::FromJson(const JsonValue& input)
{
    String id{};
    JsonUtils::ObjectGetMember(input, "Id", id);
    this->SetId(std::move(id));

    String name{};
    JsonUtils::ObjectGetMember(input, "Name", name);
    this->SetName(std::move(name));
}

size_t NameIdentifier::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFNameIdentifier const*> NameIdentifier::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<NameIdentifier>(&this->Model());
}

size_t NameIdentifier::RequiredBufferSize(const PFNameIdentifier& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.id)
    {
        requiredSize += (std::strlen(model.id) + 1);
    }
    if (model.name)
    {
        requiredSize += (std::strlen(model.name) + 1);
    }
    return requiredSize;
}

HRESULT NameIdentifier::Copy(const PFNameIdentifier& input, PFNameIdentifier& output, ModelBuffer& buffer)
{
    output = input;
    output.id = buffer.CopyTo(input.id);
    output.name = buffer.CopyTo(input.name);
    return S_OK;
}

void UserDataRecord::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMemberTime(input, "LastUpdated", this->m_model.lastUpdated);

    StdExtra::optional<PFUserDataPermission> permission{};
    JsonUtils::ObjectGetMember(input, "Permission", permission);
    this->SetPermission(std::move(permission));

    String value{};
    JsonUtils::ObjectGetMember(input, "Value", value);
    this->SetValue(std::move(value));
}

size_t UserDataRecord::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserDataRecord const*> UserDataRecord::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserDataRecord>(&this->Model());
}

size_t UserDataRecord::RequiredBufferSize(const PFUserDataRecord& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.permission)
    {
        requiredSize += (alignof(PFUserDataPermission) + sizeof(PFUserDataPermission));
    }
    if (model.value)
    {
        requiredSize += (std::strlen(model.value) + 1);
    }
    return requiredSize;
}

HRESULT UserDataRecord::Copy(const PFUserDataRecord& input, PFUserDataRecord& output, ModelBuffer& buffer)
{
    output = input;
    output.permission = buffer.CopyTo(input.permission);
    output.value = buffer.CopyTo(input.value);
    return S_OK;
}

JsonValue PlayerProfileViewConstraints::ToJson() const
{
    return PlayerProfileViewConstraints::ToJson(this->Model());
}

JsonValue PlayerProfileViewConstraints::ToJson(const PFPlayerProfileViewConstraints& input)
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

JsonValue AdCampaignAttributionModel::ToJson() const
{
    return AdCampaignAttributionModel::ToJson(this->Model());
}

JsonValue AdCampaignAttributionModel::ToJson(const PFAdCampaignAttributionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberTime(output, "AttributedAt", input.attributedAt);
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

void AdCampaignAttributionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMemberTime(input, "AttributedAt", this->m_model.attributedAt);

    String campaignId{};
    JsonUtils::ObjectGetMember(input, "CampaignId", campaignId);
    this->SetCampaignId(std::move(campaignId));

    String platform{};
    JsonUtils::ObjectGetMember(input, "Platform", platform);
    this->SetPlatform(std::move(platform));
}

size_t AdCampaignAttributionModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFAdCampaignAttributionModel const*> AdCampaignAttributionModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<AdCampaignAttributionModel>(&this->Model());
}

size_t AdCampaignAttributionModel::RequiredBufferSize(const PFAdCampaignAttributionModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.campaignId)
    {
        requiredSize += (std::strlen(model.campaignId) + 1);
    }
    if (model.platform)
    {
        requiredSize += (std::strlen(model.platform) + 1);
    }
    return requiredSize;
}

HRESULT AdCampaignAttributionModel::Copy(const PFAdCampaignAttributionModel& input, PFAdCampaignAttributionModel& output, ModelBuffer& buffer)
{
    output = input;
    output.campaignId = buffer.CopyTo(input.campaignId);
    output.platform = buffer.CopyTo(input.platform);
    return S_OK;
}

JsonValue ContactEmailInfoModel::ToJson() const
{
    return ContactEmailInfoModel::ToJson(this->Model());
}

JsonValue ContactEmailInfoModel::ToJson(const PFContactEmailInfoModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
    return output;
}

void ContactEmailInfoModel::FromJson(const JsonValue& input)
{
    String emailAddress{};
    JsonUtils::ObjectGetMember(input, "EmailAddress", emailAddress);
    this->SetEmailAddress(std::move(emailAddress));

    String name{};
    JsonUtils::ObjectGetMember(input, "Name", name);
    this->SetName(std::move(name));

    StdExtra::optional<PFEmailVerificationStatus> verificationStatus{};
    JsonUtils::ObjectGetMember(input, "VerificationStatus", verificationStatus);
    this->SetVerificationStatus(std::move(verificationStatus));
}

size_t ContactEmailInfoModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFContactEmailInfoModel const*> ContactEmailInfoModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ContactEmailInfoModel>(&this->Model());
}

size_t ContactEmailInfoModel::RequiredBufferSize(const PFContactEmailInfoModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.emailAddress)
    {
        requiredSize += (std::strlen(model.emailAddress) + 1);
    }
    if (model.name)
    {
        requiredSize += (std::strlen(model.name) + 1);
    }
    if (model.verificationStatus)
    {
        requiredSize += (alignof(PFEmailVerificationStatus) + sizeof(PFEmailVerificationStatus));
    }
    return requiredSize;
}

HRESULT ContactEmailInfoModel::Copy(const PFContactEmailInfoModel& input, PFContactEmailInfoModel& output, ModelBuffer& buffer)
{
    output = input;
    output.emailAddress = buffer.CopyTo(input.emailAddress);
    output.name = buffer.CopyTo(input.name);
    output.verificationStatus = buffer.CopyTo(input.verificationStatus);
    return S_OK;
}

JsonValue LinkedPlatformAccountModel::ToJson() const
{
    return LinkedPlatformAccountModel::ToJson(this->Model());
}

JsonValue LinkedPlatformAccountModel::ToJson(const PFLinkedPlatformAccountModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

void LinkedPlatformAccountModel::FromJson(const JsonValue& input)
{
    String email{};
    JsonUtils::ObjectGetMember(input, "Email", email);
    this->SetEmail(std::move(email));

    StdExtra::optional<PFLoginIdentityProvider> platform{};
    JsonUtils::ObjectGetMember(input, "Platform", platform);
    this->SetPlatform(std::move(platform));

    String platformUserId{};
    JsonUtils::ObjectGetMember(input, "PlatformUserId", platformUserId);
    this->SetPlatformUserId(std::move(platformUserId));

    String username{};
    JsonUtils::ObjectGetMember(input, "Username", username);
    this->SetUsername(std::move(username));
}

size_t LinkedPlatformAccountModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFLinkedPlatformAccountModel const*> LinkedPlatformAccountModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<LinkedPlatformAccountModel>(&this->Model());
}

size_t LinkedPlatformAccountModel::RequiredBufferSize(const PFLinkedPlatformAccountModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.email)
    {
        requiredSize += (std::strlen(model.email) + 1);
    }
    if (model.platform)
    {
        requiredSize += (alignof(PFLoginIdentityProvider) + sizeof(PFLoginIdentityProvider));
    }
    if (model.platformUserId)
    {
        requiredSize += (std::strlen(model.platformUserId) + 1);
    }
    if (model.username)
    {
        requiredSize += (std::strlen(model.username) + 1);
    }
    return requiredSize;
}

HRESULT LinkedPlatformAccountModel::Copy(const PFLinkedPlatformAccountModel& input, PFLinkedPlatformAccountModel& output, ModelBuffer& buffer)
{
    output = input;
    output.email = buffer.CopyTo(input.email);
    output.platform = buffer.CopyTo(input.platform);
    output.platformUserId = buffer.CopyTo(input.platformUserId);
    output.username = buffer.CopyTo(input.username);
    return S_OK;
}

JsonValue LocationModel::ToJson() const
{
    return LocationModel::ToJson(this->Model());
}

JsonValue LocationModel::ToJson(const PFLocationModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "City", input.city);
    JsonUtils::ObjectAddMember(output, "ContinentCode", input.continentCode);
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    JsonUtils::ObjectAddMember(output, "Latitude", input.latitude);
    JsonUtils::ObjectAddMember(output, "Longitude", input.longitude);
    return output;
}

void LocationModel::FromJson(const JsonValue& input)
{
    String city{};
    JsonUtils::ObjectGetMember(input, "City", city);
    this->SetCity(std::move(city));

    StdExtra::optional<PFContinentCode> continentCode{};
    JsonUtils::ObjectGetMember(input, "ContinentCode", continentCode);
    this->SetContinentCode(std::move(continentCode));

    StdExtra::optional<PFCountryCode> countryCode{};
    JsonUtils::ObjectGetMember(input, "CountryCode", countryCode);
    this->SetCountryCode(std::move(countryCode));

    StdExtra::optional<double> latitude{};
    JsonUtils::ObjectGetMember(input, "Latitude", latitude);
    this->SetLatitude(std::move(latitude));

    StdExtra::optional<double> longitude{};
    JsonUtils::ObjectGetMember(input, "Longitude", longitude);
    this->SetLongitude(std::move(longitude));
}

size_t LocationModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFLocationModel const*> LocationModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<LocationModel>(&this->Model());
}

size_t LocationModel::RequiredBufferSize(const PFLocationModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.city)
    {
        requiredSize += (std::strlen(model.city) + 1);
    }
    if (model.continentCode)
    {
        requiredSize += (alignof(PFContinentCode) + sizeof(PFContinentCode));
    }
    if (model.countryCode)
    {
        requiredSize += (alignof(PFCountryCode) + sizeof(PFCountryCode));
    }
    if (model.latitude)
    {
        requiredSize += (alignof(double) + sizeof(double));
    }
    if (model.longitude)
    {
        requiredSize += (alignof(double) + sizeof(double));
    }
    return requiredSize;
}

HRESULT LocationModel::Copy(const PFLocationModel& input, PFLocationModel& output, ModelBuffer& buffer)
{
    output = input;
    output.city = buffer.CopyTo(input.city);
    output.continentCode = buffer.CopyTo(input.continentCode);
    output.countryCode = buffer.CopyTo(input.countryCode);
    output.latitude = buffer.CopyTo(input.latitude);
    output.longitude = buffer.CopyTo(input.longitude);
    return S_OK;
}

JsonValue SubscriptionModel::ToJson() const
{
    return SubscriptionModel::ToJson(this->Model());
}

JsonValue SubscriptionModel::ToJson(const PFSubscriptionModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberTime(output, "Expiration", input.expiration);
    JsonUtils::ObjectAddMemberTime(output, "InitialSubscriptionTime", input.initialSubscriptionTime);
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "SubscriptionId", input.subscriptionId);
    JsonUtils::ObjectAddMember(output, "SubscriptionItemId", input.subscriptionItemId);
    JsonUtils::ObjectAddMember(output, "SubscriptionProvider", input.subscriptionProvider);
    return output;
}

void SubscriptionModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMemberTime(input, "Expiration", this->m_model.expiration);

    JsonUtils::ObjectGetMemberTime(input, "InitialSubscriptionTime", this->m_model.initialSubscriptionTime);

    JsonUtils::ObjectGetMember(input, "IsActive", this->m_model.isActive);

    StdExtra::optional<PFSubscriptionProviderStatus> status{};
    JsonUtils::ObjectGetMember(input, "Status", status);
    this->SetStatus(std::move(status));

    String subscriptionId{};
    JsonUtils::ObjectGetMember(input, "SubscriptionId", subscriptionId);
    this->SetSubscriptionId(std::move(subscriptionId));

    String subscriptionItemId{};
    JsonUtils::ObjectGetMember(input, "SubscriptionItemId", subscriptionItemId);
    this->SetSubscriptionItemId(std::move(subscriptionItemId));

    String subscriptionProvider{};
    JsonUtils::ObjectGetMember(input, "SubscriptionProvider", subscriptionProvider);
    this->SetSubscriptionProvider(std::move(subscriptionProvider));
}

size_t SubscriptionModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFSubscriptionModel const*> SubscriptionModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<SubscriptionModel>(&this->Model());
}

size_t SubscriptionModel::RequiredBufferSize(const PFSubscriptionModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.status)
    {
        requiredSize += (alignof(PFSubscriptionProviderStatus) + sizeof(PFSubscriptionProviderStatus));
    }
    if (model.subscriptionId)
    {
        requiredSize += (std::strlen(model.subscriptionId) + 1);
    }
    if (model.subscriptionItemId)
    {
        requiredSize += (std::strlen(model.subscriptionItemId) + 1);
    }
    if (model.subscriptionProvider)
    {
        requiredSize += (std::strlen(model.subscriptionProvider) + 1);
    }
    return requiredSize;
}

HRESULT SubscriptionModel::Copy(const PFSubscriptionModel& input, PFSubscriptionModel& output, ModelBuffer& buffer)
{
    output = input;
    output.status = buffer.CopyTo(input.status);
    output.subscriptionId = buffer.CopyTo(input.subscriptionId);
    output.subscriptionItemId = buffer.CopyTo(input.subscriptionItemId);
    output.subscriptionProvider = buffer.CopyTo(input.subscriptionProvider);
    return S_OK;
}

JsonValue MembershipModel::ToJson() const
{
    return MembershipModel::ToJson(this->Model());
}

JsonValue MembershipModel::ToJson(const PFMembershipModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsActive", input.isActive);
    JsonUtils::ObjectAddMemberTime(output, "MembershipExpiration", input.membershipExpiration);
    JsonUtils::ObjectAddMember(output, "MembershipId", input.membershipId);
    JsonUtils::ObjectAddMemberTime(output, "OverrideExpiration", input.overrideExpiration);
    JsonUtils::ObjectAddMemberArray<SubscriptionModel>(output, "Subscriptions", input.subscriptions, input.subscriptionsCount);
    return output;
}

void MembershipModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsActive", this->m_model.isActive);

    JsonUtils::ObjectGetMemberTime(input, "MembershipExpiration", this->m_model.membershipExpiration);

    String membershipId{};
    JsonUtils::ObjectGetMember(input, "MembershipId", membershipId);
    this->SetMembershipId(std::move(membershipId));

    StdExtra::optional<time_t> overrideExpiration{};
    JsonUtils::ObjectGetMemberTime(input, "OverrideExpiration", overrideExpiration);
    this->SetOverrideExpiration(std::move(overrideExpiration));

    ModelVector<SubscriptionModel> subscriptions{};
    JsonUtils::ObjectGetMember<SubscriptionModel>(input, "Subscriptions", subscriptions);
    this->SetSubscriptions(std::move(subscriptions));
}

size_t MembershipModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFMembershipModel const*> MembershipModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<MembershipModel>(&this->Model());
}

size_t MembershipModel::RequiredBufferSize(const PFMembershipModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.membershipId)
    {
        requiredSize += (std::strlen(model.membershipId) + 1);
    }
    if (model.overrideExpiration)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    requiredSize += (alignof(PFSubscriptionModel*) + sizeof(PFSubscriptionModel*) * model.subscriptionsCount);
    for (size_t i = 0; i < model.subscriptionsCount; ++i)
    {
        requiredSize += SubscriptionModel::RequiredBufferSize(*model.subscriptions[i]);
    }
    return requiredSize;
}

HRESULT MembershipModel::Copy(const PFMembershipModel& input, PFMembershipModel& output, ModelBuffer& buffer)
{
    output = input;
    output.membershipId = buffer.CopyTo(input.membershipId);
    output.overrideExpiration = buffer.CopyTo(input.overrideExpiration);
    output.subscriptions = buffer.CopyToArray<SubscriptionModel>(input.subscriptions, input.subscriptionsCount);
    return S_OK;
}

JsonValue PushNotificationRegistrationModel::ToJson() const
{
    return PushNotificationRegistrationModel::ToJson(this->Model());
}

JsonValue PushNotificationRegistrationModel::ToJson(const PFPushNotificationRegistrationModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

void PushNotificationRegistrationModel::FromJson(const JsonValue& input)
{
    String notificationEndpointARN{};
    JsonUtils::ObjectGetMember(input, "NotificationEndpointARN", notificationEndpointARN);
    this->SetNotificationEndpointARN(std::move(notificationEndpointARN));

    StdExtra::optional<PFPushNotificationPlatform> platform{};
    JsonUtils::ObjectGetMember(input, "Platform", platform);
    this->SetPlatform(std::move(platform));
}

size_t PushNotificationRegistrationModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFPushNotificationRegistrationModel const*> PushNotificationRegistrationModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<PushNotificationRegistrationModel>(&this->Model());
}

size_t PushNotificationRegistrationModel::RequiredBufferSize(const PFPushNotificationRegistrationModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.notificationEndpointARN)
    {
        requiredSize += (std::strlen(model.notificationEndpointARN) + 1);
    }
    if (model.platform)
    {
        requiredSize += (alignof(PFPushNotificationPlatform) + sizeof(PFPushNotificationPlatform));
    }
    return requiredSize;
}

HRESULT PushNotificationRegistrationModel::Copy(const PFPushNotificationRegistrationModel& input, PFPushNotificationRegistrationModel& output, ModelBuffer& buffer)
{
    output = input;
    output.notificationEndpointARN = buffer.CopyTo(input.notificationEndpointARN);
    output.platform = buffer.CopyTo(input.platform);
    return S_OK;
}

JsonValue StatisticModel::ToJson() const
{
    return StatisticModel::ToJson(this->Model());
}

JsonValue StatisticModel::ToJson(const PFStatisticModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

void StatisticModel::FromJson(const JsonValue& input)
{
    String name{};
    JsonUtils::ObjectGetMember(input, "Name", name);
    this->SetName(std::move(name));

    JsonUtils::ObjectGetMember(input, "Value", this->m_model.value);

    JsonUtils::ObjectGetMember(input, "Version", this->m_model.version);
}

size_t StatisticModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFStatisticModel const*> StatisticModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<StatisticModel>(&this->Model());
}

size_t StatisticModel::RequiredBufferSize(const PFStatisticModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.name)
    {
        requiredSize += (std::strlen(model.name) + 1);
    }
    return requiredSize;
}

HRESULT StatisticModel::Copy(const PFStatisticModel& input, PFStatisticModel& output, ModelBuffer& buffer)
{
    output = input;
    output.name = buffer.CopyTo(input.name);
    return S_OK;
}

JsonValue TagModel::ToJson() const
{
    return TagModel::ToJson(this->Model());
}

JsonValue TagModel::ToJson(const PFTagModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
    return output;
}

void TagModel::FromJson(const JsonValue& input)
{
    String tagValue{};
    JsonUtils::ObjectGetMember(input, "TagValue", tagValue);
    this->SetTagValue(std::move(tagValue));
}

size_t TagModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTagModel const*> TagModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<TagModel>(&this->Model());
}

size_t TagModel::RequiredBufferSize(const PFTagModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.tagValue)
    {
        requiredSize += (std::strlen(model.tagValue) + 1);
    }
    return requiredSize;
}

HRESULT TagModel::Copy(const PFTagModel& input, PFTagModel& output, ModelBuffer& buffer)
{
    output = input;
    output.tagValue = buffer.CopyTo(input.tagValue);
    return S_OK;
}

JsonValue ValueToDateModel::ToJson() const
{
    return ValueToDateModel::ToJson(this->Model());
}

JsonValue ValueToDateModel::ToJson(const PFValueToDateModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "TotalValue", input.totalValue);
    JsonUtils::ObjectAddMember(output, "TotalValueAsDecimal", input.totalValueAsDecimal);
    return output;
}

void ValueToDateModel::FromJson(const JsonValue& input)
{
    String currency{};
    JsonUtils::ObjectGetMember(input, "Currency", currency);
    this->SetCurrency(std::move(currency));

    JsonUtils::ObjectGetMember(input, "TotalValue", this->m_model.totalValue);

    String totalValueAsDecimal{};
    JsonUtils::ObjectGetMember(input, "TotalValueAsDecimal", totalValueAsDecimal);
    this->SetTotalValueAsDecimal(std::move(totalValueAsDecimal));
}

size_t ValueToDateModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFValueToDateModel const*> ValueToDateModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ValueToDateModel>(&this->Model());
}

size_t ValueToDateModel::RequiredBufferSize(const PFValueToDateModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.currency)
    {
        requiredSize += (std::strlen(model.currency) + 1);
    }
    if (model.totalValueAsDecimal)
    {
        requiredSize += (std::strlen(model.totalValueAsDecimal) + 1);
    }
    return requiredSize;
}

HRESULT ValueToDateModel::Copy(const PFValueToDateModel& input, PFValueToDateModel& output, ModelBuffer& buffer)
{
    output = input;
    output.currency = buffer.CopyTo(input.currency);
    output.totalValueAsDecimal = buffer.CopyTo(input.totalValueAsDecimal);
    return S_OK;
}

JsonValue PlayerProfileModel::ToJson() const
{
    return PlayerProfileModel::ToJson(this->Model());
}

JsonValue PlayerProfileModel::ToJson(const PFPlayerProfileModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray<AdCampaignAttributionModel>(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMemberTime(output, "BannedUntil", input.bannedUntil);
    JsonUtils::ObjectAddMemberArray<ContactEmailInfoModel>(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
    JsonUtils::ObjectAddMemberTime(output, "Created", input.created);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMemberArray(output, "ExperimentVariants", input.experimentVariants, input.experimentVariantsCount);
    JsonUtils::ObjectAddMemberTime(output, "LastLogin", input.lastLogin);
    JsonUtils::ObjectAddMemberArray<LinkedPlatformAccountModel>(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
    JsonUtils::ObjectAddMemberArray<LocationModel>(output, "Locations", input.locations, input.locationsCount);
    JsonUtils::ObjectAddMemberArray<MembershipModel>(output, "Memberships", input.memberships, input.membershipsCount);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
    JsonUtils::ObjectAddMemberArray<PushNotificationRegistrationModel>(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    JsonUtils::ObjectAddMemberArray<StatisticModel>(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMemberArray<TagModel>(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
    JsonUtils::ObjectAddMemberArray<ValueToDateModel>(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
    return output;
}

void PlayerProfileModel::FromJson(const JsonValue& input)
{
    ModelVector<AdCampaignAttributionModel> adCampaignAttributions{};
    JsonUtils::ObjectGetMember<AdCampaignAttributionModel>(input, "AdCampaignAttributions", adCampaignAttributions);
    this->SetAdCampaignAttributions(std::move(adCampaignAttributions));

    String avatarUrl{};
    JsonUtils::ObjectGetMember(input, "AvatarUrl", avatarUrl);
    this->SetAvatarUrl(std::move(avatarUrl));

    StdExtra::optional<time_t> bannedUntil{};
    JsonUtils::ObjectGetMemberTime(input, "BannedUntil", bannedUntil);
    this->SetBannedUntil(std::move(bannedUntil));

    ModelVector<ContactEmailInfoModel> contactEmailAddresses{};
    JsonUtils::ObjectGetMember<ContactEmailInfoModel>(input, "ContactEmailAddresses", contactEmailAddresses);
    this->SetContactEmailAddresses(std::move(contactEmailAddresses));

    StdExtra::optional<time_t> created{};
    JsonUtils::ObjectGetMemberTime(input, "Created", created);
    this->SetCreated(std::move(created));

    String displayName{};
    JsonUtils::ObjectGetMember(input, "DisplayName", displayName);
    this->SetDisplayName(std::move(displayName));

    CStringVector experimentVariants{};
    JsonUtils::ObjectGetMember(input, "ExperimentVariants", experimentVariants);
    this->SetExperimentVariants(std::move(experimentVariants));

    StdExtra::optional<time_t> lastLogin{};
    JsonUtils::ObjectGetMemberTime(input, "LastLogin", lastLogin);
    this->SetLastLogin(std::move(lastLogin));

    ModelVector<LinkedPlatformAccountModel> linkedAccounts{};
    JsonUtils::ObjectGetMember<LinkedPlatformAccountModel>(input, "LinkedAccounts", linkedAccounts);
    this->SetLinkedAccounts(std::move(linkedAccounts));

    ModelVector<LocationModel> locations{};
    JsonUtils::ObjectGetMember<LocationModel>(input, "Locations", locations);
    this->SetLocations(std::move(locations));

    ModelVector<MembershipModel> memberships{};
    JsonUtils::ObjectGetMember<MembershipModel>(input, "Memberships", memberships);
    this->SetMemberships(std::move(memberships));

    StdExtra::optional<PFLoginIdentityProvider> origination{};
    JsonUtils::ObjectGetMember(input, "Origination", origination);
    this->SetOrigination(std::move(origination));

    String playerId{};
    JsonUtils::ObjectGetMember(input, "PlayerId", playerId);
    this->SetPlayerId(std::move(playerId));

    String publisherId{};
    JsonUtils::ObjectGetMember(input, "PublisherId", publisherId);
    this->SetPublisherId(std::move(publisherId));

    ModelVector<PushNotificationRegistrationModel> pushNotificationRegistrations{};
    JsonUtils::ObjectGetMember<PushNotificationRegistrationModel>(input, "PushNotificationRegistrations", pushNotificationRegistrations);
    this->SetPushNotificationRegistrations(std::move(pushNotificationRegistrations));

    ModelVector<StatisticModel> statistics{};
    JsonUtils::ObjectGetMember<StatisticModel>(input, "Statistics", statistics);
    this->SetStatistics(std::move(statistics));

    ModelVector<TagModel> tags{};
    JsonUtils::ObjectGetMember<TagModel>(input, "Tags", tags);
    this->SetTags(std::move(tags));

    String titleId{};
    JsonUtils::ObjectGetMember(input, "TitleId", titleId);
    this->SetTitleId(std::move(titleId));

    StdExtra::optional<uint32_t> totalValueToDateInUSD{};
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSD", totalValueToDateInUSD);
    this->SetTotalValueToDateInUSD(std::move(totalValueToDateInUSD));

    ModelVector<ValueToDateModel> valuesToDate{};
    JsonUtils::ObjectGetMember<ValueToDateModel>(input, "ValuesToDate", valuesToDate);
    this->SetValuesToDate(std::move(valuesToDate));
}

size_t PlayerProfileModel::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFPlayerProfileModel const*> PlayerProfileModel::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<PlayerProfileModel>(&this->Model());
}

size_t PlayerProfileModel::RequiredBufferSize(const PFPlayerProfileModel& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFAdCampaignAttributionModel*) + sizeof(PFAdCampaignAttributionModel*) * model.adCampaignAttributionsCount);
    for (size_t i = 0; i < model.adCampaignAttributionsCount; ++i)
    {
        requiredSize += AdCampaignAttributionModel::RequiredBufferSize(*model.adCampaignAttributions[i]);
    }
    if (model.avatarUrl)
    {
        requiredSize += (std::strlen(model.avatarUrl) + 1);
    }
    if (model.bannedUntil)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    requiredSize += (alignof(PFContactEmailInfoModel*) + sizeof(PFContactEmailInfoModel*) * model.contactEmailAddressesCount);
    for (size_t i = 0; i < model.contactEmailAddressesCount; ++i)
    {
        requiredSize += ContactEmailInfoModel::RequiredBufferSize(*model.contactEmailAddresses[i]);
    }
    if (model.created)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.displayName)
    {
        requiredSize += (std::strlen(model.displayName) + 1);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.experimentVariantsCount);
    for (size_t i = 0; i < model.experimentVariantsCount; ++i)
    {
        requiredSize += (std::strlen(model.experimentVariants[i]) + 1);
    }
    if (model.lastLogin)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    requiredSize += (alignof(PFLinkedPlatformAccountModel*) + sizeof(PFLinkedPlatformAccountModel*) * model.linkedAccountsCount);
    for (size_t i = 0; i < model.linkedAccountsCount; ++i)
    {
        requiredSize += LinkedPlatformAccountModel::RequiredBufferSize(*model.linkedAccounts[i]);
    }
    requiredSize += (alignof(PFLocationModel*) + sizeof(PFLocationModel*) * model.locationsCount);
    for (size_t i = 0; i < model.locationsCount; ++i)
    {
        requiredSize += LocationModel::RequiredBufferSize(*model.locations[i]);
    }
    requiredSize += (alignof(PFMembershipModel*) + sizeof(PFMembershipModel*) * model.membershipsCount);
    for (size_t i = 0; i < model.membershipsCount; ++i)
    {
        requiredSize += MembershipModel::RequiredBufferSize(*model.memberships[i]);
    }
    if (model.origination)
    {
        requiredSize += (alignof(PFLoginIdentityProvider) + sizeof(PFLoginIdentityProvider));
    }
    if (model.playerId)
    {
        requiredSize += (std::strlen(model.playerId) + 1);
    }
    if (model.publisherId)
    {
        requiredSize += (std::strlen(model.publisherId) + 1);
    }
    requiredSize += (alignof(PFPushNotificationRegistrationModel*) + sizeof(PFPushNotificationRegistrationModel*) * model.pushNotificationRegistrationsCount);
    for (size_t i = 0; i < model.pushNotificationRegistrationsCount; ++i)
    {
        requiredSize += PushNotificationRegistrationModel::RequiredBufferSize(*model.pushNotificationRegistrations[i]);
    }
    requiredSize += (alignof(PFStatisticModel*) + sizeof(PFStatisticModel*) * model.statisticsCount);
    for (size_t i = 0; i < model.statisticsCount; ++i)
    {
        requiredSize += StatisticModel::RequiredBufferSize(*model.statistics[i]);
    }
    requiredSize += (alignof(PFTagModel*) + sizeof(PFTagModel*) * model.tagsCount);
    for (size_t i = 0; i < model.tagsCount; ++i)
    {
        requiredSize += TagModel::RequiredBufferSize(*model.tags[i]);
    }
    if (model.titleId)
    {
        requiredSize += (std::strlen(model.titleId) + 1);
    }
    if (model.totalValueToDateInUSD)
    {
        requiredSize += (alignof(uint32_t) + sizeof(uint32_t));
    }
    requiredSize += (alignof(PFValueToDateModel*) + sizeof(PFValueToDateModel*) * model.valuesToDateCount);
    for (size_t i = 0; i < model.valuesToDateCount; ++i)
    {
        requiredSize += ValueToDateModel::RequiredBufferSize(*model.valuesToDate[i]);
    }
    return requiredSize;
}

HRESULT PlayerProfileModel::Copy(const PFPlayerProfileModel& input, PFPlayerProfileModel& output, ModelBuffer& buffer)
{
    output = input;
    output.adCampaignAttributions = buffer.CopyToArray<AdCampaignAttributionModel>(input.adCampaignAttributions, input.adCampaignAttributionsCount);
    output.avatarUrl = buffer.CopyTo(input.avatarUrl);
    output.bannedUntil = buffer.CopyTo(input.bannedUntil);
    output.contactEmailAddresses = buffer.CopyToArray<ContactEmailInfoModel>(input.contactEmailAddresses, input.contactEmailAddressesCount);
    output.created = buffer.CopyTo(input.created);
    output.displayName = buffer.CopyTo(input.displayName);
    output.experimentVariants = buffer.CopyToArray(input.experimentVariants, input.experimentVariantsCount);
    output.lastLogin = buffer.CopyTo(input.lastLogin);
    output.linkedAccounts = buffer.CopyToArray<LinkedPlatformAccountModel>(input.linkedAccounts, input.linkedAccountsCount);
    output.locations = buffer.CopyToArray<LocationModel>(input.locations, input.locationsCount);
    output.memberships = buffer.CopyToArray<MembershipModel>(input.memberships, input.membershipsCount);
    output.origination = buffer.CopyTo(input.origination);
    output.playerId = buffer.CopyTo(input.playerId);
    output.publisherId = buffer.CopyTo(input.publisherId);
    output.pushNotificationRegistrations = buffer.CopyToArray<PushNotificationRegistrationModel>(input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    output.statistics = buffer.CopyToArray<StatisticModel>(input.statistics, input.statisticsCount);
    output.tags = buffer.CopyToArray<TagModel>(input.tags, input.tagsCount);
    output.titleId = buffer.CopyTo(input.titleId);
    output.totalValueToDateInUSD = buffer.CopyTo(input.totalValueToDateInUSD);
    output.valuesToDate = buffer.CopyToArray<ValueToDateModel>(input.valuesToDate, input.valuesToDateCount);
    return S_OK;
}

void UserFacebookInfo::FromJson(const JsonValue& input)
{
    String facebookId{};
    JsonUtils::ObjectGetMember(input, "FacebookId", facebookId);
    this->SetFacebookId(std::move(facebookId));

    String fullName{};
    JsonUtils::ObjectGetMember(input, "FullName", fullName);
    this->SetFullName(std::move(fullName));
}

size_t UserFacebookInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserFacebookInfo const*> UserFacebookInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserFacebookInfo>(&this->Model());
}

size_t UserFacebookInfo::RequiredBufferSize(const PFUserFacebookInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.facebookId)
    {
        requiredSize += (std::strlen(model.facebookId) + 1);
    }
    if (model.fullName)
    {
        requiredSize += (std::strlen(model.fullName) + 1);
    }
    return requiredSize;
}

HRESULT UserFacebookInfo::Copy(const PFUserFacebookInfo& input, PFUserFacebookInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.facebookId = buffer.CopyTo(input.facebookId);
    output.fullName = buffer.CopyTo(input.fullName);
    return S_OK;
}

void UserGameCenterInfo::FromJson(const JsonValue& input)
{
    String gameCenterId{};
    JsonUtils::ObjectGetMember(input, "GameCenterId", gameCenterId);
    this->SetGameCenterId(std::move(gameCenterId));
}

size_t UserGameCenterInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserGameCenterInfo const*> UserGameCenterInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserGameCenterInfo>(&this->Model());
}

size_t UserGameCenterInfo::RequiredBufferSize(const PFUserGameCenterInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.gameCenterId)
    {
        requiredSize += (std::strlen(model.gameCenterId) + 1);
    }
    return requiredSize;
}

HRESULT UserGameCenterInfo::Copy(const PFUserGameCenterInfo& input, PFUserGameCenterInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.gameCenterId = buffer.CopyTo(input.gameCenterId);
    return S_OK;
}

void UserPsnInfo::FromJson(const JsonValue& input)
{
    String psnAccountId{};
    JsonUtils::ObjectGetMember(input, "PsnAccountId", psnAccountId);
    this->SetPsnAccountId(std::move(psnAccountId));

    String psnOnlineId{};
    JsonUtils::ObjectGetMember(input, "PsnOnlineId", psnOnlineId);
    this->SetPsnOnlineId(std::move(psnOnlineId));
}

size_t UserPsnInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserPsnInfo const*> UserPsnInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserPsnInfo>(&this->Model());
}

size_t UserPsnInfo::RequiredBufferSize(const PFUserPsnInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.psnAccountId)
    {
        requiredSize += (std::strlen(model.psnAccountId) + 1);
    }
    if (model.psnOnlineId)
    {
        requiredSize += (std::strlen(model.psnOnlineId) + 1);
    }
    return requiredSize;
}

HRESULT UserPsnInfo::Copy(const PFUserPsnInfo& input, PFUserPsnInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.psnAccountId = buffer.CopyTo(input.psnAccountId);
    output.psnOnlineId = buffer.CopyTo(input.psnOnlineId);
    return S_OK;
}

void UserSteamInfo::FromJson(const JsonValue& input)
{
    StdExtra::optional<PFTitleActivationStatus> steamActivationStatus{};
    JsonUtils::ObjectGetMember(input, "SteamActivationStatus", steamActivationStatus);
    this->SetSteamActivationStatus(std::move(steamActivationStatus));

    String steamCountry{};
    JsonUtils::ObjectGetMember(input, "SteamCountry", steamCountry);
    this->SetSteamCountry(std::move(steamCountry));

    StdExtra::optional<PFCurrency> steamCurrency{};
    JsonUtils::ObjectGetMember(input, "SteamCurrency", steamCurrency);
    this->SetSteamCurrency(std::move(steamCurrency));

    String steamId{};
    JsonUtils::ObjectGetMember(input, "SteamId", steamId);
    this->SetSteamId(std::move(steamId));

    String steamName{};
    JsonUtils::ObjectGetMember(input, "SteamName", steamName);
    this->SetSteamName(std::move(steamName));
}

size_t UserSteamInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserSteamInfo const*> UserSteamInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserSteamInfo>(&this->Model());
}

size_t UserSteamInfo::RequiredBufferSize(const PFUserSteamInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.steamActivationStatus)
    {
        requiredSize += (alignof(PFTitleActivationStatus) + sizeof(PFTitleActivationStatus));
    }
    if (model.steamCountry)
    {
        requiredSize += (std::strlen(model.steamCountry) + 1);
    }
    if (model.steamCurrency)
    {
        requiredSize += (alignof(PFCurrency) + sizeof(PFCurrency));
    }
    if (model.steamId)
    {
        requiredSize += (std::strlen(model.steamId) + 1);
    }
    if (model.steamName)
    {
        requiredSize += (std::strlen(model.steamName) + 1);
    }
    return requiredSize;
}

HRESULT UserSteamInfo::Copy(const PFUserSteamInfo& input, PFUserSteamInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.steamActivationStatus = buffer.CopyTo(input.steamActivationStatus);
    output.steamCountry = buffer.CopyTo(input.steamCountry);
    output.steamCurrency = buffer.CopyTo(input.steamCurrency);
    output.steamId = buffer.CopyTo(input.steamId);
    output.steamName = buffer.CopyTo(input.steamName);
    return S_OK;
}

void UserXboxInfo::FromJson(const JsonValue& input)
{
    String xboxUserId{};
    JsonUtils::ObjectGetMember(input, "XboxUserId", xboxUserId);
    this->SetXboxUserId(std::move(xboxUserId));
}

size_t UserXboxInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserXboxInfo const*> UserXboxInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserXboxInfo>(&this->Model());
}

size_t UserXboxInfo::RequiredBufferSize(const PFUserXboxInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.xboxUserId)
    {
        requiredSize += (std::strlen(model.xboxUserId) + 1);
    }
    return requiredSize;
}

HRESULT UserXboxInfo::Copy(const PFUserXboxInfo& input, PFUserXboxInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.xboxUserId = buffer.CopyTo(input.xboxUserId);
    return S_OK;
}

void CharacterResult::FromJson(const JsonValue& input)
{
    String characterId{};
    JsonUtils::ObjectGetMember(input, "CharacterId", characterId);
    this->SetCharacterId(std::move(characterId));

    String characterName{};
    JsonUtils::ObjectGetMember(input, "CharacterName", characterName);
    this->SetCharacterName(std::move(characterName));

    String characterType{};
    JsonUtils::ObjectGetMember(input, "CharacterType", characterType);
    this->SetCharacterType(std::move(characterType));
}

size_t CharacterResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCharacterResult const*> CharacterResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<CharacterResult>(&this->Model());
}

size_t CharacterResult::RequiredBufferSize(const PFCharacterResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.characterId)
    {
        requiredSize += (std::strlen(model.characterId) + 1);
    }
    if (model.characterName)
    {
        requiredSize += (std::strlen(model.characterName) + 1);
    }
    if (model.characterType)
    {
        requiredSize += (std::strlen(model.characterType) + 1);
    }
    return requiredSize;
}

HRESULT CharacterResult::Copy(const PFCharacterResult& input, PFCharacterResult& output, ModelBuffer& buffer)
{
    output = input;
    output.characterId = buffer.CopyTo(input.characterId);
    output.characterName = buffer.CopyTo(input.characterName);
    output.characterType = buffer.CopyTo(input.characterType);
    return S_OK;
}

void VirtualCurrencyRechargeTime::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RechargeMax", this->m_model.rechargeMax);

    JsonUtils::ObjectGetMemberTime(input, "RechargeTime", this->m_model.rechargeTime);

    JsonUtils::ObjectGetMember(input, "SecondsToRecharge", this->m_model.secondsToRecharge);
}

size_t VirtualCurrencyRechargeTime::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFVirtualCurrencyRechargeTime const*> VirtualCurrencyRechargeTime::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<VirtualCurrencyRechargeTime>(&this->Model());
}

size_t VirtualCurrencyRechargeTime::RequiredBufferSize(const PFVirtualCurrencyRechargeTime& model)
{
    UNREFERENCED_PARAMETER(model); // Fixed size
    return sizeof(ModelType);
}

HRESULT VirtualCurrencyRechargeTime::Copy(const PFVirtualCurrencyRechargeTime& input, PFVirtualCurrencyRechargeTime& output, ModelBuffer& buffer)
{
    output = input;
    UNREFERENCED_PARAMETER(buffer); // Fixed size
    return S_OK;
}

void StatisticValue::FromJson(const JsonValue& input)
{
    String statisticName{};
    JsonUtils::ObjectGetMember(input, "StatisticName", statisticName);
    this->SetStatisticName(std::move(statisticName));

    JsonUtils::ObjectGetMember(input, "Value", this->m_model.value);

    JsonUtils::ObjectGetMember(input, "Version", this->m_model.version);
}

size_t StatisticValue::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFStatisticValue const*> StatisticValue::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<StatisticValue>(&this->Model());
}

size_t StatisticValue::RequiredBufferSize(const PFStatisticValue& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.statisticName)
    {
        requiredSize += (std::strlen(model.statisticName) + 1);
    }
    return requiredSize;
}

HRESULT StatisticValue::Copy(const PFStatisticValue& input, PFStatisticValue& output, ModelBuffer& buffer)
{
    output = input;
    output.statisticName = buffer.CopyTo(input.statisticName);
    return S_OK;
}

JsonValue GetPlayerCombinedInfoRequestParams::ToJson() const
{
    return GetPlayerCombinedInfoRequestParams::ToJson(this->Model());
}

JsonValue GetPlayerCombinedInfoRequestParams::ToJson(const PFGetPlayerCombinedInfoRequestParams& input)
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
    JsonUtils::ObjectAddMemberArray(output, "PlayerStatisticNames", input.playerStatisticNames, input.playerStatisticNamesCount);
    JsonUtils::ObjectAddMember<PlayerProfileViewConstraints>(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMemberArray(output, "TitleDataKeys", input.titleDataKeys, input.titleDataKeysCount);
    JsonUtils::ObjectAddMemberArray(output, "UserDataKeys", input.userDataKeys, input.userDataKeysCount);
    JsonUtils::ObjectAddMemberArray(output, "UserReadOnlyDataKeys", input.userReadOnlyDataKeys, input.userReadOnlyDataKeysCount);
    return output;
}

JsonValue EntityKey::ToJson() const
{
    return EntityKey::ToJson(this->Model());
}

JsonValue EntityKey::ToJson(const PFEntityKey& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Type", input.type);
    return output;
}

void EntityKey::FromJson(const JsonValue& input)
{
    String id{};
    JsonUtils::ObjectGetMember(input, "Id", id);
    this->SetId(std::move(id));

    String type{};
    JsonUtils::ObjectGetMember(input, "Type", type);
    this->SetType(std::move(type));
}

size_t EntityKey::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFEntityKey const*> EntityKey::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityKey>(&this->Model());
}

size_t EntityKey::RequiredBufferSize(const PFEntityKey& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.id)
    {
        requiredSize += (std::strlen(model.id) + 1);
    }
    if (model.type)
    {
        requiredSize += (std::strlen(model.type) + 1);
    }
    return requiredSize;
}

HRESULT EntityKey::Copy(const PFEntityKey& input, PFEntityKey& output, ModelBuffer& buffer)
{
    output = input;
    output.id = buffer.CopyTo(input.id);
    output.type = buffer.CopyTo(input.type);
    return S_OK;
}

void UserAndroidDeviceInfo::FromJson(const JsonValue& input)
{
    String androidDeviceId{};
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", androidDeviceId);
    this->SetAndroidDeviceId(std::move(androidDeviceId));
}

size_t UserAndroidDeviceInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserAndroidDeviceInfo const*> UserAndroidDeviceInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserAndroidDeviceInfo>(&this->Model());
}

size_t UserAndroidDeviceInfo::RequiredBufferSize(const PFUserAndroidDeviceInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.androidDeviceId)
    {
        requiredSize += (std::strlen(model.androidDeviceId) + 1);
    }
    return requiredSize;
}

HRESULT UserAndroidDeviceInfo::Copy(const PFUserAndroidDeviceInfo& input, PFUserAndroidDeviceInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.androidDeviceId = buffer.CopyTo(input.androidDeviceId);
    return S_OK;
}

void UserAppleIdInfo::FromJson(const JsonValue& input)
{
    String appleSubjectId{};
    JsonUtils::ObjectGetMember(input, "AppleSubjectId", appleSubjectId);
    this->SetAppleSubjectId(std::move(appleSubjectId));
}

size_t UserAppleIdInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserAppleIdInfo const*> UserAppleIdInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserAppleIdInfo>(&this->Model());
}

size_t UserAppleIdInfo::RequiredBufferSize(const PFUserAppleIdInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.appleSubjectId)
    {
        requiredSize += (std::strlen(model.appleSubjectId) + 1);
    }
    return requiredSize;
}

HRESULT UserAppleIdInfo::Copy(const PFUserAppleIdInfo& input, PFUserAppleIdInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.appleSubjectId = buffer.CopyTo(input.appleSubjectId);
    return S_OK;
}

void UserCustomIdInfo::FromJson(const JsonValue& input)
{
    String customId{};
    JsonUtils::ObjectGetMember(input, "CustomId", customId);
    this->SetCustomId(std::move(customId));
}

size_t UserCustomIdInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserCustomIdInfo const*> UserCustomIdInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserCustomIdInfo>(&this->Model());
}

size_t UserCustomIdInfo::RequiredBufferSize(const PFUserCustomIdInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.customId)
    {
        requiredSize += (std::strlen(model.customId) + 1);
    }
    return requiredSize;
}

HRESULT UserCustomIdInfo::Copy(const PFUserCustomIdInfo& input, PFUserCustomIdInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.customId = buffer.CopyTo(input.customId);
    return S_OK;
}

void UserFacebookInstantGamesIdInfo::FromJson(const JsonValue& input)
{
    String facebookInstantGamesId{};
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", facebookInstantGamesId);
    this->SetFacebookInstantGamesId(std::move(facebookInstantGamesId));
}

size_t UserFacebookInstantGamesIdInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserFacebookInstantGamesIdInfo const*> UserFacebookInstantGamesIdInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserFacebookInstantGamesIdInfo>(&this->Model());
}

size_t UserFacebookInstantGamesIdInfo::RequiredBufferSize(const PFUserFacebookInstantGamesIdInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.facebookInstantGamesId)
    {
        requiredSize += (std::strlen(model.facebookInstantGamesId) + 1);
    }
    return requiredSize;
}

HRESULT UserFacebookInstantGamesIdInfo::Copy(const PFUserFacebookInstantGamesIdInfo& input, PFUserFacebookInstantGamesIdInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.facebookInstantGamesId = buffer.CopyTo(input.facebookInstantGamesId);
    return S_OK;
}

void UserGoogleInfo::FromJson(const JsonValue& input)
{
    String googleEmail{};
    JsonUtils::ObjectGetMember(input, "GoogleEmail", googleEmail);
    this->SetGoogleEmail(std::move(googleEmail));

    String googleGender{};
    JsonUtils::ObjectGetMember(input, "GoogleGender", googleGender);
    this->SetGoogleGender(std::move(googleGender));

    String googleId{};
    JsonUtils::ObjectGetMember(input, "GoogleId", googleId);
    this->SetGoogleId(std::move(googleId));

    String googleLocale{};
    JsonUtils::ObjectGetMember(input, "GoogleLocale", googleLocale);
    this->SetGoogleLocale(std::move(googleLocale));

    String googleName{};
    JsonUtils::ObjectGetMember(input, "GoogleName", googleName);
    this->SetGoogleName(std::move(googleName));
}

size_t UserGoogleInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserGoogleInfo const*> UserGoogleInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserGoogleInfo>(&this->Model());
}

size_t UserGoogleInfo::RequiredBufferSize(const PFUserGoogleInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.googleEmail)
    {
        requiredSize += (std::strlen(model.googleEmail) + 1);
    }
    if (model.googleGender)
    {
        requiredSize += (std::strlen(model.googleGender) + 1);
    }
    if (model.googleId)
    {
        requiredSize += (std::strlen(model.googleId) + 1);
    }
    if (model.googleLocale)
    {
        requiredSize += (std::strlen(model.googleLocale) + 1);
    }
    if (model.googleName)
    {
        requiredSize += (std::strlen(model.googleName) + 1);
    }
    return requiredSize;
}

HRESULT UserGoogleInfo::Copy(const PFUserGoogleInfo& input, PFUserGoogleInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.googleEmail = buffer.CopyTo(input.googleEmail);
    output.googleGender = buffer.CopyTo(input.googleGender);
    output.googleId = buffer.CopyTo(input.googleId);
    output.googleLocale = buffer.CopyTo(input.googleLocale);
    output.googleName = buffer.CopyTo(input.googleName);
    return S_OK;
}

void UserIosDeviceInfo::FromJson(const JsonValue& input)
{
    String iosDeviceId{};
    JsonUtils::ObjectGetMember(input, "IosDeviceId", iosDeviceId);
    this->SetIosDeviceId(std::move(iosDeviceId));
}

size_t UserIosDeviceInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserIosDeviceInfo const*> UserIosDeviceInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserIosDeviceInfo>(&this->Model());
}

size_t UserIosDeviceInfo::RequiredBufferSize(const PFUserIosDeviceInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.iosDeviceId)
    {
        requiredSize += (std::strlen(model.iosDeviceId) + 1);
    }
    return requiredSize;
}

HRESULT UserIosDeviceInfo::Copy(const PFUserIosDeviceInfo& input, PFUserIosDeviceInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.iosDeviceId = buffer.CopyTo(input.iosDeviceId);
    return S_OK;
}

void UserKongregateInfo::FromJson(const JsonValue& input)
{
    String kongregateId{};
    JsonUtils::ObjectGetMember(input, "KongregateId", kongregateId);
    this->SetKongregateId(std::move(kongregateId));

    String kongregateName{};
    JsonUtils::ObjectGetMember(input, "KongregateName", kongregateName);
    this->SetKongregateName(std::move(kongregateName));
}

size_t UserKongregateInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserKongregateInfo const*> UserKongregateInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserKongregateInfo>(&this->Model());
}

size_t UserKongregateInfo::RequiredBufferSize(const PFUserKongregateInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.kongregateId)
    {
        requiredSize += (std::strlen(model.kongregateId) + 1);
    }
    if (model.kongregateName)
    {
        requiredSize += (std::strlen(model.kongregateName) + 1);
    }
    return requiredSize;
}

HRESULT UserKongregateInfo::Copy(const PFUserKongregateInfo& input, PFUserKongregateInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.kongregateId = buffer.CopyTo(input.kongregateId);
    output.kongregateName = buffer.CopyTo(input.kongregateName);
    return S_OK;
}

void UserNintendoSwitchAccountIdInfo::FromJson(const JsonValue& input)
{
    String nintendoSwitchAccountSubjectId{};
    JsonUtils::ObjectGetMember(input, "NintendoSwitchAccountSubjectId", nintendoSwitchAccountSubjectId);
    this->SetNintendoSwitchAccountSubjectId(std::move(nintendoSwitchAccountSubjectId));
}

size_t UserNintendoSwitchAccountIdInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserNintendoSwitchAccountIdInfo const*> UserNintendoSwitchAccountIdInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserNintendoSwitchAccountIdInfo>(&this->Model());
}

size_t UserNintendoSwitchAccountIdInfo::RequiredBufferSize(const PFUserNintendoSwitchAccountIdInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.nintendoSwitchAccountSubjectId)
    {
        requiredSize += (std::strlen(model.nintendoSwitchAccountSubjectId) + 1);
    }
    return requiredSize;
}

HRESULT UserNintendoSwitchAccountIdInfo::Copy(const PFUserNintendoSwitchAccountIdInfo& input, PFUserNintendoSwitchAccountIdInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.nintendoSwitchAccountSubjectId = buffer.CopyTo(input.nintendoSwitchAccountSubjectId);
    return S_OK;
}

void UserNintendoSwitchDeviceIdInfo::FromJson(const JsonValue& input)
{
    String nintendoSwitchDeviceId{};
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", nintendoSwitchDeviceId);
    this->SetNintendoSwitchDeviceId(std::move(nintendoSwitchDeviceId));
}

size_t UserNintendoSwitchDeviceIdInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserNintendoSwitchDeviceIdInfo const*> UserNintendoSwitchDeviceIdInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserNintendoSwitchDeviceIdInfo>(&this->Model());
}

size_t UserNintendoSwitchDeviceIdInfo::RequiredBufferSize(const PFUserNintendoSwitchDeviceIdInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.nintendoSwitchDeviceId)
    {
        requiredSize += (std::strlen(model.nintendoSwitchDeviceId) + 1);
    }
    return requiredSize;
}

HRESULT UserNintendoSwitchDeviceIdInfo::Copy(const PFUserNintendoSwitchDeviceIdInfo& input, PFUserNintendoSwitchDeviceIdInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.nintendoSwitchDeviceId = buffer.CopyTo(input.nintendoSwitchDeviceId);
    return S_OK;
}

void UserOpenIdInfo::FromJson(const JsonValue& input)
{
    String connectionId{};
    JsonUtils::ObjectGetMember(input, "ConnectionId", connectionId);
    this->SetConnectionId(std::move(connectionId));

    String issuer{};
    JsonUtils::ObjectGetMember(input, "Issuer", issuer);
    this->SetIssuer(std::move(issuer));

    String subject{};
    JsonUtils::ObjectGetMember(input, "Subject", subject);
    this->SetSubject(std::move(subject));
}

size_t UserOpenIdInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserOpenIdInfo const*> UserOpenIdInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserOpenIdInfo>(&this->Model());
}

size_t UserOpenIdInfo::RequiredBufferSize(const PFUserOpenIdInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.connectionId)
    {
        requiredSize += (std::strlen(model.connectionId) + 1);
    }
    if (model.issuer)
    {
        requiredSize += (std::strlen(model.issuer) + 1);
    }
    if (model.subject)
    {
        requiredSize += (std::strlen(model.subject) + 1);
    }
    return requiredSize;
}

HRESULT UserOpenIdInfo::Copy(const PFUserOpenIdInfo& input, PFUserOpenIdInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.connectionId = buffer.CopyTo(input.connectionId);
    output.issuer = buffer.CopyTo(input.issuer);
    output.subject = buffer.CopyTo(input.subject);
    return S_OK;
}

void UserPrivateAccountInfo::FromJson(const JsonValue& input)
{
    String email{};
    JsonUtils::ObjectGetMember(input, "Email", email);
    this->SetEmail(std::move(email));
}

size_t UserPrivateAccountInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserPrivateAccountInfo const*> UserPrivateAccountInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserPrivateAccountInfo>(&this->Model());
}

size_t UserPrivateAccountInfo::RequiredBufferSize(const PFUserPrivateAccountInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.email)
    {
        requiredSize += (std::strlen(model.email) + 1);
    }
    return requiredSize;
}

HRESULT UserPrivateAccountInfo::Copy(const PFUserPrivateAccountInfo& input, PFUserPrivateAccountInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.email = buffer.CopyTo(input.email);
    return S_OK;
}

void UserTitleInfo::FromJson(const JsonValue& input)
{
    String avatarUrl{};
    JsonUtils::ObjectGetMember(input, "AvatarUrl", avatarUrl);
    this->SetAvatarUrl(std::move(avatarUrl));

    JsonUtils::ObjectGetMemberTime(input, "Created", this->m_model.created);

    String displayName{};
    JsonUtils::ObjectGetMember(input, "DisplayName", displayName);
    this->SetDisplayName(std::move(displayName));

    StdExtra::optional<time_t> firstLogin{};
    JsonUtils::ObjectGetMemberTime(input, "FirstLogin", firstLogin);
    this->SetFirstLogin(std::move(firstLogin));

    StdExtra::optional<bool> isBanned{};
    JsonUtils::ObjectGetMember(input, "isBanned", isBanned);
    this->SetisBanned(std::move(isBanned));

    StdExtra::optional<time_t> lastLogin{};
    JsonUtils::ObjectGetMemberTime(input, "LastLogin", lastLogin);
    this->SetLastLogin(std::move(lastLogin));

    StdExtra::optional<PFUserOrigination> origination{};
    JsonUtils::ObjectGetMember(input, "Origination", origination);
    this->SetOrigination(std::move(origination));

    StdExtra::optional<EntityKey> titlePlayerAccount{};
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccount", titlePlayerAccount);
    if (titlePlayerAccount)
    {
        this->SetTitlePlayerAccount(std::move(*titlePlayerAccount));
    }
}

size_t UserTitleInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserTitleInfo const*> UserTitleInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserTitleInfo>(&this->Model());
}

size_t UserTitleInfo::RequiredBufferSize(const PFUserTitleInfo& model)
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
    if (model.firstLogin)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.isBanned)
    {
        requiredSize += (alignof(bool) + sizeof(bool));
    }
    if (model.lastLogin)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.origination)
    {
        requiredSize += (alignof(PFUserOrigination) + sizeof(PFUserOrigination));
    }
    if (model.titlePlayerAccount)
    {
        requiredSize += EntityKey::RequiredBufferSize(*model.titlePlayerAccount);
    }
    return requiredSize;
}

HRESULT UserTitleInfo::Copy(const PFUserTitleInfo& input, PFUserTitleInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.avatarUrl = buffer.CopyTo(input.avatarUrl);
    output.displayName = buffer.CopyTo(input.displayName);
    output.firstLogin = buffer.CopyTo(input.firstLogin);
    output.isBanned = buffer.CopyTo(input.isBanned);
    output.lastLogin = buffer.CopyTo(input.lastLogin);
    output.origination = buffer.CopyTo(input.origination);
    output.titlePlayerAccount = buffer.CopyTo<EntityKey>(input.titlePlayerAccount);
    return S_OK;
}

void UserTwitchInfo::FromJson(const JsonValue& input)
{
    String twitchId{};
    JsonUtils::ObjectGetMember(input, "TwitchId", twitchId);
    this->SetTwitchId(std::move(twitchId));

    String twitchUserName{};
    JsonUtils::ObjectGetMember(input, "TwitchUserName", twitchUserName);
    this->SetTwitchUserName(std::move(twitchUserName));
}

size_t UserTwitchInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserTwitchInfo const*> UserTwitchInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserTwitchInfo>(&this->Model());
}

size_t UserTwitchInfo::RequiredBufferSize(const PFUserTwitchInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.twitchId)
    {
        requiredSize += (std::strlen(model.twitchId) + 1);
    }
    if (model.twitchUserName)
    {
        requiredSize += (std::strlen(model.twitchUserName) + 1);
    }
    return requiredSize;
}

HRESULT UserTwitchInfo::Copy(const PFUserTwitchInfo& input, PFUserTwitchInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.twitchId = buffer.CopyTo(input.twitchId);
    output.twitchUserName = buffer.CopyTo(input.twitchUserName);
    return S_OK;
}

void UserAccountInfo::FromJson(const JsonValue& input)
{
    StdExtra::optional<UserAndroidDeviceInfo> androidDeviceInfo{};
    JsonUtils::ObjectGetMember(input, "AndroidDeviceInfo", androidDeviceInfo);
    if (androidDeviceInfo)
    {
        this->SetAndroidDeviceInfo(std::move(*androidDeviceInfo));
    }

    StdExtra::optional<UserAppleIdInfo> appleAccountInfo{};
    JsonUtils::ObjectGetMember(input, "AppleAccountInfo", appleAccountInfo);
    if (appleAccountInfo)
    {
        this->SetAppleAccountInfo(std::move(*appleAccountInfo));
    }

    JsonUtils::ObjectGetMemberTime(input, "Created", this->m_model.created);

    StdExtra::optional<UserCustomIdInfo> customIdInfo{};
    JsonUtils::ObjectGetMember(input, "CustomIdInfo", customIdInfo);
    if (customIdInfo)
    {
        this->SetCustomIdInfo(std::move(*customIdInfo));
    }

    StdExtra::optional<UserFacebookInfo> facebookInfo{};
    JsonUtils::ObjectGetMember(input, "FacebookInfo", facebookInfo);
    if (facebookInfo)
    {
        this->SetFacebookInfo(std::move(*facebookInfo));
    }

    StdExtra::optional<UserFacebookInstantGamesIdInfo> facebookInstantGamesIdInfo{};
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesIdInfo", facebookInstantGamesIdInfo);
    if (facebookInstantGamesIdInfo)
    {
        this->SetFacebookInstantGamesIdInfo(std::move(*facebookInstantGamesIdInfo));
    }

    StdExtra::optional<UserGameCenterInfo> gameCenterInfo{};
    JsonUtils::ObjectGetMember(input, "GameCenterInfo", gameCenterInfo);
    if (gameCenterInfo)
    {
        this->SetGameCenterInfo(std::move(*gameCenterInfo));
    }

    StdExtra::optional<UserGoogleInfo> googleInfo{};
    JsonUtils::ObjectGetMember(input, "GoogleInfo", googleInfo);
    if (googleInfo)
    {
        this->SetGoogleInfo(std::move(*googleInfo));
    }

    StdExtra::optional<UserIosDeviceInfo> iosDeviceInfo{};
    JsonUtils::ObjectGetMember(input, "IosDeviceInfo", iosDeviceInfo);
    if (iosDeviceInfo)
    {
        this->SetIosDeviceInfo(std::move(*iosDeviceInfo));
    }

    StdExtra::optional<UserKongregateInfo> kongregateInfo{};
    JsonUtils::ObjectGetMember(input, "KongregateInfo", kongregateInfo);
    if (kongregateInfo)
    {
        this->SetKongregateInfo(std::move(*kongregateInfo));
    }

    StdExtra::optional<UserNintendoSwitchAccountIdInfo> nintendoSwitchAccountInfo{};
    JsonUtils::ObjectGetMember(input, "NintendoSwitchAccountInfo", nintendoSwitchAccountInfo);
    if (nintendoSwitchAccountInfo)
    {
        this->SetNintendoSwitchAccountInfo(std::move(*nintendoSwitchAccountInfo));
    }

    StdExtra::optional<UserNintendoSwitchDeviceIdInfo> nintendoSwitchDeviceIdInfo{};
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceIdInfo", nintendoSwitchDeviceIdInfo);
    if (nintendoSwitchDeviceIdInfo)
    {
        this->SetNintendoSwitchDeviceIdInfo(std::move(*nintendoSwitchDeviceIdInfo));
    }

    ModelVector<UserOpenIdInfo> openIdInfo{};
    JsonUtils::ObjectGetMember<UserOpenIdInfo>(input, "OpenIdInfo", openIdInfo);
    this->SetOpenIdInfo(std::move(openIdInfo));

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));

    StdExtra::optional<UserPrivateAccountInfo> privateInfo{};
    JsonUtils::ObjectGetMember(input, "PrivateInfo", privateInfo);
    if (privateInfo)
    {
        this->SetPrivateInfo(std::move(*privateInfo));
    }

    StdExtra::optional<UserPsnInfo> psnInfo{};
    JsonUtils::ObjectGetMember(input, "PsnInfo", psnInfo);
    if (psnInfo)
    {
        this->SetPsnInfo(std::move(*psnInfo));
    }

    StdExtra::optional<UserSteamInfo> steamInfo{};
    JsonUtils::ObjectGetMember(input, "SteamInfo", steamInfo);
    if (steamInfo)
    {
        this->SetSteamInfo(std::move(*steamInfo));
    }

    StdExtra::optional<UserTitleInfo> titleInfo{};
    JsonUtils::ObjectGetMember(input, "TitleInfo", titleInfo);
    if (titleInfo)
    {
        this->SetTitleInfo(std::move(*titleInfo));
    }

    StdExtra::optional<UserTwitchInfo> twitchInfo{};
    JsonUtils::ObjectGetMember(input, "TwitchInfo", twitchInfo);
    if (twitchInfo)
    {
        this->SetTwitchInfo(std::move(*twitchInfo));
    }

    String username{};
    JsonUtils::ObjectGetMember(input, "Username", username);
    this->SetUsername(std::move(username));

    StdExtra::optional<UserXboxInfo> xboxInfo{};
    JsonUtils::ObjectGetMember(input, "XboxInfo", xboxInfo);
    if (xboxInfo)
    {
        this->SetXboxInfo(std::move(*xboxInfo));
    }
}

size_t UserAccountInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFUserAccountInfo const*> UserAccountInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<UserAccountInfo>(&this->Model());
}

size_t UserAccountInfo::RequiredBufferSize(const PFUserAccountInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.androidDeviceInfo)
    {
        requiredSize += UserAndroidDeviceInfo::RequiredBufferSize(*model.androidDeviceInfo);
    }
    if (model.appleAccountInfo)
    {
        requiredSize += UserAppleIdInfo::RequiredBufferSize(*model.appleAccountInfo);
    }
    if (model.customIdInfo)
    {
        requiredSize += UserCustomIdInfo::RequiredBufferSize(*model.customIdInfo);
    }
    if (model.facebookInfo)
    {
        requiredSize += UserFacebookInfo::RequiredBufferSize(*model.facebookInfo);
    }
    if (model.facebookInstantGamesIdInfo)
    {
        requiredSize += UserFacebookInstantGamesIdInfo::RequiredBufferSize(*model.facebookInstantGamesIdInfo);
    }
    if (model.gameCenterInfo)
    {
        requiredSize += UserGameCenterInfo::RequiredBufferSize(*model.gameCenterInfo);
    }
    if (model.googleInfo)
    {
        requiredSize += UserGoogleInfo::RequiredBufferSize(*model.googleInfo);
    }
    if (model.iosDeviceInfo)
    {
        requiredSize += UserIosDeviceInfo::RequiredBufferSize(*model.iosDeviceInfo);
    }
    if (model.kongregateInfo)
    {
        requiredSize += UserKongregateInfo::RequiredBufferSize(*model.kongregateInfo);
    }
    if (model.nintendoSwitchAccountInfo)
    {
        requiredSize += UserNintendoSwitchAccountIdInfo::RequiredBufferSize(*model.nintendoSwitchAccountInfo);
    }
    if (model.nintendoSwitchDeviceIdInfo)
    {
        requiredSize += UserNintendoSwitchDeviceIdInfo::RequiredBufferSize(*model.nintendoSwitchDeviceIdInfo);
    }
    requiredSize += (alignof(PFUserOpenIdInfo*) + sizeof(PFUserOpenIdInfo*) * model.openIdInfoCount);
    for (size_t i = 0; i < model.openIdInfoCount; ++i)
    {
        requiredSize += UserOpenIdInfo::RequiredBufferSize(*model.openIdInfo[i]);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    if (model.privateInfo)
    {
        requiredSize += UserPrivateAccountInfo::RequiredBufferSize(*model.privateInfo);
    }
    if (model.psnInfo)
    {
        requiredSize += UserPsnInfo::RequiredBufferSize(*model.psnInfo);
    }
    if (model.steamInfo)
    {
        requiredSize += UserSteamInfo::RequiredBufferSize(*model.steamInfo);
    }
    if (model.titleInfo)
    {
        requiredSize += UserTitleInfo::RequiredBufferSize(*model.titleInfo);
    }
    if (model.twitchInfo)
    {
        requiredSize += UserTwitchInfo::RequiredBufferSize(*model.twitchInfo);
    }
    if (model.username)
    {
        requiredSize += (std::strlen(model.username) + 1);
    }
    if (model.xboxInfo)
    {
        requiredSize += UserXboxInfo::RequiredBufferSize(*model.xboxInfo);
    }
    return requiredSize;
}

HRESULT UserAccountInfo::Copy(const PFUserAccountInfo& input, PFUserAccountInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.androidDeviceInfo = buffer.CopyTo<UserAndroidDeviceInfo>(input.androidDeviceInfo);
    output.appleAccountInfo = buffer.CopyTo<UserAppleIdInfo>(input.appleAccountInfo);
    output.customIdInfo = buffer.CopyTo<UserCustomIdInfo>(input.customIdInfo);
    output.facebookInfo = buffer.CopyTo<UserFacebookInfo>(input.facebookInfo);
    output.facebookInstantGamesIdInfo = buffer.CopyTo<UserFacebookInstantGamesIdInfo>(input.facebookInstantGamesIdInfo);
    output.gameCenterInfo = buffer.CopyTo<UserGameCenterInfo>(input.gameCenterInfo);
    output.googleInfo = buffer.CopyTo<UserGoogleInfo>(input.googleInfo);
    output.iosDeviceInfo = buffer.CopyTo<UserIosDeviceInfo>(input.iosDeviceInfo);
    output.kongregateInfo = buffer.CopyTo<UserKongregateInfo>(input.kongregateInfo);
    output.nintendoSwitchAccountInfo = buffer.CopyTo<UserNintendoSwitchAccountIdInfo>(input.nintendoSwitchAccountInfo);
    output.nintendoSwitchDeviceIdInfo = buffer.CopyTo<UserNintendoSwitchDeviceIdInfo>(input.nintendoSwitchDeviceIdInfo);
    output.openIdInfo = buffer.CopyToArray<UserOpenIdInfo>(input.openIdInfo, input.openIdInfoCount);
    output.playFabId = buffer.CopyTo(input.playFabId);
    output.privateInfo = buffer.CopyTo<UserPrivateAccountInfo>(input.privateInfo);
    output.psnInfo = buffer.CopyTo<UserPsnInfo>(input.psnInfo);
    output.steamInfo = buffer.CopyTo<UserSteamInfo>(input.steamInfo);
    output.titleInfo = buffer.CopyTo<UserTitleInfo>(input.titleInfo);
    output.twitchInfo = buffer.CopyTo<UserTwitchInfo>(input.twitchInfo);
    output.username = buffer.CopyTo(input.username);
    output.xboxInfo = buffer.CopyTo<UserXboxInfo>(input.xboxInfo);
    return S_OK;
}

void CharacterInventory::FromJson(const JsonValue& input)
{
    String characterId{};
    JsonUtils::ObjectGetMember(input, "CharacterId", characterId);
    this->SetCharacterId(std::move(characterId));

    ModelVector<ItemInstance> inventory{};
    JsonUtils::ObjectGetMember<ItemInstance>(input, "Inventory", inventory);
    this->SetInventory(std::move(inventory));
}

size_t CharacterInventory::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFCharacterInventory const*> CharacterInventory::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<CharacterInventory>(&this->Model());
}

size_t CharacterInventory::RequiredBufferSize(const PFCharacterInventory& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.characterId)
    {
        requiredSize += (std::strlen(model.characterId) + 1);
    }
    requiredSize += (alignof(PFItemInstance*) + sizeof(PFItemInstance*) * model.inventoryCount);
    for (size_t i = 0; i < model.inventoryCount; ++i)
    {
        requiredSize += ItemInstance::RequiredBufferSize(*model.inventory[i]);
    }
    return requiredSize;
}

HRESULT CharacterInventory::Copy(const PFCharacterInventory& input, PFCharacterInventory& output, ModelBuffer& buffer)
{
    output = input;
    output.characterId = buffer.CopyTo(input.characterId);
    output.inventory = buffer.CopyToArray<ItemInstance>(input.inventory, input.inventoryCount);
    return S_OK;
}

void GetPlayerCombinedInfoResultPayload::FromJson(const JsonValue& input)
{
    StdExtra::optional<UserAccountInfo> accountInfo{};
    JsonUtils::ObjectGetMember(input, "AccountInfo", accountInfo);
    if (accountInfo)
    {
        this->SetAccountInfo(std::move(*accountInfo));
    }

    ModelVector<CharacterInventory> characterInventories{};
    JsonUtils::ObjectGetMember<CharacterInventory>(input, "CharacterInventories", characterInventories);
    this->SetCharacterInventories(std::move(characterInventories));

    ModelVector<CharacterResult> characterList{};
    JsonUtils::ObjectGetMember<CharacterResult>(input, "CharacterList", characterList);
    this->SetCharacterList(std::move(characterList));

    StdExtra::optional<PlayerProfileModel> playerProfile{};
    JsonUtils::ObjectGetMember(input, "PlayerProfile", playerProfile);
    if (playerProfile)
    {
        this->SetPlayerProfile(std::move(*playerProfile));
    }

    ModelVector<StatisticValue> playerStatistics{};
    JsonUtils::ObjectGetMember<StatisticValue>(input, "PlayerStatistics", playerStatistics);
    this->SetPlayerStatistics(std::move(playerStatistics));

    StringDictionaryEntryVector titleData{};
    JsonUtils::ObjectGetMember(input, "TitleData", titleData);
    this->SetTitleData(std::move(titleData));

    ModelDictionaryEntryVector<UserDataRecord> userData{};
    JsonUtils::ObjectGetMember<UserDataRecord>(input, "UserData", userData);
    this->SetUserData(std::move(userData));

    JsonUtils::ObjectGetMember(input, "UserDataVersion", this->m_model.userDataVersion);

    ModelVector<ItemInstance> userInventory{};
    JsonUtils::ObjectGetMember<ItemInstance>(input, "UserInventory", userInventory);
    this->SetUserInventory(std::move(userInventory));

    ModelDictionaryEntryVector<UserDataRecord> userReadOnlyData{};
    JsonUtils::ObjectGetMember<UserDataRecord>(input, "UserReadOnlyData", userReadOnlyData);
    this->SetUserReadOnlyData(std::move(userReadOnlyData));

    JsonUtils::ObjectGetMember(input, "UserReadOnlyDataVersion", this->m_model.userReadOnlyDataVersion);

    DictionaryEntryVector<PFInt32DictionaryEntry> userVirtualCurrency{};
    JsonUtils::ObjectGetMember(input, "UserVirtualCurrency", userVirtualCurrency);
    this->SetUserVirtualCurrency(std::move(userVirtualCurrency));

    ModelDictionaryEntryVector<VirtualCurrencyRechargeTime> userVirtualCurrencyRechargeTimes{};
    JsonUtils::ObjectGetMember<VirtualCurrencyRechargeTime>(input, "UserVirtualCurrencyRechargeTimes", userVirtualCurrencyRechargeTimes);
    this->SetUserVirtualCurrencyRechargeTimes(std::move(userVirtualCurrencyRechargeTimes));
}

size_t GetPlayerCombinedInfoResultPayload::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFGetPlayerCombinedInfoResultPayload const*> GetPlayerCombinedInfoResultPayload::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayerCombinedInfoResultPayload>(&this->Model());
}

size_t GetPlayerCombinedInfoResultPayload::RequiredBufferSize(const PFGetPlayerCombinedInfoResultPayload& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.accountInfo)
    {
        requiredSize += UserAccountInfo::RequiredBufferSize(*model.accountInfo);
    }
    requiredSize += (alignof(PFCharacterInventory*) + sizeof(PFCharacterInventory*) * model.characterInventoriesCount);
    for (size_t i = 0; i < model.characterInventoriesCount; ++i)
    {
        requiredSize += CharacterInventory::RequiredBufferSize(*model.characterInventories[i]);
    }
    requiredSize += (alignof(PFCharacterResult*) + sizeof(PFCharacterResult*) * model.characterListCount);
    for (size_t i = 0; i < model.characterListCount; ++i)
    {
        requiredSize += CharacterResult::RequiredBufferSize(*model.characterList[i]);
    }
    if (model.playerProfile)
    {
        requiredSize += PlayerProfileModel::RequiredBufferSize(*model.playerProfile);
    }
    requiredSize += (alignof(PFStatisticValue*) + sizeof(PFStatisticValue*) * model.playerStatisticsCount);
    for (size_t i = 0; i < model.playerStatisticsCount; ++i)
    {
        requiredSize += StatisticValue::RequiredBufferSize(*model.playerStatistics[i]);
    }
    requiredSize += (alignof(PFStringDictionaryEntry) + sizeof(PFStringDictionaryEntry) * model.titleDataCount);
    for (size_t i = 0; i < model.titleDataCount; ++i)
    {
        requiredSize += (std::strlen(model.titleData[i].key) + 1);
        requiredSize += (std::strlen(model.titleData[i].value) + 1);
    }
    requiredSize += (alignof(PFUserDataRecordDictionaryEntry) + sizeof(PFUserDataRecordDictionaryEntry) * model.userDataCount);
    for (size_t i = 0; i < model.userDataCount; ++i)
    {
        requiredSize += (std::strlen(model.userData[i].key) + 1);
        requiredSize += UserDataRecord::RequiredBufferSize(*model.userData[i].value);
    }
    requiredSize += (alignof(PFItemInstance*) + sizeof(PFItemInstance*) * model.userInventoryCount);
    for (size_t i = 0; i < model.userInventoryCount; ++i)
    {
        requiredSize += ItemInstance::RequiredBufferSize(*model.userInventory[i]);
    }
    requiredSize += (alignof(PFUserDataRecordDictionaryEntry) + sizeof(PFUserDataRecordDictionaryEntry) * model.userReadOnlyDataCount);
    for (size_t i = 0; i < model.userReadOnlyDataCount; ++i)
    {
        requiredSize += (std::strlen(model.userReadOnlyData[i].key) + 1);
        requiredSize += UserDataRecord::RequiredBufferSize(*model.userReadOnlyData[i].value);
    }
    requiredSize += (alignof(PFInt32DictionaryEntry) + sizeof(PFInt32DictionaryEntry) * model.userVirtualCurrencyCount);
    for (size_t i = 0; i < model.userVirtualCurrencyCount; ++i)
    {
        requiredSize += (std::strlen(model.userVirtualCurrency[i].key) + 1);
    }
    requiredSize += (alignof(PFVirtualCurrencyRechargeTimeDictionaryEntry) + sizeof(PFVirtualCurrencyRechargeTimeDictionaryEntry) * model.userVirtualCurrencyRechargeTimesCount);
    for (size_t i = 0; i < model.userVirtualCurrencyRechargeTimesCount; ++i)
    {
        requiredSize += (std::strlen(model.userVirtualCurrencyRechargeTimes[i].key) + 1);
        requiredSize += VirtualCurrencyRechargeTime::RequiredBufferSize(*model.userVirtualCurrencyRechargeTimes[i].value);
    }
    return requiredSize;
}

HRESULT GetPlayerCombinedInfoResultPayload::Copy(const PFGetPlayerCombinedInfoResultPayload& input, PFGetPlayerCombinedInfoResultPayload& output, ModelBuffer& buffer)
{
    output = input;
    output.accountInfo = buffer.CopyTo<UserAccountInfo>(input.accountInfo);
    output.characterInventories = buffer.CopyToArray<CharacterInventory>(input.characterInventories, input.characterInventoriesCount);
    output.characterList = buffer.CopyToArray<CharacterResult>(input.characterList, input.characterListCount);
    output.playerProfile = buffer.CopyTo<PlayerProfileModel>(input.playerProfile);
    output.playerStatistics = buffer.CopyToArray<StatisticValue>(input.playerStatistics, input.playerStatisticsCount);
    output.titleData = buffer.CopyToDictionary(input.titleData, input.titleDataCount);
    output.userData = buffer.CopyToDictionary<UserDataRecord>(input.userData, input.userDataCount);
    output.userInventory = buffer.CopyToArray<ItemInstance>(input.userInventory, input.userInventoryCount);
    output.userReadOnlyData = buffer.CopyToDictionary<UserDataRecord>(input.userReadOnlyData, input.userReadOnlyDataCount);
    output.userVirtualCurrency = buffer.CopyToDictionary(input.userVirtualCurrency, input.userVirtualCurrencyCount);
    output.userVirtualCurrencyRechargeTimes = buffer.CopyToDictionary<VirtualCurrencyRechargeTime>(input.userVirtualCurrencyRechargeTimes, input.userVirtualCurrencyRechargeTimesCount);
    return S_OK;
}

JsonValue GetPlayerCombinedInfoRequest::ToJson() const
{
    return GetPlayerCombinedInfoRequest::ToJson(this->Model());
}

JsonValue GetPlayerCombinedInfoRequest::ToJson(const PFGetPlayerCombinedInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember<GetPlayerCombinedInfoRequestParams>(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

void GetPlayerCombinedInfoResult::FromJson(const JsonValue& input)
{
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> infoResultPayload{};
    JsonUtils::ObjectGetMember(input, "InfoResultPayload", infoResultPayload);
    if (infoResultPayload)
    {
        this->SetInfoResultPayload(std::move(*infoResultPayload));
    }

    String playFabId{};
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    this->SetPlayFabId(std::move(playFabId));
}

size_t GetPlayerCombinedInfoResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFGetPlayerCombinedInfoResult const*> GetPlayerCombinedInfoResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayerCombinedInfoResult>(&this->Model());
}

size_t GetPlayerCombinedInfoResult::RequiredBufferSize(const PFGetPlayerCombinedInfoResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.infoResultPayload)
    {
        requiredSize += GetPlayerCombinedInfoResultPayload::RequiredBufferSize(*model.infoResultPayload);
    }
    if (model.playFabId)
    {
        requiredSize += (std::strlen(model.playFabId) + 1);
    }
    return requiredSize;
}

HRESULT GetPlayerCombinedInfoResult::Copy(const PFGetPlayerCombinedInfoResult& input, PFGetPlayerCombinedInfoResult& output, ModelBuffer& buffer)
{
    output = input;
    output.infoResultPayload = buffer.CopyTo<GetPlayerCombinedInfoResultPayload>(input.infoResultPayload);
    output.playFabId = buffer.CopyTo(input.playFabId);
    return S_OK;
}

JsonValue ResultTableNode::ToJson() const
{
    return ResultTableNode::ToJson(this->Model());
}

JsonValue ResultTableNode::ToJson(const PFResultTableNode& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ResultItem", input.resultItem);
    JsonUtils::ObjectAddMember(output, "ResultItemType", input.resultItemType);
    JsonUtils::ObjectAddMember(output, "Weight", input.weight);
    return output;
}

void ResultTableNode::FromJson(const JsonValue& input)
{
    String resultItem{};
    JsonUtils::ObjectGetMember(input, "ResultItem", resultItem);
    this->SetResultItem(std::move(resultItem));

    JsonUtils::ObjectGetMember(input, "ResultItemType", this->m_model.resultItemType);

    JsonUtils::ObjectGetMember(input, "Weight", this->m_model.weight);
}

size_t ResultTableNode::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFResultTableNode const*> ResultTableNode::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<ResultTableNode>(&this->Model());
}

size_t ResultTableNode::RequiredBufferSize(const PFResultTableNode& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.resultItem)
    {
        requiredSize += (std::strlen(model.resultItem) + 1);
    }
    return requiredSize;
}

HRESULT ResultTableNode::Copy(const PFResultTableNode& input, PFResultTableNode& output, ModelBuffer& buffer)
{
    output = input;
    output.resultItem = buffer.CopyTo(input.resultItem);
    return S_OK;
}

void RandomResultTableListing::FromJson(const JsonValue& input)
{
    String catalogVersion{};
    JsonUtils::ObjectGetMember(input, "CatalogVersion", catalogVersion);
    this->SetCatalogVersion(std::move(catalogVersion));

    ModelVector<ResultTableNode> nodes{};
    JsonUtils::ObjectGetMember<ResultTableNode>(input, "Nodes", nodes);
    this->SetNodes(std::move(nodes));

    String tableId{};
    JsonUtils::ObjectGetMember(input, "TableId", tableId);
    this->SetTableId(std::move(tableId));
}

size_t RandomResultTableListing::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFRandomResultTableListing const*> RandomResultTableListing::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<RandomResultTableListing>(&this->Model());
}

size_t RandomResultTableListing::RequiredBufferSize(const PFRandomResultTableListing& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.catalogVersion)
    {
        requiredSize += (std::strlen(model.catalogVersion) + 1);
    }
    requiredSize += (alignof(PFResultTableNode*) + sizeof(PFResultTableNode*) * model.nodesCount);
    for (size_t i = 0; i < model.nodesCount; ++i)
    {
        requiredSize += ResultTableNode::RequiredBufferSize(*model.nodes[i]);
    }
    if (model.tableId)
    {
        requiredSize += (std::strlen(model.tableId) + 1);
    }
    return requiredSize;
}

HRESULT RandomResultTableListing::Copy(const PFRandomResultTableListing& input, PFRandomResultTableListing& output, ModelBuffer& buffer)
{
    output = input;
    output.catalogVersion = buffer.CopyTo(input.catalogVersion);
    output.nodes = buffer.CopyToArray<ResultTableNode>(input.nodes, input.nodesCount);
    output.tableId = buffer.CopyTo(input.tableId);
    return S_OK;
}

void GetRandomResultTablesResult::FromJson(const JsonValue& input)
{
    ModelDictionaryEntryVector<RandomResultTableListing> tables{};
    JsonUtils::ObjectGetMember<RandomResultTableListing>(input, "Tables", tables);
    this->SetTables(std::move(tables));
}

size_t GetRandomResultTablesResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFGetRandomResultTablesResult const*> GetRandomResultTablesResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetRandomResultTablesResult>(&this->Model());
}

size_t GetRandomResultTablesResult::RequiredBufferSize(const PFGetRandomResultTablesResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFRandomResultTableListingDictionaryEntry) + sizeof(PFRandomResultTableListingDictionaryEntry) * model.tablesCount);
    for (size_t i = 0; i < model.tablesCount; ++i)
    {
        requiredSize += (std::strlen(model.tables[i].key) + 1);
        requiredSize += RandomResultTableListing::RequiredBufferSize(*model.tables[i].value);
    }
    return requiredSize;
}

HRESULT GetRandomResultTablesResult::Copy(const PFGetRandomResultTablesResult& input, PFGetRandomResultTablesResult& output, ModelBuffer& buffer)
{
    output = input;
    output.tables = buffer.CopyToDictionary<RandomResultTableListing>(input.tables, input.tablesCount);
    return S_OK;
}

JsonValue SetPublisherDataRequest::ToJson() const
{
    return SetPublisherDataRequest::ToJson(this->Model());
}

JsonValue SetPublisherDataRequest::ToJson(const PFSetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

JsonValue Variable::ToJson() const
{
    return Variable::ToJson(this->Model());
}

JsonValue Variable::ToJson(const PFVariable& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

void Variable::FromJson(const JsonValue& input)
{
    String name{};
    JsonUtils::ObjectGetMember(input, "Name", name);
    this->SetName(std::move(name));

    String value{};
    JsonUtils::ObjectGetMember(input, "Value", value);
    this->SetValue(std::move(value));
}

size_t Variable::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFVariable const*> Variable::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<Variable>(&this->Model());
}

size_t Variable::RequiredBufferSize(const PFVariable& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.name)
    {
        requiredSize += (std::strlen(model.name) + 1);
    }
    if (model.value)
    {
        requiredSize += (std::strlen(model.value) + 1);
    }
    return requiredSize;
}

HRESULT Variable::Copy(const PFVariable& input, PFVariable& output, ModelBuffer& buffer)
{
    output = input;
    output.name = buffer.CopyTo(input.name);
    output.value = buffer.CopyTo(input.value);
    return S_OK;
}

void TreatmentAssignment::FromJson(const JsonValue& input)
{
    ModelVector<Variable> variables{};
    JsonUtils::ObjectGetMember<Variable>(input, "Variables", variables);
    this->SetVariables(std::move(variables));

    CStringVector variants{};
    JsonUtils::ObjectGetMember(input, "Variants", variants);
    this->SetVariants(std::move(variants));
}

size_t TreatmentAssignment::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTreatmentAssignment const*> TreatmentAssignment::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<TreatmentAssignment>(&this->Model());
}

size_t TreatmentAssignment::RequiredBufferSize(const PFTreatmentAssignment& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFVariable*) + sizeof(PFVariable*) * model.variablesCount);
    for (size_t i = 0; i < model.variablesCount; ++i)
    {
        requiredSize += Variable::RequiredBufferSize(*model.variables[i]);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.variantsCount);
    for (size_t i = 0; i < model.variantsCount; ++i)
    {
        requiredSize += (std::strlen(model.variants[i]) + 1);
    }
    return requiredSize;
}

HRESULT TreatmentAssignment::Copy(const PFTreatmentAssignment& input, PFTreatmentAssignment& output, ModelBuffer& buffer)
{
    output = input;
    output.variables = buffer.CopyToArray<Variable>(input.variables, input.variablesCount);
    output.variants = buffer.CopyToArray(input.variants, input.variantsCount);
    return S_OK;
}

JsonValue Port::ToJson() const
{
    return Port::ToJson(this->Model());
}

JsonValue Port::ToJson(const PFPort& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Num", input.num);
    JsonUtils::ObjectAddMember(output, "Protocol", input.protocol);
    return output;
}

void Port::FromJson(const JsonValue& input)
{
    String name{};
    JsonUtils::ObjectGetMember(input, "Name", name);
    this->SetName(std::move(name));

    JsonUtils::ObjectGetMember(input, "Num", this->m_model.num);

    JsonUtils::ObjectGetMember(input, "Protocol", this->m_model.protocol);
}

size_t Port::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFPort const*> Port::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<Port>(&this->Model());
}

size_t Port::RequiredBufferSize(const PFPort& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.name)
    {
        requiredSize += (std::strlen(model.name) + 1);
    }
    return requiredSize;
}

HRESULT Port::Copy(const PFPort& input, PFPort& output, ModelBuffer& buffer)
{
    output = input;
    output.name = buffer.CopyTo(input.name);
    return S_OK;
}

void EntityLineage::FromJson(const JsonValue& input)
{
    String characterId{};
    JsonUtils::ObjectGetMember(input, "CharacterId", characterId);
    this->SetCharacterId(std::move(characterId));

    String groupId{};
    JsonUtils::ObjectGetMember(input, "GroupId", groupId);
    this->SetGroupId(std::move(groupId));

    String masterPlayerAccountId{};
    JsonUtils::ObjectGetMember(input, "MasterPlayerAccountId", masterPlayerAccountId);
    this->SetMasterPlayerAccountId(std::move(masterPlayerAccountId));

    String namespaceId{};
    JsonUtils::ObjectGetMember(input, "NamespaceId", namespaceId);
    this->SetNamespaceId(std::move(namespaceId));

    String titleId{};
    JsonUtils::ObjectGetMember(input, "TitleId", titleId);
    this->SetTitleId(std::move(titleId));

    String titlePlayerAccountId{};
    JsonUtils::ObjectGetMember(input, "TitlePlayerAccountId", titlePlayerAccountId);
    this->SetTitlePlayerAccountId(std::move(titlePlayerAccountId));
}

size_t EntityLineage::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFEntityLineage const*> EntityLineage::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<EntityLineage>(&this->Model());
}

size_t EntityLineage::RequiredBufferSize(const PFEntityLineage& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.characterId)
    {
        requiredSize += (std::strlen(model.characterId) + 1);
    }
    if (model.groupId)
    {
        requiredSize += (std::strlen(model.groupId) + 1);
    }
    if (model.masterPlayerAccountId)
    {
        requiredSize += (std::strlen(model.masterPlayerAccountId) + 1);
    }
    if (model.namespaceId)
    {
        requiredSize += (std::strlen(model.namespaceId) + 1);
    }
    if (model.titleId)
    {
        requiredSize += (std::strlen(model.titleId) + 1);
    }
    if (model.titlePlayerAccountId)
    {
        requiredSize += (std::strlen(model.titlePlayerAccountId) + 1);
    }
    return requiredSize;
}

HRESULT EntityLineage::Copy(const PFEntityLineage& input, PFEntityLineage& output, ModelBuffer& buffer)
{
    output = input;
    output.characterId = buffer.CopyTo(input.characterId);
    output.groupId = buffer.CopyTo(input.groupId);
    output.masterPlayerAccountId = buffer.CopyTo(input.masterPlayerAccountId);
    output.namespaceId = buffer.CopyTo(input.namespaceId);
    output.titleId = buffer.CopyTo(input.titleId);
    output.titlePlayerAccountId = buffer.CopyTo(input.titlePlayerAccountId);
    return S_OK;
}

} // namespace PlayFab
