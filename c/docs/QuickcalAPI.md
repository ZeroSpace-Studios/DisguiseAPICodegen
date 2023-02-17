# QuickcalAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QuickcalAPI_quickcalLineUpCurrentPose**](QuickcalAPI.md#QuickcalAPI_quickcalLineUpCurrentPose) | **POST** /quickcal/lineupcurrentpose | Lineup the current pose for the selected projector according to the selected reference points
[**QuickcalAPI_quickcalListReferencePoints**](QuickcalAPI.md#QuickcalAPI_quickcalListReferencePoints) | **GET** /quickcal/referencepoints | Returns a list of all reference points
[**QuickcalAPI_quickcalResetLineUp**](QuickcalAPI.md#QuickcalAPI_quickcalResetLineUp) | **POST** /quickcal/resetlineup | Resets the lineup of the selected projector


# **QuickcalAPI_quickcalLineUpCurrentPose**
```c
// Lineup the current pose for the selected projector according to the selected reference points
//
d3api_empty_response_t* QuickcalAPI_quickcalLineUpCurrentPose(apiClient_t *apiClient, quickcal_line_up_current_pose_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[quickcal_line_up_current_pose_request_t](quickcal_line_up_current_pose_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickcalAPI_quickcalListReferencePoints**
```c
// Returns a list of all reference points
//
quickcal_list_reference_points_response_t* QuickcalAPI_quickcalListReferencePoints(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[quickcal_list_reference_points_response_t](quickcal_list_reference_points_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QuickcalAPI_quickcalResetLineUp**
```c
// Resets the lineup of the selected projector
//
d3api_empty_response_t* QuickcalAPI_quickcalResetLineUp(apiClient_t *apiClient, quickcal_reset_line_up_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[quickcal_reset_line_up_request_t](quickcal_reset_line_up_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

