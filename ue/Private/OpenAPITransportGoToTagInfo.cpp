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

#include "OpenAPITransportGoToTagInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITransportGoToTagInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Transport.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("transport")); WriteJsonValue(Writer, Transport.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (Value.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value.GetValue());
	}
	if (AllowGlobalJump.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("allowGlobalJump")); WriteJsonValue(Writer, AllowGlobalJump.GetValue());
	}
	if (Playmode.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("playmode")); WriteJsonValue(Writer, Playmode.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITransportGoToTagInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transport"), Transport);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("allowGlobalJump"), AllowGlobalJump);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("playmode"), Playmode);

	return ParseSuccess;
}

}