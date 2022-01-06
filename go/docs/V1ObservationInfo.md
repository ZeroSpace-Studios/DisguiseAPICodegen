# V1ObservationInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Description** | Pointer to **string** |  | [optional] 
**TrackedPos** | Pointer to [**V1Float3**](V1Float3.md) |  | [optional] 
**TrackedRot** | Pointer to [**V1Float3**](V1Float3.md) |  | [optional] 
**TrackedZoom** | Pointer to **float32** |  | [optional] 
**TrackedFocus** | Pointer to **float32** |  | [optional] 
**IsEnabled** | Pointer to **bool** |  | [optional] 
**IsPrimary** | Pointer to **bool** |  | [optional] 

## Methods

### NewV1ObservationInfo

`func NewV1ObservationInfo() *V1ObservationInfo`

NewV1ObservationInfo instantiates a new V1ObservationInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1ObservationInfoWithDefaults

`func NewV1ObservationInfoWithDefaults() *V1ObservationInfo`

NewV1ObservationInfoWithDefaults instantiates a new V1ObservationInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *V1ObservationInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *V1ObservationInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *V1ObservationInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *V1ObservationInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetDescription

`func (o *V1ObservationInfo) GetDescription() string`

GetDescription returns the Description field if non-nil, zero value otherwise.

### GetDescriptionOk

`func (o *V1ObservationInfo) GetDescriptionOk() (*string, bool)`

GetDescriptionOk returns a tuple with the Description field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDescription

`func (o *V1ObservationInfo) SetDescription(v string)`

SetDescription sets Description field to given value.

### HasDescription

`func (o *V1ObservationInfo) HasDescription() bool`

HasDescription returns a boolean if a field has been set.

### GetTrackedPos

`func (o *V1ObservationInfo) GetTrackedPos() V1Float3`

GetTrackedPos returns the TrackedPos field if non-nil, zero value otherwise.

### GetTrackedPosOk

`func (o *V1ObservationInfo) GetTrackedPosOk() (*V1Float3, bool)`

GetTrackedPosOk returns a tuple with the TrackedPos field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedPos

`func (o *V1ObservationInfo) SetTrackedPos(v V1Float3)`

SetTrackedPos sets TrackedPos field to given value.

### HasTrackedPos

`func (o *V1ObservationInfo) HasTrackedPos() bool`

HasTrackedPos returns a boolean if a field has been set.

### GetTrackedRot

`func (o *V1ObservationInfo) GetTrackedRot() V1Float3`

GetTrackedRot returns the TrackedRot field if non-nil, zero value otherwise.

### GetTrackedRotOk

`func (o *V1ObservationInfo) GetTrackedRotOk() (*V1Float3, bool)`

GetTrackedRotOk returns a tuple with the TrackedRot field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedRot

`func (o *V1ObservationInfo) SetTrackedRot(v V1Float3)`

SetTrackedRot sets TrackedRot field to given value.

### HasTrackedRot

`func (o *V1ObservationInfo) HasTrackedRot() bool`

HasTrackedRot returns a boolean if a field has been set.

### GetTrackedZoom

`func (o *V1ObservationInfo) GetTrackedZoom() float32`

GetTrackedZoom returns the TrackedZoom field if non-nil, zero value otherwise.

### GetTrackedZoomOk

`func (o *V1ObservationInfo) GetTrackedZoomOk() (*float32, bool)`

GetTrackedZoomOk returns a tuple with the TrackedZoom field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedZoom

`func (o *V1ObservationInfo) SetTrackedZoom(v float32)`

SetTrackedZoom sets TrackedZoom field to given value.

### HasTrackedZoom

`func (o *V1ObservationInfo) HasTrackedZoom() bool`

HasTrackedZoom returns a boolean if a field has been set.

### GetTrackedFocus

`func (o *V1ObservationInfo) GetTrackedFocus() float32`

GetTrackedFocus returns the TrackedFocus field if non-nil, zero value otherwise.

### GetTrackedFocusOk

`func (o *V1ObservationInfo) GetTrackedFocusOk() (*float32, bool)`

GetTrackedFocusOk returns a tuple with the TrackedFocus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedFocus

`func (o *V1ObservationInfo) SetTrackedFocus(v float32)`

SetTrackedFocus sets TrackedFocus field to given value.

### HasTrackedFocus

`func (o *V1ObservationInfo) HasTrackedFocus() bool`

HasTrackedFocus returns a boolean if a field has been set.

### GetIsEnabled

`func (o *V1ObservationInfo) GetIsEnabled() bool`

GetIsEnabled returns the IsEnabled field if non-nil, zero value otherwise.

### GetIsEnabledOk

`func (o *V1ObservationInfo) GetIsEnabledOk() (*bool, bool)`

GetIsEnabledOk returns a tuple with the IsEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsEnabled

`func (o *V1ObservationInfo) SetIsEnabled(v bool)`

SetIsEnabled sets IsEnabled field to given value.

### HasIsEnabled

`func (o *V1ObservationInfo) HasIsEnabled() bool`

HasIsEnabled returns a boolean if a field has been set.

### GetIsPrimary

`func (o *V1ObservationInfo) GetIsPrimary() bool`

GetIsPrimary returns the IsPrimary field if non-nil, zero value otherwise.

### GetIsPrimaryOk

`func (o *V1ObservationInfo) GetIsPrimaryOk() (*bool, bool)`

GetIsPrimaryOk returns a tuple with the IsPrimary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsPrimary

`func (o *V1ObservationInfo) SetIsPrimary(v bool)`

SetIsPrimary sets IsPrimary field to given value.

### HasIsPrimary

`func (o *V1ObservationInfo) HasIsPrimary() bool`

HasIsPrimary returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


