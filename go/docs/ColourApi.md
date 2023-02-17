# \ColourApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ColourListCDLs**](ColourApi.md#ColourListCDLs) | **Get** /colour/cdls | Returns of the list of all CDLs
[**ColourSetCDL**](ColourApi.md#ColourSetCDL) | **Post** /colour/cdl | Sets a CDL



## ColourListCDLs

> ColourListCDLsResponse ColourListCDLs(ctx).Execute()

Returns of the list of all CDLs

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
    resp, r, err := api_client.ColourApi.ColourListCDLs(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ColourApi.ColourListCDLs``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ColourListCDLs`: ColourListCDLsResponse
    fmt.Fprintf(os.Stdout, "Response from `ColourApi.ColourListCDLs`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiColourListCDLsRequest struct via the builder pattern


### Return type

[**ColourListCDLsResponse**](ColourListCDLsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## ColourSetCDL

> D3apiEmptyResponse ColourSetCDL(ctx).Body(body).Execute()

Sets a CDL

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
    body := *openapiclient.NewColourSetCDLRequest() // ColourSetCDLRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.ColourApi.ColourSetCDL(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `ColourApi.ColourSetCDL``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `ColourSetCDL`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `ColourApi.ColourSetCDL`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiColourSetCDLRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**ColourSetCDLRequest**](ColourSetCDLRequest.md) |  | 

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

