/**
 * d3 API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 2.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIMixedrealityObservationType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIMixedrealityObservationType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIMixedrealityObservationType::Values::Primary:
		return TEXT("Primary");
	case OpenAPIMixedrealityObservationType::Values::Secondary:
		return TEXT("Secondary");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIMixedrealityObservationType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIMixedrealityObservationType::EnumToString(const OpenAPIMixedrealityObservationType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIMixedrealityObservationType::Values& Value)
{
	static TMap<FString, OpenAPIMixedrealityObservationType::Values> StringToEnum = { 
		{ TEXT("Primary"), OpenAPIMixedrealityObservationType::Values::Primary },
		{ TEXT("Secondary"), OpenAPIMixedrealityObservationType::Values::Secondary }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIMixedrealityObservationType::EnumFromString(const FString& EnumAsString, OpenAPIMixedrealityObservationType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIMixedrealityObservationType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIMixedrealityObservationType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIMixedrealityObservationType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIMixedrealityObservationType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIMixedrealityObservationType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
