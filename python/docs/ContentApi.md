# openapi_client.ContentApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**content_get_media_metadata**](ContentApi.md#content_get_media_metadata) | **GET** /content/mediametadata/{uid} | Get single media meta data
[**content_list_media_metadata**](ContentApi.md#content_list_media_metadata) | **GET** /content/mediametadata | List media meta data


# **content_get_media_metadata**
> ContentGetMediaMetadataResponse content_get_media_metadata(uid)

Get single media meta data

### Example


```python
import time
import openapi_client
from openapi_client.api import content_api
from openapi_client.model.content_get_media_metadata_response import ContentGetMediaMetadataResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = content_api.ContentApi(api_client)
    uid = "uid_example" # str | 

    # example passing only required values which don't have defaults set
    try:
        # Get single media meta data
        api_response = api_instance.content_get_media_metadata(uid)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ContentApi->content_get_media_metadata: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**|  |

### Return type

[**ContentGetMediaMetadataResponse**](ContentGetMediaMetadataResponse.md)

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

# **content_list_media_metadata**
> ContentListMediaMetadataResponse content_list_media_metadata()

List media meta data

### Example


```python
import time
import openapi_client
from openapi_client.api import content_api
from openapi_client.model.content_list_media_metadata_response import ContentListMediaMetadataResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = content_api.ContentApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List media meta data
        api_response = api_instance.content_list_media_metadata()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ContentApi->content_list_media_metadata: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**ContentListMediaMetadataResponse**](ContentListMediaMetadataResponse.md)

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

