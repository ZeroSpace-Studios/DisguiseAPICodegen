# TransportSetListInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Tracks** | Pointer to [**[]TransportTrackInfo**](TransportTrackInfo.md) |  | [optional] 

## Methods

### NewTransportSetListInfo

`func NewTransportSetListInfo() *TransportSetListInfo`

NewTransportSetListInfo instantiates a new TransportSetListInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportSetListInfoWithDefaults

`func NewTransportSetListInfoWithDefaults() *TransportSetListInfo`

NewTransportSetListInfoWithDefaults instantiates a new TransportSetListInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *TransportSetListInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *TransportSetListInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *TransportSetListInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *TransportSetListInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *TransportSetListInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *TransportSetListInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *TransportSetListInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *TransportSetListInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetTracks

`func (o *TransportSetListInfo) GetTracks() []TransportTrackInfo`

GetTracks returns the Tracks field if non-nil, zero value otherwise.

### GetTracksOk

`func (o *TransportSetListInfo) GetTracksOk() (*[]TransportTrackInfo, bool)`

GetTracksOk returns a tuple with the Tracks field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTracks

`func (o *TransportSetListInfo) SetTracks(v []TransportTrackInfo)`

SetTracks sets Tracks field to given value.

### HasTracks

`func (o *TransportSetListInfo) HasTracks() bool`

HasTracks returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


