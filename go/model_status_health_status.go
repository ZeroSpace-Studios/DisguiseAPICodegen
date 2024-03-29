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

// StatusHealthStatus struct for StatusHealthStatus
type StatusHealthStatus struct {
	AverageFPS *float32 `json:"averageFPS,omitempty"`
	VideoDroppedFrames *float32 `json:"videoDroppedFrames,omitempty"`
	VideoMissedFrames *float32 `json:"videoMissedFrames,omitempty"`
	States *[]StatusHealthStates `json:"states,omitempty"`
}

// NewStatusHealthStatus instantiates a new StatusHealthStatus object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewStatusHealthStatus() *StatusHealthStatus {
	this := StatusHealthStatus{}
	return &this
}

// NewStatusHealthStatusWithDefaults instantiates a new StatusHealthStatus object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewStatusHealthStatusWithDefaults() *StatusHealthStatus {
	this := StatusHealthStatus{}
	return &this
}

// GetAverageFPS returns the AverageFPS field value if set, zero value otherwise.
func (o *StatusHealthStatus) GetAverageFPS() float32 {
	if o == nil || o.AverageFPS == nil {
		var ret float32
		return ret
	}
	return *o.AverageFPS
}

// GetAverageFPSOk returns a tuple with the AverageFPS field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusHealthStatus) GetAverageFPSOk() (*float32, bool) {
	if o == nil || o.AverageFPS == nil {
		return nil, false
	}
	return o.AverageFPS, true
}

// HasAverageFPS returns a boolean if a field has been set.
func (o *StatusHealthStatus) HasAverageFPS() bool {
	if o != nil && o.AverageFPS != nil {
		return true
	}

	return false
}

// SetAverageFPS gets a reference to the given float32 and assigns it to the AverageFPS field.
func (o *StatusHealthStatus) SetAverageFPS(v float32) {
	o.AverageFPS = &v
}

// GetVideoDroppedFrames returns the VideoDroppedFrames field value if set, zero value otherwise.
func (o *StatusHealthStatus) GetVideoDroppedFrames() float32 {
	if o == nil || o.VideoDroppedFrames == nil {
		var ret float32
		return ret
	}
	return *o.VideoDroppedFrames
}

// GetVideoDroppedFramesOk returns a tuple with the VideoDroppedFrames field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusHealthStatus) GetVideoDroppedFramesOk() (*float32, bool) {
	if o == nil || o.VideoDroppedFrames == nil {
		return nil, false
	}
	return o.VideoDroppedFrames, true
}

// HasVideoDroppedFrames returns a boolean if a field has been set.
func (o *StatusHealthStatus) HasVideoDroppedFrames() bool {
	if o != nil && o.VideoDroppedFrames != nil {
		return true
	}

	return false
}

// SetVideoDroppedFrames gets a reference to the given float32 and assigns it to the VideoDroppedFrames field.
func (o *StatusHealthStatus) SetVideoDroppedFrames(v float32) {
	o.VideoDroppedFrames = &v
}

// GetVideoMissedFrames returns the VideoMissedFrames field value if set, zero value otherwise.
func (o *StatusHealthStatus) GetVideoMissedFrames() float32 {
	if o == nil || o.VideoMissedFrames == nil {
		var ret float32
		return ret
	}
	return *o.VideoMissedFrames
}

// GetVideoMissedFramesOk returns a tuple with the VideoMissedFrames field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusHealthStatus) GetVideoMissedFramesOk() (*float32, bool) {
	if o == nil || o.VideoMissedFrames == nil {
		return nil, false
	}
	return o.VideoMissedFrames, true
}

// HasVideoMissedFrames returns a boolean if a field has been set.
func (o *StatusHealthStatus) HasVideoMissedFrames() bool {
	if o != nil && o.VideoMissedFrames != nil {
		return true
	}

	return false
}

// SetVideoMissedFrames gets a reference to the given float32 and assigns it to the VideoMissedFrames field.
func (o *StatusHealthStatus) SetVideoMissedFrames(v float32) {
	o.VideoMissedFrames = &v
}

// GetStates returns the States field value if set, zero value otherwise.
func (o *StatusHealthStatus) GetStates() []StatusHealthStates {
	if o == nil || o.States == nil {
		var ret []StatusHealthStates
		return ret
	}
	return *o.States
}

// GetStatesOk returns a tuple with the States field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusHealthStatus) GetStatesOk() (*[]StatusHealthStates, bool) {
	if o == nil || o.States == nil {
		return nil, false
	}
	return o.States, true
}

// HasStates returns a boolean if a field has been set.
func (o *StatusHealthStatus) HasStates() bool {
	if o != nil && o.States != nil {
		return true
	}

	return false
}

// SetStates gets a reference to the given []StatusHealthStates and assigns it to the States field.
func (o *StatusHealthStatus) SetStates(v []StatusHealthStates) {
	o.States = &v
}

func (o StatusHealthStatus) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AverageFPS != nil {
		toSerialize["averageFPS"] = o.AverageFPS
	}
	if o.VideoDroppedFrames != nil {
		toSerialize["videoDroppedFrames"] = o.VideoDroppedFrames
	}
	if o.VideoMissedFrames != nil {
		toSerialize["videoMissedFrames"] = o.VideoMissedFrames
	}
	if o.States != nil {
		toSerialize["states"] = o.States
	}
	return json.Marshal(toSerialize)
}

type NullableStatusHealthStatus struct {
	value *StatusHealthStatus
	isSet bool
}

func (v NullableStatusHealthStatus) Get() *StatusHealthStatus {
	return v.value
}

func (v *NullableStatusHealthStatus) Set(val *StatusHealthStatus) {
	v.value = val
	v.isSet = true
}

func (v NullableStatusHealthStatus) IsSet() bool {
	return v.isSet
}

func (v *NullableStatusHealthStatus) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableStatusHealthStatus(val *StatusHealthStatus) *NullableStatusHealthStatus {
	return &NullableStatusHealthStatus{value: val, isSet: true}
}

func (v NullableStatusHealthStatus) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableStatusHealthStatus) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


