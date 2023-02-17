# \QuickcalApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QuickcalLineUpCurrentPose**](QuickcalApi.md#QuickcalLineUpCurrentPose) | **Post** /quickcal/lineupcurrentpose | Lineup the current pose for the selected projector according to the selected reference points
[**QuickcalListReferencePoints**](QuickcalApi.md#QuickcalListReferencePoints) | **Get** /quickcal/referencepoints | Returns a list of all reference points
[**QuickcalResetLineUp**](QuickcalApi.md#QuickcalResetLineUp) | **Post** /quickcal/resetlineup | Resets the lineup of the selected projector



## QuickcalLineUpCurrentPose

> D3apiEmptyResponse QuickcalLineUpCurrentPose(ctx).Body(body).Execute()

Lineup the current pose for the selected projector according to the selected reference points

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
    body := *openapiclient.NewQuickcalLineUpCurrentPoseRequest() // QuickcalLineUpCurrentPoseRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.QuickcalApi.QuickcalLineUpCurrentPose(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `QuickcalApi.QuickcalLineUpCurrentPose``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `QuickcalLineUpCurrentPose`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `QuickcalApi.QuickcalLineUpCurrentPose`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiQuickcalLineUpCurrentPoseRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**QuickcalLineUpCurrentPoseRequest**](QuickcalLineUpCurrentPoseRequest.md) |  | 

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


## QuickcalListReferencePoints

> QuickcalListReferencePointsResponse QuickcalListReferencePoints(ctx).Execute()

Returns a list of all reference points

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
    resp, r, err := api_client.QuickcalApi.QuickcalListReferencePoints(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `QuickcalApi.QuickcalListReferencePoints``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `QuickcalListReferencePoints`: QuickcalListReferencePointsResponse
    fmt.Fprintf(os.Stdout, "Response from `QuickcalApi.QuickcalListReferencePoints`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiQuickcalListReferencePointsRequest struct via the builder pattern


### Return type

[**QuickcalListReferencePointsResponse**](QuickcalListReferencePointsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## QuickcalResetLineUp

> D3apiEmptyResponse QuickcalResetLineUp(ctx).Body(body).Execute()

Resets the lineup of the selected projector

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
    body := *openapiclient.NewQuickcalResetLineUpRequest() // QuickcalResetLineUpRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.QuickcalApi.QuickcalResetLineUp(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `QuickcalApi.QuickcalResetLineUp``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `QuickcalResetLineUp`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `QuickcalApi.QuickcalResetLineUp`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiQuickcalResetLineUpRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**QuickcalResetLineUpRequest**](QuickcalResetLineUpRequest.md) |  | 

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

