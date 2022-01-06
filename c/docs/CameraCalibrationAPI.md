# CameraCalibrationAPI

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CameraCalibrationAPI_cameraCalibrationAddObservation**](CameraCalibrationAPI.md#CameraCalibrationAPI_cameraCalibrationAddObservation) | **POST** /cameracalibration/addobservation | Add Observation
[**CameraCalibrationAPI_cameraCalibrationEnableObservation**](CameraCalibrationAPI.md#CameraCalibrationAPI_cameraCalibrationEnableObservation) | **POST** /cameracalibration/enableobservation | Enable Observation
[**CameraCalibrationAPI_cameraCalibrationGetMRSet**](CameraCalibrationAPI.md#CameraCalibrationAPI_cameraCalibrationGetMRSet) | **GET** /cameracalibration/mrsets/{mrsetuid} | Get single MR set
[**CameraCalibrationAPI_cameraCalibrationGetObservationProgress**](CameraCalibrationAPI.md#CameraCalibrationAPI_cameraCalibrationGetObservationProgress) | **GET** /cameracalibration/observationprogress | Get Observation progress state
[**CameraCalibrationAPI_cameraCalibrationListMRSets**](CameraCalibrationAPI.md#CameraCalibrationAPI_cameraCalibrationListMRSets) | **GET** /cameracalibration/mrsets | List MR sets
[**CameraCalibrationAPI_cameraCalibrationResetAllObservations**](CameraCalibrationAPI.md#CameraCalibrationAPI_cameraCalibrationResetAllObservations) | **POST** /cameracalibration/resetallobservations | Reset Observations


# **CameraCalibrationAPI_cameraCalibrationAddObservation**
```c
// Add Observation
//
object_t* CameraCalibrationAPI_cameraCalibrationAddObservation(apiClient_t *apiClient, v1_add_observation_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[v1_add_observation_request_t](v1_add_observation_request.md) \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CameraCalibrationAPI_cameraCalibrationEnableObservation**
```c
// Enable Observation
//
v1_enable_observation_response_t* CameraCalibrationAPI_cameraCalibrationEnableObservation(apiClient_t *apiClient, v1_enable_observation_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[v1_enable_observation_request_t](v1_enable_observation_request.md) \*** |  | 

### Return type

[v1_enable_observation_response_t](v1_enable_observation_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CameraCalibrationAPI_cameraCalibrationGetMRSet**
```c
// Get single MR set
//
v1_get_mr_set_response_t* CameraCalibrationAPI_cameraCalibrationGetMRSet(apiClient_t *apiClient, char * mrsetuid);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**mrsetuid** | **char \*** | MR Set UID | 

### Return type

[v1_get_mr_set_response_t](v1_get_mr_set_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CameraCalibrationAPI_cameraCalibrationGetObservationProgress**
```c
// Get Observation progress state
//
v1_get_observation_progress_response_t* CameraCalibrationAPI_cameraCalibrationGetObservationProgress(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v1_get_observation_progress_response_t](v1_get_observation_progress_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CameraCalibrationAPI_cameraCalibrationListMRSets**
```c
// List MR sets
//
v1_list_mr_sets_response_t* CameraCalibrationAPI_cameraCalibrationListMRSets(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v1_list_mr_sets_response_t](v1_list_mr_sets_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **CameraCalibrationAPI_cameraCalibrationResetAllObservations**
```c
// Reset Observations
//
object_t* CameraCalibrationAPI_cameraCalibrationResetAllObservations(apiClient_t *apiClient, v1_reset_all_observations_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[v1_reset_all_observations_request_t](v1_reset_all_observations_request.md) \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

