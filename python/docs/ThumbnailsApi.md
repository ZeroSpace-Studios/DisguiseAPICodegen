# openapi_client.ThumbnailsApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**thumbnails_get_thumbnail**](ThumbnailsApi.md#thumbnails_get_thumbnail) | **GET** /thumbnail/{uid} | Get thumbnail for a resource


# **thumbnails_get_thumbnail**
> ThumbnailsGetThumbnailResponse thumbnails_get_thumbnail(uid)

Get thumbnail for a resource

### Example


```python
import time
import openapi_client
from openapi_client.api import thumbnails_api
from openapi_client.model.thumbnails_get_thumbnail_response import ThumbnailsGetThumbnailResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = thumbnails_api.ThumbnailsApi(api_client)
    uid = "uid_example" # str | unique resource id
    width = 1 # int | width of thumbnail. (optional)
    height = 1 # int | height of thumbnail. (optional)

    # example passing only required values which don't have defaults set
    try:
        # Get thumbnail for a resource
        api_response = api_instance.thumbnails_get_thumbnail(uid)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ThumbnailsApi->thumbnails_get_thumbnail: %s\n" % e)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # Get thumbnail for a resource
        api_response = api_instance.thumbnails_get_thumbnail(uid, width=width, height=height)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ThumbnailsApi->thumbnails_get_thumbnail: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| unique resource id |
 **width** | **int**| width of thumbnail. | [optional]
 **height** | **int**| height of thumbnail. | [optional]

### Return type

[**ThumbnailsGetThumbnailResponse**](ThumbnailsGetThumbnailResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

