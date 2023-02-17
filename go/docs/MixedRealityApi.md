# \MixedRealityApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MixedRealityCaptureObservation**](MixedRealityApi.md#MixedRealityCaptureObservation) | **Post** /mixedreality/captureobservation | Capture an observation on the given camera
[**MixedRealityCaptureProgress**](MixedRealityApi.md#MixedRealityCaptureProgress) | **Get** /mixedreality/captureprogress | Gets the current capture progress, only one capture can run at once
[**MixedRealityDeleteAllObservations**](MixedRealityApi.md#MixedRealityDeleteAllObservations) | **Post** /mixedreality/deleteallobservations | Delete all observations for a given spatial calibration
[**MixedRealityDeleteObservations**](MixedRealityApi.md#MixedRealityDeleteObservations) | **Post** /mixedreality/deleteobservations | Pass a list of observation identifiers to delete
[**MixedRealityEnableObservations**](MixedRealityApi.md#MixedRealityEnableObservations) | **Post** /mixedreality/enableobservations | Pass a list of observation identifiers to enable/disable
[**MixedRealityGetCameras**](MixedRealityApi.md#MixedRealityGetCameras) | **Get** /mixedreality/cameras | Returns camera properties of cameras on the current stage
[**MixedRealityGetMRSets**](MixedRealityApi.md#MixedRealityGetMRSets) | **Get** /mixedreality/mrsets | Returns mixed reality sets on the current stage
[**MixedRealityListSpatialCalibrations**](MixedRealityApi.md#MixedRealityListSpatialCalibrations) | **Get** /mixedreality/spatialcalibrations | Returns a list of all spatial calibrations
[**MixedRealitySelectCamera**](MixedRealityApi.md#MixedRealitySelectCamera) | **Post** /mixedreality/selectcamera | Sets the current camera of an MR Set
[**MixedRealitySelectSpatialCalibration**](MixedRealityApi.md#MixedRealitySelectSpatialCalibration) | **Post** /mixedreality/selectspatialcalibration | Sets the spatial calibration currently in use by a camera



## MixedRealityCaptureObservation

> D3apiEmptyResponse MixedRealityCaptureObservation(ctx).Body(body).Execute()

Capture an observation on the given camera

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
    body := *openapiclient.NewMixedrealityCaptureObservationRequest() // MixedrealityCaptureObservationRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MixedRealityApi.MixedRealityCaptureObservation(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityCaptureObservation``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityCaptureObservation`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityCaptureObservation`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityCaptureObservationRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityCaptureObservationRequest**](MixedrealityCaptureObservationRequest.md) |  | 

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


## MixedRealityCaptureProgress

> D3apiBoolResponse MixedRealityCaptureProgress(ctx).Execute()

Gets the current capture progress, only one capture can run at once

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
    resp, r, err := api_client.MixedRealityApi.MixedRealityCaptureProgress(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityCaptureProgress``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityCaptureProgress`: D3apiBoolResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityCaptureProgress`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityCaptureProgressRequest struct via the builder pattern


### Return type

[**D3apiBoolResponse**](D3apiBoolResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MixedRealityDeleteAllObservations

> D3apiEmptyResponse MixedRealityDeleteAllObservations(ctx).Body(body).Execute()

Delete all observations for a given spatial calibration

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
    body := *openapiclient.NewMixedrealityDeleteAllObservationsRequest() // MixedrealityDeleteAllObservationsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MixedRealityApi.MixedRealityDeleteAllObservations(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityDeleteAllObservations``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityDeleteAllObservations`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityDeleteAllObservations`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityDeleteAllObservationsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityDeleteAllObservationsRequest**](MixedrealityDeleteAllObservationsRequest.md) |  | 

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


## MixedRealityDeleteObservations

> D3apiEmptyResponse MixedRealityDeleteObservations(ctx).Body(body).Execute()

Pass a list of observation identifiers to delete

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
    body := *openapiclient.NewMixedrealityDeleteObservationsRequest() // MixedrealityDeleteObservationsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MixedRealityApi.MixedRealityDeleteObservations(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityDeleteObservations``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityDeleteObservations`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityDeleteObservations`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityDeleteObservationsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityDeleteObservationsRequest**](MixedrealityDeleteObservationsRequest.md) |  | 

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


## MixedRealityEnableObservations

> D3apiEmptyResponse MixedRealityEnableObservations(ctx).Body(body).Execute()

Pass a list of observation identifiers to enable/disable

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
    body := *openapiclient.NewMixedrealityEnableObservationsRequest() // MixedrealityEnableObservationsRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MixedRealityApi.MixedRealityEnableObservations(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityEnableObservations``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityEnableObservations`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityEnableObservations`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityEnableObservationsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealityEnableObservationsRequest**](MixedrealityEnableObservationsRequest.md) |  | 

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


## MixedRealityGetCameras

> MixedrealityGetCamerasResponse MixedRealityGetCameras(ctx).Execute()

Returns camera properties of cameras on the current stage

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
    resp, r, err := api_client.MixedRealityApi.MixedRealityGetCameras(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityGetCameras``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityGetCameras`: MixedrealityGetCamerasResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityGetCameras`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityGetCamerasRequest struct via the builder pattern


### Return type

[**MixedrealityGetCamerasResponse**](MixedrealityGetCamerasResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MixedRealityGetMRSets

> MixedrealityGetMRSetsResponse MixedRealityGetMRSets(ctx).Execute()

Returns mixed reality sets on the current stage

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
    resp, r, err := api_client.MixedRealityApi.MixedRealityGetMRSets(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityGetMRSets``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityGetMRSets`: MixedrealityGetMRSetsResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityGetMRSets`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityGetMRSetsRequest struct via the builder pattern


### Return type

[**MixedrealityGetMRSetsResponse**](MixedrealityGetMRSetsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MixedRealityListSpatialCalibrations

> MixedrealityListSpatialCalibrationsResponse MixedRealityListSpatialCalibrations(ctx).Execute()

Returns a list of all spatial calibrations

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
    resp, r, err := api_client.MixedRealityApi.MixedRealityListSpatialCalibrations(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealityListSpatialCalibrations``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealityListSpatialCalibrations`: MixedrealityListSpatialCalibrationsResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealityListSpatialCalibrations`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealityListSpatialCalibrationsRequest struct via the builder pattern


### Return type

[**MixedrealityListSpatialCalibrationsResponse**](MixedrealityListSpatialCalibrationsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## MixedRealitySelectCamera

> D3apiEmptyResponse MixedRealitySelectCamera(ctx).Body(body).Execute()

Sets the current camera of an MR Set

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
    body := *openapiclient.NewMixedrealitySelectCameraRequest() // MixedrealitySelectCameraRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MixedRealityApi.MixedRealitySelectCamera(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealitySelectCamera``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealitySelectCamera`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealitySelectCamera`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealitySelectCameraRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealitySelectCameraRequest**](MixedrealitySelectCameraRequest.md) |  | 

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


## MixedRealitySelectSpatialCalibration

> D3apiEmptyResponse MixedRealitySelectSpatialCalibration(ctx).Body(body).Execute()

Sets the spatial calibration currently in use by a camera

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
    body := *openapiclient.NewMixedrealitySelectSpatialCalibrationRequest() // MixedrealitySelectSpatialCalibrationRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.MixedRealityApi.MixedRealitySelectSpatialCalibration(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `MixedRealityApi.MixedRealitySelectSpatialCalibration``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `MixedRealitySelectSpatialCalibration`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `MixedRealityApi.MixedRealitySelectSpatialCalibration`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiMixedRealitySelectSpatialCalibrationRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**MixedrealitySelectSpatialCalibrationRequest**](MixedrealitySelectSpatialCalibrationRequest.md) |  | 

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

