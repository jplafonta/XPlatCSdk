#include "stdafx.h"
#include "SegmentsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace SegmentsModels
{

BanPlayerSegmentAction::BanPlayerSegmentAction() :
    PFSegmentsBanPlayerSegmentAction{}
{
}

BanPlayerSegmentAction::BanPlayerSegmentAction(const BanPlayerSegmentAction& src) :
    PFSegmentsBanPlayerSegmentAction{ src },
    m_banHours{ src.m_banHours },
    m_reasonForBan{ src.m_reasonForBan }
{
    banHours = m_banHours ? m_banHours.operator->() : nullptr;
    reasonForBan = m_reasonForBan.empty() ? nullptr : m_reasonForBan.data();
}

BanPlayerSegmentAction::BanPlayerSegmentAction(BanPlayerSegmentAction&& src) :
    PFSegmentsBanPlayerSegmentAction{ src },
    m_banHours{ std::move(src.m_banHours) },
    m_reasonForBan{ std::move(src.m_reasonForBan) }
{
    banHours = m_banHours ? m_banHours.operator->() : nullptr;
    reasonForBan = m_reasonForBan.empty() ? nullptr : m_reasonForBan.data();
}

BanPlayerSegmentAction::BanPlayerSegmentAction(const PFSegmentsBanPlayerSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanPlayerSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanHours", m_banHours, banHours);
    JsonUtils::ObjectGetMember(input, "ReasonForBan", m_reasonForBan, reasonForBan);
}

JsonValue BanPlayerSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsBanPlayerSegmentAction>(*this);
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction() :
    PFSegmentsDeletePlayerStatisticSegmentAction{}
{
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction(const DeletePlayerStatisticSegmentAction& src) :
    PFSegmentsDeletePlayerStatisticSegmentAction{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction(DeletePlayerStatisticSegmentAction&& src) :
    PFSegmentsDeletePlayerStatisticSegmentAction{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

DeletePlayerStatisticSegmentAction::DeletePlayerStatisticSegmentAction(const PFSegmentsDeletePlayerStatisticSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerStatisticSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue DeletePlayerStatisticSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsDeletePlayerStatisticSegmentAction>(*this);
}

size_t DeletePlayerStatisticSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsDeletePlayerStatisticSegmentAction) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void DeletePlayerStatisticSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsDeletePlayerStatisticSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsDeletePlayerStatisticSegmentAction);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction() :
    PFSegmentsEmailNotificationSegmentAction{}
{
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction(const EmailNotificationSegmentAction& src) :
    PFSegmentsEmailNotificationSegmentAction{ src },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_emailTemplateName{ src.m_emailTemplateName }
{
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    emailTemplateName = m_emailTemplateName.empty() ? nullptr : m_emailTemplateName.data();
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction(EmailNotificationSegmentAction&& src) :
    PFSegmentsEmailNotificationSegmentAction{ src },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_emailTemplateName{ std::move(src.m_emailTemplateName) }
{
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    emailTemplateName = m_emailTemplateName.empty() ? nullptr : m_emailTemplateName.data();
}

EmailNotificationSegmentAction::EmailNotificationSegmentAction(const PFSegmentsEmailNotificationSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EmailNotificationSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "EmailTemplateName", m_emailTemplateName, emailTemplateName);
}

JsonValue EmailNotificationSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsEmailNotificationSegmentAction>(*this);
}

size_t EmailNotificationSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsEmailNotificationSegmentAction) };
    serializedSize += (m_emailTemplateId.size() + 1);
    serializedSize += (m_emailTemplateName.size() + 1);
    return serializedSize;
}

void EmailNotificationSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsEmailNotificationSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsEmailNotificationSegmentAction);
    memcpy(stringBuffer, m_emailTemplateId.data(), m_emailTemplateId.size() + 1);
    serializedStruct->emailTemplateId = stringBuffer;
    stringBuffer += m_emailTemplateId.size() + 1;
    memcpy(stringBuffer, m_emailTemplateName.data(), m_emailTemplateName.size() + 1);
    serializedStruct->emailTemplateName = stringBuffer;
    stringBuffer += m_emailTemplateName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction() :
    PFSegmentsExecuteAzureFunctionSegmentAction{}
{
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction(const ExecuteAzureFunctionSegmentAction& src) :
    PFSegmentsExecuteAzureFunctionSegmentAction{ src },
    m_azureFunction{ src.m_azureFunction },
    m_functionParameter{ src.m_functionParameter }
{
    azureFunction = m_azureFunction.empty() ? nullptr : m_azureFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction(ExecuteAzureFunctionSegmentAction&& src) :
    PFSegmentsExecuteAzureFunctionSegmentAction{ src },
    m_azureFunction{ std::move(src.m_azureFunction) },
    m_functionParameter{ std::move(src.m_functionParameter) }
{
    azureFunction = m_azureFunction.empty() ? nullptr : m_azureFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
}

ExecuteAzureFunctionSegmentAction::ExecuteAzureFunctionSegmentAction(const PFSegmentsExecuteAzureFunctionSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteAzureFunctionSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AzureFunction", m_azureFunction, azureFunction);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GenerateFunctionExecutedEvents", generateFunctionExecutedEvents);
}

JsonValue ExecuteAzureFunctionSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsExecuteAzureFunctionSegmentAction>(*this);
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction() :
    PFSegmentsExecuteCloudScriptSegmentAction{}
{
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction(const ExecuteCloudScriptSegmentAction& src) :
    PFSegmentsExecuteCloudScriptSegmentAction{ src },
    m_cloudScriptFunction{ src.m_cloudScriptFunction },
    m_functionParameter{ src.m_functionParameter },
    m_functionParameterJson{ src.m_functionParameterJson }
{
    cloudScriptFunction = m_cloudScriptFunction.empty() ? nullptr : m_cloudScriptFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    functionParameterJson = m_functionParameterJson.empty() ? nullptr : m_functionParameterJson.data();
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction(ExecuteCloudScriptSegmentAction&& src) :
    PFSegmentsExecuteCloudScriptSegmentAction{ src },
    m_cloudScriptFunction{ std::move(src.m_cloudScriptFunction) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_functionParameterJson{ std::move(src.m_functionParameterJson) }
{
    cloudScriptFunction = m_cloudScriptFunction.empty() ? nullptr : m_cloudScriptFunction.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    functionParameterJson = m_functionParameterJson.empty() ? nullptr : m_functionParameterJson.data();
}

ExecuteCloudScriptSegmentAction::ExecuteCloudScriptSegmentAction(const PFSegmentsExecuteCloudScriptSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CloudScriptFunction", m_cloudScriptFunction, cloudScriptFunction);
    JsonUtils::ObjectGetMember(input, "CloudScriptPublishResultsToPlayStream", cloudScriptPublishResultsToPlayStream);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "FunctionParameterJson", m_functionParameterJson, functionParameterJson);
}

JsonValue ExecuteCloudScriptSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsExecuteCloudScriptSegmentAction>(*this);
}

GrantItemSegmentAction::GrantItemSegmentAction() :
    PFSegmentsGrantItemSegmentAction{}
{
}

GrantItemSegmentAction::GrantItemSegmentAction(const GrantItemSegmentAction& src) :
    PFSegmentsGrantItemSegmentAction{ src },
    m_catelogId{ src.m_catelogId },
    m_itemId{ src.m_itemId }
{
    catelogId = m_catelogId.empty() ? nullptr : m_catelogId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

GrantItemSegmentAction::GrantItemSegmentAction(GrantItemSegmentAction&& src) :
    PFSegmentsGrantItemSegmentAction{ src },
    m_catelogId{ std::move(src.m_catelogId) },
    m_itemId{ std::move(src.m_itemId) }
{
    catelogId = m_catelogId.empty() ? nullptr : m_catelogId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

GrantItemSegmentAction::GrantItemSegmentAction(const PFSegmentsGrantItemSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatelogId", m_catelogId, catelogId);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "Quantity", quantity);
}

JsonValue GrantItemSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsGrantItemSegmentAction>(*this);
}

size_t GrantItemSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsGrantItemSegmentAction) };
    serializedSize += (m_catelogId.size() + 1);
    serializedSize += (m_itemId.size() + 1);
    return serializedSize;
}

void GrantItemSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsGrantItemSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsGrantItemSegmentAction);
    memcpy(stringBuffer, m_catelogId.data(), m_catelogId.size() + 1);
    serializedStruct->catelogId = stringBuffer;
    stringBuffer += m_catelogId.size() + 1;
    memcpy(stringBuffer, m_itemId.data(), m_itemId.size() + 1);
    serializedStruct->itemId = stringBuffer;
    stringBuffer += m_itemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction() :
    PFSegmentsGrantVirtualCurrencySegmentAction{}
{
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction(const GrantVirtualCurrencySegmentAction& src) :
    PFSegmentsGrantVirtualCurrencySegmentAction{ src },
    m_currencyCode{ src.m_currencyCode }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction(GrantVirtualCurrencySegmentAction&& src) :
    PFSegmentsGrantVirtualCurrencySegmentAction{ src },
    m_currencyCode{ std::move(src.m_currencyCode) }
{
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

GrantVirtualCurrencySegmentAction::GrantVirtualCurrencySegmentAction(const PFSegmentsGrantVirtualCurrencySegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantVirtualCurrencySegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
}

JsonValue GrantVirtualCurrencySegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsGrantVirtualCurrencySegmentAction>(*this);
}

size_t GrantVirtualCurrencySegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsGrantVirtualCurrencySegmentAction) };
    serializedSize += (m_currencyCode.size() + 1);
    return serializedSize;
}

void GrantVirtualCurrencySegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsGrantVirtualCurrencySegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsGrantVirtualCurrencySegmentAction);
    memcpy(stringBuffer, m_currencyCode.data(), m_currencyCode.size() + 1);
    serializedStruct->currencyCode = stringBuffer;
    stringBuffer += m_currencyCode.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction() :
    PFSegmentsIncrementPlayerStatisticSegmentAction{}
{
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction(const IncrementPlayerStatisticSegmentAction& src) :
    PFSegmentsIncrementPlayerStatisticSegmentAction{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction(IncrementPlayerStatisticSegmentAction&& src) :
    PFSegmentsIncrementPlayerStatisticSegmentAction{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticSegmentAction::IncrementPlayerStatisticSegmentAction(const PFSegmentsIncrementPlayerStatisticSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementPlayerStatisticSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IncrementValue", incrementValue);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue IncrementPlayerStatisticSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsIncrementPlayerStatisticSegmentAction>(*this);
}

size_t IncrementPlayerStatisticSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsIncrementPlayerStatisticSegmentAction) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void IncrementPlayerStatisticSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsIncrementPlayerStatisticSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsIncrementPlayerStatisticSegmentAction);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PushNotificationSegmentAction::PushNotificationSegmentAction() :
    PFSegmentsPushNotificationSegmentAction{}
{
}

PushNotificationSegmentAction::PushNotificationSegmentAction(const PushNotificationSegmentAction& src) :
    PFSegmentsPushNotificationSegmentAction{ src },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

PushNotificationSegmentAction::PushNotificationSegmentAction(PushNotificationSegmentAction&& src) :
    PFSegmentsPushNotificationSegmentAction{ src },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

PushNotificationSegmentAction::PushNotificationSegmentAction(const PFSegmentsPushNotificationSegmentAction& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationSegmentAction::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
}

JsonValue PushNotificationSegmentAction::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsPushNotificationSegmentAction>(*this);
}

size_t PushNotificationSegmentAction::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsPushNotificationSegmentAction) };
    serializedSize += (m_pushNotificationTemplateId.size() + 1);
    return serializedSize;
}

void PushNotificationSegmentAction::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsPushNotificationSegmentAction{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsPushNotificationSegmentAction);
    memcpy(stringBuffer, m_pushNotificationTemplateId.data(), m_pushNotificationTemplateId.size() + 1);
    serializedStruct->pushNotificationTemplateId = stringBuffer;
    stringBuffer += m_pushNotificationTemplateId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SegmentTrigger::SegmentTrigger() :
    PFSegmentsSegmentTrigger{}
{
}

SegmentTrigger::SegmentTrigger(const SegmentTrigger& src) :
    PFSegmentsSegmentTrigger{ src },
    m_banPlayerAction{ src.m_banPlayerAction },
    m_deletePlayerStatisticAction{ src.m_deletePlayerStatisticAction },
    m_emailNotificationAction{ src.m_emailNotificationAction },
    m_executeAzureFunctionAction{ src.m_executeAzureFunctionAction },
    m_executeCloudScriptAction{ src.m_executeCloudScriptAction },
    m_grantItemAction{ src.m_grantItemAction },
    m_grantVirtualCurrencyAction{ src.m_grantVirtualCurrencyAction },
    m_incrementPlayerStatisticAction{ src.m_incrementPlayerStatisticAction },
    m_pushNotificationAction{ src.m_pushNotificationAction }
{
    banPlayerAction = m_banPlayerAction ? m_banPlayerAction.operator->() : nullptr;
    deletePlayerStatisticAction = m_deletePlayerStatisticAction ? m_deletePlayerStatisticAction.operator->() : nullptr;
    emailNotificationAction = m_emailNotificationAction ? m_emailNotificationAction.operator->() : nullptr;
    executeAzureFunctionAction = m_executeAzureFunctionAction ? m_executeAzureFunctionAction.operator->() : nullptr;
    executeCloudScriptAction = m_executeCloudScriptAction ? m_executeCloudScriptAction.operator->() : nullptr;
    grantItemAction = m_grantItemAction ? m_grantItemAction.operator->() : nullptr;
    grantVirtualCurrencyAction = m_grantVirtualCurrencyAction ? m_grantVirtualCurrencyAction.operator->() : nullptr;
    incrementPlayerStatisticAction = m_incrementPlayerStatisticAction ? m_incrementPlayerStatisticAction.operator->() : nullptr;
    pushNotificationAction = m_pushNotificationAction ? m_pushNotificationAction.operator->() : nullptr;
}

