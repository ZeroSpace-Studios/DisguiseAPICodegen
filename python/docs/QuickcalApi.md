# openapi_client.QuickcalApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**quickcal_line_up_current_pose**](QuickcalApi.md#quickcal_line_up_current_pose) | **POST** /quickcal/lineupcurrentpose | Lineup the current pose for the selected projector according to the selected reference points
[**quickcal_list_reference_points**](QuickcalApi.md#quickcal_list_reference_points) | **GET** /quickcal/referencepoints | Returns a list of all reference points
[**quickcal_reset_line_up**](QuickcalApi.md#quickcal_reset_line_up) | **POST** /quickcal/resetlineup | Resets the lineup of the selected projector


# **quickcal_line_up_current_pose**
> D3apiEmptyResponse quickcal_line_up_current_pose(body)

Lineup the current pose for the selected projector according to the selected reference points

### Example


```python
import time
import openapi_client
from openapi_client.api import quickcal_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.quickcal_line_up_current_pose_request import QuickcalLineUpCurrentPoseRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = quickcal_api.QuickcalApi(api_client)
    body = QuickcalLineUpCurrentPoseRequest(
        projector=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
        reference_point=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
        position=D3apiVec2Float(
            x=3.14,
            y=3.14,
        ),
    ) # QuickcalLineUpCurrentPoseRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Lineup the current pose for the selected projector according to the selected reference points
        api_response = api_instance.quickcal_line_up_current_pose(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling QuickcalApi->quickcal_line_up_current_pose: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**QuickcalLineUpCurrentPoseRequest**](QuickcalLineUpCurrentPoseRequest.md)|  |

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

# **quickcal_list_reference_points**
> QuickcalListReferencePointsResponse quickcal_list_reference_points()

Returns a list of all reference points

### Example


```python
import time
import openapi_client
from openapi_client.api import quickcal_api
from openapi_client.model.quickcal_list_reference_points_response import QuickcalListReferencePointsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = quickcal_api.QuickcalApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns a list of all reference points
        api_response = api_instance.quickcal_list_reference_points()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling QuickcalApi->quickcal_list_reference_points: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**QuickcalListReferencePointsResponse**](QuickcalListReferencePointsResponse.md)

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

# **quickcal_reset_line_up**
> D3apiEmptyResponse quickcal_reset_line_up(body)

Resets the lineup of the selected projector

### Example


```python
import time
import openapi_client
from openapi_client.api import quickcal_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.quickcal_reset_line_up_request import QuickcalResetLineUpRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = quickcal_api.QuickcalApi(api_client)
    body = QuickcalResetLineUpRequest(
        projector=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
    ) # QuickcalResetLineUpRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Resets the lineup of the selected projector
        api_response = api_instance.quickcal_reset_line_up(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling QuickcalApi->quickcal_reset_line_up: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**QuickcalResetLineUpRequest**](QuickcalResetLineUpRequest.md)|  |

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

