# TransportGoToTimeInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Time** | Pointer to **float64** |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportGoToTimeInfo

`func NewTransportGoToTimeInfo() *TransportGoToTimeInfo`

NewTransportGoToTimeInfo instantiates a new TransportGoToTimeInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportGoToTimeInfoWithDefaults

`func NewTransportGoToTimeInfoWithDefaults() *TransportGoToTimeInfo`

NewTransportGoToTimeInfoWithDefaults instantiates a new TransportGoToTimeInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportGoToTimeInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportGoToTimeInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportGoToTimeInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportGoToTimeInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetTime

`func (o *TransportGoToTimeInfo) GetTime() float64`

GetTime returns the Time field if non-nil, zero value otherwise.

### GetTimeOk

`func (o *TransportGoToTimeInfo) GetTimeOk() (*float64, bool)`

GetTimeOk returns a tuple with the Time field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTime

`func (o *TransportGoToTimeInfo) SetTime(v float64)`

SetTime sets Time field to given value.

### HasTime

`func (o *TransportGoToTimeInfo) HasTime() bool`

HasTime returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportGoToTimeInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportGoToTimeInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportGoToTimeInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportGoToTimeInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