SegmentTrigger::SegmentTrigger(SegmentTrigger&& src) :
    PFSegmentsSegmentTrigger{ src },
    m_banPlayerAction{ std::move(src.m_banPlayerAction) },
    m_deletePlayerStatisticAction{ std::move(src.m_deletePlayerStatisticAction) },
    m_emailNotificationAction{ std::move(src.m_emailNotificationAction) },
    m_executeAzureFunctionAction{ std::move(src.m_executeAzureFunctionAction) },
    m_executeCloudScriptAction{ std::move(src.m_executeCloudScriptAction) },
    m_grantItemAction{ std::move(src.m_grantItemAction) },
    m_grantVirtualCurrencyAction{ std::move(src.m_grantVirtualCurrencyAction) },
    m_incrementPlayerStatisticAction{ std::move(src.m_incrementPlayerStatisticAction) },
    m_pushNotificationAction{ std::move(src.m_pushNotificationAction) }
{
    banPlayerAction = m_banPlayerAction ? m_banPlayerAction.operator->() : nullptr;
    deletePlayerStatisticAction = m_deletePlayerStatisticAction ? m_deletePlayerStatisticAction.operator->() : nullptr;
    emailNotificationAction = m_emailNotificationAction ? m_emailNotificationAction.operator->() : nullptr;
    executeAzureFunctionAction = m_executeAzureFunctionAction ? m_executeAzureFunctionAction.operator->() : nullptr;
    executeCloudScriptAction = m_executeCloudScriptAction ? m_executeCloudScriptAction.operator->() : nullptr;
    grantItemAction = m_grantItemAction ? m_grantItemAction.operator->() : nullptr;
    grantVirtualCurrencyAction = m_grantVirtualCurrencyAction ? m_grantVirtualCurrencyAction.operator->() : nullptr;
    incrementPlayerStatisticAction = m_incrementPlayerStatisticAction ? m_incrementPlayerStatisticAction.operator->() : nullptr;
    pushNotificationAction = m_pushNotificationAction ? m_pushNotificationAction.operator->() : nullptr;
}

SegmentTrigger::SegmentTrigger(const PFSegmentsSegmentTrigger& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentTrigger::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanPlayerAction", m_banPlayerAction, banPlayerAction);
    JsonUtils::ObjectGetMember(input, "DeletePlayerStatisticAction", m_deletePlayerStatisticAction, deletePlayerStatisticAction);
    JsonUtils::ObjectGetMember(input, "EmailNotificationAction", m_emailNotificationAction, emailNotificationAction);
    JsonUtils::ObjectGetMember(input, "ExecuteAzureFunctionAction", m_executeAzureFunctionAction, executeAzureFunctionAction);
    JsonUtils::ObjectGetMember(input, "ExecuteCloudScriptAction", m_executeCloudScriptAction, executeCloudScriptAction);
    JsonUtils::ObjectGetMember(input, "GrantItemAction", m_grantItemAction, grantItemAction);
    JsonUtils::ObjectGetMember(input, "GrantVirtualCurrencyAction", m_grantVirtualCurrencyAction, grantVirtualCurrencyAction);
    JsonUtils::ObjectGetMember(input, "IncrementPlayerStatisticAction", m_incrementPlayerStatisticAction, incrementPlayerStatisticAction);
    JsonUtils::ObjectGetMember(input, "PushNotificationAction", m_pushNotificationAction, pushNotificationAction);
}

