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

// RenderstreamListRenderMachinesResponse struct for RenderstreamListRenderMachinesResponse
type RenderstreamListRenderMachinesResponse struct {
	Machines *[]RenderstreamRenderMachineInfo `json:"machines,omitempty"`
}

// NewRenderstreamListRenderMachinesResponse instantiates a new RenderstreamListRenderMachinesResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamListRenderMachinesResponse() *RenderstreamListRenderMachinesResponse {
	this := RenderstreamListRenderMachinesResponse{}
	return &this
}

// NewRenderstreamListRenderMachinesResponseWithDefaults instantiates a new RenderstreamListRenderMachinesResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamListRenderMachinesResponseWithDefaults() *RenderstreamListRenderMachinesResponse {
	this := RenderstreamListRenderMachinesResponse{}
	return &this
}

// GetMachines returns the Machines field value if set, zero value otherwise.
func (o *RenderstreamListRenderMachinesResponse) GetMachines() []RenderstreamRenderMachineInfo {
	if o == nil || o.Machines == nil {
		var ret []RenderstreamRenderMachineInfo
		return ret
	}
	return *o.Machines
}

// GetMachinesOk returns a tuple with the Machines field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamListRenderMachinesResponse) GetMachinesOk() (*[]RenderstreamRenderMachineInfo, bool) {
	if o == nil || o.Machines == nil {
		return nil, false
	}
	return o.Machines, true
}

// HasMachines returns a boolean if a field has been set.
func (o *RenderstreamListRenderMachinesResponse) HasMachines() bool {
	if o != nil && o.Machines != nil {
		return true
	}

	return false
}

// SetMachines gets a reference to the given []RenderstreamRenderMachineInfo and assigns it to the Machines field.
func (o *RenderstreamListRenderMachinesResponse) SetMachines(v []RenderstreamRenderMachineInfo) {
	o.Machines = &v
}

func (o RenderstreamListRenderMachinesResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Machines != nil {
		toSerialize["machines"] = o.Machines
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamListRenderMachinesResponse struct {
	value *RenderstreamListRenderMachinesResponse
	isSet bool
}

func (v NullableRenderstreamListRenderMachinesResponse) Get() *RenderstreamListRenderMachinesResponse {
	return v.value
}

func (v *NullableRenderstreamListRenderMachinesResponse) Set(val *RenderstreamListRenderMachinesResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamListRenderMachinesResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamListRenderMachinesResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamListRenderMachinesResponse(val *RenderstreamListRenderMachinesResponse) *NullableRenderstreamListRenderMachinesResponse {
	return &NullableRenderstreamListRenderMachinesResponse{value: val, isSet: true}
}

func (v NullableRenderstreamListRenderMachinesResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamListRenderMachinesResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

