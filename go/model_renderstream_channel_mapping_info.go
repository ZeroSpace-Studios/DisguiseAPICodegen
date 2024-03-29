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

// RenderstreamChannelMappingInfo struct for RenderstreamChannelMappingInfo
type RenderstreamChannelMappingInfo struct {
	Channel *string `json:"channel,omitempty"`
	Mapping *RenderstreamMapping `json:"mapping,omitempty"`
	Assigner *RenderstreamAssigner `json:"assigner,omitempty"`
}

// NewRenderstreamChannelMappingInfo instantiates a new RenderstreamChannelMappingInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamChannelMappingInfo() *RenderstreamChannelMappingInfo {
	this := RenderstreamChannelMappingInfo{}
	return &this
}

// NewRenderstreamChannelMappingInfoWithDefaults instantiates a new RenderstreamChannelMappingInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamChannelMappingInfoWithDefaults() *RenderstreamChannelMappingInfo {
	this := RenderstreamChannelMappingInfo{}
	return &this
}

// GetChannel returns the Channel field value if set, zero value otherwise.
func (o *RenderstreamChannelMappingInfo) GetChannel() string {
	if o == nil || o.Channel == nil {
		var ret string
		return ret
	}
	return *o.Channel
}

// GetChannelOk returns a tuple with the Channel field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamChannelMappingInfo) GetChannelOk() (*string, bool) {
	if o == nil || o.Channel == nil {
		return nil, false
	}
	return o.Channel, true
}

// HasChannel returns a boolean if a field has been set.
func (o *RenderstreamChannelMappingInfo) HasChannel() bool {
	if o != nil && o.Channel != nil {
		return true
	}

	return false
}

// SetChannel gets a reference to the given string and assigns it to the Channel field.
func (o *RenderstreamChannelMappingInfo) SetChannel(v string) {
	o.Channel = &v
}

// GetMapping returns the Mapping field value if set, zero value otherwise.
func (o *RenderstreamChannelMappingInfo) GetMapping() RenderstreamMapping {
	if o == nil || o.Mapping == nil {
		var ret RenderstreamMapping
		return ret
	}
	return *o.Mapping
}

// GetMappingOk returns a tuple with the Mapping field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamChannelMappingInfo) GetMappingOk() (*RenderstreamMapping, bool) {
	if o == nil || o.Mapping == nil {
		return nil, false
	}
	return o.Mapping, true
}

// HasMapping returns a boolean if a field has been set.
func (o *RenderstreamChannelMappingInfo) HasMapping() bool {
	if o != nil && o.Mapping != nil {
		return true
	}

	return false
}

// SetMapping gets a reference to the given RenderstreamMapping and assigns it to the Mapping field.
func (o *RenderstreamChannelMappingInfo) SetMapping(v RenderstreamMapping) {
	o.Mapping = &v
}

// GetAssigner returns the Assigner field value if set, zero value otherwise.
func (o *RenderstreamChannelMappingInfo) GetAssigner() RenderstreamAssigner {
	if o == nil || o.Assigner == nil {
		var ret RenderstreamAssigner
		return ret
	}
	return *o.Assigner
}

// GetAssignerOk returns a tuple with the Assigner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamChannelMappingInfo) GetAssignerOk() (*RenderstreamAssigner, bool) {
	if o == nil || o.Assigner == nil {
		return nil, false
	}
	return o.Assigner, true
}

// HasAssigner returns a boolean if a field has been set.
func (o *RenderstreamChannelMappingInfo) HasAssigner() bool {
	if o != nil && o.Assigner != nil {
		return true
	}

	return false
}

// SetAssigner gets a reference to the given RenderstreamAssigner and assigns it to the Assigner field.
func (o *RenderstreamChannelMappingInfo) SetAssigner(v RenderstreamAssigner) {
	o.Assigner = &v
}

func (o RenderstreamChannelMappingInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Channel != nil {
		toSerialize["channel"] = o.Channel
	}
	if o.Mapping != nil {
		toSerialize["mapping"] = o.Mapping
	}
	if o.Assigner != nil {
		toSerialize["assigner"] = o.Assigner
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamChannelMappingInfo struct {
	value *RenderstreamChannelMappingInfo
	isSet bool
}

func (v NullableRenderstreamChannelMappingInfo) Get() *RenderstreamChannelMappingInfo {
	return v.value
}

func (v *NullableRenderstreamChannelMappingInfo) Set(val *RenderstreamChannelMappingInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamChannelMappingInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamChannelMappingInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamChannelMappingInfo(val *RenderstreamChannelMappingInfo) *NullableRenderstreamChannelMappingInfo {
	return &NullableRenderstreamChannelMappingInfo{value: val, isSet: true}
}

func (v NullableRenderstreamChannelMappingInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamChannelMappingInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


