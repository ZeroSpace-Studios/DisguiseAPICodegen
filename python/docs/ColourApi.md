# openapi_client.ColourApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**colour_list_cdls**](ColourApi.md#colour_list_cdls) | **GET** /colour/cdls | Returns of the list of all CDLs
[**colour_set_cdl**](ColourApi.md#colour_set_cdl) | **POST** /colour/cdl | Sets a CDL


# **colour_list_cdls**
> ColourListCDLsResponse colour_list_cdls()

Returns of the list of all CDLs

### Example


```python
import time
import openapi_client
from openapi_client.api import colour_api
from openapi_client.model.colour_list_cdls_response import ColourListCDLsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = colour_api.ColourApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns of the list of all CDLs
        api_response = api_instance.colour_list_cdls()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ColourApi->colour_list_cdls: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**ColourListCDLsResponse**](ColourListCDLsResponse.md)

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

# **colour_set_cdl**
> D3apiEmptyResponse colour_set_cdl(body)

Sets a CDL

### Example


```python
import time
import openapi_client
from openapi_client.api import colour_api
from openapi_client.model.colour_set_cdl_request import ColourSetCDLRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = colour_api.ColourApi(api_client)
    body = ColourSetCDLRequest(
        cdl=ColourCDLInfo(
            uid="uid_example",
            name="name_example",
            slope=D3apiVec3Float(
                x=3.14,
                y=3.14,
                z=3.14,
            ),
            offset=D3apiVec3Float(
                x=3.14,
                y=3.14,
                z=3.14,
            ),
            power=D3apiVec3Float(
                x=3.14,
                y=3.14,
                z=3.14,
            ),
            saturation=3.14,
        ),
    ) # ColourSetCDLRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Sets a CDL
        api_response = api_instance.colour_set_cdl(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling ColourApi->colour_set_cdl: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ColourSetCDLRequest**](ColourSetCDLRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

