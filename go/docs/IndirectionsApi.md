# \IndirectionsApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndirectionsGetIndirection**](IndirectionsApi.md#IndirectionsGetIndirection) | **Get** /indirections/{uid} | Get single indirection
[**IndirectionsListIndirections**](IndirectionsApi.md#IndirectionsListIndirections) | **Get** /indirections | List all indirections
[**IndirectionsSetIndirections**](IndirectionsApi.md#IndirectionsSetIndirections) | **Post** /indirections/set | Update one or more indirections
[**IndirectionsSetIndirections2**](IndirectionsApi.md#IndirectionsSetIndirections2) | **Put** /indirections | Update one or more indirections



## IndirectionsGetIndirection

> IndirectionsGetIndirectionResponse IndirectionsGetIndirection(ctx, uid).Execute()

Get single indirection

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
    uid := "uid_example" // string | uid of indirection

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.IndirectionsApi.IndirectionsGetIndirection(context.Background(), uid).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `IndirectionsApi.IndirectionsGetIndirection``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `IndirectionsGetIndirection`: IndirectionsGetIndirectionResponse
    fmt.Fprintf(os.Stdout, "Response from `IndirectionsApi.IndirectionsGetIndirection`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string** | uid of indirection | 

### Other Parameters

Other parameters are passed through a pointer to a apiIndirectionsGetIndirectionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**IndirectionsGetIndirectionResponse**](IndirectionsGetIndirectionResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## IndirectionsListIndirections

> IndirectionsListIndirectionsResponse IndirectionsListIndirections(ctx).ResourceType(resourceType).Execute()

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
    resourceType := "resourceType_example" // string | type of resource. (optional)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.IndirectionsApi.IndirectionsListIndirections(context.Background()).ResourceType(resourceType).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `IndirectionsApi.IndirectionsListIndirections``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `IndirectionsListIndirections`: IndirectionsListIndirectionsResponse
    fmt.Fprintf(os.Stdout, "Response from `IndirectionsApi.IndirectionsListIndirections`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiIndirectionsListIndirectionsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **resourceType** | **string** | type of resource. | 

### Return type

[**IndirectionsListIndirectionsResponse**](IndirectionsListIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## IndirectionsSetIndirections

> IndirectionsSetIndirectionsResponse IndirectionsSetIndirections(ctx).Body(body).Execute()

Update one or more indirections

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
    body := *openapiclient.NewIndirectionsSetIndirectionsRequest() // IndirectionsSetIndirectionsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.IndirectionsApi.IndirectionsSetIndirections(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `IndirectionsApi.IndirectionsSetIndirections``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `IndirectionsSetIndirections`: IndirectionsSetIndirectionsResponse
    fmt.Fprintf(os.Stdout, "Response from `IndirectionsApi.IndirectionsSetIndirections`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiIndirectionsSetIndirectionsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IndirectionsSetIndirectionsRequest**](IndirectionsSetIndirectionsRequest.md) |  | 

### Return type

[**IndirectionsSetIndirectionsResponse**](IndirectionsSetIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## IndirectionsSetIndirections2

> IndirectionsSetIndirectionsResponse IndirectionsSetIndirections2(ctx).Body(body).Execute()

Update one or more indirections

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
    body := *openapiclient.NewIndirectionsSetIndirectionsRequest() // IndirectionsSetIndirectionsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.IndirectionsApi.IndirectionsSetIndirections2(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `IndirectionsApi.IndirectionsSetIndirections2``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `IndirectionsSetIndirections2`: IndirectionsSetIndirectionsResponse
    fmt.Fprintf(os.Stdout, "Response from `IndirectionsApi.IndirectionsSetIndirections2`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiIndirectionsSetIndirections2Request struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**IndirectionsSetIndirectionsRequest**](IndirectionsSetIndirectionsRequest.md) |  | 

### Return type

[**IndirectionsSetIndirectionsResponse**](IndirectionsSetIndirectionsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

