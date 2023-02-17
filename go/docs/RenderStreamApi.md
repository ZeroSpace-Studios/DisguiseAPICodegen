# \RenderStreamApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RenderStreamFailover**](RenderStreamApi.md#RenderStreamFailover) | **Post** /renderstream/failover | Fail over a single machine
[**RenderStreamGetAssigners**](RenderStreamApi.md#RenderStreamGetAssigners) | **Get** /renderstream/assigners | Returns the RenderStream assigners list
[**RenderStreamGetLayerConfig**](RenderStreamApi.md#RenderStreamGetLayerConfig) | **Get** /renderstream/layerconfig | Returns config information for the selected layer
[**RenderStreamGetLayerStatus**](RenderStreamApi.md#RenderStreamGetLayerStatus) | **Get** /renderstream/layerstatus | Returns status information for the selected layer
[**RenderStreamGetLayers**](RenderStreamApi.md#RenderStreamGetLayers) | **Get** /renderstream/layers | Returns the RenderStream layer list
[**RenderStreamGetPools**](RenderStreamApi.md#RenderStreamGetPools) | **Get** /renderstream/pools | Returns the RenderStream pools list
[**RenderStreamRestartLayers**](RenderStreamApi.md#RenderStreamRestartLayers) | **Post** /renderstream/restartlayers | Restarts a workload for the selected layer
[**RenderStreamStartLayers**](RenderStreamApi.md#RenderStreamStartLayers) | **Post** /renderstream/startlayers | Starts a workload for the selected layer
[**RenderStreamStopLayers**](RenderStreamApi.md#RenderStreamStopLayers) | **Post** /renderstream/stoplayers | Stops a workload for the selected layer
[**RenderStreamSyncLayers**](RenderStreamApi.md#RenderStreamSyncLayers) | **Post** /renderstream/synclayers | Syncs a workload for the selected layer



## RenderStreamFailover

> D3apiEmptyResponse RenderStreamFailover(ctx).Body(body).Execute()

Fail over a single machine

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
    body := *openapiclient.NewRenderstreamFailoverRequest() // RenderstreamFailoverRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamFailover(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamFailover``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamFailover`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamFailover`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamFailoverRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamFailoverRequest**](RenderstreamFailoverRequest.md) |  | 

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamGetAssigners

> RenderstreamGetAssignersResponse RenderStreamGetAssigners(ctx).Execute()

Returns the RenderStream assigners list

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
    resp, r, err := api_client.RenderStreamApi.RenderStreamGetAssigners(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamGetAssigners``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamGetAssigners`: RenderstreamGetAssignersResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamGetAssigners`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamGetAssignersRequest struct via the builder pattern


### Return type

[**RenderstreamGetAssignersResponse**](RenderstreamGetAssignersResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamGetLayerConfig

> RenderstreamGetLayerConfigResponse RenderStreamGetLayerConfig(ctx).Uid(uid).Name(name).Execute()

Returns config information for the selected layer

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
    uid := "uid_example" // string | Unique identifier. (optional)
    name := "name_example" // string | Unqualified name. (optional)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamGetLayerConfig(context.Background()).Uid(uid).Name(name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamGetLayerConfig``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamGetLayerConfig`: RenderstreamGetLayerConfigResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamGetLayerConfig`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamGetLayerConfigRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **string** | Unique identifier. | 
 **name** | **string** | Unqualified name. | 

### Return type

[**RenderstreamGetLayerConfigResponse**](RenderstreamGetLayerConfigResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamGetLayerStatus

> RenderstreamGetLayerStatusResponse RenderStreamGetLayerStatus(ctx).Uid(uid).Name(name).Execute()

Returns status information for the selected layer

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
    uid := "uid_example" // string | Unique identifier. (optional)
    name := "name_example" // string | Unqualified name. (optional)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamGetLayerStatus(context.Background()).Uid(uid).Name(name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamGetLayerStatus``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamGetLayerStatus`: RenderstreamGetLayerStatusResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamGetLayerStatus`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamGetLayerStatusRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **string** | Unique identifier. | 
 **name** | **string** | Unqualified name. | 

### Return type

[**RenderstreamGetLayerStatusResponse**](RenderstreamGetLayerStatusResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamGetLayers

> RenderstreamGetLayersResponse RenderStreamGetLayers(ctx).Execute()

Returns the RenderStream layer list

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
    resp, r, err := api_client.RenderStreamApi.RenderStreamGetLayers(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamGetLayers``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamGetLayers`: RenderstreamGetLayersResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamGetLayers`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamGetLayersRequest struct via the builder pattern


### Return type

[**RenderstreamGetLayersResponse**](RenderstreamGetLayersResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamGetPools

> RenderstreamGetPoolsResponse RenderStreamGetPools(ctx).Execute()

Returns the RenderStream pools list

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
    resp, r, err := api_client.RenderStreamApi.RenderStreamGetPools(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamGetPools``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamGetPools`: RenderstreamGetPoolsResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamGetPools`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamGetPoolsRequest struct via the builder pattern


### Return type

[**RenderstreamGetPoolsResponse**](RenderstreamGetPoolsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamRestartLayers

> D3apiEmptyResponse RenderStreamRestartLayers(ctx).Body(body).Execute()

Restarts a workload for the selected layer

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
    body := *openapiclient.NewRenderstreamRestartLayersRequest() // RenderstreamRestartLayersRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamRestartLayers(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamRestartLayers``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamRestartLayers`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamRestartLayers`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamRestartLayersRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamRestartLayersRequest**](RenderstreamRestartLayersRequest.md) |  | 

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamStartLayers

> D3apiEmptyResponse RenderStreamStartLayers(ctx).Body(body).Execute()

Starts a workload for the selected layer

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
    body := *openapiclient.NewRenderstreamStartLayersRequest() // RenderstreamStartLayersRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamStartLayers(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamStartLayers``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamStartLayers`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamStartLayers`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamStartLayersRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamStartLayersRequest**](RenderstreamStartLayersRequest.md) |  | 

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamStopLayers

> D3apiEmptyResponse RenderStreamStopLayers(ctx).Body(body).Execute()

Stops a workload for the selected layer

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
    body := *openapiclient.NewRenderstreamStopLayersRequest() // RenderstreamStopLayersRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamStopLayers(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamStopLayers``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamStopLayers`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamStopLayers`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamStopLayersRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamStopLayersRequest**](RenderstreamStopLayersRequest.md) |  | 

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## RenderStreamSyncLayers

> D3apiEmptyResponse RenderStreamSyncLayers(ctx).Body(body).Execute()

Syncs a workload for the selected layer

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
    body := *openapiclient.NewRenderstreamSyncLayersRequest() // RenderstreamSyncLayersRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.RenderStreamApi.RenderStreamSyncLayers(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `RenderStreamApi.RenderStreamSyncLayers``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `RenderStreamSyncLayers`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `RenderStreamApi.RenderStreamSyncLayers`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiRenderStreamSyncLayersRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**RenderstreamSyncLayersRequest**](RenderstreamSyncLayersRequest.md) |  | 

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

