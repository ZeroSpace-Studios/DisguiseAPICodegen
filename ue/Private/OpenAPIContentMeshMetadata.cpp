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

#include "OpenAPIContentMeshMetadata.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIContentMeshMetadata::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (NVertices.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("nVertices")); WriteJsonValue(Writer, NVertices.GetValue());
	}
	if (NTriangles.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("nTriangles")); WriteJsonValue(Writer, NTriangles.GetValue());
	}
	if (Centroid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("centroid")); WriteJsonValue(Writer, Centroid.GetValue());
	}
	if (ExtentsMin.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("extentsMin")); WriteJsonValue(Writer, ExtentsMin.GetValue());
	}
	if (ExtentsMax.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("extentsMax")); WriteJsonValue(Writer, ExtentsMax.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIContentMeshMetadata::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nVertices"), NVertices);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("nTriangles"), NTriangles);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("centroid"), Centroid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("extentsMin"), ExtentsMin);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("extentsMax"), ExtentsMax);

	return ParseSuccess;
}

}