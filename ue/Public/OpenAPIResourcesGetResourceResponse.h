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
#include "OpenAPIResourcesResourceInfo.h"

namespace OpenAPI
{

/*
 * OpenAPIResourcesGetResourceResponse
 *
 * 
 */
class OPENAPI_API OpenAPIResourcesGetResourceResponse : public Model
{
public:
    virtual ~OpenAPIResourcesGetResourceResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIResourcesResourceInfo> Result;
};

}