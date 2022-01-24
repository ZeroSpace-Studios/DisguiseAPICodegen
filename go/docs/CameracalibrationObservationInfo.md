# CameracalibrationObservationInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Description** | Pointer to **string** |  | [optional] 
**TrackedPos** | Pointer to [**CameracalibrationFloat3**](CameracalibrationFloat3.md) |  | [optional] 
**TrackedRot** | Pointer to [**CameracalibrationFloat3**](CameracalibrationFloat3.md) |  | [optional] 
**TrackedZoom** | Pointer to **float32** |  | [optional] 
**TrackedFocus** | Pointer to **float32** |  | [optional] 
**IsEnabled** | Pointer to **bool** |  | [optional] 
**IsPrimary** | Pointer to **bool** |  | [optional] 

## Methods

### NewCameracalibrationObservationInfo

`func NewCameracalibrationObservationInfo() *CameracalibrationObservationInfo`

NewCameracalibrationObservationInfo instantiates a new CameracalibrationObservationInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCameracalibrationObservationInfoWithDefaults

`func NewCameracalibrationObservationInfoWithDefaults() *CameracalibrationObservationInfo`

NewCameracalibrationObservationInfoWithDefaults instantiates a new CameracalibrationObservationInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *CameracalibrationObservationInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *CameracalibrationObservationInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *CameracalibrationObservationInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *CameracalibrationObservationInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetDescription

`func (o *CameracalibrationObservationInfo) GetDescription() string`

GetDescription returns the Description field if non-nil, zero value otherwise.

### GetDescriptionOk

`func (o *CameracalibrationObservationInfo) GetDescriptionOk() (*string, bool)`

GetDescriptionOk returns a tuple with the Description field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDescription

`func (o *CameracalibrationObservationInfo) SetDescription(v string)`

SetDescription sets Description field to given value.

### HasDescription

`func (o *CameracalibrationObservationInfo) HasDescription() bool`

HasDescription returns a boolean if a field has been set.

### GetTrackedPos

`func (o *CameracalibrationObservationInfo) GetTrackedPos() CameracalibrationFloat3`

GetTrackedPos returns the TrackedPos field if non-nil, zero value otherwise.

### GetTrackedPosOk

`func (o *CameracalibrationObservationInfo) GetTrackedPosOk() (*CameracalibrationFloat3, bool)`

GetTrackedPosOk returns a tuple with the TrackedPos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedPos

`func (o *CameracalibrationObservationInfo) SetTrackedPos(v CameracalibrationFloat3)`

SetTrackedPos sets TrackedPos field to given value.

### HasTrackedPos

`func (o *CameracalibrationObservationInfo) HasTrackedPos() bool`

HasTrackedPos returns a boolean if a field has been set.

### GetTrackedRot

`func (o *CameracalibrationObservationInfo) GetTrackedRot() CameracalibrationFloat3`

GetTrackedRot returns the TrackedRot field if non-nil, zero value otherwise.

### GetTrackedRotOk

`func (o *CameracalibrationObservationInfo) GetTrackedRotOk() (*CameracalibrationFloat3, bool)`

GetTrackedRotOk returns a tuple with the TrackedRot field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedRot

`func (o *CameracalibrationObservationInfo) SetTrackedRot(v CameracalibrationFloat3)`

SetTrackedRot sets TrackedRot field to given value.

### HasTrackedRot

`func (o *CameracalibrationObservationInfo) HasTrackedRot() bool`

HasTrackedRot returns a boolean if a field has been set.

### GetTrackedZoom

`func (o *CameracalibrationObservationInfo) GetTrackedZoom() float32`

GetTrackedZoom returns the TrackedZoom field if non-nil, zero value otherwise.

### GetTrackedZoomOk

`func (o *CameracalibrationObservationInfo) GetTrackedZoomOk() (*float32, bool)`

GetTrackedZoomOk returns a tuple with the TrackedZoom field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedZoom

`func (o *CameracalibrationObservationInfo) SetTrackedZoom(v float32)`

SetTrackedZoom sets TrackedZoom field to given value.

### HasTrackedZoom

`func (o *CameracalibrationObservationInfo) HasTrackedZoom() bool`

HasTrackedZoom returns a boolean if a field has been set.

### GetTrackedFocus

`func (o *CameracalibrationObservationInfo) GetTrackedFocus() float32`

GetTrackedFocus returns the TrackedFocus field if non-nil, zero value otherwise.

### GetTrackedFocusOk

`func (o *CameracalibrationObservationInfo) GetTrackedFocusOk() (*float32, bool)`

GetTrackedFocusOk returns a tuple with the TrackedFocus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedFocus

`func (o *CameracalibrationObservationInfo) SetTrackedFocus(v float32)`

SetTrackedFocus sets TrackedFocus field to given value.

### HasTrackedFocus

`func (o *CameracalibrationObservationInfo) HasTrackedFocus() bool`

HasTrackedFocus returns a boolean if a field has been set.

### GetIsEnabled

`func (o *CameracalibrationObservationInfo) GetIsEnabled() bool`

GetIsEnabled returns the IsEnabled field if non-nil, zero value otherwise.

### GetIsEnabledOk

`func (o *CameracalibrationObservationInfo) GetIsEnabledOk() (*bool, bool)`

GetIsEnabledOk returns a tuple with the IsEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsEnabled

`func (o *CameracalibrationObservationInfo) SetIsEnabled(v bool)`

SetIsEnabled sets IsEnabled field to given value.

### HasIsEnabled

`func (o *CameracalibrationObservationInfo) HasIsEnabled() bool`

HasIsEnabled returns a boolean if a field has been set.

### GetIsPrimary

`func (o *CameracalibrationObservationInfo) GetIsPrimary() bool`

GetIsPrimary returns the IsPrimary field if non-nil, zero value otherwise.

### GetIsPrimaryOk

`func (o *CameracalibrationObservationInfo) GetIsPrimaryOk() (*bool, bool)`

GetIsPrimaryOk returns a tuple with the IsPrimary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPrimary

`func (o *CameracalibrationObservationInfo) SetIsPrimary(v bool)`

SetIsPrimary sets IsPrimary field to given value.

### HasIsPrimary

`func (o *CameracalibrationObservationInfo) HasIsPrimary() bool`

HasIsPrimary returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


