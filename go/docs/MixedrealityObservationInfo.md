# MixedrealityObservationInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**TrackedPose** | Pointer to [**MixedrealityPose**](MixedrealityPose.md) |  | [optional] 
**SolvedPose** | Pointer to [**MixedrealityPose**](MixedrealityPose.md) |  | [optional] 
**IsEnabled** | Pointer to **bool** |  | [optional] 
**Zoom** | Pointer to **float32** |  | [optional] 
**Focus** | Pointer to **float32** |  | [optional] 
**Type** | Pointer to [**MixedrealityObservationType**](MixedrealityObservationType.md) |  | [optional] [default to PRIMARY]
**RmsError** | Pointer to **float64** |  | [optional] 

## Methods

### NewMixedrealityObservationInfo

`func NewMixedrealityObservationInfo() *MixedrealityObservationInfo`

NewMixedrealityObservationInfo instantiates a new MixedrealityObservationInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMixedrealityObservationInfoWithDefaults

`func NewMixedrealityObservationInfoWithDefaults() *MixedrealityObservationInfo`

NewMixedrealityObservationInfoWithDefaults instantiates a new MixedrealityObservationInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *MixedrealityObservationInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *MixedrealityObservationInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *MixedrealityObservationInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *MixedrealityObservationInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *MixedrealityObservationInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *MixedrealityObservationInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *MixedrealityObservationInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *MixedrealityObservationInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetTrackedPose

`func (o *MixedrealityObservationInfo) GetTrackedPose() MixedrealityPose`

GetTrackedPose returns the TrackedPose field if non-nil, zero value otherwise.

### GetTrackedPoseOk

`func (o *MixedrealityObservationInfo) GetTrackedPoseOk() (*MixedrealityPose, bool)`

GetTrackedPoseOk returns a tuple with the TrackedPose field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTrackedPose

`func (o *MixedrealityObservationInfo) SetTrackedPose(v MixedrealityPose)`

SetTrackedPose sets TrackedPose field to given value.

### HasTrackedPose

`func (o *MixedrealityObservationInfo) HasTrackedPose() bool`

HasTrackedPose returns a boolean if a field has been set.

### GetSolvedPose

`func (o *MixedrealityObservationInfo) GetSolvedPose() MixedrealityPose`

GetSolvedPose returns the SolvedPose field if non-nil, zero value otherwise.

### GetSolvedPoseOk

`func (o *MixedrealityObservationInfo) GetSolvedPoseOk() (*MixedrealityPose, bool)`

GetSolvedPoseOk returns a tuple with the SolvedPose field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSolvedPose

`func (o *MixedrealityObservationInfo) SetSolvedPose(v MixedrealityPose)`

SetSolvedPose sets SolvedPose field to given value.

### HasSolvedPose

`func (o *MixedrealityObservationInfo) HasSolvedPose() bool`

HasSolvedPose returns a boolean if a field has been set.

### GetIsEnabled

`func (o *MixedrealityObservationInfo) GetIsEnabled() bool`

GetIsEnabled returns the IsEnabled field if non-nil, zero value otherwise.

### GetIsEnabledOk

`func (o *MixedrealityObservationInfo) GetIsEnabledOk() (*bool, bool)`

GetIsEnabledOk returns a tuple with the IsEnabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsEnabled

`func (o *MixedrealityObservationInfo) SetIsEnabled(v bool)`

SetIsEnabled sets IsEnabled field to given value.

### HasIsEnabled

`func (o *MixedrealityObservationInfo) HasIsEnabled() bool`

HasIsEnabled returns a boolean if a field has been set.

### GetZoom

`func (o *MixedrealityObservationInfo) GetZoom() float32`

GetZoom returns the Zoom field if non-nil, zero value otherwise.

### GetZoomOk

`func (o *MixedrealityObservationInfo) GetZoomOk() (*float32, bool)`

GetZoomOk returns a tuple with the Zoom field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetZoom

`func (o *MixedrealityObservationInfo) SetZoom(v float32)`

SetZoom sets Zoom field to given value.

### HasZoom

`func (o *MixedrealityObservationInfo) HasZoom() bool`

HasZoom returns a boolean if a field has been set.

### GetFocus

`func (o *MixedrealityObservationInfo) GetFocus() float32`

GetFocus returns the Focus field if non-nil, zero value otherwise.

### GetFocusOk

`func (o *MixedrealityObservationInfo) GetFocusOk() (*float32, bool)`

GetFocusOk returns a tuple with the Focus field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFocus

`func (o *MixedrealityObservationInfo) SetFocus(v float32)`

SetFocus sets Focus field to given value.

### HasFocus

`func (o *MixedrealityObservationInfo) HasFocus() bool`

HasFocus returns a boolean if a field has been set.

### GetType

`func (o *MixedrealityObservationInfo) GetType() MixedrealityObservationType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *MixedrealityObservationInfo) GetTypeOk() (*MixedrealityObservationType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *MixedrealityObservationInfo) SetType(v MixedrealityObservationType)`

SetType sets Type field to given value.

### HasType

`func (o *MixedrealityObservationInfo) HasType() bool`

HasType returns a boolean if a field has been set.

### GetRmsError

`func (o *MixedrealityObservationInfo) GetRmsError() float64`

GetRmsError returns the RmsError field if non-nil, zero value otherwise.

### GetRmsErrorOk

`func (o *MixedrealityObservationInfo) GetRmsErrorOk() (*float64, bool)`

GetRmsErrorOk returns a tuple with the RmsError field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRmsError

`func (o *MixedrealityObservationInfo) SetRmsError(v float64)`

SetRmsError sets RmsError field to given value.

### HasRmsError

`func (o *MixedrealityObservationInfo) HasRmsError() bool`

HasRmsError returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


