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

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPITrackInfoCrossfadeMode
 *
 * 
 */
class OPENAPI_API OpenAPITrackInfoCrossfadeMode : public Model
{
public:
    virtual ~OpenAPITrackInfoCrossfadeMode() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		Unknown,
		Off,
		Fade,
		TrackSection,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
