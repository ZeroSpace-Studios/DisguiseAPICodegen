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

// RenderstreamNetworkInfo struct for RenderstreamNetworkInfo
type RenderstreamNetworkInfo struct {
	Ip *string `json:"ip,omitempty"`
	Name *string `json:"name,omitempty"`
}

// NewRenderstreamNetworkInfo instantiates a new RenderstreamNetworkInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamNetworkInfo() *RenderstreamNetworkInfo {
	this := RenderstreamNetworkInfo{}
	return &this
}

// NewRenderstreamNetworkInfoWithDefaults instantiates a new RenderstreamNetworkInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamNetworkInfoWithDefaults() *RenderstreamNetworkInfo {
	this := RenderstreamNetworkInfo{}
	return &this
}

// GetIp returns the Ip field value if set, zero value otherwise.
func (o *RenderstreamNetworkInfo) GetIp() string {
	if o == nil || o.Ip == nil {
		var ret string
		return ret
	}
	return *o.Ip
}

// GetIpOk returns a tuple with the Ip field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamNetworkInfo) GetIpOk() (*string, bool) {
	if o == nil || o.Ip == nil {
		return nil, false
	}
	return o.Ip, true
}

// HasIp returns a boolean if a field has been set.
func (o *RenderstreamNetworkInfo) HasIp() bool {
	if o != nil && o.Ip != nil {
		return true
	}

	return false
}

// SetIp gets a reference to the given string and assigns it to the Ip field.
func (o *RenderstreamNetworkInfo) SetIp(v string) {
	o.Ip = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *RenderstreamNetworkInfo) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamNetworkInfo) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *RenderstreamNetworkInfo) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *RenderstreamNetworkInfo) SetName(v string) {
	o.Name = &v
}

func (o RenderstreamNetworkInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Ip != nil {
		toSerialize["ip"] = o.Ip
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamNetworkInfo struct {
	value *RenderstreamNetworkInfo
	isSet bool
}

func (v NullableRenderstreamNetworkInfo) Get() *RenderstreamNetworkInfo {
	return v.value
}

func (v *NullableRenderstreamNetworkInfo) Set(val *RenderstreamNetworkInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamNetworkInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamNetworkInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamNetworkInfo(val *RenderstreamNetworkInfo) *NullableRenderstreamNetworkInfo {
	return &NullableRenderstreamNetworkInfo{value: val, isSet: true}
}

func (v NullableRenderstreamNetworkInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamNetworkInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

