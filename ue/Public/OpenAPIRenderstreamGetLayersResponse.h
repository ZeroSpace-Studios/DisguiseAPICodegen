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
#include "OpenAPIRenderstreamRenderStreamInfo.h"
#include "OpenAPIRpcStatus.h"

namespace OpenAPI
{

/*
 * OpenAPIRenderstreamGetLayersResponse
 *
 * 
 */
class OPENAPI_API OpenAPIRenderstreamGetLayersResponse : public Model
{
public:
    virtual ~OpenAPIRenderstreamGetLayersResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIRpcStatus> Status;
	TOptional<TArray<OpenAPIRenderstreamRenderStreamInfo>> Result;
};

}
