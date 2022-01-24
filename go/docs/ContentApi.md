# \ContentApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContentGetMediaMetadata**](ContentApi.md#ContentGetMediaMetadata) | **Get** /content/mediametadata/{uid} | Get single media meta data
[**ContentListMediaMetadata**](ContentApi.md#ContentListMediaMetadata) | **Get** /content/mediametadata | List media meta data



## ContentGetMediaMetadata

> ContentGetMediaMetadataResponse ContentGetMediaMetadata(ctx, uid).Execute()

Get single media meta data

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
    resp, r, err := api_client.ContentApi.ContentGetMediaMetadata(context.Background(), uid).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ContentApi.ContentGetMediaMetadata``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ContentGetMediaMetadata`: ContentGetMediaMetadataResponse
    fmt.Fprintf(os.Stdout, "Response from `ContentApi.ContentGetMediaMetadata`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**uid** | **string** |  | 

### Other Parameters

Other parameters are passed through a pointer to a apiContentGetMediaMetadataRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**ContentGetMediaMetadataResponse**](ContentGetMediaMetadataResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ContentListMediaMetadata

> ContentListMediaMetadataResponse ContentListMediaMetadata(ctx).Execute()

List media meta data

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
    resp, r, err := api_client.ContentApi.ContentListMediaMetadata(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ContentApi.ContentListMediaMetadata``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ContentListMediaMetadata`: ContentListMediaMetadataResponse
    fmt.Fprintf(os.Stdout, "Response from `ContentApi.ContentListMediaMetadata`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiContentListMediaMetadataRequest struct via the builder pattern


### Return type

[**ContentListMediaMetadataResponse**](ContentListMediaMetadataResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

