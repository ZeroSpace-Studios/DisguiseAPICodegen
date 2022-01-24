# \RenderstreamApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RenderstreamFailoverRenderMachine**](RenderstreamApi.md#RenderstreamFailoverRenderMachine) | **Post** /renderstream/failovermachine/{name} | Fail over a single RenderstreamMachine, and all its workload instances
[**RenderstreamFailoverRenderMachine2**](RenderstreamApi.md#RenderstreamFailoverRenderMachine2) | **Put** /renderstream/failovermachine/{name} | Fail over a single RenderstreamMachine, and all its workload instances
[**RenderstreamFailoverWorkloadInstance**](RenderstreamApi.md#RenderstreamFailoverWorkloadInstance) | **Post** /renderstream/failoverinstance/{workloadid}/{instanceindex} | Fail over a single workload instance
[**RenderstreamFailoverWorkloadInstance2**](RenderstreamApi.md#RenderstreamFailoverWorkloadInstance2) | **Put** /renderstream/failoverinstance/{workloadid}/{instanceindex} | Fail over a single workload instance
[**RenderstreamGetCluster**](RenderstreamApi.md#RenderstreamGetCluster) | **Get** /renderstream/clusters/{name} | Get single ClusterPool
[**RenderstreamGetRenderMachine**](RenderstreamApi.md#RenderstreamGetRenderMachine) | **Get** /renderstream/machines/{name} | Get single RenderstreamMachine
[**RenderstreamGetWorkload**](RenderstreamApi.md#RenderstreamGetWorkload) | **Get** /renderstream/workloads/{id} | Get single Workload
[**RenderstreamGetWorkloadInstance**](RenderstreamApi.md#RenderstreamGetWorkloadInstance) | **Get** /renderstream/workloadinstances/{workloadid}/{instanceindex} | Get single Workload Instance
[**RenderstreamListClusters**](RenderstreamApi.md#RenderstreamListClusters) | **Get** /renderstream/clusters | List all ClusterPools
[**RenderstreamListRenderMachines**](RenderstreamApi.md#RenderstreamListRenderMachines) | **Get** /renderstream/machines | List all RS machines (both current render machines and understudies)
[**RenderstreamListWorkloads**](RenderstreamApi.md#RenderstreamListWorkloads) | **Get** /renderstream/workloads | List all RS Workloads
[**RenderstreamStartWorkload**](RenderstreamApi.md#RenderstreamStartWorkload) | **Post** /renderstream/workloads/{id}/start | Start a workload
[**RenderstreamStopWorkload**](RenderstreamApi.md#RenderstreamStopWorkload) | **Post** /renderstream/workloads/{id}/stop | Stop a workload
[**RenderstreamSyncWorkload**](RenderstreamApi.md#RenderstreamSyncWorkload) | **Post** /renderstream/workloads/{id}/sync | Sync a workload



## RenderstreamFailoverRenderMachine

> RenderstreamFailoverRenderMachineResponse RenderstreamFailoverRenderMachine(ctx, name).Execute()

Fail over a single RenderstreamMachine, and all its workload instances

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    name := "name_example" // string | Name of the render machine to fail over

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamFailoverRenderMachine(context.Background(), name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamFailoverRenderMachine``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamFailoverRenderMachine`: RenderstreamFailoverRenderMachineResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamFailoverRenderMachine`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** | Name of the render machine to fail over | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamFailoverRenderMachineRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**RenderstreamFailoverRenderMachineResponse**](RenderstreamFailoverRenderMachineResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamFailoverRenderMachine2

> RenderstreamFailoverRenderMachineResponse RenderstreamFailoverRenderMachine2(ctx, name).Execute()

Fail over a single RenderstreamMachine, and all its workload instances

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    name := "name_example" // string | Name of the render machine to fail over

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamFailoverRenderMachine2(context.Background(), name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamFailoverRenderMachine2``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamFailoverRenderMachine2`: RenderstreamFailoverRenderMachineResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamFailoverRenderMachine2`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** | Name of the render machine to fail over | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamFailoverRenderMachine2Request struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**RenderstreamFailoverRenderMachineResponse**](RenderstreamFailoverRenderMachineResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamFailoverWorkloadInstance

> RenderstreamFailoverWorkloadInstanceResponse RenderstreamFailoverWorkloadInstance(ctx, workloadid, instanceindex).Execute()

Fail over a single workload instance

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    workloadid := "workloadid_example" // string | ID of the workload this instance belongs to
    instanceindex := int64(789) // int64 | Index into the Workload's list of IDs

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamFailoverWorkloadInstance(context.Background(), workloadid, instanceindex).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamFailoverWorkloadInstance``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamFailoverWorkloadInstance`: RenderstreamFailoverWorkloadInstanceResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamFailoverWorkloadInstance`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**workloadid** | **string** | ID of the workload this instance belongs to | 
**instanceindex** | **int64** | Index into the Workload&#39;s list of IDs | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamFailoverWorkloadInstanceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



### Return type

[**RenderstreamFailoverWorkloadInstanceResponse**](RenderstreamFailoverWorkloadInstanceResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamFailoverWorkloadInstance2

> RenderstreamFailoverWorkloadInstanceResponse RenderstreamFailoverWorkloadInstance2(ctx, workloadid, instanceindex).Execute()

Fail over a single workload instance

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    workloadid := "workloadid_example" // string | ID of the workload this instance belongs to
    instanceindex := int64(789) // int64 | Index into the Workload's list of IDs

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamFailoverWorkloadInstance2(context.Background(), workloadid, instanceindex).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamFailoverWorkloadInstance2``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamFailoverWorkloadInstance2`: RenderstreamFailoverWorkloadInstanceResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamFailoverWorkloadInstance2`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**workloadid** | **string** | ID of the workload this instance belongs to | 
**instanceindex** | **int64** | Index into the Workload&#39;s list of IDs | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamFailoverWorkloadInstance2Request struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



### Return type

[**RenderstreamFailoverWorkloadInstanceResponse**](RenderstreamFailoverWorkloadInstanceResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamGetCluster

> RenderstreamGetClusterResponse RenderstreamGetCluster(ctx, name).Execute()

Get single ClusterPool

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    name := "name_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamGetCluster(context.Background(), name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamGetCluster``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamGetCluster`: RenderstreamGetClusterResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamGetCluster`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamGetClusterRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**RenderstreamGetClusterResponse**](RenderstreamGetClusterResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamGetRenderMachine

> RenderstreamGetRenderMachineResponse RenderstreamGetRenderMachine(ctx, name).Execute()

Get single RenderstreamMachine

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    name := "name_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamGetRenderMachine(context.Background(), name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamGetRenderMachine``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamGetRenderMachine`: RenderstreamGetRenderMachineResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamGetRenderMachine`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**name** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamGetRenderMachineRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**RenderstreamGetRenderMachineResponse**](RenderstreamGetRenderMachineResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamGetWorkload

> RenderstreamGetWorkloadResponse RenderstreamGetWorkload(ctx, id).Execute()

Get single Workload

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    id := "id_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamGetWorkload(context.Background(), id).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamGetWorkload``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamGetWorkload`: RenderstreamGetWorkloadResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamGetWorkload`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamGetWorkloadRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**RenderstreamGetWorkloadResponse**](RenderstreamGetWorkloadResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamGetWorkloadInstance

> RenderstreamGetWorkloadInstanceResponse RenderstreamGetWorkloadInstance(ctx, workloadid, instanceindex).Execute()

Get single Workload Instance

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    workloadid := "workloadid_example" // string | ID of the workload this instance belongs to
    instanceindex := int64(789) // int64 | Index into the Workload's list of IDs

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamGetWorkloadInstance(context.Background(), workloadid, instanceindex).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamGetWorkloadInstance``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamGetWorkloadInstance`: RenderstreamGetWorkloadInstanceResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamGetWorkloadInstance`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**workloadid** | **string** | ID of the workload this instance belongs to | 
**instanceindex** | **int64** | Index into the Workload&#39;s list of IDs | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamGetWorkloadInstanceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------



### Return type

[**RenderstreamGetWorkloadInstanceResponse**](RenderstreamGetWorkloadInstanceResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamListClusters

> RenderstreamListClustersResponse RenderstreamListClusters(ctx).Execute()

List all ClusterPools

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamListClusters(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamListClusters``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamListClusters`: RenderstreamListClustersResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamListClusters`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamListClustersRequest struct via the builder pattern


### Return type

[**RenderstreamListClustersResponse**](RenderstreamListClustersResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamListRenderMachines

> RenderstreamListRenderMachinesResponse RenderstreamListRenderMachines(ctx).Execute()

List all RS machines (both current render machines and understudies)

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamListRenderMachines(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamListRenderMachines``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamListRenderMachines`: RenderstreamListRenderMachinesResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamListRenderMachines`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamListRenderMachinesRequest struct via the builder pattern


### Return type

[**RenderstreamListRenderMachinesResponse**](RenderstreamListRenderMachinesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamListWorkloads

> RenderstreamListWorkloadsResponse RenderstreamListWorkloads(ctx).Execute()

List all RS Workloads

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamListWorkloads(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamListWorkloads``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamListWorkloads`: RenderstreamListWorkloadsResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamListWorkloads`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamListWorkloadsRequest struct via the builder pattern


### Return type

[**RenderstreamListWorkloadsResponse**](RenderstreamListWorkloadsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamStartWorkload

> map[string]interface{} RenderstreamStartWorkload(ctx, id).Execute()

Start a workload

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    id := "id_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamStartWorkload(context.Background(), id).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamStartWorkload``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamStartWorkload`: map[string]interface{}
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamStartWorkload`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamStartWorkloadRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

**map[string]interface{}**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamStopWorkload

> map[string]interface{} RenderstreamStopWorkload(ctx, id).Execute()

Stop a workload

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    id := "id_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamStopWorkload(context.Background(), id).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamStopWorkload``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamStopWorkload`: map[string]interface{}
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamStopWorkload`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamStopWorkloadRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

**map[string]interface{}**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderstreamSyncWorkload

> map[string]interface{} RenderstreamSyncWorkload(ctx, id).Execute()

Sync a workload

### Example

```go
package main

import (
    "context"
    "fmt"
    "os"
    openapiclient "./openapi"
)

func main() {
    id := "id_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderstreamApi.RenderstreamSyncWorkload(context.Background(), id).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderstreamApi.RenderstreamSyncWorkload``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderstreamSyncWorkload`: map[string]interface{}
    fmt.Fprintf(os.Stdout, "Response from `RenderstreamApi.RenderstreamSyncWorkload`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**id** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiRenderstreamSyncWorkloadRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

**map[string]interface{}**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

