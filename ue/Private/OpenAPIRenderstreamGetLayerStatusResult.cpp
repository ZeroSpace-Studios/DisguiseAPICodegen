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

#include "OpenAPIRenderstreamGetLayerStatusResult.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamGetLayerStatusResult::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Reference.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("reference")); WriteJsonValue(Writer, Reference.GetValue());
	}
	if (Workload.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("workload")); WriteJsonValue(Writer, Workload.GetValue());
	}
	if (Streams.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("streams")); WriteJsonValue(Writer, Streams.GetValue());
	}
	if (AssetErrors.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("assetErrors")); WriteJsonValue(Writer, AssetErrors.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamGetLayerStatusResult::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("reference"), Reference);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("workload"), Workload);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("streams"), Streams);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("assetErrors"), AssetErrors);

	return ParseSuccess;
}

}
