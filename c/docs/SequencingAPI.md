# SequencingAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SequencingAPI_sequencingChangeIndirections**](SequencingAPI.md#SequencingAPI_sequencingChangeIndirections) | **POST** /sequencing/changeindirections | Trigger a change to one or more indirections
[**SequencingAPI_sequencingListAvailableResources**](SequencingAPI.md#SequencingAPI_sequencingListAvailableResources) | **GET** /sequencing/indirectionresources | Get the available resources for a given indirection
[**SequencingAPI_sequencingListIndirections**](SequencingAPI.md#SequencingAPI_sequencingListIndirections) | **GET** /sequencing/indirections | List all indirections


# **SequencingAPI_sequencingChangeIndirections**
```c
// Trigger a change to one or more indirections
//
d3api_empty_response_t* SequencingAPI_sequencingChangeIndirections(apiClient_t *apiClient, sequencing_change_indirections_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[sequencing_change_indirections_request_t](sequencing_change_indirections_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SequencingAPI_sequencingListAvailableResources**
```c
// Get the available resources for a given indirection
//
sequencing_list_available_resources_response_t* SequencingAPI_sequencingListAvailableResources(apiClient_t *apiClient, char * uid, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** | Unique identifier. | [optional] 
**name** | **char \*** | Unqualified name. | [optional] 

### Return type

[sequencing_list_available_resources_response_t](sequencing_list_available_resources_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SequencingAPI_sequencingListIndirections**
```c
// List all indirections
//
sequencing_list_indirections_response_t* SequencingAPI_sequencingListIndirections(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[sequencing_list_indirections_response_t](sequencing_list_indirections_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

