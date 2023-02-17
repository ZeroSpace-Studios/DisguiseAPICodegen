# openapi_client.MixedRealityApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**mixed_reality_capture_observation**](MixedRealityApi.md#mixed_reality_capture_observation) | **POST** /mixedreality/captureobservation | Capture an observation on the given camera
[**mixed_reality_capture_progress**](MixedRealityApi.md#mixed_reality_capture_progress) | **GET** /mixedreality/captureprogress | Gets the current capture progress, only one capture can run at once
[**mixed_reality_delete_all_observations**](MixedRealityApi.md#mixed_reality_delete_all_observations) | **POST** /mixedreality/deleteallobservations | Delete all observations for a given spatial calibration
[**mixed_reality_delete_observations**](MixedRealityApi.md#mixed_reality_delete_observations) | **POST** /mixedreality/deleteobservations | Pass a list of observation identifiers to delete
[**mixed_reality_enable_observations**](MixedRealityApi.md#mixed_reality_enable_observations) | **POST** /mixedreality/enableobservations | Pass a list of observation identifiers to enable/disable
[**mixed_reality_get_cameras**](MixedRealityApi.md#mixed_reality_get_cameras) | **GET** /mixedreality/cameras | Returns camera properties of cameras on the current stage
[**mixed_reality_get_mr_sets**](MixedRealityApi.md#mixed_reality_get_mr_sets) | **GET** /mixedreality/mrsets | Returns mixed reality sets on the current stage
[**mixed_reality_list_spatial_calibrations**](MixedRealityApi.md#mixed_reality_list_spatial_calibrations) | **GET** /mixedreality/spatialcalibrations | Returns a list of all spatial calibrations
[**mixed_reality_select_camera**](MixedRealityApi.md#mixed_reality_select_camera) | **POST** /mixedreality/selectcamera | Sets the current camera of an MR Set
[**mixed_reality_select_spatial_calibration**](MixedRealityApi.md#mixed_reality_select_spatial_calibration) | **POST** /mixedreality/selectspatialcalibration | Sets the spatial calibration currently in use by a camera


# **mixed_reality_capture_observation**
> D3apiEmptyResponse mixed_reality_capture_observation(body)

Capture an observation on the given camera

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_capture_observation_request import MixedrealityCaptureObservationRequest
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
    api_instance = mixed_reality_api.MixedRealityApi(api_client)
    body = MixedrealityCaptureObservationRequest(
        camera=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
        spatial_calibration=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
    ) # MixedrealityCaptureObservationRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Capture an observation on the given camera
        api_response = api_instance.mixed_reality_capture_observation(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_capture_observation: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityCaptureObservationRequest**](MixedrealityCaptureObservationRequest.md)|  |

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

# **mixed_reality_capture_progress**
> D3apiBoolResponse mixed_reality_capture_progress()

Gets the current capture progress, only one capture can run at once

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.d3api_bool_response import D3apiBoolResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = mixed_reality_api.MixedRealityApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Gets the current capture progress, only one capture can run at once
        api_response = api_instance.mixed_reality_capture_progress()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_capture_progress: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**D3apiBoolResponse**](D3apiBoolResponse.md)

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

# **mixed_reality_delete_all_observations**
> D3apiEmptyResponse mixed_reality_delete_all_observations(body)

Delete all observations for a given spatial calibration

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.mixedreality_delete_all_observations_request import MixedrealityDeleteAllObservationsRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = mixed_reality_api.MixedRealityApi(api_client)
    body = MixedrealityDeleteAllObservationsRequest(
        spatial_calibration=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
    ) # MixedrealityDeleteAllObservationsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Delete all observations for a given spatial calibration
        api_response = api_instance.mixed_reality_delete_all_observations(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_delete_all_observations: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityDeleteAllObservationsRequest**](MixedrealityDeleteAllObservationsRequest.md)|  |

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

# **mixed_reality_delete_observations**
> D3apiEmptyResponse mixed_reality_delete_observations(body)

Pass a list of observation identifiers to delete

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_delete_observations_request import MixedrealityDeleteObservationsRequest
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
    api_instance = mixed_reality_api.MixedRealityApi(api_client)
    body = MixedrealityDeleteObservationsRequest(
        observations=[
            "observations_example",
        ],
    ) # MixedrealityDeleteObservationsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Pass a list of observation identifiers to delete
        api_response = api_instance.mixed_reality_delete_observations(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_delete_observations: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityDeleteObservationsRequest**](MixedrealityDeleteObservationsRequest.md)|  |

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

# **mixed_reality_enable_observations**
> D3apiEmptyResponse mixed_reality_enable_observations(body)

Pass a list of observation identifiers to enable/disable

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_enable_observations_request import MixedrealityEnableObservationsRequest
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
    api_instance = mixed_reality_api.MixedRealityApi(api_client)
    body = MixedrealityEnableObservationsRequest(
        observations=[
            MixedrealityEnableObservationParams(
                uid="uid_example",
                enable=True,
            ),
        ],
    ) # MixedrealityEnableObservationsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Pass a list of observation identifiers to enable/disable
        api_response = api_instance.mixed_reality_enable_observations(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_enable_observations: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityEnableObservationsRequest**](MixedrealityEnableObservationsRequest.md)|  |

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

# **mixed_reality_get_cameras**
> MixedrealityGetCamerasResponse mixed_reality_get_cameras()

Returns camera properties of cameras on the current stage

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_get_cameras_response import MixedrealityGetCamerasResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = mixed_reality_api.MixedRealityApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns camera properties of cameras on the current stage
        api_response = api_instance.mixed_reality_get_cameras()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_get_cameras: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**MixedrealityGetCamerasResponse**](MixedrealityGetCamerasResponse.md)

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

# **mixed_reality_get_mr_sets**
> MixedrealityGetMRSetsResponse mixed_reality_get_mr_sets()

Returns mixed reality sets on the current stage

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_get_mr_sets_response import MixedrealityGetMRSetsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = mixed_reality_api.MixedRealityApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns mixed reality sets on the current stage
        api_response = api_instance.mixed_reality_get_mr_sets()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_get_mr_sets: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**MixedrealityGetMRSetsResponse**](MixedrealityGetMRSetsResponse.md)

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

# **mixed_reality_list_spatial_calibrations**
> MixedrealityListSpatialCalibrationsResponse mixed_reality_list_spatial_calibrations()

Returns a list of all spatial calibrations

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_list_spatial_calibrations_response import MixedrealityListSpatialCalibrationsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = mixed_reality_api.MixedRealityApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Returns a list of all spatial calibrations
        api_response = api_instance.mixed_reality_list_spatial_calibrations()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_list_spatial_calibrations: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**MixedrealityListSpatialCalibrationsResponse**](MixedrealityListSpatialCalibrationsResponse.md)

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

# **mixed_reality_select_camera**
> D3apiEmptyResponse mixed_reality_select_camera(body)

Sets the current camera of an MR Set

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_select_camera_request import MixedrealitySelectCameraRequest
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
    api_instance = mixed_reality_api.MixedRealityApi(api_client)
    body = MixedrealitySelectCameraRequest(
        mr_set=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
        camera_override=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
    ) # MixedrealitySelectCameraRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Sets the current camera of an MR Set
        api_response = api_instance.mixed_reality_select_camera(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_select_camera: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealitySelectCameraRequest**](MixedrealitySelectCameraRequest.md)|  |

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

# **mixed_reality_select_spatial_calibration**
> D3apiEmptyResponse mixed_reality_select_spatial_calibration(body)

Sets the spatial calibration currently in use by a camera

### Example


```python
import time
import openapi_client
from openapi_client.api import mixed_reality_api
from openapi_client.model.mixedreality_select_spatial_calibration_request import MixedrealitySelectSpatialCalibrationRequest
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
    api_instance = mixed_reality_api.MixedRealityApi(api_client)
    body = MixedrealitySelectSpatialCalibrationRequest(
        camera=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
        spatial_calibration=D3apiLocator(
            uid="uid_example",
            name="name_example",
        ),
    ) # MixedrealitySelectSpatialCalibrationRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Sets the spatial calibration currently in use by a camera
        api_response = api_instance.mixed_reality_select_spatial_calibration(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling MixedRealityApi->mixed_reality_select_spatial_calibration: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealitySelectSpatialCalibrationRequest**](MixedrealitySelectSpatialCalibrationRequest.md)|  |

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

