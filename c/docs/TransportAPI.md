# TransportAPI

All URIs are relative to *http://localhost/api/session*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TransportAPI_transportGetActiveTransports**](TransportAPI.md#TransportAPI_transportGetActiveTransports) | **GET** /transport/activetransport | Get the active transport in the project. This is the transport selected in the d3State bar.
[**TransportAPI_transportGoToFrame**](TransportAPI.md#TransportAPI_transportGoToFrame) | **POST** /transport/gotoframe | Jump to the specific frame
[**TransportAPI_transportGoToNextSection**](TransportAPI.md#TransportAPI_transportGoToNextSection) | **POST** /transport/gotonextsection | Jump to the next section of the current track
[**TransportAPI_transportGoToNextTrack**](TransportAPI.md#TransportAPI_transportGoToNextTrack) | **POST** /transport/gotonexttrack | Jump to the start of the next track
[**TransportAPI_transportGoToNote**](TransportAPI.md#TransportAPI_transportGoToNote) | **POST** /transport/gotonote | Jump to a given note on a given transport
[**TransportAPI_transportGoToPrevSection**](TransportAPI.md#TransportAPI_transportGoToPrevSection) | **POST** /transport/gotoprevsection | Jump to the previous section of the current track
[**TransportAPI_transportGoToPrevTrack**](TransportAPI.md#TransportAPI_transportGoToPrevTrack) | **POST** /transport/gotoprevtrack | Jump to the start of the previous track
[**TransportAPI_transportGoToSection**](TransportAPI.md#TransportAPI_transportGoToSection) | **POST** /transport/gotosection | Jump to a given section on a given transport
[**TransportAPI_transportGoToTag**](TransportAPI.md#TransportAPI_transportGoToTag) | **POST** /transport/gototag | Jump to a given tag on a given transport
[**TransportAPI_transportGoToTime**](TransportAPI.md#TransportAPI_transportGoToTime) | **POST** /transport/gototime | Jump to the specific time
[**TransportAPI_transportGoToTimeCode**](TransportAPI.md#TransportAPI_transportGoToTimeCode) | **POST** /transport/gototimecode | Jump to a given time on a given transport
[**TransportAPI_transportGoToTrack**](TransportAPI.md#TransportAPI_transportGoToTrack) | **POST** /transport/gototrack | Jump to the start of the given track
[**TransportAPI_transportListAnnotations**](TransportAPI.md#TransportAPI_transportListAnnotations) | **GET** /transport/annotations | List all annotations in the given Track
[**TransportAPI_transportListSetLists**](TransportAPI.md#TransportAPI_transportListSetLists) | **GET** /transport/setlists | List all SetLists in the project
[**TransportAPI_transportListTracks**](TransportAPI.md#TransportAPI_transportListTracks) | **GET** /transport/tracks | List all tracks in the project
[**TransportAPI_transportPlay**](TransportAPI.md#TransportAPI_transportPlay) | **POST** /transport/play | Play a transport (sets playmode to &#39;play&#39;)
[**TransportAPI_transportPlayLoopSection**](TransportAPI.md#TransportAPI_transportPlayLoopSection) | **POST** /transport/playloopsection | Loop a section on a transport (sets playmode to &#39;loop section&#39;)
[**TransportAPI_transportPlaySection**](TransportAPI.md#TransportAPI_transportPlaySection) | **POST** /transport/playsection | Play a section on a transport (sets playmode to &#39;play to end of section&#39;)
[**TransportAPI_transportReturnToStart**](TransportAPI.md#TransportAPI_transportReturnToStart) | **POST** /transport/returntostart | Return to start of a transport
[**TransportAPI_transportSetBrightness**](TransportAPI.md#TransportAPI_transportSetBrightness) | **POST** /transport/brightness | Set the brightness of the specified transport manager&#39;s current transport
[**TransportAPI_transportSetEngaged**](TransportAPI.md#TransportAPI_transportSetEngaged) | **POST** /transport/engaged | Set the engaged status of the current transport
[**TransportAPI_transportSetVolume**](TransportAPI.md#TransportAPI_transportSetVolume) | **POST** /transport/volume | Set the volume of the current transport
[**TransportAPI_transportStop**](TransportAPI.md#TransportAPI_transportStop) | **POST** /transport/stop | Stop a transport


# **TransportAPI_transportGetActiveTransports**
```c
// Get the active transport in the project. This is the transport selected in the d3State bar.
//
transport_get_active_transport_response_t* TransportAPI_transportGetActiveTransports(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[transport_get_active_transport_response_t](transport_get_active_transport_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToFrame**
```c
// Jump to the specific frame
//
d3api_empty_response_t* TransportAPI_transportGoToFrame(apiClient_t *apiClient, transport_go_to_frame_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_frame_request_t](transport_go_to_frame_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToNextSection**
```c
// Jump to the next section of the current track
//
d3api_empty_response_t* TransportAPI_transportGoToNextSection(apiClient_t *apiClient, transport_go_to_next_section_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_next_section_request_t](transport_go_to_next_section_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToNextTrack**
```c
// Jump to the start of the next track
//
d3api_empty_response_t* TransportAPI_transportGoToNextTrack(apiClient_t *apiClient, transport_go_to_next_track_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_next_track_request_t](transport_go_to_next_track_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToNote**
```c
// Jump to a given note on a given transport
//
d3api_empty_response_t* TransportAPI_transportGoToNote(apiClient_t *apiClient, transport_go_to_note_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_note_request_t](transport_go_to_note_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToPrevSection**
```c
// Jump to the previous section of the current track
//
d3api_empty_response_t* TransportAPI_transportGoToPrevSection(apiClient_t *apiClient, transport_go_to_prev_section_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_prev_section_request_t](transport_go_to_prev_section_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToPrevTrack**
```c
// Jump to the start of the previous track
//
d3api_empty_response_t* TransportAPI_transportGoToPrevTrack(apiClient_t *apiClient, transport_go_to_prev_track_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_prev_track_request_t](transport_go_to_prev_track_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToSection**
```c
// Jump to a given section on a given transport
//
d3api_empty_response_t* TransportAPI_transportGoToSection(apiClient_t *apiClient, transport_go_to_section_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_section_request_t](transport_go_to_section_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToTag**
```c
// Jump to a given tag on a given transport
//
d3api_empty_response_t* TransportAPI_transportGoToTag(apiClient_t *apiClient, transport_go_to_tag_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_tag_request_t](transport_go_to_tag_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToTime**
```c
// Jump to the specific time
//
d3api_empty_response_t* TransportAPI_transportGoToTime(apiClient_t *apiClient, transport_go_to_time_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_time_request_t](transport_go_to_time_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToTimeCode**
```c
// Jump to a given time on a given transport
//
d3api_empty_response_t* TransportAPI_transportGoToTimeCode(apiClient_t *apiClient, transport_go_to_time_code_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_time_code_request_t](transport_go_to_time_code_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportGoToTrack**
```c
// Jump to the start of the given track
//
d3api_empty_response_t* TransportAPI_transportGoToTrack(apiClient_t *apiClient, transport_go_to_track_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_go_to_track_request_t](transport_go_to_track_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportListAnnotations**
```c
// List all annotations in the given Track
//
transport_list_annotations_response_t* TransportAPI_transportListAnnotations(apiClient_t *apiClient, char * uid, char * name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**uid** | **char \*** | UID of the Track. | [optional] 
**name** | **char \*** | Name of the Track. | [optional] 

### Return type

[transport_list_annotations_response_t](transport_list_annotations_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportListSetLists**
```c
// List all SetLists in the project
//
transport_list_set_lists_response_t* TransportAPI_transportListSetLists(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[transport_list_set_lists_response_t](transport_list_set_lists_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportListTracks**
```c
// List all tracks in the project
//
transport_list_tracks_response_t* TransportAPI_transportListTracks(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[transport_list_tracks_response_t](transport_list_tracks_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportPlay**
```c
// Play a transport (sets playmode to 'play')
//
d3api_empty_response_t* TransportAPI_transportPlay(apiClient_t *apiClient, transport_play_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_play_request_t](transport_play_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportPlayLoopSection**
```c
// Loop a section on a transport (sets playmode to 'loop section')
//
d3api_empty_response_t* TransportAPI_transportPlayLoopSection(apiClient_t *apiClient, transport_play_loop_section_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_play_loop_section_request_t](transport_play_loop_section_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportPlaySection**
```c
// Play a section on a transport (sets playmode to 'play to end of section')
//
d3api_empty_response_t* TransportAPI_transportPlaySection(apiClient_t *apiClient, transport_play_section_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_play_section_request_t](transport_play_section_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportReturnToStart**
```c
// Return to start of a transport
//
d3api_empty_response_t* TransportAPI_transportReturnToStart(apiClient_t *apiClient, transport_return_to_start_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_return_to_start_request_t](transport_return_to_start_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportSetBrightness**
```c
// Set the brightness of the specified transport manager's current transport
//
d3api_empty_response_t* TransportAPI_transportSetBrightness(apiClient_t *apiClient, transport_set_brightness_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_set_brightness_request_t](transport_set_brightness_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportSetEngaged**
```c
// Set the engaged status of the current transport
//
d3api_empty_response_t* TransportAPI_transportSetEngaged(apiClient_t *apiClient, transport_set_engaged_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_set_engaged_request_t](transport_set_engaged_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportSetVolume**
```c
// Set the volume of the current transport
//
d3api_empty_response_t* TransportAPI_transportSetVolume(apiClient_t *apiClient, transport_set_volume_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_set_volume_request_t](transport_set_volume_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **TransportAPI_transportStop**
```c
// Stop a transport
//
d3api_empty_response_t* TransportAPI_transportStop(apiClient_t *apiClient, transport_stop_request_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**body** | **[transport_stop_request_t](transport_stop_request.md) \*** |  | 

### Return type

[d3api_empty_response_t](d3api_empty_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

