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
 * OpenAPIRenderstreamClippingRegion
 *
 * 
 */
class OPENAPI_API OpenAPIRenderstreamClippingRegion : public Model
{
public:
    virtual ~OpenAPIRenderstreamClippingRegion() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<float> Left;
	TOptional<float> Right;
	TOptional<float> Top;
	TOptional<float> Bottom;
};

}