JsonValue SegmentTrigger::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsSegmentTrigger>(*this);
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter() :
    PFSegmentsAdCampaignSegmentFilter{}
{
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter(const AdCampaignSegmentFilter& src) :
    PFSegmentsAdCampaignSegmentFilter{ src },
    m_campaignId{ src.m_campaignId },
    m_campaignSource{ src.m_campaignSource },
    m_comparison{ src.m_comparison }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    campaignSource = m_campaignSource.empty() ? nullptr : m_campaignSource.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter(AdCampaignSegmentFilter&& src) :
    PFSegmentsAdCampaignSegmentFilter{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_campaignSource{ std::move(src.m_campaignSource) },
    m_comparison{ std::move(src.m_comparison) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    campaignSource = m_campaignSource.empty() ? nullptr : m_campaignSource.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

AdCampaignSegmentFilter::AdCampaignSegmentFilter(const PFSegmentsAdCampaignSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "CampaignSource", m_campaignSource, campaignSource);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
}

JsonValue AdCampaignSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsAdCampaignSegmentFilter>(*this);
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter() :
    PFSegmentsFirstLoginDateSegmentFilter{}
{
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter(const FirstLoginDateSegmentFilter& src) :
    PFSegmentsFirstLoginDateSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter(FirstLoginDateSegmentFilter&& src) :
    PFSegmentsFirstLoginDateSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginDateSegmentFilter::FirstLoginDateSegmentFilter(const PFSegmentsFirstLoginDateSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FirstLoginDateSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "LogInDate", logInDate, true);
}

JsonValue FirstLoginDateSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsFirstLoginDateSegmentFilter>(*this);
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter() :
    PFSegmentsFirstLoginTimespanSegmentFilter{}
{
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter(const FirstLoginTimespanSegmentFilter& src) :
    PFSegmentsFirstLoginTimespanSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter(FirstLoginTimespanSegmentFilter&& src) :
    PFSegmentsFirstLoginTimespanSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

FirstLoginTimespanSegmentFilter::FirstLoginTimespanSegmentFilter(const PFSegmentsFirstLoginTimespanSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FirstLoginTimespanSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "DurationInMinutes", durationInMinutes);
}

JsonValue FirstLoginTimespanSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsFirstLoginTimespanSegmentFilter>(*this);
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter() :
    PFSegmentsLastLoginDateSegmentFilter{}
{
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter(const LastLoginDateSegmentFilter& src) :
    PFSegmentsLastLoginDateSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter(LastLoginDateSegmentFilter&& src) :
    PFSegmentsLastLoginDateSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginDateSegmentFilter::LastLoginDateSegmentFilter(const PFSegmentsLastLoginDateSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LastLoginDateSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "LogInDate", logInDate, true);
}

JsonValue LastLoginDateSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsLastLoginDateSegmentFilter>(*this);
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter() :
    PFSegmentsLastLoginTimespanSegmentFilter{}
{
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter(const LastLoginTimespanSegmentFilter& src) :
    PFSegmentsLastLoginTimespanSegmentFilter{ src },
    m_comparison{ src.m_comparison }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter(LastLoginTimespanSegmentFilter&& src) :
    PFSegmentsLastLoginTimespanSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

LastLoginTimespanSegmentFilter::LastLoginTimespanSegmentFilter(const PFSegmentsLastLoginTimespanSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LastLoginTimespanSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "DurationInMinutes", durationInMinutes);
}

JsonValue LastLoginTimespanSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsLastLoginTimespanSegmentFilter>(*this);
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter() :
    PFSegmentsLinkedUserAccountSegmentFilter{}
{
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter(const LinkedUserAccountSegmentFilter& src) :
    PFSegmentsLinkedUserAccountSegmentFilter{ src },
    m_loginProvider{ src.m_loginProvider }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter(LinkedUserAccountSegmentFilter&& src) :
    PFSegmentsLinkedUserAccountSegmentFilter{ src },
    m_loginProvider{ std::move(src.m_loginProvider) }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountSegmentFilter::LinkedUserAccountSegmentFilter(const PFSegmentsLinkedUserAccountSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkedUserAccountSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
}

JsonValue LinkedUserAccountSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsLinkedUserAccountSegmentFilter>(*this);
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter() :
    PFSegmentsLinkedUserAccountHasEmailSegmentFilter{}
{
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter(const LinkedUserAccountHasEmailSegmentFilter& src) :
    PFSegmentsLinkedUserAccountHasEmailSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_loginProvider{ src.m_loginProvider }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter(LinkedUserAccountHasEmailSegmentFilter&& src) :
    PFSegmentsLinkedUserAccountHasEmailSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_loginProvider{ std::move(src.m_loginProvider) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

LinkedUserAccountHasEmailSegmentFilter::LinkedUserAccountHasEmailSegmentFilter(const PFSegmentsLinkedUserAccountHasEmailSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkedUserAccountHasEmailSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
}

JsonValue LinkedUserAccountHasEmailSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsLinkedUserAccountHasEmailSegmentFilter>(*this);
}

LocationSegmentFilter::LocationSegmentFilter() :
    PFSegmentsLocationSegmentFilter{}
{
}

LocationSegmentFilter::LocationSegmentFilter(const LocationSegmentFilter& src) :
    PFSegmentsLocationSegmentFilter{ src },
    m_countryCode{ src.m_countryCode }
{
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
}

LocationSegmentFilter::LocationSegmentFilter(LocationSegmentFilter&& src) :
    PFSegmentsLocationSegmentFilter{ src },
    m_countryCode{ std::move(src.m_countryCode) }
{
    countryCode = m_countryCode ? m_countryCode.operator->() : nullptr;
}

LocationSegmentFilter::LocationSegmentFilter(const PFSegmentsLocationSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LocationSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CountryCode", m_countryCode, countryCode);
}

JsonValue LocationSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsLocationSegmentFilter>(*this);
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter() :
    PFSegmentsPushNotificationSegmentFilter{}
{
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter(const PushNotificationSegmentFilter& src) :
    PFSegmentsPushNotificationSegmentFilter{ src },
    m_pushNotificationDevicePlatform{ src.m_pushNotificationDevicePlatform }
{
    pushNotificationDevicePlatform = m_pushNotificationDevicePlatform ? m_pushNotificationDevicePlatform.operator->() : nullptr;
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter(PushNotificationSegmentFilter&& src) :
    PFSegmentsPushNotificationSegmentFilter{ src },
    m_pushNotificationDevicePlatform{ std::move(src.m_pushNotificationDevicePlatform) }
{
    pushNotificationDevicePlatform = m_pushNotificationDevicePlatform ? m_pushNotificationDevicePlatform.operator->() : nullptr;
}

PushNotificationSegmentFilter::PushNotificationSegmentFilter(const PFSegmentsPushNotificationSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationDevicePlatform", m_pushNotificationDevicePlatform, pushNotificationDevicePlatform);
}

JsonValue PushNotificationSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsPushNotificationSegmentFilter>(*this);
}

StatisticSegmentFilter::StatisticSegmentFilter() :
    PFSegmentsStatisticSegmentFilter{}
{
}

StatisticSegmentFilter::StatisticSegmentFilter(const StatisticSegmentFilter& src) :
    PFSegmentsStatisticSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_filterValue{ src.m_filterValue },
    m_name{ src.m_name },
    m_useCurrentVersion{ src.m_useCurrentVersion },
    m_version{ src.m_version }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    filterValue = m_filterValue.empty() ? nullptr : m_filterValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    useCurrentVersion = m_useCurrentVersion ? m_useCurrentVersion.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticSegmentFilter::StatisticSegmentFilter(StatisticSegmentFilter&& src) :
    PFSegmentsStatisticSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_filterValue{ std::move(src.m_filterValue) },
    m_name{ std::move(src.m_name) },
    m_useCurrentVersion{ std::move(src.m_useCurrentVersion) },
    m_version{ std::move(src.m_version) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    filterValue = m_filterValue.empty() ? nullptr : m_filterValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    useCurrentVersion = m_useCurrentVersion ? m_useCurrentVersion.operator->() : nullptr;
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticSegmentFilter::StatisticSegmentFilter(const PFSegmentsStatisticSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "FilterValue", m_filterValue, filterValue);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "UseCurrentVersion", m_useCurrentVersion, useCurrentVersion);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue StatisticSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsStatisticSegmentFilter>(*this);
}

TagSegmentFilter::TagSegmentFilter() :
    PFSegmentsTagSegmentFilter{}
{
}

TagSegmentFilter::TagSegmentFilter(const TagSegmentFilter& src) :
    PFSegmentsTagSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_tagValue{ src.m_tagValue }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagSegmentFilter::TagSegmentFilter(TagSegmentFilter&& src) :
    PFSegmentsTagSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_tagValue{ std::move(src.m_tagValue) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    tagValue = m_tagValue.empty() ? nullptr : m_tagValue.data();
}

TagSegmentFilter::TagSegmentFilter(const PFSegmentsTagSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TagSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "TagValue", m_tagValue, tagValue);
}

JsonValue TagSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsTagSegmentFilter>(*this);
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter() :
    PFSegmentsTotalValueToDateInUSDSegmentFilter{}
{
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter(const TotalValueToDateInUSDSegmentFilter& src) :
    PFSegmentsTotalValueToDateInUSDSegmentFilter{ src },
    m_amount{ src.m_amount },
    m_comparison{ src.m_comparison }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter(TotalValueToDateInUSDSegmentFilter&& src) :
    PFSegmentsTotalValueToDateInUSDSegmentFilter{ src },
    m_amount{ std::move(src.m_amount) },
    m_comparison{ std::move(src.m_comparison) }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
}

TotalValueToDateInUSDSegmentFilter::TotalValueToDateInUSDSegmentFilter(const PFSegmentsTotalValueToDateInUSDSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TotalValueToDateInUSDSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", m_amount, amount);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
}

JsonValue TotalValueToDateInUSDSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsTotalValueToDateInUSDSegmentFilter>(*this);
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter() :
    PFSegmentsUserOriginationSegmentFilter{}
{
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter(const UserOriginationSegmentFilter& src) :
    PFSegmentsUserOriginationSegmentFilter{ src },
    m_loginProvider{ src.m_loginProvider }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter(UserOriginationSegmentFilter&& src) :
    PFSegmentsUserOriginationSegmentFilter{ src },
    m_loginProvider{ std::move(src.m_loginProvider) }
{
    loginProvider = m_loginProvider ? m_loginProvider.operator->() : nullptr;
}

UserOriginationSegmentFilter::UserOriginationSegmentFilter(const PFSegmentsUserOriginationSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserOriginationSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LoginProvider", m_loginProvider, loginProvider);
}

JsonValue UserOriginationSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsUserOriginationSegmentFilter>(*this);
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter() :
    PFSegmentsValueToDateSegmentFilter{}
{
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter(const ValueToDateSegmentFilter& src) :
    PFSegmentsValueToDateSegmentFilter{ src },
    m_amount{ src.m_amount },
    m_comparison{ src.m_comparison },
    m_currency{ src.m_currency }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currency = m_currency ? m_currency.operator->() : nullptr;
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter(ValueToDateSegmentFilter&& src) :
    PFSegmentsValueToDateSegmentFilter{ src },
    m_amount{ std::move(src.m_amount) },
    m_comparison{ std::move(src.m_comparison) },
    m_currency{ std::move(src.m_currency) }
{
    amount = m_amount.empty() ? nullptr : m_amount.data();
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currency = m_currency ? m_currency.operator->() : nullptr;
}

ValueToDateSegmentFilter::ValueToDateSegmentFilter(const PFSegmentsValueToDateSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValueToDateSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", m_amount, amount);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
}

JsonValue ValueToDateSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsValueToDateSegmentFilter>(*this);
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter() :
    PFSegmentsVirtualCurrencyBalanceSegmentFilter{}
{
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter(const VirtualCurrencyBalanceSegmentFilter& src) :
    PFSegmentsVirtualCurrencyBalanceSegmentFilter{ src },
    m_comparison{ src.m_comparison },
    m_currencyCode{ src.m_currencyCode }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter(VirtualCurrencyBalanceSegmentFilter&& src) :
    PFSegmentsVirtualCurrencyBalanceSegmentFilter{ src },
    m_comparison{ std::move(src.m_comparison) },
    m_currencyCode{ std::move(src.m_currencyCode) }
{
    comparison = m_comparison ? m_comparison.operator->() : nullptr;
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
}

VirtualCurrencyBalanceSegmentFilter::VirtualCurrencyBalanceSegmentFilter(const PFSegmentsVirtualCurrencyBalanceSegmentFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualCurrencyBalanceSegmentFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "Comparison", m_comparison, comparison);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
}

JsonValue VirtualCurrencyBalanceSegmentFilter::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsVirtualCurrencyBalanceSegmentFilter>(*this);
}

SegmentAndDefinition::SegmentAndDefinition() :
    PFSegmentsSegmentAndDefinition{}
{
}

SegmentAndDefinition::SegmentAndDefinition(const SegmentAndDefinition& src) :
    PFSegmentsSegmentAndDefinition{ src },
    m_adCampaignFilter{ src.m_adCampaignFilter },
    m_firstLoginDateFilter{ src.m_firstLoginDateFilter },
    m_firstLoginFilter{ src.m_firstLoginFilter },
    m_lastLoginDateFilter{ src.m_lastLoginDateFilter },
    m_lastLoginFilter{ src.m_lastLoginFilter },
    m_linkedUserAccountFilter{ src.m_linkedUserAccountFilter },
    m_linkedUserAccountHasEmailFilter{ src.m_linkedUserAccountHasEmailFilter },
    m_locationFilter{ src.m_locationFilter },
    m_pushNotificationFilter{ src.m_pushNotificationFilter },
    m_statisticFilter{ src.m_statisticFilter },
    m_tagFilter{ src.m_tagFilter },
    m_totalValueToDateInUSDFilter{ src.m_totalValueToDateInUSDFilter },
    m_userOriginationFilter{ src.m_userOriginationFilter },
    m_valueToDateFilter{ src.m_valueToDateFilter },
    m_virtualCurrencyBalanceFilter{ src.m_virtualCurrencyBalanceFilter }
{
    adCampaignFilter = m_adCampaignFilter ? m_adCampaignFilter.operator->() : nullptr;
    firstLoginDateFilter = m_firstLoginDateFilter ? m_firstLoginDateFilter.operator->() : nullptr;
    firstLoginFilter = m_firstLoginFilter ? m_firstLoginFilter.operator->() : nullptr;
    lastLoginDateFilter = m_lastLoginDateFilter ? m_lastLoginDateFilter.operator->() : nullptr;
    lastLoginFilter = m_lastLoginFilter ? m_lastLoginFilter.operator->() : nullptr;
    linkedUserAccountFilter = m_linkedUserAccountFilter ? m_linkedUserAccountFilter.operator->() : nullptr;
    linkedUserAccountHasEmailFilter = m_linkedUserAccountHasEmailFilter ? m_linkedUserAccountHasEmailFilter.operator->() : nullptr;
    locationFilter = m_locationFilter ? m_locationFilter.operator->() : nullptr;
    pushNotificationFilter = m_pushNotificationFilter ? m_pushNotificationFilter.operator->() : nullptr;
    statisticFilter = m_statisticFilter ? m_statisticFilter.operator->() : nullptr;
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
    totalValueToDateInUSDFilter = m_totalValueToDateInUSDFilter ? m_totalValueToDateInUSDFilter.operator->() : nullptr;
    userOriginationFilter = m_userOriginationFilter ? m_userOriginationFilter.operator->() : nullptr;
    valueToDateFilter = m_valueToDateFilter ? m_valueToDateFilter.operator->() : nullptr;
    virtualCurrencyBalanceFilter = m_virtualCurrencyBalanceFilter ? m_virtualCurrencyBalanceFilter.operator->() : nullptr;
}

SegmentAndDefinition::SegmentAndDefinition(SegmentAndDefinition&& src) :
    PFSegmentsSegmentAndDefinition{ src },
    m_adCampaignFilter{ std::move(src.m_adCampaignFilter) },
    m_firstLoginDateFilter{ std::move(src.m_firstLoginDateFilter) },
    m_firstLoginFilter{ std::move(src.m_firstLoginFilter) },
    m_lastLoginDateFilter{ std::move(src.m_lastLoginDateFilter) },
    m_lastLoginFilter{ std::move(src.m_lastLoginFilter) },
    m_linkedUserAccountFilter{ std::move(src.m_linkedUserAccountFilter) },
    m_linkedUserAccountHasEmailFilter{ std::move(src.m_linkedUserAccountHasEmailFilter) },
    m_locationFilter{ std::move(src.m_locationFilter) },
    m_pushNotificationFilter{ std::move(src.m_pushNotificationFilter) },
    m_statisticFilter{ std::move(src.m_statisticFilter) },
    m_tagFilter{ std::move(src.m_tagFilter) },
    m_totalValueToDateInUSDFilter{ std::move(src.m_totalValueToDateInUSDFilter) },
    m_userOriginationFilter{ std::move(src.m_userOriginationFilter) },
    m_valueToDateFilter{ std::move(src.m_valueToDateFilter) },
    m_virtualCurrencyBalanceFilter{ std::move(src.m_virtualCurrencyBalanceFilter) }
{
    adCampaignFilter = m_adCampaignFilter ? m_adCampaignFilter.operator->() : nullptr;
    firstLoginDateFilter = m_firstLoginDateFilter ? m_firstLoginDateFilter.operator->() : nullptr;
    firstLoginFilter = m_firstLoginFilter ? m_firstLoginFilter.operator->() : nullptr;
    lastLoginDateFilter = m_lastLoginDateFilter ? m_lastLoginDateFilter.operator->() : nullptr;
    lastLoginFilter = m_lastLoginFilter ? m_lastLoginFilter.operator->() : nullptr;
    linkedUserAccountFilter = m_linkedUserAccountFilter ? m_linkedUserAccountFilter.operator->() : nullptr;
    linkedUserAccountHasEmailFilter = m_linkedUserAccountHasEmailFilter ? m_linkedUserAccountHasEmailFilter.operator->() : nullptr;
    locationFilter = m_locationFilter ? m_locationFilter.operator->() : nullptr;
    pushNotificationFilter = m_pushNotificationFilter ? m_pushNotificationFilter.operator->() : nullptr;
    statisticFilter = m_statisticFilter ? m_statisticFilter.operator->() : nullptr;
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
    totalValueToDateInUSDFilter = m_totalValueToDateInUSDFilter ? m_totalValueToDateInUSDFilter.operator->() : nullptr;
    userOriginationFilter = m_userOriginationFilter ? m_userOriginationFilter.operator->() : nullptr;
    valueToDateFilter = m_valueToDateFilter ? m_valueToDateFilter.operator->() : nullptr;
    virtualCurrencyBalanceFilter = m_virtualCurrencyBalanceFilter ? m_virtualCurrencyBalanceFilter.operator->() : nullptr;
}

SegmentAndDefinition::SegmentAndDefinition(const PFSegmentsSegmentAndDefinition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentAndDefinition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignFilter", m_adCampaignFilter, adCampaignFilter);
    JsonUtils::ObjectGetMember(input, "FirstLoginDateFilter", m_firstLoginDateFilter, firstLoginDateFilter);
    JsonUtils::ObjectGetMember(input, "FirstLoginFilter", m_firstLoginFilter, firstLoginFilter);
    JsonUtils::ObjectGetMember(input, "LastLoginDateFilter", m_lastLoginDateFilter, lastLoginDateFilter);
    JsonUtils::ObjectGetMember(input, "LastLoginFilter", m_lastLoginFilter, lastLoginFilter);
    JsonUtils::ObjectGetMember(input, "LinkedUserAccountFilter", m_linkedUserAccountFilter, linkedUserAccountFilter);
    JsonUtils::ObjectGetMember(input, "LinkedUserAccountHasEmailFilter", m_linkedUserAccountHasEmailFilter, linkedUserAccountHasEmailFilter);
    JsonUtils::ObjectGetMember(input, "LocationFilter", m_locationFilter, locationFilter);
    JsonUtils::ObjectGetMember(input, "PushNotificationFilter", m_pushNotificationFilter, pushNotificationFilter);
    JsonUtils::ObjectGetMember(input, "StatisticFilter", m_statisticFilter, statisticFilter);
    JsonUtils::ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSDFilter", m_totalValueToDateInUSDFilter, totalValueToDateInUSDFilter);
    JsonUtils::ObjectGetMember(input, "UserOriginationFilter", m_userOriginationFilter, userOriginationFilter);
    JsonUtils::ObjectGetMember(input, "ValueToDateFilter", m_valueToDateFilter, valueToDateFilter);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalanceFilter", m_virtualCurrencyBalanceFilter, virtualCurrencyBalanceFilter);
}

JsonValue SegmentAndDefinition::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsSegmentAndDefinition>(*this);
}

SegmentOrDefinition::SegmentOrDefinition() :
    PFSegmentsSegmentOrDefinition{}
{
}

SegmentOrDefinition::SegmentOrDefinition(const SegmentOrDefinition& src) :
    PFSegmentsSegmentOrDefinition{ src },
    m_segmentAndDefinitions{ src.m_segmentAndDefinitions }
{
    segmentAndDefinitions = m_segmentAndDefinitions.Empty() ? nullptr : m_segmentAndDefinitions.Data();
}

SegmentOrDefinition::SegmentOrDefinition(SegmentOrDefinition&& src) :
    PFSegmentsSegmentOrDefinition{ src },
    m_segmentAndDefinitions{ std::move(src.m_segmentAndDefinitions) }
{
    segmentAndDefinitions = m_segmentAndDefinitions.Empty() ? nullptr : m_segmentAndDefinitions.Data();
}

SegmentOrDefinition::SegmentOrDefinition(const PFSegmentsSegmentOrDefinition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentOrDefinition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentAndDefinitions", m_segmentAndDefinitions, segmentAndDefinitions, segmentAndDefinitionsCount);
}

JsonValue SegmentOrDefinition::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsSegmentOrDefinition>(*this);
}

SegmentModel::SegmentModel() :
    PFSegmentsSegmentModel{}
{
}

SegmentModel::SegmentModel(const SegmentModel& src) :
    PFSegmentsSegmentModel{ src },
    m_description{ src.m_description },
    m_enteredSegmentActions{ src.m_enteredSegmentActions },
    m_leftSegmentActions{ src.m_leftSegmentActions },
    m_name{ src.m_name },
    m_segmentId{ src.m_segmentId },
    m_segmentOrDefinitions{ src.m_segmentOrDefinitions }
{
    description = m_description.empty() ? nullptr : m_description.data();
    enteredSegmentActions = m_enteredSegmentActions.Empty() ? nullptr : m_enteredSegmentActions.Data();
    leftSegmentActions = m_leftSegmentActions.Empty() ? nullptr : m_leftSegmentActions.Data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    segmentOrDefinitions = m_segmentOrDefinitions.Empty() ? nullptr : m_segmentOrDefinitions.Data();
}

SegmentModel::SegmentModel(SegmentModel&& src) :
    PFSegmentsSegmentModel{ src },
    m_description{ std::move(src.m_description) },
    m_enteredSegmentActions{ std::move(src.m_enteredSegmentActions) },
    m_leftSegmentActions{ std::move(src.m_leftSegmentActions) },
    m_name{ std::move(src.m_name) },
    m_segmentId{ std::move(src.m_segmentId) },
    m_segmentOrDefinitions{ std::move(src.m_segmentOrDefinitions) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    enteredSegmentActions = m_enteredSegmentActions.Empty() ? nullptr : m_enteredSegmentActions.Data();
    leftSegmentActions = m_leftSegmentActions.Empty() ? nullptr : m_leftSegmentActions.Data();
    name = m_name.empty() ? nullptr : m_name.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
    segmentOrDefinitions = m_segmentOrDefinitions.Empty() ? nullptr : m_segmentOrDefinitions.Data();
}

SegmentModel::SegmentModel(const PFSegmentsSegmentModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SegmentModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "EnteredSegmentActions", m_enteredSegmentActions, enteredSegmentActions, enteredSegmentActionsCount);
    JsonUtils::ObjectGetMember(input, "LastUpdateTime", lastUpdateTime, true);
    JsonUtils::ObjectGetMember(input, "LeftSegmentActions", m_leftSegmentActions, leftSegmentActions, leftSegmentActionsCount);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
    JsonUtils::ObjectGetMember(input, "SegmentOrDefinitions", m_segmentOrDefinitions, segmentOrDefinitions, segmentOrDefinitionsCount);
}

JsonValue SegmentModel::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsSegmentModel>(*this);
}

