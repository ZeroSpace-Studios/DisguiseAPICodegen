/**
 * d3 API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.4.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIContentImageMetadata.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIContentImageMetadata::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Resolution.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("resolution")); WriteJsonValue(Writer, Resolution.GetValue());
	}
	if (BitsPerPixel.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bitsPerPixel")); WriteJsonValue(Writer, BitsPerPixel.GetValue());
	}
	if (Codec.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("codec")); WriteJsonValue(Writer, Codec.GetValue());
	}
	if (HasAlpha.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("hasAlpha")); WriteJsonValue(Writer, HasAlpha.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIContentImageMetadata::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("resolution"), Resolution);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bitsPerPixel"), BitsPerPixel);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("codec"), Codec);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("hasAlpha"), HasAlpha);

	return ParseSuccess;
}

}
