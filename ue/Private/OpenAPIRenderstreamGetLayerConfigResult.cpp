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

#include "OpenAPIRenderstreamGetLayerConfigResult.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIRenderstreamGetLayerConfigResult::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (FramerateFractionDivisor.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("framerateFractionDivisor")); WriteJsonValue(Writer, FramerateFractionDivisor.GetValue());
	}
	if (Asset.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("asset")); WriteJsonValue(Writer, Asset.GetValue());
	}
	if (Pool.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pool")); WriteJsonValue(Writer, Pool.GetValue());
	}
	if (ChannelMappings.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("channelMappings")); WriteJsonValue(Writer, ChannelMappings.GetValue());
	}
	if (DefaultAssigner.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("defaultAssigner")); WriteJsonValue(Writer, DefaultAssigner.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRenderstreamGetLayerConfigResult::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("framerateFractionDivisor"), FramerateFractionDivisor);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("asset"), Asset);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pool"), Pool);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("channelMappings"), ChannelMappings);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("defaultAssigner"), DefaultAssigner);

	return ParseSuccess;
}

}
