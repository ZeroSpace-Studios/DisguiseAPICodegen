# TransportGoToTimeCodeInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Timecode** | Pointer to **string** |  | [optional] 
**IgnoreTags** | Pointer to **bool** |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportGoToTimeCodeInfo

`func NewTransportGoToTimeCodeInfo() *TransportGoToTimeCodeInfo`

NewTransportGoToTimeCodeInfo instantiates a new TransportGoToTimeCodeInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportGoToTimeCodeInfoWithDefaults

`func NewTransportGoToTimeCodeInfoWithDefaults() *TransportGoToTimeCodeInfo`

NewTransportGoToTimeCodeInfoWithDefaults instantiates a new TransportGoToTimeCodeInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportGoToTimeCodeInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportGoToTimeCodeInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportGoToTimeCodeInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportGoToTimeCodeInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetTimecode

`func (o *TransportGoToTimeCodeInfo) GetTimecode() string`

GetTimecode returns the Timecode field if non-nil, zero value otherwise.

### GetTimecodeOk

`func (o *TransportGoToTimeCodeInfo) GetTimecodeOk() (*string, bool)`

GetTimecodeOk returns a tuple with the Timecode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTimecode

`func (o *TransportGoToTimeCodeInfo) SetTimecode(v string)`

SetTimecode sets Timecode field to given value.

### HasTimecode

`func (o *TransportGoToTimeCodeInfo) HasTimecode() bool`

HasTimecode returns a boolean if a field has been set.

### GetIgnoreTags

`func (o *TransportGoToTimeCodeInfo) GetIgnoreTags() bool`

GetIgnoreTags returns the IgnoreTags field if non-nil, zero value otherwise.

### GetIgnoreTagsOk

`func (o *TransportGoToTimeCodeInfo) GetIgnoreTagsOk() (*bool, bool)`

GetIgnoreTagsOk returns a tuple with the IgnoreTags field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIgnoreTags

`func (o *TransportGoToTimeCodeInfo) SetIgnoreTags(v bool)`

SetIgnoreTags sets IgnoreTags field to given value.

### HasIgnoreTags

`func (o *TransportGoToTimeCodeInfo) HasIgnoreTags() bool`

HasIgnoreTags returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportGoToTimeCodeInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportGoToTimeCodeInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportGoToTimeCodeInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportGoToTimeCodeInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


