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

#include "OpenAPITransportSetEngagedInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITransportSetEngagedInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Transport.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("transport")); WriteJsonValue(Writer, Transport.GetValue());
	}
	if (Engaged.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("engaged")); WriteJsonValue(Writer, Engaged.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITransportSetEngagedInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transport"), Transport);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("engaged"), Engaged);

	return ParseSuccess;
}

}