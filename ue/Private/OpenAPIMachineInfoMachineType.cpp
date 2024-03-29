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

#include "OpenAPIMachineInfoMachineType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIMachineInfoMachineType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIMachineInfoMachineType::Values::Unknown:
		return TEXT("Unknown");
	case OpenAPIMachineInfoMachineType::Values::Designer:
		return TEXT("Designer");
	case OpenAPIMachineInfoMachineType::Values::V25:
		return TEXT("V2_5");
	case OpenAPIMachineInfoMachineType::Values::Pro4x2:
		return TEXT("Pro4x2");
	case OpenAPIMachineInfoMachineType::Values::Pro4x4:
		return TEXT("Pro4x4");
	case OpenAPIMachineInfoMachineType::Values::Plus2x2:
		return TEXT("Plus2x2");
	case OpenAPIMachineInfoMachineType::Values::Pro4x4NoVfcs:
		return TEXT("Pro4x4NoVfcs");
	case OpenAPIMachineInfoMachineType::Values::Node:
		return TEXT("Node");
	case OpenAPIMachineInfoMachineType::Values::Pro2x4:
		return TEXT("Pro2x4");
	case OpenAPIMachineInfoMachineType::Values::Gx1:
		return TEXT("Gx1");
	case OpenAPIMachineInfoMachineType::Values::Gx2:
		return TEXT("Gx2");
	case OpenAPIMachineInfoMachineType::Values::SoloV1:
		return TEXT("SoloV1");
	case OpenAPIMachineInfoMachineType::Values::Vx4:
		return TEXT("Vx4");
	case OpenAPIMachineInfoMachineType::Values::Gx2c:
		return TEXT("Gx2c");
	case OpenAPIMachineInfoMachineType::Values::Rx:
		return TEXT("Rx");
	case OpenAPIMachineInfoMachineType::Values::RxII:
		return TEXT("RxII");
	case OpenAPIMachineInfoMachineType::Values::Vx1:
		return TEXT("Vx1");
	case OpenAPIMachineInfoMachineType::Values::Vx2:
		return TEXT("Vx2");
	case OpenAPIMachineInfoMachineType::Values::Vx4Plus:
		return TEXT("Vx4Plus");
	case OpenAPIMachineInfoMachineType::Values::Gx3:
		return TEXT("Gx3");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIMachineInfoMachineType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIMachineInfoMachineType::EnumToString(const OpenAPIMachineInfoMachineType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIMachineInfoMachineType::Values& Value)
{
	static TMap<FString, OpenAPIMachineInfoMachineType::Values> StringToEnum = { 
		{ TEXT("Unknown"), OpenAPIMachineInfoMachineType::Values::Unknown },
		{ TEXT("Designer"), OpenAPIMachineInfoMachineType::Values::Designer },
		{ TEXT("V2_5"), OpenAPIMachineInfoMachineType::Values::V25 },
		{ TEXT("Pro4x2"), OpenAPIMachineInfoMachineType::Values::Pro4x2 },
		{ TEXT("Pro4x4"), OpenAPIMachineInfoMachineType::Values::Pro4x4 },
		{ TEXT("Plus2x2"), OpenAPIMachineInfoMachineType::Values::Plus2x2 },
		{ TEXT("Pro4x4NoVfcs"), OpenAPIMachineInfoMachineType::Values::Pro4x4NoVfcs },
		{ TEXT("Node"), OpenAPIMachineInfoMachineType::Values::Node },
		{ TEXT("Pro2x4"), OpenAPIMachineInfoMachineType::Values::Pro2x4 },
		{ TEXT("Gx1"), OpenAPIMachineInfoMachineType::Values::Gx1 },
		{ TEXT("Gx2"), OpenAPIMachineInfoMachineType::Values::Gx2 },
		{ TEXT("SoloV1"), OpenAPIMachineInfoMachineType::Values::SoloV1 },
		{ TEXT("Vx4"), OpenAPIMachineInfoMachineType::Values::Vx4 },
		{ TEXT("Gx2c"), OpenAPIMachineInfoMachineType::Values::Gx2c },
		{ TEXT("Rx"), OpenAPIMachineInfoMachineType::Values::Rx },
		{ TEXT("RxII"), OpenAPIMachineInfoMachineType::Values::RxII },
		{ TEXT("Vx1"), OpenAPIMachineInfoMachineType::Values::Vx1 },
		{ TEXT("Vx2"), OpenAPIMachineInfoMachineType::Values::Vx2 },
		{ TEXT("Vx4Plus"), OpenAPIMachineInfoMachineType::Values::Vx4Plus },
		{ TEXT("Gx3"), OpenAPIMachineInfoMachineType::Values::Gx3 }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIMachineInfoMachineType::EnumFromString(const FString& EnumAsString, OpenAPIMachineInfoMachineType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIMachineInfoMachineType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIMachineInfoMachineType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIMachineInfoMachineType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIMachineInfoMachineType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIMachineInfoMachineType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
