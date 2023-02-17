# openapi_client.TransportApi

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**transport_get_active_transports**](TransportApi.md#transport_get_active_transports) | **GET** /transport/activetransport | Get the active transport in the project. This is the transport selected in the d3State bar.
[**transport_go_to_frame**](TransportApi.md#transport_go_to_frame) | **POST** /transport/gotoframe | Jump to the specific frame
[**transport_go_to_next_section**](TransportApi.md#transport_go_to_next_section) | **POST** /transport/gotonextsection | Jump to the next section of the current track
[**transport_go_to_next_track**](TransportApi.md#transport_go_to_next_track) | **POST** /transport/gotonexttrack | Jump to the start of the next track
[**transport_go_to_note**](TransportApi.md#transport_go_to_note) | **POST** /transport/gotonote | Jump to a given note on a given transport
[**transport_go_to_prev_section**](TransportApi.md#transport_go_to_prev_section) | **POST** /transport/gotoprevsection | Jump to the previous section of the current track
[**transport_go_to_prev_track**](TransportApi.md#transport_go_to_prev_track) | **POST** /transport/gotoprevtrack | Jump to the start of the previous track
[**transport_go_to_section**](TransportApi.md#transport_go_to_section) | **POST** /transport/gotosection | Jump to a given section on a given transport
[**transport_go_to_tag**](TransportApi.md#transport_go_to_tag) | **POST** /transport/gototag | Jump to a given tag on a given transport
[**transport_go_to_time**](TransportApi.md#transport_go_to_time) | **POST** /transport/gototime | Jump to the specific time
[**transport_go_to_time_code**](TransportApi.md#transport_go_to_time_code) | **POST** /transport/gototimecode | Jump to a given time on a given transport
[**transport_go_to_track**](TransportApi.md#transport_go_to_track) | **POST** /transport/gototrack | Jump to the start of the given track
[**transport_list_annotations**](TransportApi.md#transport_list_annotations) | **GET** /transport/annotations | List all annotations in the given Track
[**transport_list_set_lists**](TransportApi.md#transport_list_set_lists) | **GET** /transport/setlists | List all SetLists in the project
[**transport_list_tracks**](TransportApi.md#transport_list_tracks) | **GET** /transport/tracks | List all tracks in the project
[**transport_play**](TransportApi.md#transport_play) | **POST** /transport/play | Play a transport (sets playmode to &#39;play&#39;)
[**transport_play_loop_section**](TransportApi.md#transport_play_loop_section) | **POST** /transport/playloopsection | Loop a section on a transport (sets playmode to &#39;loop section&#39;)
[**transport_play_section**](TransportApi.md#transport_play_section) | **POST** /transport/playsection | Play a section on a transport (sets playmode to &#39;play to end of section&#39;)
[**transport_return_to_start**](TransportApi.md#transport_return_to_start) | **POST** /transport/returntostart | Return to start of a transport
[**transport_set_brightness**](TransportApi.md#transport_set_brightness) | **POST** /transport/brightness | Set the brightness of the specified transport manager&#39;s current transport
[**transport_set_engaged**](TransportApi.md#transport_set_engaged) | **POST** /transport/engaged | Set the engaged status of the current transport
[**transport_set_volume**](TransportApi.md#transport_set_volume) | **POST** /transport/volume | Set the volume of the current transport
[**transport_stop**](TransportApi.md#transport_stop) | **POST** /transport/stop | Stop a transport


# **transport_get_active_transports**
> TransportGetActiveTransportResponse transport_get_active_transports()

Get the active transport in the project. This is the transport selected in the d3State bar.

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_get_active_transport_response import TransportGetActiveTransportResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # Get the active transport in the project. This is the transport selected in the d3State bar.
        api_response = api_instance.transport_get_active_transports()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_get_active_transports: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**TransportGetActiveTransportResponse**](TransportGetActiveTransportResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_frame**
> D3apiEmptyResponse transport_go_to_frame(body)

Jump to the specific frame

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_frame_request import TransportGoToFrameRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToFrameRequest(
        transports=[
            TransportGoToFrameInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                frame=1,
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToFrameRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the specific frame
        api_response = api_instance.transport_go_to_frame(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_frame: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToFrameRequest**](TransportGoToFrameRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_next_section**
> D3apiEmptyResponse transport_go_to_next_section(body)

Jump to the next section of the current track

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_go_to_next_section_request import TransportGoToNextSectionRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToNextSectionRequest(
        transports=[
            TransportGoToNextPrevInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToNextSectionRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the next section of the current track
        api_response = api_instance.transport_go_to_next_section(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_next_section: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToNextSectionRequest**](TransportGoToNextSectionRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_next_track**
> D3apiEmptyResponse transport_go_to_next_track(body)

Jump to the start of the next track

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_next_track_request import TransportGoToNextTrackRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToNextTrackRequest(
        transports=[
            TransportGoToNextPrevInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToNextTrackRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the start of the next track
        api_response = api_instance.transport_go_to_next_track(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_next_track: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToNextTrackRequest**](TransportGoToNextTrackRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_note**
> D3apiEmptyResponse transport_go_to_note(body)

Jump to a given note on a given transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_go_to_note_request import TransportGoToNoteRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToNoteRequest(
        transports=[
            TransportGotoNoteInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                note="note_example",
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToNoteRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to a given note on a given transport
        api_response = api_instance.transport_go_to_note(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_note: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToNoteRequest**](TransportGoToNoteRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_prev_section**
> D3apiEmptyResponse transport_go_to_prev_section(body)

Jump to the previous section of the current track

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_prev_section_request import TransportGoToPrevSectionRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToPrevSectionRequest(
        transports=[
            TransportGoToNextPrevInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToPrevSectionRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the previous section of the current track
        api_response = api_instance.transport_go_to_prev_section(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_prev_section: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToPrevSectionRequest**](TransportGoToPrevSectionRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_prev_track**
> D3apiEmptyResponse transport_go_to_prev_track(body)

Jump to the start of the previous track

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_go_to_prev_track_request import TransportGoToPrevTrackRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToPrevTrackRequest(
        transports=[
            TransportGoToNextPrevInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToPrevTrackRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the start of the previous track
        api_response = api_instance.transport_go_to_prev_track(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_prev_track: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToPrevTrackRequest**](TransportGoToPrevTrackRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_section**
> D3apiEmptyResponse transport_go_to_section(body)

Jump to a given section on a given transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_section_request import TransportGoToSectionRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToSectionRequest(
        transports=[
            TransportGoToSectionInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                section="section_example",
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToSectionRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to a given section on a given transport
        api_response = api_instance.transport_go_to_section(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_section: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToSectionRequest**](TransportGoToSectionRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_tag**
> D3apiEmptyResponse transport_go_to_tag(body)

Jump to a given tag on a given transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_tag_request import TransportGoToTagRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToTagRequest(
        transports=[
            TransportGoToTagInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                type=TransportTagType("TagType_Unknown"),
                value="value_example",
                allow_global_jump=True,
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToTagRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to a given tag on a given transport
        api_response = api_instance.transport_go_to_tag(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_tag: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTagRequest**](TransportGoToTagRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_time**
> D3apiEmptyResponse transport_go_to_time(body)

Jump to the specific time

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_time_request import TransportGoToTimeRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToTimeRequest(
        transports=[
            TransportGoToTimeInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                time=3.14,
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToTimeRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the specific time
        api_response = api_instance.transport_go_to_time(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_time: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTimeRequest**](TransportGoToTimeRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_time_code**
> D3apiEmptyResponse transport_go_to_time_code(body)

Jump to a given time on a given transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_go_to_time_code_request import TransportGoToTimeCodeRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToTimeCodeRequest(
        transports=[
            TransportGoToTimeCodeInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                timecode="timecode_example",
                ignore_tags=True,
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToTimeCodeRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to a given time on a given transport
        api_response = api_instance.transport_go_to_time_code(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_time_code: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTimeCodeRequest**](TransportGoToTimeCodeRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_go_to_track**
> D3apiEmptyResponse transport_go_to_track(body)

Jump to the start of the given track

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_go_to_track_request import TransportGoToTrackRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportGoToTrackRequest(
        transports=[
            TransportGoToTrackInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                track=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                playmode=TransportAPIPlayMode("NotSet"),
            ),
        ],
    ) # TransportGoToTrackRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Jump to the start of the given track
        api_response = api_instance.transport_go_to_track(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_go_to_track: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportGoToTrackRequest**](TransportGoToTrackRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_list_annotations**
> TransportListAnnotationsResponse transport_list_annotations()

List all annotations in the given Track

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_list_annotations_response import TransportListAnnotationsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    uid = "uid_example" # str | UID of the Track. (optional)
    name = "name_example" # str | Name of the Track. (optional)

    # example passing only required values which don't have defaults set
    # and optional values
    try:
        # List all annotations in the given Track
        api_response = api_instance.transport_list_annotations(uid=uid, name=name)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_list_annotations: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **uid** | **str**| UID of the Track. | [optional]
 **name** | **str**| Name of the Track. | [optional]

### Return type

[**TransportListAnnotationsResponse**](TransportListAnnotationsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_list_set_lists**
> TransportListSetListsResponse transport_list_set_lists()

List all SetLists in the project

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_list_set_lists_response import TransportListSetListsResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all SetLists in the project
        api_response = api_instance.transport_list_set_lists()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_list_set_lists: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**TransportListSetListsResponse**](TransportListSetListsResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_list_tracks**
> TransportListTracksResponse transport_list_tracks()

List all tracks in the project

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_list_tracks_response import TransportListTracksResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)

    # example, this endpoint has no required or optional parameters
    try:
        # List all tracks in the project
        api_response = api_instance.transport_list_tracks()
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_list_tracks: %s\n" % e)
```


### Parameters
This endpoint does not need any parameter.

### Return type

[**TransportListTracksResponse**](TransportListTracksResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_play**
> D3apiEmptyResponse transport_play(body)

Play a transport (sets playmode to 'play')

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_play_request import TransportPlayRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportPlayRequest(
        transports=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # TransportPlayRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Play a transport (sets playmode to 'play')
        api_response = api_instance.transport_play(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_play: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportPlayRequest**](TransportPlayRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_play_loop_section**
> D3apiEmptyResponse transport_play_loop_section(body)

Loop a section on a transport (sets playmode to 'loop section')

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_play_loop_section_request import TransportPlayLoopSectionRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportPlayLoopSectionRequest(
        transports=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # TransportPlayLoopSectionRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Loop a section on a transport (sets playmode to 'loop section')
        api_response = api_instance.transport_play_loop_section(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_play_loop_section: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportPlayLoopSectionRequest**](TransportPlayLoopSectionRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_play_section**
> D3apiEmptyResponse transport_play_section(body)

Play a section on a transport (sets playmode to 'play to end of section')

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_play_section_request import TransportPlaySectionRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportPlaySectionRequest(
        transports=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # TransportPlaySectionRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Play a section on a transport (sets playmode to 'play to end of section')
        api_response = api_instance.transport_play_section(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_play_section: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportPlaySectionRequest**](TransportPlaySectionRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_return_to_start**
> D3apiEmptyResponse transport_return_to_start(body)

Return to start of a transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_return_to_start_request import TransportReturnToStartRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportReturnToStartRequest(
        transports=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # TransportReturnToStartRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Return to start of a transport
        api_response = api_instance.transport_return_to_start(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_return_to_start: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportReturnToStartRequest**](TransportReturnToStartRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_set_brightness**
> D3apiEmptyResponse transport_set_brightness(body)

Set the brightness of the specified transport manager's current transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_set_brightness_request import TransportSetBrightnessRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportSetBrightnessRequest(
        transports=[
            TransportSetBrightnessInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                brightness=3.14,
            ),
        ],
    ) # TransportSetBrightnessRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Set the brightness of the specified transport manager's current transport
        api_response = api_instance.transport_set_brightness(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_set_brightness: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportSetBrightnessRequest**](TransportSetBrightnessRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_set_engaged**
> D3apiEmptyResponse transport_set_engaged(body)

Set the engaged status of the current transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from openapi_client.model.transport_set_engaged_request import TransportSetEngagedRequest
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportSetEngagedRequest(
        transports=[
            TransportSetEngagedInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                engaged=True,
            ),
        ],
    ) # TransportSetEngagedRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Set the engaged status of the current transport
        api_response = api_instance.transport_set_engaged(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_set_engaged: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportSetEngagedRequest**](TransportSetEngagedRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_set_volume**
> D3apiEmptyResponse transport_set_volume(body)

Set the volume of the current transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_set_volume_request import TransportSetVolumeRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportSetVolumeRequest(
        transports=[
            TransportSetVolumeInfo(
                transport=D3apiLocator(
                    uid="uid_example",
                    name="name_example",
                ),
                volume=3.14,
            ),
        ],
    ) # TransportSetVolumeRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Set the volume of the current transport
        api_response = api_instance.transport_set_volume(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_set_volume: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportSetVolumeRequest**](TransportSetVolumeRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **transport_stop**
> D3apiEmptyResponse transport_stop(body)

Stop a transport

### Example


```python
import time
import openapi_client
from openapi_client.api import transport_api
from openapi_client.model.transport_stop_request import TransportStopRequest
from openapi_client.model.d3api_empty_response import D3apiEmptyResponse
from pprint import pprint
# Defining the host is optional and defaults to http://localhost/api/session
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "http://localhost/api/session"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient() as api_client:
    # Create an instance of the API class
    api_instance = transport_api.TransportApi(api_client)
    body = TransportStopRequest(
        transports=[
            D3apiLocator(
                uid="uid_example",
                name="name_example",
            ),
        ],
    ) # TransportStopRequest | 

    # example passing only required values which don't have defaults set
    try:
        # Stop a transport
        api_response = api_instance.transport_stop(body)
        pprint(api_response)
    except openapi_client.ApiException as e:
        print("Exception when calling TransportApi->transport_stop: %s\n" % e)
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **body** | [**TransportStopRequest**](TransportStopRequest.md)|  |

### Return type

[**D3apiEmptyResponse**](D3apiEmptyResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json


### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | A successful response. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

