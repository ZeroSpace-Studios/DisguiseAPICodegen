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

#include "OpenAPIRenderstreamWorkloadInstanceInfo.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamWorkloadInstanceInfo::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Workloadid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("workloadid")); WriteJsonValue(Writer, Workloadid.GetValue());
	}
	if (Instanceid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("instanceid")); WriteJsonValue(Writer, Instanceid.GetValue());
	}
	if (ProcessRunning.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("processRunning")); WriteJsonValue(Writer, ProcessRunning.GetValue());
	}
	if (DroppingFrames.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("droppingFrames")); WriteJsonValue(Writer, DroppingFrames.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (DroppingInputFrames.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("droppingInputFrames")); WriteJsonValue(Writer, DroppingInputFrames.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamWorkloadInstanceInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("workloadid"), Workloadid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("instanceid"), Instanceid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("processRunning"), ProcessRunning);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("droppingFrames"), DroppingFrames);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("droppingInputFrames"), DroppingInputFrames);

	return ParseSuccess;
}

}