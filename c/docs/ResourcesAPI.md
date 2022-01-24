# ResourcesAPI

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ResourcesAPI_resourcesGetResource**](ResourcesAPI.md#ResourcesAPI_resourcesGetResource) | **GET** /resources/{uid} | Get single resource
[**ResourcesAPI_resourcesListResources**](ResourcesAPI.md#ResourcesAPI_resourcesListResources) | **GET** /resources | List resources by type


# **ResourcesAPI_resourcesGetResource**
```c
// Get single resource
//
resources_get_resource_response_t* ResourcesAPI_resourcesGetResource(apiClient_t *apiClient, char * uid);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** |  | 

### Return type

[resources_get_resource_response_t](resources_get_resource_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ResourcesAPI_resourcesListResources**
```c
// List resources by type
//
resources_list_resources_response_t* ResourcesAPI_resourcesListResources(apiClient_t *apiClient, char * type, char * search);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**type** | **char \*** | resource type name. | [optional] 
**search** | **char \*** | search substring to look for in the resource name. | [optional] 

### Return type

[resources_list_resources_response_t](resources_list_resources_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

