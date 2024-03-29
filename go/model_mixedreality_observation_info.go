/*
d3 API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 2.0.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// MixedrealityObservationInfo struct for MixedrealityObservationInfo
type MixedrealityObservationInfo struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
	TrackedPose *MixedrealityPose `json:"trackedPose,omitempty"`
	SolvedPose *MixedrealityPose `json:"solvedPose,omitempty"`
	IsEnabled *bool `json:"isEnabled,omitempty"`
	Zoom *float32 `json:"zoom,omitempty"`
	Focus *float32 `json:"focus,omitempty"`
	Type *MixedrealityObservationType `json:"type,omitempty"`
	RmsError *float64 `json:"rmsError,omitempty"`
}

// NewMixedrealityObservationInfo instantiates a new MixedrealityObservationInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMixedrealityObservationInfo() *MixedrealityObservationInfo {
	this := MixedrealityObservationInfo{}
	var type_ MixedrealityObservationType = PRIMARY
	this.Type = &type_
	return &this
}

// NewMixedrealityObservationInfoWithDefaults instantiates a new MixedrealityObservationInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMixedrealityObservationInfoWithDefaults() *MixedrealityObservationInfo {
	this := MixedrealityObservationInfo{}
	var type_ MixedrealityObservationType = PRIMARY
	this.Type = &type_
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *MixedrealityObservationInfo) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *MixedrealityObservationInfo) SetName(v string) {
	o.Name = &v
}

// GetTrackedPose returns the TrackedPose field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetTrackedPose() MixedrealityPose {
	if o == nil || o.TrackedPose == nil {
		var ret MixedrealityPose
		return ret
	}
	return *o.TrackedPose
}

// GetTrackedPoseOk returns a tuple with the TrackedPose field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetTrackedPoseOk() (*MixedrealityPose, bool) {
	if o == nil || o.TrackedPose == nil {
		return nil, false
	}
	return o.TrackedPose, true
}

// HasTrackedPose returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasTrackedPose() bool {
	if o != nil && o.TrackedPose != nil {
		return true
	}

	return false
}

// SetTrackedPose gets a reference to the given MixedrealityPose and assigns it to the TrackedPose field.
func (o *MixedrealityObservationInfo) SetTrackedPose(v MixedrealityPose) {
	o.TrackedPose = &v
}

// GetSolvedPose returns the SolvedPose field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetSolvedPose() MixedrealityPose {
	if o == nil || o.SolvedPose == nil {
		var ret MixedrealityPose
		return ret
	}
	return *o.SolvedPose
}

// GetSolvedPoseOk returns a tuple with the SolvedPose field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetSolvedPoseOk() (*MixedrealityPose, bool) {
	if o == nil || o.SolvedPose == nil {
		return nil, false
	}
	return o.SolvedPose, true
}

// HasSolvedPose returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasSolvedPose() bool {
	if o != nil && o.SolvedPose != nil {
		return true
	}

	return false
}

// SetSolvedPose gets a reference to the given MixedrealityPose and assigns it to the SolvedPose field.
func (o *MixedrealityObservationInfo) SetSolvedPose(v MixedrealityPose) {
	o.SolvedPose = &v
}

// GetIsEnabled returns the IsEnabled field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetIsEnabled() bool {
	if o == nil || o.IsEnabled == nil {
		var ret bool
		return ret
	}
	return *o.IsEnabled
}

// GetIsEnabledOk returns a tuple with the IsEnabled field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetIsEnabledOk() (*bool, bool) {
	if o == nil || o.IsEnabled == nil {
		return nil, false
	}
	return o.IsEnabled, true
}

// HasIsEnabled returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasIsEnabled() bool {
	if o != nil && o.IsEnabled != nil {
		return true
	}

	return false
}

// SetIsEnabled gets a reference to the given bool and assigns it to the IsEnabled field.
func (o *MixedrealityObservationInfo) SetIsEnabled(v bool) {
	o.IsEnabled = &v
}

// GetZoom returns the Zoom field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetZoom() float32 {
	if o == nil || o.Zoom == nil {
		var ret float32
		return ret
	}
	return *o.Zoom
}

// GetZoomOk returns a tuple with the Zoom field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetZoomOk() (*float32, bool) {
	if o == nil || o.Zoom == nil {
		return nil, false
	}
	return o.Zoom, true
}

// HasZoom returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasZoom() bool {
	if o != nil && o.Zoom != nil {
		return true
	}

	return false
}

// SetZoom gets a reference to the given float32 and assigns it to the Zoom field.
func (o *MixedrealityObservationInfo) SetZoom(v float32) {
	o.Zoom = &v
}

// GetFocus returns the Focus field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetFocus() float32 {
	if o == nil || o.Focus == nil {
		var ret float32
		return ret
	}
	return *o.Focus
}

// GetFocusOk returns a tuple with the Focus field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetFocusOk() (*float32, bool) {
	if o == nil || o.Focus == nil {
		return nil, false
	}
	return o.Focus, true
}

// HasFocus returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasFocus() bool {
	if o != nil && o.Focus != nil {
		return true
	}

	return false
}

// SetFocus gets a reference to the given float32 and assigns it to the Focus field.
func (o *MixedrealityObservationInfo) SetFocus(v float32) {
	o.Focus = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetType() MixedrealityObservationType {
	if o == nil || o.Type == nil {
		var ret MixedrealityObservationType
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetTypeOk() (*MixedrealityObservationType, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given MixedrealityObservationType and assigns it to the Type field.
func (o *MixedrealityObservationInfo) SetType(v MixedrealityObservationType) {
	o.Type = &v
}

// GetRmsError returns the RmsError field value if set, zero value otherwise.
func (o *MixedrealityObservationInfo) GetRmsError() float64 {
	if o == nil || o.RmsError == nil {
		var ret float64
		return ret
	}
	return *o.RmsError
}

// GetRmsErrorOk returns a tuple with the RmsError field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityObservationInfo) GetRmsErrorOk() (*float64, bool) {
	if o == nil || o.RmsError == nil {
		return nil, false
	}
	return o.RmsError, true
}

// HasRmsError returns a boolean if a field has been set.
func (o *MixedrealityObservationInfo) HasRmsError() bool {
	if o != nil && o.RmsError != nil {
		return true
	}

	return false
}

// SetRmsError gets a reference to the given float64 and assigns it to the RmsError field.
func (o *MixedrealityObservationInfo) SetRmsError(v float64) {
	o.RmsError = &v
}

func (o MixedrealityObservationInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.TrackedPose != nil {
		toSerialize["trackedPose"] = o.TrackedPose
	}
	if o.SolvedPose != nil {
		toSerialize["solvedPose"] = o.SolvedPose
	}
	if o.IsEnabled != nil {
		toSerialize["isEnabled"] = o.IsEnabled
	}
	if o.Zoom != nil {
		toSerialize["zoom"] = o.Zoom
	}
	if o.Focus != nil {
		toSerialize["focus"] = o.Focus
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.RmsError != nil {
		toSerialize["rmsError"] = o.RmsError
	}
	return json.Marshal(toSerialize)
}

type NullableMixedrealityObservationInfo struct {
	value *MixedrealityObservationInfo
	isSet bool
}

func (v NullableMixedrealityObservationInfo) Get() *MixedrealityObservationInfo {
	return v.value
}

func (v *NullableMixedrealityObservationInfo) Set(val *MixedrealityObservationInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableMixedrealityObservationInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableMixedrealityObservationInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMixedrealityObservationInfo(val *MixedrealityObservationInfo) *NullableMixedrealityObservationInfo {
	return &NullableMixedrealityObservationInfo{value: val, isSet: true}
}

func (v NullableMixedrealityObservationInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMixedrealityObservationInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


