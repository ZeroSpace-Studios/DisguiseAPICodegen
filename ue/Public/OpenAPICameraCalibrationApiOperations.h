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
#include "OpenAPICameraCalibrationApi.h"

#include "OpenAPICameracalibrationAddObservationRequest.h"
#include "OpenAPICameracalibrationEnableObservationRequest.h"
#include "OpenAPICameracalibrationEnableObservationResponse.h"
#include "OpenAPICameracalibrationGetMRSetResponse.h"
#include "OpenAPICameracalibrationGetObservationProgressResponse.h"
#include "OpenAPICameracalibrationListMRSetsResponse.h"
#include "OpenAPICameracalibrationResetAllObservationsRequest.h"

namespace OpenAPI
{

/* Add Observation

*/
class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationAddObservationRequest : public Request
{
public:
    virtual ~CameraCalibrationAddObservationRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPICameracalibrationAddObservationRequest Body;
};

class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationAddObservationResponse : public Response
{
public:
    virtual ~CameraCalibrationAddObservationResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TSharedPtr<FJsonObject> Content;
};

/* Enable Observation

*/
class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationEnableObservationRequest : public Request
{
public:
    virtual ~CameraCalibrationEnableObservationRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPICameracalibrationEnableObservationRequest Body;
};

class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationEnableObservationResponse : public Response
{
public:
    virtual ~CameraCalibrationEnableObservationResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICameracalibrationEnableObservationResponse Content;
};

/* Get single MR set

*/
class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationGetMRSetRequest : public Request
{
public:
    virtual ~CameraCalibrationGetMRSetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* MR Set UID */
	FString Mrsetuid;
};

class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationGetMRSetResponse : public Response
{
public:
    virtual ~CameraCalibrationGetMRSetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICameracalibrationGetMRSetResponse Content;
};

/* Get Observation progress state

*/
class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationGetObservationProgressRequest : public Request
{
public:
    virtual ~CameraCalibrationGetObservationProgressRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationGetObservationProgressResponse : public Response
{
public:
    virtual ~CameraCalibrationGetObservationProgressResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICameracalibrationGetObservationProgressResponse Content;
};

/* List MR sets

*/
class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationListMRSetsRequest : public Request
{
public:
    virtual ~CameraCalibrationListMRSetsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

};

class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationListMRSetsResponse : public Response
{
public:
    virtual ~CameraCalibrationListMRSetsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICameracalibrationListMRSetsResponse Content;
};

/* Reset Observations

*/
class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationResetAllObservationsRequest : public Request
{
public:
    virtual ~CameraCalibrationResetAllObservationsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	OpenAPICameracalibrationResetAllObservationsRequest Body;
};

class OPENAPI_API OpenAPICameraCalibrationApi::CameraCalibrationResetAllObservationsResponse : public Response
{
public:
    virtual ~CameraCalibrationResetAllObservationsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TSharedPtr<FJsonObject> Content;
};

}
