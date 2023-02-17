# RenderStreamAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RenderStreamAPI_renderStreamFailover**](RenderStreamAPI.md#RenderStreamAPI_renderStreamFailover) | **POST** /renderstream/failover | Fail over a single machine
[**RenderStreamAPI_renderStreamGetAssigners**](RenderStreamAPI.md#RenderStreamAPI_renderStreamGetAssigners) | **GET** /renderstream/assigners | Returns the RenderStream assigners list
[**RenderStreamAPI_renderStreamGetLayerConfig**](RenderStreamAPI.md#RenderStreamAPI_renderStreamGetLayerConfig) | **GET** /renderstream/layerconfig | Returns config information for the selected layer
[**RenderStreamAPI_renderStreamGetLayerStatus**](RenderStreamAPI.md#RenderStreamAPI_renderStreamGetLayerStatus) | **GET** /renderstream/layerstatus | Returns status information for the selected layer
[**RenderStreamAPI_renderStreamGetLayers**](RenderStreamAPI.md#RenderStreamAPI_renderStreamGetLayers) | **GET** /renderstream/layers | Returns the RenderStream layer list
[**RenderStreamAPI_renderStreamGetPools**](RenderStreamAPI.md#RenderStreamAPI_renderStreamGetPools) | **GET** /renderstream/pools | Returns the RenderStream pools list
[**RenderStreamAPI_renderStreamRestartLayers**](RenderStreamAPI.md#RenderStreamAPI_renderStreamRestartLayers) | **POST** /renderstream/restartlayers | Restarts a workload for the selected layer
[**RenderStreamAPI_renderStreamStartLayers**](RenderStreamAPI.md#RenderStreamAPI_renderStreamStartLayers) | **POST** /renderstream/startlayers | Starts a workload for the selected layer
[**RenderStreamAPI_renderStreamStopLayers**](RenderStreamAPI.md#RenderStreamAPI_renderStreamStopLayers) | **POST** /renderstream/stoplayers | Stops a workload for the selected layer
[**RenderStreamAPI_renderStreamSyncLayers**](RenderStreamAPI.md#RenderStreamAPI_renderStreamSyncLayers) | **POST** /renderstream/synclayers | Syncs a workload for the selected layer


# **RenderStreamAPI_renderStreamFailover**
```c
// Fail over a single machine
//
d3api_empty_response_t* RenderStreamAPI_renderStreamFailover(apiClient_t *apiClient, renderstream_failover_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[renderstream_failover_request_t](renderstream_failover_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamGetAssigners**
```c
// Returns the RenderStream assigners list
//
renderstream_get_assigners_response_t* RenderStreamAPI_renderStreamGetAssigners(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[renderstream_get_assigners_response_t](renderstream_get_assigners_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamGetLayerConfig**
```c
// Returns config information for the selected layer
//
renderstream_get_layer_config_response_t* RenderStreamAPI_renderStreamGetLayerConfig(apiClient_t *apiClient, char * uid, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** | Unique identifier. | [optional] 
**name** | **char \*** | Unqualified name. | [optional] 

### Return type

[renderstream_get_layer_config_response_t](renderstream_get_layer_config_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamGetLayerStatus**
```c
// Returns status information for the selected layer
//
renderstream_get_layer_status_response_t* RenderStreamAPI_renderStreamGetLayerStatus(apiClient_t *apiClient, char * uid, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** | Unique identifier. | [optional] 
**name** | **char \*** | Unqualified name. | [optional] 

### Return type

[renderstream_get_layer_status_response_t](renderstream_get_layer_status_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamGetLayers**
```c
// Returns the RenderStream layer list
//
renderstream_get_layers_response_t* RenderStreamAPI_renderStreamGetLayers(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[renderstream_get_layers_response_t](renderstream_get_layers_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamGetPools**
```c
// Returns the RenderStream pools list
//
renderstream_get_pools_response_t* RenderStreamAPI_renderStreamGetPools(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[renderstream_get_pools_response_t](renderstream_get_pools_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamRestartLayers**
```c
// Restarts a workload for the selected layer
//
d3api_empty_response_t* RenderStreamAPI_renderStreamRestartLayers(apiClient_t *apiClient, renderstream_restart_layers_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[renderstream_restart_layers_request_t](renderstream_restart_layers_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamStartLayers**
```c
// Starts a workload for the selected layer
//
d3api_empty_response_t* RenderStreamAPI_renderStreamStartLayers(apiClient_t *apiClient, renderstream_start_layers_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[renderstream_start_layers_request_t](renderstream_start_layers_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamStopLayers**
```c
// Stops a workload for the selected layer
//
d3api_empty_response_t* RenderStreamAPI_renderStreamStopLayers(apiClient_t *apiClient, renderstream_stop_layers_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[renderstream_stop_layers_request_t](renderstream_stop_layers_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderStreamAPI_renderStreamSyncLayers**
```c
// Syncs a workload for the selected layer
//
d3api_empty_response_t* RenderStreamAPI_renderStreamSyncLayers(apiClient_t *apiClient, renderstream_sync_layers_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[renderstream_sync_layers_request_t](renderstream_sync_layers_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

