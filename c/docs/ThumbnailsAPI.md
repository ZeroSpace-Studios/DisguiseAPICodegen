# ThumbnailsAPI

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ThumbnailsAPI_thumbnailsGetThumbnail**](ThumbnailsAPI.md#ThumbnailsAPI_thumbnailsGetThumbnail) | **GET** /thumbnail/{uid} | Get thumbnail for a resource


# **ThumbnailsAPI_thumbnailsGetThumbnail**
```c
// Get thumbnail for a resource
//
thumbnails_get_thumbnail_response_t* ThumbnailsAPI_thumbnailsGetThumbnail(apiClient_t *apiClient, char * uid, long width, long height);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** | unique resource id | 
**width** | **long** | width of thumbnail. | [optional] 
**height** | **long** | height of thumbnail. | [optional] 

### Return type

[thumbnails_get_thumbnail_response_t](thumbnails_get_thumbnail_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

