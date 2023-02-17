# TransportTrackInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Length** | Pointer to **float64** |  | [optional] 
**Crossfade** | Pointer to [**TrackInfoCrossfadeMode**](TrackInfoCrossfadeMode.md) |  | [optional] [default to UNKNOWN]

## Methods

### NewTransportTrackInfo

`func NewTransportTrackInfo() *TransportTrackInfo`

NewTransportTrackInfo instantiates a new TransportTrackInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportTrackInfoWithDefaults

`func NewTransportTrackInfoWithDefaults() *TransportTrackInfo`

NewTransportTrackInfoWithDefaults instantiates a new TransportTrackInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *TransportTrackInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *TransportTrackInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *TransportTrackInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *TransportTrackInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *TransportTrackInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *TransportTrackInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *TransportTrackInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *TransportTrackInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetLength

`func (o *TransportTrackInfo) GetLength() float64`

GetLength returns the Length field if non-nil, zero value otherwise.

### GetLengthOk

`func (o *TransportTrackInfo) GetLengthOk() (*float64, bool)`

GetLengthOk returns a tuple with the Length field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLength

`func (o *TransportTrackInfo) SetLength(v float64)`

SetLength sets Length field to given value.

### HasLength

`func (o *TransportTrackInfo) HasLength() bool`

HasLength returns a boolean if a field has been set.

### GetCrossfade

`func (o *TransportTrackInfo) GetCrossfade() TrackInfoCrossfadeMode`

GetCrossfade returns the Crossfade field if non-nil, zero value otherwise.

### GetCrossfadeOk

`func (o *TransportTrackInfo) GetCrossfadeOk() (*TrackInfoCrossfadeMode, bool)`

GetCrossfadeOk returns a tuple with the Crossfade field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCrossfade

`func (o *TransportTrackInfo) SetCrossfade(v TrackInfoCrossfadeMode)`

SetCrossfade sets Crossfade field to given value.

### HasCrossfade

`func (o *TransportTrackInfo) HasCrossfade() bool`

HasCrossfade returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


