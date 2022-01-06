# \CameraCalibrationApi

All URIs are relative to *http://localhost/api/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CameraCalibrationAddObservation**](CameraCalibrationApi.md#CameraCalibrationAddObservation) | **Post** /cameracalibration/addobservation | Add Observation
[**CameraCalibrationEnableObservation**](CameraCalibrationApi.md#CameraCalibrationEnableObservation) | **Post** /cameracalibration/enableobservation | Enable Observation
[**CameraCalibrationGetMRSet**](CameraCalibrationApi.md#CameraCalibrationGetMRSet) | **Get** /cameracalibration/mrsets/{mrsetuid} | Get single MR set
[**CameraCalibrationGetObservationProgress**](CameraCalibrationApi.md#CameraCalibrationGetObservationProgress) | **Get** /cameracalibration/observationprogress | Get Observation progress state
[**CameraCalibrationListMRSets**](CameraCalibrationApi.md#CameraCalibrationListMRSets) | **Get** /cameracalibration/mrsets | List MR sets
[**CameraCalibrationResetAllObservations**](CameraCalibrationApi.md#CameraCalibrationResetAllObservations) | **Post** /cameracalibration/resetallobservations | Reset Observations



## CameraCalibrationAddObservation

> map[string]interface{} CameraCalibrationAddObservation(ctx).Body(body).Execute()

Add Observation

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
    body := *openapiclient.NewV1AddObservationRequest() // V1AddObservationRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CameraCalibrationApi.CameraCalibrationAddObservation(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CameraCalibrationApi.CameraCalibrationAddObservation``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `CameraCalibrationAddObservation`: map[string]interface{}
    fmt.Fprintf(os.Stdout, "Response from `CameraCalibrationApi.CameraCalibrationAddObservation`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiCameraCalibrationAddObservationRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**V1AddObservationRequest**](V1AddObservationRequest.md) |  | 

### Return type

**map[string]interface{}**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CameraCalibrationEnableObservation

> V1EnableObservationResponse CameraCalibrationEnableObservation(ctx).Body(body).Execute()

Enable Observation

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
    body := *openapiclient.NewV1EnableObservationRequest() // V1EnableObservationRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CameraCalibrationApi.CameraCalibrationEnableObservation(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CameraCalibrationApi.CameraCalibrationEnableObservation``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `CameraCalibrationEnableObservation`: V1EnableObservationResponse
    fmt.Fprintf(os.Stdout, "Response from `CameraCalibrationApi.CameraCalibrationEnableObservation`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiCameraCalibrationEnableObservationRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**V1EnableObservationRequest**](V1EnableObservationRequest.md) |  | 

### Return type

[**V1EnableObservationResponse**](V1EnableObservationResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CameraCalibrationGetMRSet

> V1GetMRSetResponse CameraCalibrationGetMRSet(ctx, mrsetuid).Execute()

Get single MR set

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
    mrsetuid := "mrsetuid_example" // string | MR Set UID

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CameraCalibrationApi.CameraCalibrationGetMRSet(context.Background(), mrsetuid).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CameraCalibrationApi.CameraCalibrationGetMRSet``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `CameraCalibrationGetMRSet`: V1GetMRSetResponse
    fmt.Fprintf(os.Stdout, "Response from `CameraCalibrationApi.CameraCalibrationGetMRSet`: %v\n", resp)
}
```

### Path Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**ctx** | **context.Context** | context for authentication, logging, cancellation, deadlines, tracing, etc.
**mrsetuid** | **string** | MR Set UID | 

### Other Parameters

Other parameters are passed through a pointer to a apiCameraCalibrationGetMRSetRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------


### Return type

[**V1GetMRSetResponse**](V1GetMRSetResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CameraCalibrationGetObservationProgress

> V1GetObservationProgressResponse CameraCalibrationGetObservationProgress(ctx).Execute()

Get Observation progress state

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
    resp, r, err := api_client.CameraCalibrationApi.CameraCalibrationGetObservationProgress(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CameraCalibrationApi.CameraCalibrationGetObservationProgress``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `CameraCalibrationGetObservationProgress`: V1GetObservationProgressResponse
    fmt.Fprintf(os.Stdout, "Response from `CameraCalibrationApi.CameraCalibrationGetObservationProgress`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiCameraCalibrationGetObservationProgressRequest struct via the builder pattern


### Return type

[**V1GetObservationProgressResponse**](V1GetObservationProgressResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CameraCalibrationListMRSets

> V1ListMRSetsResponse CameraCalibrationListMRSets(ctx).Execute()

List MR sets

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
    resp, r, err := api_client.CameraCalibrationApi.CameraCalibrationListMRSets(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CameraCalibrationApi.CameraCalibrationListMRSets``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `CameraCalibrationListMRSets`: V1ListMRSetsResponse
    fmt.Fprintf(os.Stdout, "Response from `CameraCalibrationApi.CameraCalibrationListMRSets`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiCameraCalibrationListMRSetsRequest struct via the builder pattern


### Return type

[**V1ListMRSetsResponse**](V1ListMRSetsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## CameraCalibrationResetAllObservations

> map[string]interface{} CameraCalibrationResetAllObservations(ctx).Body(body).Execute()

Reset Observations

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
    body := *openapiclient.NewV1ResetAllObservationsRequest() // V1ResetAllObservationsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.CameraCalibrationApi.CameraCalibrationResetAllObservations(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `CameraCalibrationApi.CameraCalibrationResetAllObservations``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `CameraCalibrationResetAllObservations`: map[string]interface{}
    fmt.Fprintf(os.Stdout, "Response from `CameraCalibrationApi.CameraCalibrationResetAllObservations`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiCameraCalibrationResetAllObservationsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**V1ResetAllObservationsRequest**](V1ResetAllObservationsRequest.md) |  | 

### Return type

**map[string]interface{}**

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: application/json
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)

