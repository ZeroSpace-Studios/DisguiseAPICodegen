# MixedRealityAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MixedRealityAPI_mixedRealityCaptureObservation**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityCaptureObservation) | **POST** /mixedreality/captureobservation | Capture an observation on the given camera
[**MixedRealityAPI_mixedRealityCaptureProgress**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityCaptureProgress) | **GET** /mixedreality/captureprogress | Gets the current capture progress, only one capture can run at once
[**MixedRealityAPI_mixedRealityDeleteAllObservations**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityDeleteAllObservations) | **POST** /mixedreality/deleteallobservations | Delete all observations for a given spatial calibration
[**MixedRealityAPI_mixedRealityDeleteObservations**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityDeleteObservations) | **POST** /mixedreality/deleteobservations | Pass a list of observation identifiers to delete
[**MixedRealityAPI_mixedRealityEnableObservations**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityEnableObservations) | **POST** /mixedreality/enableobservations | Pass a list of observation identifiers to enable/disable
[**MixedRealityAPI_mixedRealityGetCameras**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityGetCameras) | **GET** /mixedreality/cameras | Returns camera properties of cameras on the current stage
[**MixedRealityAPI_mixedRealityGetMRSets**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityGetMRSets) | **GET** /mixedreality/mrsets | Returns mixed reality sets on the current stage
[**MixedRealityAPI_mixedRealityListSpatialCalibrations**](MixedRealityAPI.md#MixedRealityAPI_mixedRealityListSpatialCalibrations) | **GET** /mixedreality/spatialcalibrations | Returns a list of all spatial calibrations
[**MixedRealityAPI_mixedRealitySelectCamera**](MixedRealityAPI.md#MixedRealityAPI_mixedRealitySelectCamera) | **POST** /mixedreality/selectcamera | Sets the current camera of an MR Set
[**MixedRealityAPI_mixedRealitySelectSpatialCalibration**](MixedRealityAPI.md#MixedRealityAPI_mixedRealitySelectSpatialCalibration) | **POST** /mixedreality/selectspatialcalibration | Sets the spatial calibration currently in use by a camera


# **MixedRealityAPI_mixedRealityCaptureObservation**
```c
// Capture an observation on the given camera
//
d3api_empty_response_t* MixedRealityAPI_mixedRealityCaptureObservation(apiClient_t *apiClient, mixedreality_capture_observation_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[mixedreality_capture_observation_request_t](mixedreality_capture_observation_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityCaptureProgress**
```c
// Gets the current capture progress, only one capture can run at once
//
d3api_bool_response_t* MixedRealityAPI_mixedRealityCaptureProgress(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[d3api_bool_response_t](d3api_bool_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityDeleteAllObservations**
```c
// Delete all observations for a given spatial calibration
//
d3api_empty_response_t* MixedRealityAPI_mixedRealityDeleteAllObservations(apiClient_t *apiClient, mixedreality_delete_all_observations_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[mixedreality_delete_all_observations_request_t](mixedreality_delete_all_observations_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityDeleteObservations**
```c
// Pass a list of observation identifiers to delete
//
d3api_empty_response_t* MixedRealityAPI_mixedRealityDeleteObservations(apiClient_t *apiClient, mixedreality_delete_observations_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[mixedreality_delete_observations_request_t](mixedreality_delete_observations_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityEnableObservations**
```c
// Pass a list of observation identifiers to enable/disable
//
d3api_empty_response_t* MixedRealityAPI_mixedRealityEnableObservations(apiClient_t *apiClient, mixedreality_enable_observations_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[mixedreality_enable_observations_request_t](mixedreality_enable_observations_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityGetCameras**
```c
// Returns camera properties of cameras on the current stage
//
mixedreality_get_cameras_response_t* MixedRealityAPI_mixedRealityGetCameras(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[mixedreality_get_cameras_response_t](mixedreality_get_cameras_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityGetMRSets**
```c
// Returns mixed reality sets on the current stage
//
mixedreality_get_mr_sets_response_t* MixedRealityAPI_mixedRealityGetMRSets(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[mixedreality_get_mr_sets_response_t](mixedreality_get_mr_sets_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealityListSpatialCalibrations**
```c
// Returns a list of all spatial calibrations
//
mixedreality_list_spatial_calibrations_response_t* MixedRealityAPI_mixedRealityListSpatialCalibrations(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[mixedreality_list_spatial_calibrations_response_t](mixedreality_list_spatial_calibrations_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealitySelectCamera**
```c
// Sets the current camera of an MR Set
//
d3api_empty_response_t* MixedRealityAPI_mixedRealitySelectCamera(apiClient_t *apiClient, mixedreality_select_camera_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[mixedreality_select_camera_request_t](mixedreality_select_camera_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MixedRealityAPI_mixedRealitySelectSpatialCalibration**
```c
// Sets the spatial calibration currently in use by a camera
//
d3api_empty_response_t* MixedRealityAPI_mixedRealitySelectSpatialCalibration(apiClient_t *apiClient, mixedreality_select_spatial_calibration_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[mixedreality_select_spatial_calibration_request_t](mixedreality_select_spatial_calibration_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

