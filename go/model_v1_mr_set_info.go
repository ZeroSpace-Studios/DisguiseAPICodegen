/*
d3 API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 1.4.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// V1MRSetInfo struct for V1MRSetInfo
type V1MRSetInfo struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
	TargetCamera *V1CameraInfo `json:"targetCamera,omitempty"`
}

// NewV1MRSetInfo instantiates a new V1MRSetInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewV1MRSetInfo() *V1MRSetInfo {
	this := V1MRSetInfo{}
	return &this
}

// NewV1MRSetInfoWithDefaults instantiates a new V1MRSetInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewV1MRSetInfoWithDefaults() *V1MRSetInfo {
	this := V1MRSetInfo{}
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *V1MRSetInfo) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *V1MRSetInfo) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *V1MRSetInfo) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *V1MRSetInfo) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *V1MRSetInfo) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *V1MRSetInfo) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *V1MRSetInfo) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *V1MRSetInfo) SetName(v string) {
	o.Name = &v
}

// GetTargetCamera returns the TargetCamera field value if set, zero value otherwise.
func (o *V1MRSetInfo) GetTargetCamera() V1CameraInfo {
	if o == nil || o.TargetCamera == nil {
		var ret V1CameraInfo
		return ret
	}
	return *o.TargetCamera
}

// GetTargetCameraOk returns a tuple with the TargetCamera field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *V1MRSetInfo) GetTargetCameraOk() (*V1CameraInfo, bool) {
	if o == nil || o.TargetCamera == nil {
		return nil, false
	}
	return o.TargetCamera, true
}

// HasTargetCamera returns a boolean if a field has been set.
func (o *V1MRSetInfo) HasTargetCamera() bool {
	if o != nil && o.TargetCamera != nil {
		return true
	}

	return false
}

// SetTargetCamera gets a reference to the given V1CameraInfo and assigns it to the TargetCamera field.
func (o *V1MRSetInfo) SetTargetCamera(v V1CameraInfo) {
	o.TargetCamera = &v
}

func (o V1MRSetInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.TargetCamera != nil {
		toSerialize["targetCamera"] = o.TargetCamera
	}
	return json.Marshal(toSerialize)
}

type NullableV1MRSetInfo struct {
	value *V1MRSetInfo
	isSet bool
}

func (v NullableV1MRSetInfo) Get() *V1MRSetInfo {
	return v.value
}

func (v *NullableV1MRSetInfo) Set(val *V1MRSetInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableV1MRSetInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableV1MRSetInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableV1MRSetInfo(val *V1MRSetInfo) *NullableV1MRSetInfo {
	return &NullableV1MRSetInfo{value: val, isSet: true}
}

func (v NullableV1MRSetInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableV1MRSetInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


