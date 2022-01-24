# IndirectionsAPI

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndirectionsAPI_indirectionsGetIndirection**](IndirectionsAPI.md#IndirectionsAPI_indirectionsGetIndirection) | **GET** /indirections/{uid} | Get single indirection
[**IndirectionsAPI_indirectionsListIndirections**](IndirectionsAPI.md#IndirectionsAPI_indirectionsListIndirections) | **GET** /indirections | List all indirections
[**IndirectionsAPI_indirectionsSetIndirections**](IndirectionsAPI.md#IndirectionsAPI_indirectionsSetIndirections) | **POST** /indirections/set | Update one or more indirections
[**IndirectionsAPI_indirectionsSetIndirections2**](IndirectionsAPI.md#IndirectionsAPI_indirectionsSetIndirections2) | **PUT** /indirections | Update one or more indirections


# **IndirectionsAPI_indirectionsGetIndirection**
```c
// Get single indirection
//
indirections_get_indirection_response_t* IndirectionsAPI_indirectionsGetIndirection(apiClient_t *apiClient, char * uid);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** | uid of indirection | 

### Return type

[indirections_get_indirection_response_t](indirections_get_indirection_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndirectionsAPI_indirectionsListIndirections**
```c
// List all indirections
//
indirections_list_indirections_response_t* IndirectionsAPI_indirectionsListIndirections(apiClient_t *apiClient, char * resourceType);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**resourceType** | **char \*** | type of resource. | [optional] 

### Return type

[indirections_list_indirections_response_t](indirections_list_indirections_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndirectionsAPI_indirectionsSetIndirections**
```c
// Update one or more indirections
//
indirections_set_indirections_response_t* IndirectionsAPI_indirectionsSetIndirections(apiClient_t *apiClient, indirections_set_indirections_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[indirections_set_indirections_request_t](indirections_set_indirections_request.md) \*** |  | 

### Return type

[indirections_set_indirections_response_t](indirections_set_indirections_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndirectionsAPI_indirectionsSetIndirections2**
```c
// Update one or more indirections
//
indirections_set_indirections_response_t* IndirectionsAPI_indirectionsSetIndirections2(apiClient_t *apiClient, indirections_set_indirections_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[indirections_set_indirections_request_t](indirections_set_indirections_request.md) \*** |  | 

### Return type

[indirections_set_indirections_response_t](indirections_set_indirections_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

