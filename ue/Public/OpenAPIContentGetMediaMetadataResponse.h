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
#include "OpenAPIContentMediaMetadata.h"

namespace OpenAPI
{

/*
 * OpenAPIContentGetMediaMetadataResponse
 *
 * 
 */
class OPENAPI_API OpenAPIContentGetMediaMetadataResponse : public Model
{
public:
    virtual ~OpenAPIContentGetMediaMetadataResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIContentMediaMetadata> Result;
};

}