# RenderstreamAPI

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RenderstreamAPI_renderstreamFailoverRenderMachine**](RenderstreamAPI.md#RenderstreamAPI_renderstreamFailoverRenderMachine) | **POST** /renderstream/failovermachine/{name} | Fail over a single RenderstreamMachine, and all its workload instances
[**RenderstreamAPI_renderstreamFailoverRenderMachine2**](RenderstreamAPI.md#RenderstreamAPI_renderstreamFailoverRenderMachine2) | **PUT** /renderstream/failovermachine/{name} | Fail over a single RenderstreamMachine, and all its workload instances
[**RenderstreamAPI_renderstreamFailoverWorkloadInstance**](RenderstreamAPI.md#RenderstreamAPI_renderstreamFailoverWorkloadInstance) | **POST** /renderstream/failoverinstance/{workloadid}/{instanceindex} | Fail over a single workload instance
[**RenderstreamAPI_renderstreamFailoverWorkloadInstance2**](RenderstreamAPI.md#RenderstreamAPI_renderstreamFailoverWorkloadInstance2) | **PUT** /renderstream/failoverinstance/{workloadid}/{instanceindex} | Fail over a single workload instance
[**RenderstreamAPI_renderstreamGetCluster**](RenderstreamAPI.md#RenderstreamAPI_renderstreamGetCluster) | **GET** /renderstream/clusters/{name} | Get single ClusterPool
[**RenderstreamAPI_renderstreamGetRenderMachine**](RenderstreamAPI.md#RenderstreamAPI_renderstreamGetRenderMachine) | **GET** /renderstream/machines/{name} | Get single RenderstreamMachine
[**RenderstreamAPI_renderstreamGetWorkload**](RenderstreamAPI.md#RenderstreamAPI_renderstreamGetWorkload) | **GET** /renderstream/workloads/{id} | Get single Workload
[**RenderstreamAPI_renderstreamGetWorkloadInstance**](RenderstreamAPI.md#RenderstreamAPI_renderstreamGetWorkloadInstance) | **GET** /renderstream/workloadinstances/{workloadid}/{instanceindex} | Get single Workload Instance
[**RenderstreamAPI_renderstreamListClusters**](RenderstreamAPI.md#RenderstreamAPI_renderstreamListClusters) | **GET** /renderstream/clusters | List all ClusterPools
[**RenderstreamAPI_renderstreamListRenderMachines**](RenderstreamAPI.md#RenderstreamAPI_renderstreamListRenderMachines) | **GET** /renderstream/machines | List all RS machines (both current render machines and understudies)
[**RenderstreamAPI_renderstreamListWorkloads**](RenderstreamAPI.md#RenderstreamAPI_renderstreamListWorkloads) | **GET** /renderstream/workloads | List all RS Workloads
[**RenderstreamAPI_renderstreamStartWorkload**](RenderstreamAPI.md#RenderstreamAPI_renderstreamStartWorkload) | **POST** /renderstream/workloads/{id}/start | Start a workload
[**RenderstreamAPI_renderstreamStopWorkload**](RenderstreamAPI.md#RenderstreamAPI_renderstreamStopWorkload) | **POST** /renderstream/workloads/{id}/stop | Stop a workload
[**RenderstreamAPI_renderstreamSyncWorkload**](RenderstreamAPI.md#RenderstreamAPI_renderstreamSyncWorkload) | **POST** /renderstream/workloads/{id}/sync | Sync a workload


# **RenderstreamAPI_renderstreamFailoverRenderMachine**
```c
// Fail over a single RenderstreamMachine, and all its workload instances
//
renderstream_failover_render_machine_response_t* RenderstreamAPI_renderstreamFailoverRenderMachine(apiClient_t *apiClient, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Name of the render machine to fail over | 

### Return type

[renderstream_failover_render_machine_response_t](renderstream_failover_render_machine_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamFailoverRenderMachine2**
```c
// Fail over a single RenderstreamMachine, and all its workload instances
//
renderstream_failover_render_machine_response_t* RenderstreamAPI_renderstreamFailoverRenderMachine2(apiClient_t *apiClient, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** | Name of the render machine to fail over | 

### Return type

[renderstream_failover_render_machine_response_t](renderstream_failover_render_machine_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamFailoverWorkloadInstance**
```c
// Fail over a single workload instance
//
renderstream_failover_workload_instance_response_t* RenderstreamAPI_renderstreamFailoverWorkloadInstance(apiClient_t *apiClient, char * workloadid, long instanceindex);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**workloadid** | **char \*** | ID of the workload this instance belongs to | 
**instanceindex** | **long** | Index into the Workload&#39;s list of IDs | 

### Return type

[renderstream_failover_workload_instance_response_t](renderstream_failover_workload_instance_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamFailoverWorkloadInstance2**
```c
// Fail over a single workload instance
//
renderstream_failover_workload_instance_response_t* RenderstreamAPI_renderstreamFailoverWorkloadInstance2(apiClient_t *apiClient, char * workloadid, long instanceindex);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**workloadid** | **char \*** | ID of the workload this instance belongs to | 
**instanceindex** | **long** | Index into the Workload&#39;s list of IDs | 

### Return type

[renderstream_failover_workload_instance_response_t](renderstream_failover_workload_instance_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamGetCluster**
```c
// Get single ClusterPool
//
renderstream_get_cluster_response_t* RenderstreamAPI_renderstreamGetCluster(apiClient_t *apiClient, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** |  | 

### Return type

[renderstream_get_cluster_response_t](renderstream_get_cluster_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamGetRenderMachine**
```c
// Get single RenderstreamMachine
//
renderstream_get_render_machine_response_t* RenderstreamAPI_renderstreamGetRenderMachine(apiClient_t *apiClient, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**name** | **char \*** |  | 

### Return type

[renderstream_get_render_machine_response_t](renderstream_get_render_machine_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamGetWorkload**
```c
// Get single Workload
//
renderstream_get_workload_response_t* RenderstreamAPI_renderstreamGetWorkload(apiClient_t *apiClient, char * id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

[renderstream_get_workload_response_t](renderstream_get_workload_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamGetWorkloadInstance**
```c
// Get single Workload Instance
//
renderstream_get_workload_instance_response_t* RenderstreamAPI_renderstreamGetWorkloadInstance(apiClient_t *apiClient, char * workloadid, long instanceindex);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**workloadid** | **char \*** | ID of the workload this instance belongs to | 
**instanceindex** | **long** | Index into the Workload&#39;s list of IDs | 

### Return type

[renderstream_get_workload_instance_response_t](renderstream_get_workload_instance_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamListClusters**
```c
// List all ClusterPools
//
renderstream_list_clusters_response_t* RenderstreamAPI_renderstreamListClusters(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[renderstream_list_clusters_response_t](renderstream_list_clusters_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamListRenderMachines**
```c
// List all RS machines (both current render machines and understudies)
//
renderstream_list_render_machines_response_t* RenderstreamAPI_renderstreamListRenderMachines(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[renderstream_list_render_machines_response_t](renderstream_list_render_machines_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamListWorkloads**
```c
// List all RS Workloads
//
renderstream_list_workloads_response_t* RenderstreamAPI_renderstreamListWorkloads(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[renderstream_list_workloads_response_t](renderstream_list_workloads_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamStartWorkload**
```c
// Start a workload
//
object_t* RenderstreamAPI_renderstreamStartWorkload(apiClient_t *apiClient, char * id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamStopWorkload**
```c
// Stop a workload
//
object_t* RenderstreamAPI_renderstreamStopWorkload(apiClient_t *apiClient, char * id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **RenderstreamAPI_renderstreamSyncWorkload**
```c
// Sync a workload
//
object_t* RenderstreamAPI_renderstreamSyncWorkload(apiClient_t *apiClient, char * id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**id** | **char \*** |  | 

### Return type

[object_t](object.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

