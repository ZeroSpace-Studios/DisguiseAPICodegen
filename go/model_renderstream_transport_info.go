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

// RenderstreamTransportInfo struct for RenderstreamTransportInfo
type RenderstreamTransportInfo struct {
	Type *string `json:"type,omitempty"`
	Format *string `json:"format,omitempty"`
	BitDepth *int32 `json:"bitDepth,omitempty"`
}

// NewRenderstreamTransportInfo instantiates a new RenderstreamTransportInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamTransportInfo() *RenderstreamTransportInfo {
	this := RenderstreamTransportInfo{}
	return &this
}

// NewRenderstreamTransportInfoWithDefaults instantiates a new RenderstreamTransportInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamTransportInfoWithDefaults() *RenderstreamTransportInfo {
	this := RenderstreamTransportInfo{}
	return &this
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *RenderstreamTransportInfo) GetType() string {
	if o == nil || o.Type == nil {
		var ret string
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamTransportInfo) GetTypeOk() (*string, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *RenderstreamTransportInfo) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given string and assigns it to the Type field.
func (o *RenderstreamTransportInfo) SetType(v string) {
	o.Type = &v
}

// GetFormat returns the Format field value if set, zero value otherwise.
func (o *RenderstreamTransportInfo) GetFormat() string {
	if o == nil || o.Format == nil {
		var ret string
		return ret
	}
	return *o.Format
}

// GetFormatOk returns a tuple with the Format field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamTransportInfo) GetFormatOk() (*string, bool) {
	if o == nil || o.Format == nil {
		return nil, false
	}
	return o.Format, true
}

// HasFormat returns a boolean if a field has been set.
func (o *RenderstreamTransportInfo) HasFormat() bool {
	if o != nil && o.Format != nil {
		return true
	}

	return false
}

// SetFormat gets a reference to the given string and assigns it to the Format field.
func (o *RenderstreamTransportInfo) SetFormat(v string) {
	o.Format = &v
}

// GetBitDepth returns the BitDepth field value if set, zero value otherwise.
func (o *RenderstreamTransportInfo) GetBitDepth() int32 {
	if o == nil || o.BitDepth == nil {
		var ret int32
		return ret
	}
	return *o.BitDepth
}

// GetBitDepthOk returns a tuple with the BitDepth field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamTransportInfo) GetBitDepthOk() (*int32, bool) {
	if o == nil || o.BitDepth == nil {
		return nil, false
	}
	return o.BitDepth, true
}

// HasBitDepth returns a boolean if a field has been set.
func (o *RenderstreamTransportInfo) HasBitDepth() bool {
	if o != nil && o.BitDepth != nil {
		return true
	}

	return false
}

// SetBitDepth gets a reference to the given int32 and assigns it to the BitDepth field.
func (o *RenderstreamTransportInfo) SetBitDepth(v int32) {
	o.BitDepth = &v
}

func (o RenderstreamTransportInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Format != nil {
		toSerialize["format"] = o.Format
	}
	if o.BitDepth != nil {
		toSerialize["bitDepth"] = o.BitDepth
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamTransportInfo struct {
	value *RenderstreamTransportInfo
	isSet bool
}

func (v NullableRenderstreamTransportInfo) Get() *RenderstreamTransportInfo {
	return v.value
}

func (v *NullableRenderstreamTransportInfo) Set(val *RenderstreamTransportInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamTransportInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamTransportInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamTransportInfo(val *RenderstreamTransportInfo) *NullableRenderstreamTransportInfo {
	return &NullableRenderstreamTransportInfo{value: val, isSet: true}
}

func (v NullableRenderstreamTransportInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamTransportInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


