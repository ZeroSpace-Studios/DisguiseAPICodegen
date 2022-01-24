# \ResourcesApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ResourcesGetResource**](ResourcesApi.md#ResourcesGetResource) | **Get** /resources/{uid} | Get single resource
[**ResourcesListResources**](ResourcesApi.md#ResourcesListResources) | **Get** /resources | List resources by type



## ResourcesGetResource

> ResourcesGetResourceResponse ResourcesGetResource(ctx, uid).Execute()

Get single resource

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
    uid := "uid_example" // string | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ResourcesApi.ResourcesGetResource(context.Background(), uid).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ResourcesApi.ResourcesGetResource``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ResourcesGetResource`: ResourcesGetResourceResponse
    fmt.Fprintf(os.Stdout, "Response from `ResourcesApi.ResourcesGetResource`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiResourcesGetResourceRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**ResourcesGetResourceResponse**](ResourcesGetResourceResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ResourcesListResources

> ResourcesListResourcesResponse ResourcesListResources(ctx).Type_(type_).Search(search).Execute()

List resources by type

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
    type_ := "type__example" // string | resource type name. (optional)
    search := "search_example" // string | search substring to look for in the resource name. (optional)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ResourcesApi.ResourcesListResources(context.Background()).Type_(type_).Search(search).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ResourcesApi.ResourcesListResources``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ResourcesListResources`: ResourcesListResourcesResponse
    fmt.Fprintf(os.Stdout, "Response from `ResourcesApi.ResourcesListResources`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiResourcesListResourcesRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **type_** | **string** | resource type name. | 
 **search** | **string** | search substring to look for in the resource name. | 

### Return type

[**ResourcesListResourcesResponse**](ResourcesListResourcesResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

