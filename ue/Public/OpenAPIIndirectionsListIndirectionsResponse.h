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
#include "OpenAPIIndirectionsIndirection.h"

namespace OpenAPI
{

/*
 * OpenAPIIndirectionsListIndirectionsResponse
 *
 * 
 */
class OPENAPI_API OpenAPIIndirectionsListIndirectionsResponse : public Model
{
public:
    virtual ~OpenAPIIndirectionsListIndirectionsResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPIIndirectionsIndirection>> Result;
};

}
