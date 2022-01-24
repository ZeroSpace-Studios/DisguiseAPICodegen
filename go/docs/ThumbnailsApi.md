# \ThumbnailsApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ThumbnailsGetThumbnail**](ThumbnailsApi.md#ThumbnailsGetThumbnail) | **Get** /thumbnail/{uid} | Get thumbnail for a resource



## ThumbnailsGetThumbnail

> ThumbnailsGetThumbnailResponse ThumbnailsGetThumbnail(ctx, uid).Width(width).Height(height).Execute()

Get thumbnail for a resource

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
    uid := "uid_example" // string | unique resource id
    width := int64(789) // int64 | width of thumbnail. (optional)
    height := int64(789) // int64 | height of thumbnail. (optional)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ThumbnailsApi.ThumbnailsGetThumbnail(context.Background(), uid).Width(width).Height(height).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ThumbnailsApi.ThumbnailsGetThumbnail``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ThumbnailsGetThumbnail`: ThumbnailsGetThumbnailResponse
    fmt.Fprintf(os.Stdout, "Response from `ThumbnailsApi.ThumbnailsGetThumbnail`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string** | unique resource id | 

### Other Parameters

Other parameters are passed through a pointer to a apiThumbnailsGetThumbnailRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------

 **width** | **int64** | width of thumbnail. | 
 **height** | **int64** | height of thumbnail. | 

### Return type

[**ThumbnailsGetThumbnailResponse**](ThumbnailsGetThumbnailResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

