# ContentAPI

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContentAPI_contentGetMediaMetadata**](ContentAPI.md#ContentAPI_contentGetMediaMetadata) | **GET** /content/mediametadata/{uid} | Get single media meta data
[**ContentAPI_contentListMediaMetadata**](ContentAPI.md#ContentAPI_contentListMediaMetadata) | **GET** /content/mediametadata | List media meta data


# **ContentAPI_contentGetMediaMetadata**
```c
// Get single media meta data
//
content_get_media_metadata_response_t* ContentAPI_contentGetMediaMetadata(apiClient_t *apiClient, char * uid);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** |  | 

### Return type

[content_get_media_metadata_response_t](content_get_media_metadata_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ContentAPI_contentListMediaMetadata**
```c
// List media meta data
//
content_list_media_metadata_response_t* ContentAPI_contentListMediaMetadata(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[content_list_media_metadata_response_t](content_list_media_metadata_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

