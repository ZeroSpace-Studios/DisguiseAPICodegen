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
#include "OpenAPIQuickcalApi.h"

#include "OpenAPID3apiEmptyResponse.h"
#include "OpenAPIQuickcalLineUpCurrentPoseRequest.h"
#include "OpenAPIQuickcalListReferencePointsResponse.h"
#include "OpenAPIQuickcalResetLineUpRequest.h"

namespace OpenAPI
{

/* Lineup the current pose for the selected projector according to the selected reference points

*/
class OPENAPI_API OpenAPIQuickcalApi::QuickcalLineUpCurrentPoseRequest : public Request
{
public:
    virtual ~QuickcalLineUpCurrentPoseRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPIQuickcalLineUpCurrentPoseRequest Body;
};

class OPENAPI_API OpenAPIQuickcalApi::QuickcalLineUpCurrentPoseResponse : public Response
{
public:
    virtual ~QuickcalLineUpCurrentPoseResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPID3apiEmptyResponse Content;
};

/* Returns a list of all reference points

*/
class OPENAPI_API OpenAPIQuickcalApi::QuickcalListReferencePointsRequest : public Request
{
public:
    virtual ~QuickcalListReferencePointsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPIQuickcalApi::QuickcalListReferencePointsResponse : public Response
{
public:
    virtual ~QuickcalListReferencePointsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIQuickcalListReferencePointsResponse Content;
};

/* Resets the lineup of the selected projector

*/
class OPENAPI_API OpenAPIQuickcalApi::QuickcalResetLineUpRequest : public Request
{
public:
    virtual ~QuickcalResetLineUpRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPIQuickcalResetLineUpRequest Body;
};

class OPENAPI_API OpenAPIQuickcalApi::QuickcalResetLineUpResponse : public Response
{
public:
    virtual ~QuickcalResetLineUpResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPID3apiEmptyResponse Content;
};

}