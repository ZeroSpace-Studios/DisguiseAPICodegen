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

#include "OpenAPIRenderstreamGetClusterResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamGetClusterResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Result.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("result")); WriteJsonValue(Writer, Result.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamGetClusterResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("result"), Result);

	return ParseSuccess;
}

}
