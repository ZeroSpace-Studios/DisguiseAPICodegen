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

// TransportGoToTimeCodeInfo struct for TransportGoToTimeCodeInfo
type TransportGoToTimeCodeInfo struct {
	Transport *D3apiLocator `json:"transport,omitempty"`
	Timecode *string `json:"timecode,omitempty"`
	IgnoreTags *bool `json:"ignoreTags,omitempty"`
	Playmode *TransportAPIPlayMode `json:"playmode,omitempty"`
}

// NewTransportGoToTimeCodeInfo instantiates a new TransportGoToTimeCodeInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportGoToTimeCodeInfo() *TransportGoToTimeCodeInfo {
	this := TransportGoToTimeCodeInfo{}
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// NewTransportGoToTimeCodeInfoWithDefaults instantiates a new TransportGoToTimeCodeInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportGoToTimeCodeInfoWithDefaults() *TransportGoToTimeCodeInfo {
	this := TransportGoToTimeCodeInfo{}
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// GetTransport returns the Transport field value if set, zero value otherwise.
func (o *TransportGoToTimeCodeInfo) GetTransport() D3apiLocator {
	if o == nil || o.Transport == nil {
		var ret D3apiLocator
		return ret
	}
	return *o.Transport
}

// GetTransportOk returns a tuple with the Transport field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeCodeInfo) GetTransportOk() (*D3apiLocator, bool) {
	if o == nil || o.Transport == nil {
		return nil, false
	}
	return o.Transport, true
}

// HasTransport returns a boolean if a field has been set.
func (o *TransportGoToTimeCodeInfo) HasTransport() bool {
	if o != nil && o.Transport != nil {
		return true
	}

	return false
}

// SetTransport gets a reference to the given D3apiLocator and assigns it to the Transport field.
func (o *TransportGoToTimeCodeInfo) SetTransport(v D3apiLocator) {
	o.Transport = &v
}

// GetTimecode returns the Timecode field value if set, zero value otherwise.
func (o *TransportGoToTimeCodeInfo) GetTimecode() string {
	if o == nil || o.Timecode == nil {
		var ret string
		return ret
	}
	return *o.Timecode
}

// GetTimecodeOk returns a tuple with the Timecode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeCodeInfo) GetTimecodeOk() (*string, bool) {
	if o == nil || o.Timecode == nil {
		return nil, false
	}
	return o.Timecode, true
}

// HasTimecode returns a boolean if a field has been set.
func (o *TransportGoToTimeCodeInfo) HasTimecode() bool {
	if o != nil && o.Timecode != nil {
		return true
	}

	return false
}

// SetTimecode gets a reference to the given string and assigns it to the Timecode field.
func (o *TransportGoToTimeCodeInfo) SetTimecode(v string) {
	o.Timecode = &v
}

// GetIgnoreTags returns the IgnoreTags field value if set, zero value otherwise.
func (o *TransportGoToTimeCodeInfo) GetIgnoreTags() bool {
	if o == nil || o.IgnoreTags == nil {
		var ret bool
		return ret
	}
	return *o.IgnoreTags
}

// GetIgnoreTagsOk returns a tuple with the IgnoreTags field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeCodeInfo) GetIgnoreTagsOk() (*bool, bool) {
	if o == nil || o.IgnoreTags == nil {
		return nil, false
	}
	return o.IgnoreTags, true
}

// HasIgnoreTags returns a boolean if a field has been set.
func (o *TransportGoToTimeCodeInfo) HasIgnoreTags() bool {
	if o != nil && o.IgnoreTags != nil {
		return true
	}

	return false
}

// SetIgnoreTags gets a reference to the given bool and assigns it to the IgnoreTags field.
func (o *TransportGoToTimeCodeInfo) SetIgnoreTags(v bool) {
	o.IgnoreTags = &v
}

// GetPlaymode returns the Playmode field value if set, zero value otherwise.
func (o *TransportGoToTimeCodeInfo) GetPlaymode() TransportAPIPlayMode {
	if o == nil || o.Playmode == nil {
		var ret TransportAPIPlayMode
		return ret
	}
	return *o.Playmode
}

// GetPlaymodeOk returns a tuple with the Playmode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeCodeInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool) {
	if o == nil || o.Playmode == nil {
		return nil, false
	}
	return o.Playmode, true
}

// HasPlaymode returns a boolean if a field has been set.
func (o *TransportGoToTimeCodeInfo) HasPlaymode() bool {
	if o != nil && o.Playmode != nil {
		return true
	}

	return false
}

// SetPlaymode gets a reference to the given TransportAPIPlayMode and assigns it to the Playmode field.
func (o *TransportGoToTimeCodeInfo) SetPlaymode(v TransportAPIPlayMode) {
	o.Playmode = &v
}

func (o TransportGoToTimeCodeInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Transport != nil {
		toSerialize["transport"] = o.Transport
	}
	if o.Timecode != nil {
		toSerialize["timecode"] = o.Timecode
	}
	if o.IgnoreTags != nil {
		toSerialize["ignoreTags"] = o.IgnoreTags
	}
	if o.Playmode != nil {
		toSerialize["playmode"] = o.Playmode
	}
	return json.Marshal(toSerialize)
}

type NullableTransportGoToTimeCodeInfo struct {
	value *TransportGoToTimeCodeInfo
	isSet bool
}

func (v NullableTransportGoToTimeCodeInfo) Get() *TransportGoToTimeCodeInfo {
	return v.value
}

func (v *NullableTransportGoToTimeCodeInfo) Set(val *TransportGoToTimeCodeInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportGoToTimeCodeInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportGoToTimeCodeInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportGoToTimeCodeInfo(val *TransportGoToTimeCodeInfo) *NullableTransportGoToTimeCodeInfo {
	return &NullableTransportGoToTimeCodeInfo{value: val, isSet: true}
}

func (v NullableTransportGoToTimeCodeInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportGoToTimeCodeInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


