# TransportGoToTrackInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Track** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportGoToTrackInfo

`func NewTransportGoToTrackInfo() *TransportGoToTrackInfo`

NewTransportGoToTrackInfo instantiates a new TransportGoToTrackInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportGoToTrackInfoWithDefaults

`func NewTransportGoToTrackInfoWithDefaults() *TransportGoToTrackInfo`

NewTransportGoToTrackInfoWithDefaults instantiates a new TransportGoToTrackInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportGoToTrackInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportGoToTrackInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportGoToTrackInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportGoToTrackInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetTrack

`func (o *TransportGoToTrackInfo) GetTrack() D3apiLocator`

GetTrack returns the Track field if non-nil, zero value otherwise.

### GetTrackOk

`func (o *TransportGoToTrackInfo) GetTrackOk() (*D3apiLocator, bool)`

GetTrackOk returns a tuple with the Track field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrack

`func (o *TransportGoToTrackInfo) SetTrack(v D3apiLocator)`

SetTrack sets Track field to given value.

### HasTrack

`func (o *TransportGoToTrackInfo) HasTrack() bool`

HasTrack returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportGoToTrackInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportGoToTrackInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportGoToTrackInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportGoToTrackInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