CreateSegmentRequest::CreateSegmentRequest() :
    PFSegmentsCreateSegmentRequest{}
{
}

CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest& src) :
    PFSegmentsCreateSegmentRequest{ src },
    m_segmentModel{ src.m_segmentModel }
{
    segmentModel = (PFSegmentsSegmentModel const*)&m_segmentModel;
}

CreateSegmentRequest::CreateSegmentRequest(CreateSegmentRequest&& src) :
    PFSegmentsCreateSegmentRequest{ src },
    m_segmentModel{ std::move(src.m_segmentModel) }
{
    segmentModel = (PFSegmentsSegmentModel const*)&m_segmentModel;
}

CreateSegmentRequest::CreateSegmentRequest(const PFSegmentsCreateSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentModel", m_segmentModel, segmentModel);
}

JsonValue CreateSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsCreateSegmentRequest>(*this);
}

CreateSegmentResponse::CreateSegmentResponse() :
    PFSegmentsCreateSegmentResponse{}
{
}

CreateSegmentResponse::CreateSegmentResponse(const CreateSegmentResponse& src) :
    PFSegmentsCreateSegmentResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_segmentId{ src.m_segmentId }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

CreateSegmentResponse::CreateSegmentResponse(CreateSegmentResponse&& src) :
    PFSegmentsCreateSegmentResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

