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
#include "OpenAPITransportGoToTrackInfo.h"

namespace OpenAPI
{

/*
 * OpenAPITransportGoToTrackRequest
 *
 * 
 */
class OPENAPI_API OpenAPITransportGoToTrackRequest : public Model
{
public:
    virtual ~OpenAPITransportGoToTrackRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPITransportGoToTrackInfo>> Transports;
};

}