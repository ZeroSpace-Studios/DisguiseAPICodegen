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

// TransportGoToTimeInfo struct for TransportGoToTimeInfo
type TransportGoToTimeInfo struct {
	Transport *D3apiLocator `json:"transport,omitempty"`
	Time *float64 `json:"time,omitempty"`
	Playmode *TransportAPIPlayMode `json:"playmode,omitempty"`
}

// NewTransportGoToTimeInfo instantiates a new TransportGoToTimeInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportGoToTimeInfo() *TransportGoToTimeInfo {
	this := TransportGoToTimeInfo{}
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// NewTransportGoToTimeInfoWithDefaults instantiates a new TransportGoToTimeInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportGoToTimeInfoWithDefaults() *TransportGoToTimeInfo {
	this := TransportGoToTimeInfo{}
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// GetTransport returns the Transport field value if set, zero value otherwise.
func (o *TransportGoToTimeInfo) GetTransport() D3apiLocator {
	if o == nil || o.Transport == nil {
		var ret D3apiLocator
		return ret
	}
	return *o.Transport
}

// GetTransportOk returns a tuple with the Transport field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeInfo) GetTransportOk() (*D3apiLocator, bool) {
	if o == nil || o.Transport == nil {
		return nil, false
	}
	return o.Transport, true
}

// HasTransport returns a boolean if a field has been set.
func (o *TransportGoToTimeInfo) HasTransport() bool {
	if o != nil && o.Transport != nil {
		return true
	}

	return false
}

// SetTransport gets a reference to the given D3apiLocator and assigns it to the Transport field.
func (o *TransportGoToTimeInfo) SetTransport(v D3apiLocator) {
	o.Transport = &v
}

// GetTime returns the Time field value if set, zero value otherwise.
func (o *TransportGoToTimeInfo) GetTime() float64 {
	if o == nil || o.Time == nil {
		var ret float64
		return ret
	}
	return *o.Time
}

// GetTimeOk returns a tuple with the Time field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeInfo) GetTimeOk() (*float64, bool) {
	if o == nil || o.Time == nil {
		return nil, false
	}
	return o.Time, true
}

// HasTime returns a boolean if a field has been set.
func (o *TransportGoToTimeInfo) HasTime() bool {
	if o != nil && o.Time != nil {
		return true
	}

	return false
}

// SetTime gets a reference to the given float64 and assigns it to the Time field.
func (o *TransportGoToTimeInfo) SetTime(v float64) {
	o.Time = &v
}

// GetPlaymode returns the Playmode field value if set, zero value otherwise.
func (o *TransportGoToTimeInfo) GetPlaymode() TransportAPIPlayMode {
	if o == nil || o.Playmode == nil {
		var ret TransportAPIPlayMode
		return ret
	}
	return *o.Playmode
}

// GetPlaymodeOk returns a tuple with the Playmode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool) {
	if o == nil || o.Playmode == nil {
		return nil, false
	}
	return o.Playmode, true
}

// HasPlaymode returns a boolean if a field has been set.
func (o *TransportGoToTimeInfo) HasPlaymode() bool {
	if o != nil && o.Playmode != nil {
		return true
	}

	return false
}

// SetPlaymode gets a reference to the given TransportAPIPlayMode and assigns it to the Playmode field.
func (o *TransportGoToTimeInfo) SetPlaymode(v TransportAPIPlayMode) {
	o.Playmode = &v
}

func (o TransportGoToTimeInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Transport != nil {
		toSerialize["transport"] = o.Transport
	}
	if o.Time != nil {
		toSerialize["time"] = o.Time
	}
	if o.Playmode != nil {
		toSerialize["playmode"] = o.Playmode
	}
	return json.Marshal(toSerialize)
}

type NullableTransportGoToTimeInfo struct {
	value *TransportGoToTimeInfo
	isSet bool
}

func (v NullableTransportGoToTimeInfo) Get() *TransportGoToTimeInfo {
	return v.value
}

func (v *NullableTransportGoToTimeInfo) Set(val *TransportGoToTimeInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportGoToTimeInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportGoToTimeInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportGoToTimeInfo(val *TransportGoToTimeInfo) *NullableTransportGoToTimeInfo {
	return &NullableTransportGoToTimeInfo{value: val, isSet: true}
}

func (v NullableTransportGoToTimeInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportGoToTimeInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


