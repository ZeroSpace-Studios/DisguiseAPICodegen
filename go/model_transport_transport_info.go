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

// TransportTransportInfo struct for TransportTransportInfo
type TransportTransportInfo struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
	Engaged *bool `json:"engaged,omitempty"`
	Volume *float64 `json:"volume,omitempty"`
	Brightness *float64 `json:"brightness,omitempty"`
	Playmode *TransportAPIPlayMode `json:"playmode,omitempty"`
}

// NewTransportTransportInfo instantiates a new TransportTransportInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportTransportInfo() *TransportTransportInfo {
	this := TransportTransportInfo{}
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// NewTransportTransportInfoWithDefaults instantiates a new TransportTransportInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportTransportInfoWithDefaults() *TransportTransportInfo {
	this := TransportTransportInfo{}
	var playmode TransportAPIPlayMode = NOT_SET
	this.Playmode = &playmode
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *TransportTransportInfo) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportTransportInfo) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *TransportTransportInfo) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *TransportTransportInfo) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *TransportTransportInfo) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportTransportInfo) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *TransportTransportInfo) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *TransportTransportInfo) SetName(v string) {
	o.Name = &v
}

// GetEngaged returns the Engaged field value if set, zero value otherwise.
func (o *TransportTransportInfo) GetEngaged() bool {
	if o == nil || o.Engaged == nil {
		var ret bool
		return ret
	}
	return *o.Engaged
}

// GetEngagedOk returns a tuple with the Engaged field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportTransportInfo) GetEngagedOk() (*bool, bool) {
	if o == nil || o.Engaged == nil {
		return nil, false
	}
	return o.Engaged, true
}

// HasEngaged returns a boolean if a field has been set.
func (o *TransportTransportInfo) HasEngaged() bool {
	if o != nil && o.Engaged != nil {
		return true
	}

	return false
}

// SetEngaged gets a reference to the given bool and assigns it to the Engaged field.
func (o *TransportTransportInfo) SetEngaged(v bool) {
	o.Engaged = &v
}

// GetVolume returns the Volume field value if set, zero value otherwise.
func (o *TransportTransportInfo) GetVolume() float64 {
	if o == nil || o.Volume == nil {
		var ret float64
		return ret
	}
	return *o.Volume
}

// GetVolumeOk returns a tuple with the Volume field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportTransportInfo) GetVolumeOk() (*float64, bool) {
	if o == nil || o.Volume == nil {
		return nil, false
	}
	return o.Volume, true
}

// HasVolume returns a boolean if a field has been set.
func (o *TransportTransportInfo) HasVolume() bool {
	if o != nil && o.Volume != nil {
		return true
	}

	return false
}

// SetVolume gets a reference to the given float64 and assigns it to the Volume field.
func (o *TransportTransportInfo) SetVolume(v float64) {
	o.Volume = &v
}

// GetBrightness returns the Brightness field value if set, zero value otherwise.
func (o *TransportTransportInfo) GetBrightness() float64 {
	if o == nil || o.Brightness == nil {
		var ret float64
		return ret
	}
	return *o.Brightness
}

// GetBrightnessOk returns a tuple with the Brightness field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportTransportInfo) GetBrightnessOk() (*float64, bool) {
	if o == nil || o.Brightness == nil {
		return nil, false
	}
	return o.Brightness, true
}

// HasBrightness returns a boolean if a field has been set.
func (o *TransportTransportInfo) HasBrightness() bool {
	if o != nil && o.Brightness != nil {
		return true
	}

	return false
}

// SetBrightness gets a reference to the given float64 and assigns it to the Brightness field.
func (o *TransportTransportInfo) SetBrightness(v float64) {
	o.Brightness = &v
}

// GetPlaymode returns the Playmode field value if set, zero value otherwise.
func (o *TransportTransportInfo) GetPlaymode() TransportAPIPlayMode {
	if o == nil || o.Playmode == nil {
		var ret TransportAPIPlayMode
		return ret
	}
	return *o.Playmode
}

// GetPlaymodeOk returns a tuple with the Playmode field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportTransportInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool) {
	if o == nil || o.Playmode == nil {
		return nil, false
	}
	return o.Playmode, true
}

// HasPlaymode returns a boolean if a field has been set.
func (o *TransportTransportInfo) HasPlaymode() bool {
	if o != nil && o.Playmode != nil {
		return true
	}

	return false
}

// SetPlaymode gets a reference to the given TransportAPIPlayMode and assigns it to the Playmode field.
func (o *TransportTransportInfo) SetPlaymode(v TransportAPIPlayMode) {
	o.Playmode = &v
}

func (o TransportTransportInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.Engaged != nil {
		toSerialize["engaged"] = o.Engaged
	}
	if o.Volume != nil {
		toSerialize["volume"] = o.Volume
	}
	if o.Brightness != nil {
		toSerialize["brightness"] = o.Brightness
	}
	if o.Playmode != nil {
		toSerialize["playmode"] = o.Playmode
	}
	return json.Marshal(toSerialize)
}

type NullableTransportTransportInfo struct {
	value *TransportTransportInfo
	isSet bool
}

func (v NullableTransportTransportInfo) Get() *TransportTransportInfo {
	return v.value
}

func (v *NullableTransportTransportInfo) Set(val *TransportTransportInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportTransportInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportTransportInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportTransportInfo(val *TransportTransportInfo) *NullableTransportTransportInfo {
	return &NullableTransportTransportInfo{value: val, isSet: true}
}

func (v NullableTransportTransportInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportTransportInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

