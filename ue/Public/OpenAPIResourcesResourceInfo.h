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

#pragma once

#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

/*
 * OpenAPIResourcesResourceInfo
 *
 * 
 */
class OPENAPI_API OpenAPIResourcesResourceInfo : public Model
{
public:
    virtual ~OpenAPIResourcesResourceInfo() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Uid;
	TOptional<FString> Name;
	TOptional<FString> Path;
	TOptional<FString> Type;
};

}
