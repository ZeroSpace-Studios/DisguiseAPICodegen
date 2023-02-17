# \TransportApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TransportGetActiveTransports**](TransportApi.md#TransportGetActiveTransports) | **Get** /transport/activetransport | Get the active transport in the project. This is the transport selected in the d3State bar.
[**TransportGoToFrame**](TransportApi.md#TransportGoToFrame) | **Post** /transport/gotoframe | Jump to the specific frame
[**TransportGoToNextSection**](TransportApi.md#TransportGoToNextSection) | **Post** /transport/gotonextsection | Jump to the next section of the current track
[**TransportGoToNextTrack**](TransportApi.md#TransportGoToNextTrack) | **Post** /transport/gotonexttrack | Jump to the start of the next track
[**TransportGoToNote**](TransportApi.md#TransportGoToNote) | **Post** /transport/gotonote | Jump to a given note on a given transport
[**TransportGoToPrevSection**](TransportApi.md#TransportGoToPrevSection) | **Post** /transport/gotoprevsection | Jump to the previous section of the current track
[**TransportGoToPrevTrack**](TransportApi.md#TransportGoToPrevTrack) | **Post** /transport/gotoprevtrack | Jump to the start of the previous track
[**TransportGoToSection**](TransportApi.md#TransportGoToSection) | **Post** /transport/gotosection | Jump to a given section on a given transport
[**TransportGoToTag**](TransportApi.md#TransportGoToTag) | **Post** /transport/gototag | Jump to a given tag on a given transport
[**TransportGoToTime**](TransportApi.md#TransportGoToTime) | **Post** /transport/gototime | Jump to the specific time
[**TransportGoToTimeCode**](TransportApi.md#TransportGoToTimeCode) | **Post** /transport/gototimecode | Jump to a given time on a given transport
[**TransportGoToTrack**](TransportApi.md#TransportGoToTrack) | **Post** /transport/gototrack | Jump to the start of the given track
[**TransportListAnnotations**](TransportApi.md#TransportListAnnotations) | **Get** /transport/annotations | List all annotations in the given Track
[**TransportListSetLists**](TransportApi.md#TransportListSetLists) | **Get** /transport/setlists | List all SetLists in the project
[**TransportListTracks**](TransportApi.md#TransportListTracks) | **Get** /transport/tracks | List all tracks in the project
[**TransportPlay**](TransportApi.md#TransportPlay) | **Post** /transport/play | Play a transport (sets playmode to &#39;play&#39;)
[**TransportPlayLoopSection**](TransportApi.md#TransportPlayLoopSection) | **Post** /transport/playloopsection | Loop a section on a transport (sets playmode to &#39;loop section&#39;)
[**TransportPlaySection**](TransportApi.md#TransportPlaySection) | **Post** /transport/playsection | Play a section on a transport (sets playmode to &#39;play to end of section&#39;)
[**TransportReturnToStart**](TransportApi.md#TransportReturnToStart) | **Post** /transport/returntostart | Return to start of a transport
[**TransportSetBrightness**](TransportApi.md#TransportSetBrightness) | **Post** /transport/brightness | Set the brightness of the specified transport manager&#39;s current transport
[**TransportSetEngaged**](TransportApi.md#TransportSetEngaged) | **Post** /transport/engaged | Set the engaged status of the current transport
[**TransportSetVolume**](TransportApi.md#TransportSetVolume) | **Post** /transport/volume | Set the volume of the current transport
[**TransportStop**](TransportApi.md#TransportStop) | **Post** /transport/stop | Stop a transport



## TransportGetActiveTransports

> TransportGetActiveTransportResponse TransportGetActiveTransports(ctx).Execute()

Get the active transport in the project. This is the transport selected in the d3State bar.

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
    resp, r, err := api_client.TransportApi.TransportGetActiveTransports(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGetActiveTransports``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGetActiveTransports`: TransportGetActiveTransportResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGetActiveTransports`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiTransportGetActiveTransportsRequest struct via the builder pattern


### Return type

[**TransportGetActiveTransportResponse**](TransportGetActiveTransportResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TransportGoToFrame

> D3apiEmptyResponse TransportGoToFrame(ctx).Body(body).Execute()

Jump to the specific frame

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
    body := *openapiclient.NewTransportGoToFrameRequest() // TransportGoToFrameRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToFrame(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToFrame``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToFrame`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToFrame`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToFrameRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToFrameRequest**](TransportGoToFrameRequest.md) |  | 

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


## TransportGoToNextSection

> D3apiEmptyResponse TransportGoToNextSection(ctx).Body(body).Execute()

Jump to the next section of the current track

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
    body := *openapiclient.NewTransportGoToNextSectionRequest() // TransportGoToNextSectionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToNextSection(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToNextSection``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToNextSection`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToNextSection`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToNextSectionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToNextSectionRequest**](TransportGoToNextSectionRequest.md) |  | 

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


## TransportGoToNextTrack

> D3apiEmptyResponse TransportGoToNextTrack(ctx).Body(body).Execute()

Jump to the start of the next track

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
    body := *openapiclient.NewTransportGoToNextTrackRequest() // TransportGoToNextTrackRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToNextTrack(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToNextTrack``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToNextTrack`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToNextTrack`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToNextTrackRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToNextTrackRequest**](TransportGoToNextTrackRequest.md) |  | 

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


## TransportGoToNote

> D3apiEmptyResponse TransportGoToNote(ctx).Body(body).Execute()

Jump to a given note on a given transport

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
    body := *openapiclient.NewTransportGoToNoteRequest() // TransportGoToNoteRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToNote(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToNote``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToNote`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToNote`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToNoteRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToNoteRequest**](TransportGoToNoteRequest.md) |  | 

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


## TransportGoToPrevSection

> D3apiEmptyResponse TransportGoToPrevSection(ctx).Body(body).Execute()

Jump to the previous section of the current track

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
    body := *openapiclient.NewTransportGoToPrevSectionRequest() // TransportGoToPrevSectionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToPrevSection(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToPrevSection``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToPrevSection`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToPrevSection`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToPrevSectionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToPrevSectionRequest**](TransportGoToPrevSectionRequest.md) |  | 

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


## TransportGoToPrevTrack

> D3apiEmptyResponse TransportGoToPrevTrack(ctx).Body(body).Execute()

Jump to the start of the previous track

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
    body := *openapiclient.NewTransportGoToPrevTrackRequest() // TransportGoToPrevTrackRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToPrevTrack(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToPrevTrack``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToPrevTrack`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToPrevTrack`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToPrevTrackRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToPrevTrackRequest**](TransportGoToPrevTrackRequest.md) |  | 

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


## TransportGoToSection

> D3apiEmptyResponse TransportGoToSection(ctx).Body(body).Execute()

Jump to a given section on a given transport

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
    body := *openapiclient.NewTransportGoToSectionRequest() // TransportGoToSectionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToSection(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToSection``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToSection`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToSection`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToSectionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToSectionRequest**](TransportGoToSectionRequest.md) |  | 

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


## TransportGoToTag

> D3apiEmptyResponse TransportGoToTag(ctx).Body(body).Execute()

Jump to a given tag on a given transport

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
    body := *openapiclient.NewTransportGoToTagRequest() // TransportGoToTagRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToTag(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToTag``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToTag`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToTag`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToTagRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTagRequest**](TransportGoToTagRequest.md) |  | 

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


## TransportGoToTime

> D3apiEmptyResponse TransportGoToTime(ctx).Body(body).Execute()

Jump to the specific time

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
    body := *openapiclient.NewTransportGoToTimeRequest() // TransportGoToTimeRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToTime(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToTime``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToTime`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToTime`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToTimeRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTimeRequest**](TransportGoToTimeRequest.md) |  | 

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


## TransportGoToTimeCode

> D3apiEmptyResponse TransportGoToTimeCode(ctx).Body(body).Execute()

Jump to a given time on a given transport

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
    body := *openapiclient.NewTransportGoToTimeCodeRequest() // TransportGoToTimeCodeRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToTimeCode(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToTimeCode``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToTimeCode`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToTimeCode`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToTimeCodeRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTimeCodeRequest**](TransportGoToTimeCodeRequest.md) |  | 

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


## TransportGoToTrack

> D3apiEmptyResponse TransportGoToTrack(ctx).Body(body).Execute()

Jump to the start of the given track

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
    body := *openapiclient.NewTransportGoToTrackRequest() // TransportGoToTrackRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportGoToTrack(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportGoToTrack``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportGoToTrack`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportGoToTrack`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportGoToTrackRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTrackRequest**](TransportGoToTrackRequest.md) |  | 

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


## TransportListAnnotations

> TransportListAnnotationsResponse TransportListAnnotations(ctx).Uid(uid).Name(name).Execute()

List all annotations in the given Track

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
    uid := "uid_example" // string | UID of the Track. (optional)
    name := "name_example" // string | Name of the Track. (optional)

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportListAnnotations(context.Background()).Uid(uid).Name(name).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportListAnnotations``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportListAnnotations`: TransportListAnnotationsResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportListAnnotations`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportListAnnotationsRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **string** | UID of the Track. | 
 **name** | **string** | Name of the Track. | 

### Return type

[**TransportListAnnotationsResponse**](TransportListAnnotationsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TransportListSetLists

> TransportListSetListsResponse TransportListSetLists(ctx).Execute()

List all SetLists in the project

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
    resp, r, err := api_client.TransportApi.TransportListSetLists(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportListSetLists``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportListSetLists`: TransportListSetListsResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportListSetLists`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiTransportListSetListsRequest struct via the builder pattern


### Return type

[**TransportListSetListsResponse**](TransportListSetListsResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TransportListTracks

> TransportListTracksResponse TransportListTracks(ctx).Execute()

List all tracks in the project

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
    resp, r, err := api_client.TransportApi.TransportListTracks(context.Background()).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportListTracks``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportListTracks`: TransportListTracksResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportListTracks`: %v\n", resp)
}
```

### Path Parameters

This endpoint does not need any parameter.

### Other Parameters

Other parameters are passed through a pointer to a apiTransportListTracksRequest struct via the builder pattern


### Return type

[**TransportListTracksResponse**](TransportListTracksResponse.md)

### Authorization

No authorization required

### HTTP request headers

- **Content-Type**: Not defined
- **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints)
[[Back to Model list]](../README.md#documentation-for-models)
[[Back to README]](../README.md)


## TransportPlay

> D3apiEmptyResponse TransportPlay(ctx).Body(body).Execute()

Play a transport (sets playmode to 'play')

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
    body := *openapiclient.NewTransportPlayRequest() // TransportPlayRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportPlay(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportPlay``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportPlay`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportPlay`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportPlayRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportPlayRequest**](TransportPlayRequest.md) |  | 

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


## TransportPlayLoopSection

> D3apiEmptyResponse TransportPlayLoopSection(ctx).Body(body).Execute()

Loop a section on a transport (sets playmode to 'loop section')

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
    body := *openapiclient.NewTransportPlayLoopSectionRequest() // TransportPlayLoopSectionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportPlayLoopSection(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportPlayLoopSection``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportPlayLoopSection`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportPlayLoopSection`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportPlayLoopSectionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportPlayLoopSectionRequest**](TransportPlayLoopSectionRequest.md) |  | 

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


## TransportPlaySection

> D3apiEmptyResponse TransportPlaySection(ctx).Body(body).Execute()

Play a section on a transport (sets playmode to 'play to end of section')

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
    body := *openapiclient.NewTransportPlaySectionRequest() // TransportPlaySectionRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportPlaySection(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportPlaySection``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportPlaySection`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportPlaySection`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportPlaySectionRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportPlaySectionRequest**](TransportPlaySectionRequest.md) |  | 

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


## TransportReturnToStart

> D3apiEmptyResponse TransportReturnToStart(ctx).Body(body).Execute()

Return to start of a transport

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
    body := *openapiclient.NewTransportReturnToStartRequest() // TransportReturnToStartRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportReturnToStart(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportReturnToStart``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportReturnToStart`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportReturnToStart`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportReturnToStartRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportReturnToStartRequest**](TransportReturnToStartRequest.md) |  | 

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


## TransportSetBrightness

> D3apiEmptyResponse TransportSetBrightness(ctx).Body(body).Execute()

Set the brightness of the specified transport manager's current transport

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
    body := *openapiclient.NewTransportSetBrightnessRequest() // TransportSetBrightnessRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportSetBrightness(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportSetBrightness``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportSetBrightness`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportSetBrightness`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportSetBrightnessRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportSetBrightnessRequest**](TransportSetBrightnessRequest.md) |  | 

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


## TransportSetEngaged

> D3apiEmptyResponse TransportSetEngaged(ctx).Body(body).Execute()

Set the engaged status of the current transport

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
    body := *openapiclient.NewTransportSetEngagedRequest() // TransportSetEngagedRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportSetEngaged(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportSetEngaged``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportSetEngaged`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportSetEngaged`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportSetEngagedRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportSetEngagedRequest**](TransportSetEngagedRequest.md) |  | 

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


## TransportSetVolume

> D3apiEmptyResponse TransportSetVolume(ctx).Body(body).Execute()

Set the volume of the current transport

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
    body := *openapiclient.NewTransportSetVolumeRequest() // TransportSetVolumeRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportSetVolume(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportSetVolume``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportSetVolume`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportSetVolume`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportSetVolumeRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportSetVolumeRequest**](TransportSetVolumeRequest.md) |  | 

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


## TransportStop

> D3apiEmptyResponse TransportStop(ctx).Body(body).Execute()

Stop a transport

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
    body := *openapiclient.NewTransportStopRequest() // TransportStopRequest | 

    configuration := openapiclient.NewConfiguration()
    api_client := openapiclient.NewAPIClient(configuration)
    resp, r, err := api_client.TransportApi.TransportStop(context.Background()).Body(body).Execute()
    if err != nil {
        fmt.Fprintf(os.Stderr, "Error when calling `TransportApi.TransportStop``: %v\n", err)
        fmt.Fprintf(os.Stderr, "Full HTTP response: %v\n", r)
    }
    // response from `TransportStop`: D3apiEmptyResponse
    fmt.Fprintf(os.Stdout, "Response from `TransportApi.TransportStop`: %v\n", resp)
}
```

### Path Parameters



### Other Parameters

Other parameters are passed through a pointer to a apiTransportStopRequest struct via the builder pattern


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportStopRequest**](TransportStopRequest.md) |  | 

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

