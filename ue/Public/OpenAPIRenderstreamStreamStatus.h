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
 * OpenAPIRenderstreamStreamStatus
 *
 * 
 */
class OPENAPI_API OpenAPIRenderstreamStreamStatus : public Model
{
public:
    virtual ~OpenAPIRenderstreamStreamStatus() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<bool> SubscriptionWanted;
	TOptional<bool> SubscribeSuccessful;
	TOptional<double> TLastDropped;
	TOptional<double> TLastError;
	TOptional<FString> LastErrorMessage;
};

}
