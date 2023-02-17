# StatusAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**StatusAPI_statusGetProject**](StatusAPI.md#StatusAPI_statusGetProject) | **GET** /status/project | Return the project information
[**StatusAPI_statusGetSession**](StatusAPI.md#StatusAPI_statusGetSession) | **GET** /status/session | Return the session config
[**StatusAPI_statusListHealth**](StatusAPI.md#StatusAPI_statusListHealth) | **GET** /status/health | List all health status for the machines in the network
[**StatusAPI_statusListNotifications**](StatusAPI.md#StatusAPI_statusListNotifications) | **GET** /status/notifications | List all notifications for the machines in the network


# **StatusAPI_statusGetProject**
```c
// Return the project information
//
status_get_project_response_t* StatusAPI_statusGetProject(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[status_get_project_response_t](status_get_project_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StatusAPI_statusGetSession**
```c
// Return the session config
//
status_get_session_response_t* StatusAPI_statusGetSession(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[status_get_session_response_t](status_get_session_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StatusAPI_statusListHealth**
```c
// List all health status for the machines in the network
//
status_list_health_response_t* StatusAPI_statusListHealth(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[status_list_health_response_t](status_list_health_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **StatusAPI_statusListNotifications**
```c
// List all notifications for the machines in the network
//
status_list_notifications_response_t* StatusAPI_statusListNotifications(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[status_list_notifications_response_t](status_list_notifications_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

