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

// V1EnableObservationRequest struct for V1EnableObservationRequest
type V1EnableObservationRequest struct {
	ObservationUid *string `json:"observationUid,omitempty"`
	Enabled *bool `json:"enabled,omitempty"`
}

// NewV1EnableObservationRequest instantiates a new V1EnableObservationRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewV1EnableObservationRequest() *V1EnableObservationRequest {
	this := V1EnableObservationRequest{}
	return &this
}

// NewV1EnableObservationRequestWithDefaults instantiates a new V1EnableObservationRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewV1EnableObservationRequestWithDefaults() *V1EnableObservationRequest {
	this := V1EnableObservationRequest{}
	return &this
}

// GetObservationUid returns the ObservationUid field value if set, zero value otherwise.
func (o *V1EnableObservationRequest) GetObservationUid() string {
	if o == nil || o.ObservationUid == nil {
		var ret string
		return ret
	}
	return *o.ObservationUid
}

// GetObservationUidOk returns a tuple with the ObservationUid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *V1EnableObservationRequest) GetObservationUidOk() (*string, bool) {
	if o == nil || o.ObservationUid == nil {
		return nil, false
	}
	return o.ObservationUid, true
}

// HasObservationUid returns a boolean if a field has been set.
func (o *V1EnableObservationRequest) HasObservationUid() bool {
	if o != nil && o.ObservationUid != nil {
		return true
	}

	return false
}

// SetObservationUid gets a reference to the given string and assigns it to the ObservationUid field.
func (o *V1EnableObservationRequest) SetObservationUid(v string) {
	o.ObservationUid = &v
}

// GetEnabled returns the Enabled field value if set, zero value otherwise.
func (o *V1EnableObservationRequest) GetEnabled() bool {
	if o == nil || o.Enabled == nil {
		var ret bool
		return ret
	}
	return *o.Enabled
}

// GetEnabledOk returns a tuple with the Enabled field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *V1EnableObservationRequest) GetEnabledOk() (*bool, bool) {
	if o == nil || o.Enabled == nil {
		return nil, false
	}
	return o.Enabled, true
}

// HasEnabled returns a boolean if a field has been set.
func (o *V1EnableObservationRequest) HasEnabled() bool {
	if o != nil && o.Enabled != nil {
		return true
	}

	return false
}

// SetEnabled gets a reference to the given bool and assigns it to the Enabled field.
func (o *V1EnableObservationRequest) SetEnabled(v bool) {
	o.Enabled = &v
}

func (o V1EnableObservationRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ObservationUid != nil {
		toSerialize["observationUid"] = o.ObservationUid
	}
	if o.Enabled != nil {
		toSerialize["enabled"] = o.Enabled
	}
	return json.Marshal(toSerialize)
}

type NullableV1EnableObservationRequest struct {
	value *V1EnableObservationRequest
	isSet bool
}

func (v NullableV1EnableObservationRequest) Get() *V1EnableObservationRequest {
	return v.value
}

func (v *NullableV1EnableObservationRequest) Set(val *V1EnableObservationRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableV1EnableObservationRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableV1EnableObservationRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableV1EnableObservationRequest(val *V1EnableObservationRequest) *NullableV1EnableObservationRequest {
	return &NullableV1EnableObservationRequest{value: val, isSet: true}
}

func (v NullableV1EnableObservationRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableV1EnableObservationRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


