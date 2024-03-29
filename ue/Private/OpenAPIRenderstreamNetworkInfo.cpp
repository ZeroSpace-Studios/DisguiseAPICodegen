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

#include "OpenAPIRenderstreamNetworkInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamNetworkInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Ip.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ip")); WriteJsonValue(Writer, Ip.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamNetworkInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ip"), Ip);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);

	return ParseSuccess;
}

}
