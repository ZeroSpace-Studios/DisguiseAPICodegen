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

// TransportGoToTagInfo struct for TransportGoToTagInfo
type TransportGoToTagInfo struct {
	Transport *D3apiLocator `json:"transport,omitempty"`
	Type *TransportTagType `json:"type,omitempty"`
	Value *string `json:"value,omitempty"`
	AllowGlobalJump *bool `json:"allowGlobalJump,omitempty"`
	Playmode *TransportAPIPlayMode `json:"playmode,omitempty"`
}

// NewTransportGoToTagInfo instantiates a new TransportGoToTagInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportGoToTagInfo() *TransportGoToTagInfo {
	this := TransportGoToTagInfo{}
	var type_ TransportTagType = TAG_TYPE_UNKNOWN
	this.Type = &type_
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// NewTransportGoToTagInfoWithDefaults instantiates a new TransportGoToTagInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportGoToTagInfoWithDefaults() *TransportGoToTagInfo {
	this := TransportGoToTagInfo{}
	var type_ TransportTagType = TAG_TYPE_UNKNOWN
	this.Type = &type_
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// GetTransport returns the Transport field value if set, zero value otherwise.
func (o *TransportGoToTagInfo) GetTransport() D3apiLocator {
	if o == nil || o.Transport == nil {
		var ret D3apiLocator
		return ret
	}
	return *o.Transport
}

// GetTransportOk returns a tuple with the Transport field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTagInfo) GetTransportOk() (*D3apiLocator, bool) {
	if o == nil || o.Transport == nil {
		return nil, false
	}
	return o.Transport, true
}

// HasTransport returns a boolean if a field has been set.
func (o *TransportGoToTagInfo) HasTransport() bool {
	if o != nil && o.Transport != nil {
		return true
	}

	return false
}

// SetTransport gets a reference to the given D3apiLocator and assigns it to the Transport field.
func (o *TransportGoToTagInfo) SetTransport(v D3apiLocator) {
	o.Transport = &v
}

// GetType returns the Type field value if set, zero value otherwise.
func (o *TransportGoToTagInfo) GetType() TransportTagType {
	if o == nil || o.Type == nil {
		var ret TransportTagType
		return ret
	}
	return *o.Type
}

// GetTypeOk returns a tuple with the Type field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTagInfo) GetTypeOk() (*TransportTagType, bool) {
	if o == nil || o.Type == nil {
		return nil, false
	}
	return o.Type, true
}

// HasType returns a boolean if a field has been set.
func (o *TransportGoToTagInfo) HasType() bool {
	if o != nil && o.Type != nil {
		return true
	}

	return false
}

// SetType gets a reference to the given TransportTagType and assigns it to the Type field.
func (o *TransportGoToTagInfo) SetType(v TransportTagType) {
	o.Type = &v
}

// GetValue returns the Value field value if set, zero value otherwise.
func (o *TransportGoToTagInfo) GetValue() string {
	if o == nil || o.Value == nil {
		var ret string
		return ret
	}
	return *o.Value
}

// GetValueOk returns a tuple with the Value field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTagInfo) GetValueOk() (*string, bool) {
	if o == nil || o.Value == nil {
		return nil, false
	}
	return o.Value, true
}

// HasValue returns a boolean if a field has been set.
func (o *TransportGoToTagInfo) HasValue() bool {
	if o != nil && o.Value != nil {
		return true
	}

	return false
}

// SetValue gets a reference to the given string and assigns it to the Value field.
func (o *TransportGoToTagInfo) SetValue(v string) {
	o.Value = &v
}

// GetAllowGlobalJump returns the AllowGlobalJump field value if set, zero value otherwise.
func (o *TransportGoToTagInfo) GetAllowGlobalJump() bool {
	if o == nil || o.AllowGlobalJump == nil {
		var ret bool
		return ret
	}
	return *o.AllowGlobalJump
}

// GetAllowGlobalJumpOk returns a tuple with the AllowGlobalJump field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTagInfo) GetAllowGlobalJumpOk() (*bool, bool) {
	if o == nil || o.AllowGlobalJump == nil {
		return nil, false
	}
	return o.AllowGlobalJump, true
}

// HasAllowGlobalJump returns a boolean if a field has been set.
func (o *TransportGoToTagInfo) HasAllowGlobalJump() bool {
	if o != nil && o.AllowGlobalJump != nil {
		return true
	}

	return false
}

// SetAllowGlobalJump gets a reference to the given bool and assigns it to the AllowGlobalJump field.
func (o *TransportGoToTagInfo) SetAllowGlobalJump(v bool) {
	o.AllowGlobalJump = &v
}

// GetPlaymode returns the Playmode field value if set, zero value otherwise.
func (o *TransportGoToTagInfo) GetPlaymode() TransportAPIPlayMode {
	if o == nil || o.Playmode == nil {
		var ret TransportAPIPlayMode
		return ret
	}
	return *o.Playmode
}

// GetPlaymodeOk returns a tuple with the Playmode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTagInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool) {
	if o == nil || o.Playmode == nil {
		return nil, false
	}
	return o.Playmode, true
}

// HasPlaymode returns a boolean if a field has been set.
func (o *TransportGoToTagInfo) HasPlaymode() bool {
	if o != nil && o.Playmode != nil {
		return true
	}

	return false
}

// SetPlaymode gets a reference to the given TransportAPIPlayMode and assigns it to the Playmode field.
func (o *TransportGoToTagInfo) SetPlaymode(v TransportAPIPlayMode) {
	o.Playmode = &v
}

func (o TransportGoToTagInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Transport != nil {
		toSerialize["transport"] = o.Transport
	}
	if o.Type != nil {
		toSerialize["type"] = o.Type
	}
	if o.Value != nil {
		toSerialize["value"] = o.Value
	}
	if o.AllowGlobalJump != nil {
		toSerialize["allowGlobalJump"] = o.AllowGlobalJump
	}
	if o.Playmode != nil {
		toSerialize["playmode"] = o.Playmode
	}
	return json.Marshal(toSerialize)
}

type NullableTransportGoToTagInfo struct {
	value *TransportGoToTagInfo
	isSet bool
}

func (v NullableTransportGoToTagInfo) Get() *TransportGoToTagInfo {
	return v.value
}

func (v *NullableTransportGoToTagInfo) Set(val *TransportGoToTagInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportGoToTagInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportGoToTagInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportGoToTagInfo(val *TransportGoToTagInfo) *NullableTransportGoToTagInfo {
	return &NullableTransportGoToTagInfo{value: val, isSet: true}
}

func (v NullableTransportGoToTagInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportGoToTagInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