CreateSegmentResponse::CreateSegmentResponse(const PFSegmentsCreateSegmentResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSegmentResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue CreateSegmentResponse::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsCreateSegmentResponse>(*this);
}

size_t CreateSegmentResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsCreateSegmentResponse) };
    serializedSize += (m_errorMessage.size() + 1);
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void CreateSegmentResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsCreateSegmentResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsCreateSegmentResponse);
    memcpy(stringBuffer, m_errorMessage.data(), m_errorMessage.size() + 1);
    serializedStruct->errorMessage = stringBuffer;
    stringBuffer += m_errorMessage.size() + 1;
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteSegmentRequest::DeleteSegmentRequest() :
    PFSegmentsDeleteSegmentRequest{}
{
}

DeleteSegmentRequest::DeleteSegmentRequest(const DeleteSegmentRequest& src) :
    PFSegmentsDeleteSegmentRequest{ src },
    m_segmentId{ src.m_segmentId }
{
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

DeleteSegmentRequest::DeleteSegmentRequest(DeleteSegmentRequest&& src) :
    PFSegmentsDeleteSegmentRequest{ src },
    m_segmentId{ std::move(src.m_segmentId) }
{
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

DeleteSegmentRequest::DeleteSegmentRequest(const PFSegmentsDeleteSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue DeleteSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsDeleteSegmentRequest>(*this);
}

size_t DeleteSegmentRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsDeleteSegmentRequest) };
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void DeleteSegmentRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsDeleteSegmentRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsDeleteSegmentRequest);
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteSegmentsResponse::DeleteSegmentsResponse() :
    PFSegmentsDeleteSegmentsResponse{}
{
}

