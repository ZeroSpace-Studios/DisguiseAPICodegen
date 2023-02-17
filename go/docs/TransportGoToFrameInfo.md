# TransportGoToFrameInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Frame** | Pointer to **int64** |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportGoToFrameInfo

`func NewTransportGoToFrameInfo() *TransportGoToFrameInfo`

NewTransportGoToFrameInfo instantiates a new TransportGoToFrameInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportGoToFrameInfoWithDefaults

`func NewTransportGoToFrameInfoWithDefaults() *TransportGoToFrameInfo`

NewTransportGoToFrameInfoWithDefaults instantiates a new TransportGoToFrameInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportGoToFrameInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportGoToFrameInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportGoToFrameInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportGoToFrameInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetFrame

`func (o *TransportGoToFrameInfo) GetFrame() int64`

GetFrame returns the Frame field if non-nil, zero value otherwise.

### GetFrameOk

`func (o *TransportGoToFrameInfo) GetFrameOk() (*int64, bool)`

GetFrameOk returns a tuple with the Frame field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFrame

`func (o *TransportGoToFrameInfo) SetFrame(v int64)`

SetFrame sets Frame field to given value.

### HasFrame

`func (o *TransportGoToFrameInfo) HasFrame() bool`

HasFrame returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportGoToFrameInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportGoToFrameInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportGoToFrameInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportGoToFrameInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


