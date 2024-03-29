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

// RenderstreamGetClusterResponse struct for RenderstreamGetClusterResponse
type RenderstreamGetClusterResponse struct {
	Result *RenderstreamClusterInfo `json:"result,omitempty"`
}

// NewRenderstreamGetClusterResponse instantiates a new RenderstreamGetClusterResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamGetClusterResponse() *RenderstreamGetClusterResponse {
	this := RenderstreamGetClusterResponse{}
	return &this
}

// NewRenderstreamGetClusterResponseWithDefaults instantiates a new RenderstreamGetClusterResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamGetClusterResponseWithDefaults() *RenderstreamGetClusterResponse {
	this := RenderstreamGetClusterResponse{}
	return &this
}

// GetResult returns the Result field value if set, zero value otherwise.
func (o *RenderstreamGetClusterResponse) GetResult() RenderstreamClusterInfo {
	if o == nil || o.Result == nil {
		var ret RenderstreamClusterInfo
		return ret
	}
	return *o.Result
}

// GetResultOk returns a tuple with the Result field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamGetClusterResponse) GetResultOk() (*RenderstreamClusterInfo, bool) {
	if o == nil || o.Result == nil {
		return nil, false
	}
	return o.Result, true
}

// HasResult returns a boolean if a field has been set.
func (o *RenderstreamGetClusterResponse) HasResult() bool {
	if o != nil && o.Result != nil {
		return true
	}

	return false
}

// SetResult gets a reference to the given RenderstreamClusterInfo and assigns it to the Result field.
func (o *RenderstreamGetClusterResponse) SetResult(v RenderstreamClusterInfo) {
	o.Result = &v
}

func (o RenderstreamGetClusterResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Result != nil {
		toSerialize["result"] = o.Result
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamGetClusterResponse struct {
	value *RenderstreamGetClusterResponse
	isSet bool
}

func (v NullableRenderstreamGetClusterResponse) Get() *RenderstreamGetClusterResponse {
	return v.value
}

func (v *NullableRenderstreamGetClusterResponse) Set(val *RenderstreamGetClusterResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamGetClusterResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamGetClusterResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamGetClusterResponse(val *RenderstreamGetClusterResponse) *NullableRenderstreamGetClusterResponse {
	return &NullableRenderstreamGetClusterResponse{value: val, isSet: true}
}

func (v NullableRenderstreamGetClusterResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamGetClusterResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