DeleteSegmentsResponse::DeleteSegmentsResponse(const DeleteSegmentsResponse& src) :
    PFSegmentsDeleteSegmentsResponse{ src },
    m_errorMessage{ src.m_errorMessage }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
}

DeleteSegmentsResponse::DeleteSegmentsResponse(DeleteSegmentsResponse&& src) :
    PFSegmentsDeleteSegmentsResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
}

DeleteSegmentsResponse::DeleteSegmentsResponse(const PFSegmentsDeleteSegmentsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteSegmentsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
}

JsonValue DeleteSegmentsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsDeleteSegmentsResponse>(*this);
}

size_t DeleteSegmentsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsDeleteSegmentsResponse) };
    serializedSize += (m_errorMessage.size() + 1);
    return serializedSize;
}

void DeleteSegmentsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsDeleteSegmentsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsDeleteSegmentsResponse);
    memcpy(stringBuffer, m_errorMessage.data(), m_errorMessage.size() + 1);
    serializedStruct->errorMessage = stringBuffer;
    stringBuffer += m_errorMessage.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetSegmentsRequest::GetSegmentsRequest() :
    PFSegmentsGetSegmentsRequest{}
{
}

GetSegmentsRequest::GetSegmentsRequest(const GetSegmentsRequest& src) :
    PFSegmentsGetSegmentsRequest{ src },
    m_segmentIds{ src.m_segmentIds }
{
    segmentIds = m_segmentIds.Empty() ? nullptr : m_segmentIds.Data();
}

GetSegmentsRequest::GetSegmentsRequest(GetSegmentsRequest&& src) :
    PFSegmentsGetSegmentsRequest{ src },
    m_segmentIds{ std::move(src.m_segmentIds) }
{
    segmentIds = m_segmentIds.Empty() ? nullptr : m_segmentIds.Data();
}

GetSegmentsRequest::GetSegmentsRequest(const PFSegmentsGetSegmentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentIds", m_segmentIds, segmentIds, segmentIdsCount);
}

JsonValue GetSegmentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsGetSegmentsRequest>(*this);
}

GetSegmentsResponse::GetSegmentsResponse() :
    PFSegmentsGetSegmentsResponse{}
{
}

GetSegmentsResponse::GetSegmentsResponse(const GetSegmentsResponse& src) :
    PFSegmentsGetSegmentsResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_segments{ src.m_segments }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetSegmentsResponse::GetSegmentsResponse(GetSegmentsResponse&& src) :
    PFSegmentsGetSegmentsResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_segments{ std::move(src.m_segments) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetSegmentsResponse::GetSegmentsResponse(const PFSegmentsGetSegmentsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetSegmentsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsGetSegmentsResponse>(*this);
}

UpdateSegmentRequest::UpdateSegmentRequest() :
    PFSegmentsUpdateSegmentRequest{}
{
}

UpdateSegmentRequest::UpdateSegmentRequest(const UpdateSegmentRequest& src) :
    PFSegmentsUpdateSegmentRequest{ src },
    m_segmentModel{ src.m_segmentModel }
{
    segmentModel = (PFSegmentsSegmentModel const*)&m_segmentModel;
}

UpdateSegmentRequest::UpdateSegmentRequest(UpdateSegmentRequest&& src) :
    PFSegmentsUpdateSegmentRequest{ src },
    m_segmentModel{ std::move(src.m_segmentModel) }
{
    segmentModel = (PFSegmentsSegmentModel const*)&m_segmentModel;
}

UpdateSegmentRequest::UpdateSegmentRequest(const PFSegmentsUpdateSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SegmentModel", m_segmentModel, segmentModel);
}

JsonValue UpdateSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsUpdateSegmentRequest>(*this);
}

