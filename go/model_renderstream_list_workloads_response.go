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

// RenderstreamListWorkloadsResponse struct for RenderstreamListWorkloadsResponse
type RenderstreamListWorkloadsResponse struct {
	Workloads *[]RenderstreamWorkloadInfo `json:"workloads,omitempty"`
}

// NewRenderstreamListWorkloadsResponse instantiates a new RenderstreamListWorkloadsResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamListWorkloadsResponse() *RenderstreamListWorkloadsResponse {
	this := RenderstreamListWorkloadsResponse{}
	return &this
}

// NewRenderstreamListWorkloadsResponseWithDefaults instantiates a new RenderstreamListWorkloadsResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamListWorkloadsResponseWithDefaults() *RenderstreamListWorkloadsResponse {
	this := RenderstreamListWorkloadsResponse{}
	return &this
}

// GetWorkloads returns the Workloads field value if set, zero value otherwise.
func (o *RenderstreamListWorkloadsResponse) GetWorkloads() []RenderstreamWorkloadInfo {
	if o == nil || o.Workloads == nil {
		var ret []RenderstreamWorkloadInfo
		return ret
	}
	return *o.Workloads
}

// GetWorkloadsOk returns a tuple with the Workloads field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamListWorkloadsResponse) GetWorkloadsOk() (*[]RenderstreamWorkloadInfo, bool) {
	if o == nil || o.Workloads == nil {
		return nil, false
	}
	return o.Workloads, true
}

// HasWorkloads returns a boolean if a field has been set.
func (o *RenderstreamListWorkloadsResponse) HasWorkloads() bool {
	if o != nil && o.Workloads != nil {
		return true
	}

	return false
}

// SetWorkloads gets a reference to the given []RenderstreamWorkloadInfo and assigns it to the Workloads field.
func (o *RenderstreamListWorkloadsResponse) SetWorkloads(v []RenderstreamWorkloadInfo) {
	o.Workloads = &v
}

func (o RenderstreamListWorkloadsResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Workloads != nil {
		toSerialize["workloads"] = o.Workloads
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamListWorkloadsResponse struct {
	value *RenderstreamListWorkloadsResponse
	isSet bool
}

func (v NullableRenderstreamListWorkloadsResponse) Get() *RenderstreamListWorkloadsResponse {
	return v.value
}

func (v *NullableRenderstreamListWorkloadsResponse) Set(val *RenderstreamListWorkloadsResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamListWorkloadsResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamListWorkloadsResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamListWorkloadsResponse(val *RenderstreamListWorkloadsResponse) *NullableRenderstreamListWorkloadsResponse {
	return &NullableRenderstreamListWorkloadsResponse{value: val, isSet: true}
}

func (v NullableRenderstreamListWorkloadsResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamListWorkloadsResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

