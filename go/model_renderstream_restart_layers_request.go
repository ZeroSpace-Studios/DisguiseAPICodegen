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

// RenderstreamRestartLayersRequest struct for RenderstreamRestartLayersRequest
type RenderstreamRestartLayersRequest struct {
	Layers *[]D3apiLocator `json:"layers,omitempty"`
}

// NewRenderstreamRestartLayersRequest instantiates a new RenderstreamRestartLayersRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamRestartLayersRequest() *RenderstreamRestartLayersRequest {
	this := RenderstreamRestartLayersRequest{}
	return &this
}

// NewRenderstreamRestartLayersRequestWithDefaults instantiates a new RenderstreamRestartLayersRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamRestartLayersRequestWithDefaults() *RenderstreamRestartLayersRequest {
	this := RenderstreamRestartLayersRequest{}
	return &this
}

// GetLayers returns the Layers field value if set, zero value otherwise.
func (o *RenderstreamRestartLayersRequest) GetLayers() []D3apiLocator {
	if o == nil || o.Layers == nil {
		var ret []D3apiLocator
		return ret
	}
	return *o.Layers
}

// GetLayersOk returns a tuple with the Layers field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamRestartLayersRequest) GetLayersOk() (*[]D3apiLocator, bool) {
	if o == nil || o.Layers == nil {
		return nil, false
	}
	return o.Layers, true
}

// HasLayers returns a boolean if a field has been set.
func (o *RenderstreamRestartLayersRequest) HasLayers() bool {
	if o != nil && o.Layers != nil {
		return true
	}

	return false
}

// SetLayers gets a reference to the given []D3apiLocator and assigns it to the Layers field.
func (o *RenderstreamRestartLayersRequest) SetLayers(v []D3apiLocator) {
	o.Layers = &v
}

func (o RenderstreamRestartLayersRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Layers != nil {
		toSerialize["layers"] = o.Layers
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamRestartLayersRequest struct {
	value *RenderstreamRestartLayersRequest
	isSet bool
}

func (v NullableRenderstreamRestartLayersRequest) Get() *RenderstreamRestartLayersRequest {
	return v.value
}

func (v *NullableRenderstreamRestartLayersRequest) Set(val *RenderstreamRestartLayersRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamRestartLayersRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamRestartLayersRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamRestartLayersRequest(val *RenderstreamRestartLayersRequest) *NullableRenderstreamRestartLayersRequest {
	return &NullableRenderstreamRestartLayersRequest{value: val, isSet: true}
}

func (v NullableRenderstreamRestartLayersRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamRestartLayersRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

