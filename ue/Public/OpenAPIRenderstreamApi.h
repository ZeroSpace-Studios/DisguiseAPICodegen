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

#include "CoreMinimal.h"
#include "OpenAPIBaseModel.h"

namespace OpenAPI
{

class OPENAPI_API OpenAPIRenderstreamApi
{
public:
	OpenAPIRenderstreamApi();
	~OpenAPIRenderstreamApi();

	/* Sets the URL Endpoint.
	* Note: several fallback endpoints can be configured in request retry policies, see Request::SetShouldRetry */
	void SetURL(const FString& Url);

	/* Adds global header params to all requests */
	void AddHeaderParam(const FString& Key, const FString& Value);
	void ClearHeaderParams();

	/* Sets the retry manager to the user-defined retry manager. User must manage the lifetime of the retry manager.
	* If no retry manager is specified and a request needs retries, a default retry manager will be used.
	* See also: Request::SetShouldRetry */
	void SetHttpRetryManager(FHttpRetrySystem::FManager& RetryManager);
	FHttpRetrySystem::FManager& GetHttpRetryManager();

	class RenderstreamFailoverRenderMachineRequest;
	class RenderstreamFailoverRenderMachineResponse;
	class RenderstreamFailoverRenderMachine2Request;
	class RenderstreamFailoverRenderMachine2Response;
	class RenderstreamFailoverWorkloadInstanceRequest;
	class RenderstreamFailoverWorkloadInstanceResponse;
	class RenderstreamFailoverWorkloadInstance2Request;
	class RenderstreamFailoverWorkloadInstance2Response;
	class RenderstreamGetClusterRequest;
	class RenderstreamGetClusterResponse;
	class RenderstreamGetRenderMachineRequest;
	class RenderstreamGetRenderMachineResponse;
	class RenderstreamGetWorkloadRequest;
	class RenderstreamGetWorkloadResponse;
	class RenderstreamGetWorkloadInstanceRequest;
	class RenderstreamGetWorkloadInstanceResponse;
	class RenderstreamListClustersRequest;
	class RenderstreamListClustersResponse;
	class RenderstreamListRenderMachinesRequest;
	class RenderstreamListRenderMachinesResponse;
	class RenderstreamListWorkloadsRequest;
	class RenderstreamListWorkloadsResponse;
	class RenderstreamStartWorkloadRequest;
	class RenderstreamStartWorkloadResponse;
	class RenderstreamStopWorkloadRequest;
	class RenderstreamStopWorkloadResponse;
	class RenderstreamSyncWorkloadRequest;
	class RenderstreamSyncWorkloadResponse;
	
    DECLARE_DELEGATE_OneParam(FRenderstreamFailoverRenderMachineDelegate, const RenderstreamFailoverRenderMachineResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamFailoverRenderMachine2Delegate, const RenderstreamFailoverRenderMachine2Response&);
    DECLARE_DELEGATE_OneParam(FRenderstreamFailoverWorkloadInstanceDelegate, const RenderstreamFailoverWorkloadInstanceResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamFailoverWorkloadInstance2Delegate, const RenderstreamFailoverWorkloadInstance2Response&);
    DECLARE_DELEGATE_OneParam(FRenderstreamGetClusterDelegate, const RenderstreamGetClusterResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamGetRenderMachineDelegate, const RenderstreamGetRenderMachineResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamGetWorkloadDelegate, const RenderstreamGetWorkloadResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamGetWorkloadInstanceDelegate, const RenderstreamGetWorkloadInstanceResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamListClustersDelegate, const RenderstreamListClustersResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamListRenderMachinesDelegate, const RenderstreamListRenderMachinesResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamListWorkloadsDelegate, const RenderstreamListWorkloadsResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamStartWorkloadDelegate, const RenderstreamStartWorkloadResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamStopWorkloadDelegate, const RenderstreamStopWorkloadResponse&);
    DECLARE_DELEGATE_OneParam(FRenderstreamSyncWorkloadDelegate, const RenderstreamSyncWorkloadResponse&);
    