UpdateSegmentResponse::UpdateSegmentResponse() :
    PFSegmentsUpdateSegmentResponse{}
{
}

UpdateSegmentResponse::UpdateSegmentResponse(const UpdateSegmentResponse& src) :
    PFSegmentsUpdateSegmentResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_segmentId{ src.m_segmentId }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

UpdateSegmentResponse::UpdateSegmentResponse(UpdateSegmentResponse&& src) :
    PFSegmentsUpdateSegmentResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

UpdateSegmentResponse::UpdateSegmentResponse(const PFSegmentsUpdateSegmentResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateSegmentResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue UpdateSegmentResponse::ToJson() const
{
    return JsonUtils::ToJson<PFSegmentsUpdateSegmentResponse>(*this);
}

size_t UpdateSegmentResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFSegmentsUpdateSegmentResponse) };
    serializedSize += (m_errorMessage.size() + 1);
    serializedSize += (m_segmentId.size() + 1);
    return serializedSize;
}

void UpdateSegmentResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFSegmentsUpdateSegmentResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFSegmentsUpdateSegmentResponse);
    memcpy(stringBuffer, m_errorMessage.data(), m_errorMessage.size() + 1);
    serializedStruct->errorMessage = stringBuffer;
    stringBuffer += m_errorMessage.size() + 1;
    memcpy(stringBuffer, m_segmentId.data(), m_segmentId.size() + 1);
    serializedStruct->segmentId = stringBuffer;
    stringBuffer += m_segmentId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

} // namespace SegmentsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFSegmentsBanPlayerSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanHours", input.banHours);
    JsonUtils::ObjectAddMember(output, "ReasonForBan", input.reasonForBan);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsDeletePlayerStatisticSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsEmailNotificationSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "EmailTemplateName", input.emailTemplateName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsExecuteAzureFunctionSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AzureFunction", input.azureFunction);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GenerateFunctionExecutedEvents", input.generateFunctionExecutedEvents);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsExecuteCloudScriptSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CloudScriptFunction", input.cloudScriptFunction);
    JsonUtils::ObjectAddMember(output, "CloudScriptPublishResultsToPlayStream", input.cloudScriptPublishResultsToPlayStream);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "FunctionParameterJson", input.functionParameterJson);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsGrantItemSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatelogId", input.catelogId);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "Quantity", input.quantity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsGrantVirtualCurrencySegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsIncrementPlayerStatisticSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IncrementValue", input.incrementValue);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsPushNotificationSegmentAction& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsSegmentTrigger& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanPlayerAction", input.banPlayerAction);
    JsonUtils::ObjectAddMember(output, "DeletePlayerStatisticAction", input.deletePlayerStatisticAction);
    JsonUtils::ObjectAddMember(output, "EmailNotificationAction", input.emailNotificationAction);
    JsonUtils::ObjectAddMember(output, "ExecuteAzureFunctionAction", input.executeAzureFunctionAction);
    JsonUtils::ObjectAddMember(output, "ExecuteCloudScriptAction", input.executeCloudScriptAction);
    JsonUtils::ObjectAddMember(output, "GrantItemAction", input.grantItemAction);
    JsonUtils::ObjectAddMember(output, "GrantVirtualCurrencyAction", input.grantVirtualCurrencyAction);
    JsonUtils::ObjectAddMember(output, "IncrementPlayerStatisticAction", input.incrementPlayerStatisticAction);
    JsonUtils::ObjectAddMember(output, "PushNotificationAction", input.pushNotificationAction);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsAdCampaignSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "CampaignSource", input.campaignSource);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsFirstLoginDateSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "LogInDate", input.logInDate, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsFirstLoginTimespanSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "DurationInMinutes", input.durationInMinutes);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsLastLoginDateSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "LogInDate", input.logInDate, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsLastLoginTimespanSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "DurationInMinutes", input.durationInMinutes);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsLinkedUserAccountSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsLinkedUserAccountHasEmailSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsLocationSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsPushNotificationSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationDevicePlatform", input.pushNotificationDevicePlatform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsStatisticSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "FilterValue", input.filterValue);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "UseCurrentVersion", input.useCurrentVersion);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsTagSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "TagValue", input.tagValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsTotalValueToDateInUSDSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsUserOriginationSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LoginProvider", input.loginProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsValueToDateSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsVirtualCurrencyBalanceSegmentFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "Comparison", input.comparison);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsSegmentAndDefinition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignFilter", input.adCampaignFilter);
    JsonUtils::ObjectAddMember(output, "FirstLoginDateFilter", input.firstLoginDateFilter);
    JsonUtils::ObjectAddMember(output, "FirstLoginFilter", input.firstLoginFilter);
    JsonUtils::ObjectAddMember(output, "LastLoginDateFilter", input.lastLoginDateFilter);
    JsonUtils::ObjectAddMember(output, "LastLoginFilter", input.lastLoginFilter);
    JsonUtils::ObjectAddMember(output, "LinkedUserAccountFilter", input.linkedUserAccountFilter);
    JsonUtils::ObjectAddMember(output, "LinkedUserAccountHasEmailFilter", input.linkedUserAccountHasEmailFilter);
    JsonUtils::ObjectAddMember(output, "LocationFilter", input.locationFilter);
    JsonUtils::ObjectAddMember(output, "PushNotificationFilter", input.pushNotificationFilter);
    JsonUtils::ObjectAddMember(output, "StatisticFilter", input.statisticFilter);
    JsonUtils::ObjectAddMember(output, "TagFilter", input.tagFilter);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSDFilter", input.totalValueToDateInUSDFilter);
    JsonUtils::ObjectAddMember(output, "UserOriginationFilter", input.userOriginationFilter);
    JsonUtils::ObjectAddMember(output, "ValueToDateFilter", input.valueToDateFilter);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalanceFilter", input.virtualCurrencyBalanceFilter);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsSegmentOrDefinition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentAndDefinitions", input.segmentAndDefinitions, input.segmentAndDefinitionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsSegmentModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "EnteredSegmentActions", input.enteredSegmentActions, input.enteredSegmentActionsCount);
    JsonUtils::ObjectAddMember(output, "LastUpdateTime", input.lastUpdateTime, true);
    JsonUtils::ObjectAddMember(output, "LeftSegmentActions", input.leftSegmentActions, input.leftSegmentActionsCount);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    JsonUtils::ObjectAddMember(output, "SegmentOrDefinitions", input.segmentOrDefinitions, input.segmentOrDefinitionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsCreateSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentModel", input.segmentModel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsCreateSegmentResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsDeleteSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsDeleteSegmentsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsGetSegmentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentIds", input.segmentIds, input.segmentIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsGetSegmentsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsUpdateSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SegmentModel", input.segmentModel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFSegmentsUpdateSegmentResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
