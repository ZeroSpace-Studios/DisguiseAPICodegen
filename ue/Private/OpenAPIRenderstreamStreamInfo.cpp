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

#include "OpenAPIRenderstreamStreamInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamStreamInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (WorkloadID.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("workloadID")); WriteJsonValue(Writer, WorkloadID.GetValue());
	}
	if (MachineName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("machineName")); WriteJsonValue(Writer, MachineName.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (ReceivingLocally.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("receivingLocally")); WriteJsonValue(Writer, ReceivingLocally.GetValue());
	}
	if (Clipping.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("clipping")); WriteJsonValue(Writer, Clipping.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamStreamInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("workloadID"), WorkloadID);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("machineName"), MachineName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("receivingLocally"), ReceivingLocally);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("clipping"), Clipping);

	return ParseSuccess;
}

}