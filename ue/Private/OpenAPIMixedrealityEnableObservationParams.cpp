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

#include "OpenAPIMixedrealityEnableObservationParams.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIMixedrealityEnableObservationParams::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Uid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("uid")); WriteJsonValue(Writer, Uid.GetValue());
	}
	if (Enable.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("enable")); WriteJsonValue(Writer, Enable.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIMixedrealityEnableObservationParams::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("uid"), Uid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("enable"), Enable);

	return ParseSuccess;
}

}