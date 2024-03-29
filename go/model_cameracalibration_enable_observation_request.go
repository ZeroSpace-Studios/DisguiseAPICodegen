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

// CameracalibrationEnableObservationRequest struct for CameracalibrationEnableObservationRequest
type CameracalibrationEnableObservationRequest struct {
	ObservationUid *string `json:"observationUid,omitempty"`
	Enabled *bool `json:"enabled,omitempty"`
}

// NewCameracalibrationEnableObservationRequest instantiates a new CameracalibrationEnableObservationRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCameracalibrationEnableObservationRequest() *CameracalibrationEnableObservationRequest {
	this := CameracalibrationEnableObservationRequest{}
	return &this
}

// NewCameracalibrationEnableObservationRequestWithDefaults instantiates a new CameracalibrationEnableObservationRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCameracalibrationEnableObservationRequestWithDefaults() *CameracalibrationEnableObservationRequest {
	this := CameracalibrationEnableObservationRequest{}
	return &this
}

// GetObservationUid returns the ObservationUid field value if set, zero value otherwise.
func (o *CameracalibrationEnableObservationRequest) GetObservationUid() string {
	if o == nil || o.ObservationUid == nil {
		var ret string
		return ret
	}
	return *o.ObservationUid
}

// GetObservationUidOk returns a tuple with the ObservationUid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CameracalibrationEnableObservationRequest) GetObservationUidOk() (*string, bool) {
	if o == nil || o.ObservationUid == nil {
		return nil, false
	}
	return o.ObservationUid, true
}

// HasObservationUid returns a boolean if a field has been set.
func (o *CameracalibrationEnableObservationRequest) HasObservationUid() bool {
	if o != nil && o.ObservationUid != nil {
		return true
	}

	return false
}

// SetObservationUid gets a reference to the given string and assigns it to the ObservationUid field.
func (o *CameracalibrationEnableObservationRequest) SetObservationUid(v string) {
	o.ObservationUid = &v
}

// GetEnabled returns the Enabled field value if set, zero value otherwise.
func (o *CameracalibrationEnableObservationRequest) GetEnabled() bool {
	if o == nil || o.Enabled == nil {
		var ret bool
		return ret
	}
	return *o.Enabled
}

// GetEnabledOk returns a tuple with the Enabled field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CameracalibrationEnableObservationRequest) GetEnabledOk() (*bool, bool) {
	if o == nil || o.Enabled == nil {
		return nil, false
	}
	return o.Enabled, true
}

// HasEnabled returns a boolean if a field has been set.
func (o *CameracalibrationEnableObservationRequest) HasEnabled() bool {
	if o != nil && o.Enabled != nil {
		return true
	}

	return false
}

// SetEnabled gets a reference to the given bool and assigns it to the Enabled field.
func (o *CameracalibrationEnableObservationRequest) SetEnabled(v bool) {
	o.Enabled = &v
}

func (o CameracalibrationEnableObservationRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ObservationUid != nil {
		toSerialize["observationUid"] = o.ObservationUid
	}
	if o.Enabled != nil {
		toSerialize["enabled"] = o.Enabled
	}
	return json.Marshal(toSerialize)
}

type NullableCameracalibrationEnableObservationRequest struct {
	value *CameracalibrationEnableObservationRequest
	isSet bool
}

func (v NullableCameracalibrationEnableObservationRequest) Get() *CameracalibrationEnableObservationRequest {
	return v.value
}

func (v *NullableCameracalibrationEnableObservationRequest) Set(val *CameracalibrationEnableObservationRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCameracalibrationEnableObservationRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCameracalibrationEnableObservationRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCameracalibrationEnableObservationRequest(val *CameracalibrationEnableObservationRequest) *NullableCameracalibrationEnableObservationRequest {
	return &NullableCameracalibrationEnableObservationRequest{value: val, isSet: true}
}

func (v NullableCameracalibrationEnableObservationRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCameracalibrationEnableObservationRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


