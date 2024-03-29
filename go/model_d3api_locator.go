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

// D3apiLocator struct for D3apiLocator
type D3apiLocator struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
}

// NewD3apiLocator instantiates a new D3apiLocator object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewD3apiLocator() *D3apiLocator {
	this := D3apiLocator{}
	return &this
}

// NewD3apiLocatorWithDefaults instantiates a new D3apiLocator object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewD3apiLocatorWithDefaults() *D3apiLocator {
	this := D3apiLocator{}
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *D3apiLocator) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *D3apiLocator) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *D3apiLocator) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *D3apiLocator) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *D3apiLocator) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *D3apiLocator) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *D3apiLocator) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *D3apiLocator) SetName(v string) {
	o.Name = &v
}

func (o D3apiLocator) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	return json.Marshal(toSerialize)
}

type NullableD3apiLocator struct {
	value *D3apiLocator
	isSet bool
}

func (v NullableD3apiLocator) Get() *D3apiLocator {
	return v.value
}

func (v *NullableD3apiLocator) Set(val *D3apiLocator) {
	v.value = val
	v.isSet = true
}

func (v NullableD3apiLocator) IsSet() bool {
	return v.isSet
}

func (v *NullableD3apiLocator) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableD3apiLocator(val *D3apiLocator) *NullableD3apiLocator {
	return &NullableD3apiLocator{value: val, isSet: true}
}

func (v NullableD3apiLocator) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableD3apiLocator) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


