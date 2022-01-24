# openapi_client.CameraCalibrationApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**camera_calibration_add_observation**](CameraCalibrationApi.md#camera_calibration_add_observation) | **POST** /cameracalibration/addobservation | Add Observation
[**camera_calibration_enable_observation**](CameraCalibrationApi.md#camera_calibration_enable_observation) | **POST** /cameracalibration/enableobservation | Enable Observation
[**camera_calibration_get_mr_set**](CameraCalibrationApi.md#camera_calibration_get_mr_set) | **GET** /cameracalibration/mrsets/{mrsetuid} | Get single MR set
[**camera_calibration_get_observation_progress**](CameraCalibrationApi.md#camera_calibration_get_observation_progress) | **GET** /cameracalibration/observationprogress | Get Observation progress state
[**camera_calibration_list_mr_sets**](CameraCalibrationApi.md#camera_calibration_list_mr_sets) | **GET** /cameracalibration/mrsets | List MR sets
[**camera_calibration_reset_all_observations**](CameraCalibrationApi.md#camera_calibration_reset_all_observations) | **POST** /cameracalibration/resetallobservations | Reset Observations


# **camera_calibration_add_observation**
> bool, date, datetime, dict, float, int, list, str, none_type camera_calibration_add_observation(body)

Add Observation

### Example


```python
import time
import openapi_client
from openapi_client.api import camera_calibration_api
from openapi_client.model.cameracalibration_add_observation_request import CameracalibrationAddObservationRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = camera_calibration_api.CameraCalibrationApi(api_client)
    body = CameracalibrationAddObservationRequest(
        camera_uid="camera_uid_example",
    ) # CameracalibrationAddObservationRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Add Observation
        api_response = api_instance.camera_calibration_add_observation(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling CameraCalibrationApi->camera_calibration_add_observation: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CameracalibrationAddObservationRequest**](CameracalibrationAddObservationRequest.md)|  |

### Return type

**bool, date, datetime, dict, float, int, list, str, none_type**

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

# **camera_calibration_enable_observation**
> CameracalibrationEnableObservationResponse camera_calibration_enable_observation(body)

Enable Observation

### Example


```python
import time
import openapi_client
from openapi_client.api import camera_calibration_api
from openapi_client.model.cameracalibration_enable_observation_request import CameracalibrationEnableObservationRequest
from openapi_client.model.cameracalibration_enable_observation_response import CameracalibrationEnableObservationResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = camera_calibration_api.CameraCalibrationApi(api_client)
    body = CameracalibrationEnableObservationRequest(
        observation_uid="observation_uid_example",
        enabled=True,
    ) # CameracalibrationEnableObservationRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Enable Observation
        api_response = api_instance.camera_calibration_enable_observation(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling CameraCalibrationApi->camera_calibration_enable_observation: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CameracalibrationEnableObservationRequest**](CameracalibrationEnableObservationRequest.md)|  |

### Return type

[**CameracalibrationEnableObservationResponse**](CameracalibrationEnableObservationResponse.md)

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

# **camera_calibration_get_mr_set**
> CameracalibrationGetMRSetResponse camera_calibration_get_mr_set(mrsetuid)

Get single MR set

### Example


```python
import time
import openapi_client
from openapi_client.api import camera_calibration_api
from openapi_client.model.cameracalibration_get_mr_set_response import CameracalibrationGetMRSetResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = camera_calibration_api.CameraCalibrationApi(api_client)
    mrsetuid = "mrsetuid_example" # str | MR Set UID

    # example passing only required values which don't have defaults set
    try:
        # Get single MR set
        api_response = api_instance.camera_calibration_get_mr_set(mrsetuid)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling CameraCalibrationApi->camera_calibration_get_mr_set: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **mrsetuid** | **str**| MR Set UID |

### Return type

[**CameracalibrationGetMRSetResponse**](CameracalibrationGetMRSetResponse.md)

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

# **camera_calibration_get_observation_progress**
> CameracalibrationGetObservationProgressResponse camera_calibration_get_observation_progress()

Get Observation progress state

### Example


```python
import time
import openapi_client
from openapi_client.api import camera_calibration_api
from openapi_client.model.cameracalibration_get_observation_progress_response import CameracalibrationGetObservationProgressResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = camera_calibration_api.CameraCalibrationApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Get Observation progress state
        api_response = api_instance.camera_calibration_get_observation_progress()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling CameraCalibrationApi->camera_calibration_get_observation_progress: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**CameracalibrationGetObservationProgressResponse**](CameracalibrationGetObservationProgressResponse.md)

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

# **camera_calibration_list_mr_sets**
> CameracalibrationListMRSetsResponse camera_calibration_list_mr_sets()

List MR sets

### Example


```python
import time
import openapi_client
from openapi_client.api import camera_calibration_api
from openapi_client.model.cameracalibration_list_mr_sets_response import CameracalibrationListMRSetsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = camera_calibration_api.CameraCalibrationApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List MR sets
        api_response = api_instance.camera_calibration_list_mr_sets()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling CameraCalibrationApi->camera_calibration_list_mr_sets: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**CameracalibrationListMRSetsResponse**](CameracalibrationListMRSetsResponse.md)

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

# **camera_calibration_reset_all_observations**
> bool, date, datetime, dict, float, int, list, str, none_type camera_calibration_reset_all_observations(body)

Reset Observations

### Example


```python
import time
import openapi_client
from openapi_client.api import camera_calibration_api
from openapi_client.model.cameracalibration_reset_all_observations_request import CameracalibrationResetAllObservationsRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = camera_calibration_api.CameraCalibrationApi(api_client)
    body = CameracalibrationResetAllObservationsRequest(
        camera_uid="camera_uid_example",
    ) # CameracalibrationResetAllObservationsRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Reset Observations
        api_response = api_instance.camera_calibration_reset_all_observations(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling CameraCalibrationApi->camera_calibration_reset_all_observations: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**CameracalibrationResetAllObservationsRequest**](CameracalibrationResetAllObservationsRequest.md)|  |

### Return type

**bool, date, datetime, dict, float, int, list, str, none_type**

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

