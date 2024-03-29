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

#include "OpenAPIRenderstreamAssignerInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamAssignerInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Uid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("uid")); WriteJsonValue(Writer, Uid.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Transport.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("transport")); WriteJsonValue(Writer, Transport.GetValue());
	}
	if (Alpha.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("alpha")); WriteJsonValue(Writer, Alpha.GetValue());
	}
	if (OverlapPixels.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("overlapPixels")); WriteJsonValue(Writer, OverlapPixels.GetValue());
	}
	if (PaddingPixels.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("paddingPixels")); WriteJsonValue(Writer, PaddingPixels.GetValue());
	}
	if (PreferredNetwork.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("preferredNetwork")); WriteJsonValue(Writer, PreferredNetwork.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamAssignerInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("uid"), Uid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transport"), Transport);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("alpha"), Alpha);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("overlapPixels"), OverlapPixels);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("paddingPixels"), PaddingPixels);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("preferredNetwork"), PreferredNetwork);

	return ParseSuccess;
}

}
