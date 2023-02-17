# TransportSetVolumeInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Volume** | Pointer to **float64** |  | [optional] 

## Methods

### NewTransportSetVolumeInfo

`func NewTransportSetVolumeInfo() *TransportSetVolumeInfo`

NewTransportSetVolumeInfo instantiates a new TransportSetVolumeInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportSetVolumeInfoWithDefaults

`func NewTransportSetVolumeInfoWithDefaults() *TransportSetVolumeInfo`

NewTransportSetVolumeInfoWithDefaults instantiates a new TransportSetVolumeInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportSetVolumeInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportSetVolumeInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportSetVolumeInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportSetVolumeInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetVolume

`func (o *TransportSetVolumeInfo) GetVolume() float64`

GetVolume returns the Volume field if non-nil, zero value otherwise.

### GetVolumeOk

`func (o *TransportSetVolumeInfo) GetVolumeOk() (*float64, bool)`

GetVolumeOk returns a tuple with the Volume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume

`func (o *TransportSetVolumeInfo) SetVolume(v float64)`

SetVolume sets Volume field to given value.

### HasVolume

`func (o *TransportSetVolumeInfo) HasVolume() bool`

HasVolume returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


