# TransportTransportInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Engaged** | Pointer to **bool** |  | [optional] 
**Volume** | Pointer to **float64** |  | [optional] 
**Brightness** | Pointer to **float64** |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportTransportInfo

`func NewTransportTransportInfo() *TransportTransportInfo`

NewTransportTransportInfo instantiates a new TransportTransportInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportTransportInfoWithDefaults

`func NewTransportTransportInfoWithDefaults() *TransportTransportInfo`

NewTransportTransportInfoWithDefaults instantiates a new TransportTransportInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *TransportTransportInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *TransportTransportInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *TransportTransportInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *TransportTransportInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *TransportTransportInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *TransportTransportInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *TransportTransportInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *TransportTransportInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetEngaged

`func (o *TransportTransportInfo) GetEngaged() bool`

GetEngaged returns the Engaged field if non-nil, zero value otherwise.

### GetEngagedOk

`func (o *TransportTransportInfo) GetEngagedOk() (*bool, bool)`

GetEngagedOk returns a tuple with the Engaged field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEngaged

`func (o *TransportTransportInfo) SetEngaged(v bool)`

SetEngaged sets Engaged field to given value.

### HasEngaged

`func (o *TransportTransportInfo) HasEngaged() bool`

HasEngaged returns a boolean if a field has been set.

### GetVolume

`func (o *TransportTransportInfo) GetVolume() float64`

GetVolume returns the Volume field if non-nil, zero value otherwise.

### GetVolumeOk

`func (o *TransportTransportInfo) GetVolumeOk() (*float64, bool)`

GetVolumeOk returns a tuple with the Volume field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVolume

`func (o *TransportTransportInfo) SetVolume(v float64)`

SetVolume sets Volume field to given value.

### HasVolume

`func (o *TransportTransportInfo) HasVolume() bool`

HasVolume returns a boolean if a field has been set.

### GetBrightness

`func (o *TransportTransportInfo) GetBrightness() float64`

GetBrightness returns the Brightness field if non-nil, zero value otherwise.

### GetBrightnessOk

`func (o *TransportTransportInfo) GetBrightnessOk() (*float64, bool)`

GetBrightnessOk returns a tuple with the Brightness field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBrightness

`func (o *TransportTransportInfo) SetBrightness(v float64)`

SetBrightness sets Brightness field to given value.

### HasBrightness

`func (o *TransportTransportInfo) HasBrightness() bool`

HasBrightness returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportTransportInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportTransportInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportTransportInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportTransportInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


