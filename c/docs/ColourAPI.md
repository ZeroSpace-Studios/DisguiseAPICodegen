# ColourAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ColourAPI_colourListCDLs**](ColourAPI.md#ColourAPI_colourListCDLs) | **GET** /colour/cdls | Returns of the list of all CDLs
[**ColourAPI_colourSetCDL**](ColourAPI.md#ColourAPI_colourSetCDL) | **POST** /colour/cdl | Sets a CDL


# **ColourAPI_colourListCDLs**
```c
// Returns of the list of all CDLs
//
colour_list_cdls_response_t* ColourAPI_colourListCDLs(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[colour_list_cdls_response_t](colour_list_cdls_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ColourAPI_colourSetCDL**
```c
// Sets a CDL
//
d3api_empty_response_t* ColourAPI_colourSetCDL(apiClient_t *apiClient, colour_set_cdl_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[colour_set_cdl_request_t](colour_set_cdl_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

