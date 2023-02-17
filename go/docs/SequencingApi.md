# \SequencingApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SequencingChangeIndirections**](SequencingApi.md#SequencingChangeIndirections) | **Post** /sequencing/changeindirections | Trigger a change to one or more indirections
[**SequencingListAvailableResources**](SequencingApi.md#SequencingListAvailableResources) | **Get** /sequencing/indirectionresources | Get the available resources for a given indirection
[**SequencingListIndirections**](SequencingApi.md#SequencingListIndirections) | **Get** /sequencing/indirections | List all indirections



## SequencingChangeIndirections

> D3apiEmptyResponse SequencingChangeIndirections(ctx).Body(body).Execute()

Trigger a change to one or more indirections

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
    body := *openapiclient.NewSequencingChangeIndirectionsRequest() // SequencingChangeIndirectionsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.SequencingApi.SequencingChangeIndirections(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `SequencingApi.SequencingChangeIndirections``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `SequencingChangeIndirections`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `SequencingApi.SequencingChangeIndirections`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiSequencingChangeIndirectionsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**SequencingChangeIndirectionsRequest**](SequencingChangeIndirectionsRequest.md) |  | 

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


## SequencingListAvailableResources

> SequencingListAvailableResourcesResponse SequencingListAvailableResources(ctx).Uid(uid).Name(name).Execute()

Get the available resources for a given indirection

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
    resp, r, err := api_client.SequencingApi.SequencingListAvailableResources(context.Background()).Uid(uid).Name(name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `SequencingApi.SequencingListAvailableResources``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `SequencingListAvailableResources`: SequencingListAvailableResourcesResponse
    fmt.Fprintf(os.Stdout, "Response from `SequencingApi.SequencingListAvailableResources`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiSequencingListAvailableResourcesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **string** | Unique identifier. | 
 **name** | **string** | Unqualified name. | 

### Return type

[**SequencingListAvailableResourcesResponse**](SequencingListAvailableResourcesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## SequencingListIndirections

> SequencingListIndirectionsResponse SequencingListIndirections(ctx).Execute()

List all indirections

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
    resp, r, err := api_client.SequencingApi.SequencingListIndirections(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `SequencingApi.SequencingListIndirections``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `SequencingListIndirections`: SequencingListIndirectionsResponse
    fmt.Fprintf(os.Stdout, "Response from `SequencingApi.SequencingListIndirections`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiSequencingListIndirectionsRequest struct via the builder pattern


### Return type

[**SequencingListIndirectionsResponse**](SequencingListIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