    FHttpRequestPtr RenderstreamFailoverRenderMachine(const RenderstreamFailoverRenderMachineRequest& Request, const FRenderstreamFailoverRenderMachineDelegate& Delegate = FRenderstreamFailoverRenderMachineDelegate()) const;
    FHttpRequestPtr RenderstreamFailoverRenderMachine2(const RenderstreamFailoverRenderMachine2Request& Request, const FRenderstreamFailoverRenderMachine2Delegate& Delegate = FRenderstreamFailoverRenderMachine2Delegate()) const;
    FHttpRequestPtr RenderstreamFailoverWorkloadInstance(const RenderstreamFailoverWorkloadInstanceRequest& Request, const FRenderstreamFailoverWorkloadInstanceDelegate& Delegate = FRenderstreamFailoverWorkloadInstanceDelegate()) const;
    FHttpRequestPtr RenderstreamFailoverWorkloadInstance2(const RenderstreamFailoverWorkloadInstance2Request& Request, const FRenderstreamFailoverWorkloadInstance2Delegate& Delegate = FRenderstreamFailoverWorkloadInstance2Delegate()) const;
    FHttpRequestPtr RenderstreamGetCluster(const RenderstreamGetClusterRequest& Request, const FRenderstreamGetClusterDelegate& Delegate = FRenderstreamGetClusterDelegate()) const;
    FHttpRequestPtr RenderstreamGetRenderMachine(const RenderstreamGetRenderMachineRequest& Request, const FRenderstreamGetRenderMachineDelegate& Delegate = FRenderstreamGetRenderMachineDelegate()) const;
    FHttpRequestPtr RenderstreamGetWorkload(const RenderstreamGetWorkloadRequest& Request, const FRenderstreamGetWorkloadDelegate& Delegate = FRenderstreamGetWorkloadDelegate()) const;
    FHttpRequestPtr RenderstreamGetWorkloadInstance(const RenderstreamGetWorkloadInstanceRequest& Request, const FRenderstreamGetWorkloadInstanceDelegate& Delegate = FRenderstreamGetWorkloadInstanceDelegate()) const;
    FHttpRequestPtr RenderstreamListClusters(const RenderstreamListClustersRequest& Request, const FRenderstreamListClustersDelegate& Delegate = FRenderstreamListClustersDelegate()) const;
    FHttpRequestPtr RenderstreamListRenderMachines(const RenderstreamListRenderMachinesRequest& Request, const FRenderstreamListRenderMachinesDelegate& Delegate = FRenderstreamListRenderMachinesDelegate()) const;
    FHttpRequestPtr RenderstreamListWorkloads(const RenderstreamListWorkloadsRequest& Request, const FRenderstreamListWorkloadsDelegate& Delegate = FRenderstreamListWorkloadsDelegate()) const;
    FHttpRequestPtr RenderstreamStartWorkload(const RenderstreamStartWorkloadRequest& Request, const FRenderstreamStartWorkloadDelegate& Delegate = FRenderstreamStartWorkloadDelegate()) const;
    FHttpRequestPtr RenderstreamStopWorkload(const RenderstreamStopWorkloadRequest& Request, const FRenderstreamStopWorkloadDelegate& Delegate = FRenderstreamStopWorkloadDelegate()) const;
    FHttpRequestPtr RenderstreamSyncWorkload(const RenderstreamSyncWorkloadRequest& Request, const FRenderstreamSyncWorkloadDelegate& Delegate = FRenderstreamSyncWorkloadDelegate()) const;
    
private:
    void OnRenderstreamFailoverRenderMachineResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamFailoverRenderMachineDelegate Delegate) const;
    void OnRenderstreamFailoverRenderMachine2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamFailoverRenderMachine2Delegate Delegate) const;
    void OnRenderstreamFailoverWorkloadInstanceResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamFailoverWorkloadInstanceDelegate Delegate) const;
    void OnRenderstreamFailoverWorkloadInstance2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamFailoverWorkloadInstance2Delegate Delegate) const;
    void OnRenderstreamGetClusterResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamGetClusterDelegate Delegate) const;
    void OnRenderstreamGetRenderMachineResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamGetRenderMachineDelegate Delegate) const;
    void OnRenderstreamGetWorkloadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamGetWorkloadDelegate Delegate) const;
    void OnRenderstreamGetWorkloadInstanceResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamGetWorkloadInstanceDelegate Delegate) const;
    void OnRenderstreamListClustersResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamListClustersDelegate Delegate) const;
    void OnRenderstreamListRenderMachinesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamListRenderMachinesDelegate Delegate) const;
    void OnRenderstreamListWorkloadsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamListWorkloadsDelegate Delegate) const;
    void OnRenderstreamStartWorkloadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamStartWorkloadDelegate Delegate) const;
    void OnRenderstreamStopWorkloadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamStopWorkloadDelegate Delegate) const;
    void OnRenderstreamSyncWorkloadResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FRenderstreamSyncWorkloadDelegate Delegate) const;
    
	FHttpRequestRef CreateHttpRequest(const Request& Request) const;
	bool IsValid() const;
	void HandleResponse(FHttpResponsePtr HttpResponse, bool bSucceeded, Response& InOutResponse) const;

	FString Url;
	TMap<FString,FString> AdditionalHeaderParams;
	mutable FHttpRetrySystem::FManager* RetryManager = nullptr;
	mutable TUniquePtr<HttpRetryManager> DefaultRetryManager;
};

}