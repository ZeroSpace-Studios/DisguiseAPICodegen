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
#include "OpenAPID3apiLocator.h"

namespace OpenAPI
{

/*
 * OpenAPIRenderstreamStopLayersRequest
 *
 * 
 */
class OPENAPI_API OpenAPIRenderstreamStopLayersRequest : public Model
{
public:
    virtual ~OpenAPIRenderstreamStopLayersRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPID3apiLocator>> Layers;
};

}