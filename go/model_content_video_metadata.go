/*
d3 API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 1.4.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// ContentVideoMetadata struct for ContentVideoMetadata
type ContentVideoMetadata struct {
	ImageSequenceMetadata *ContentImageSequenceMetadata `json:"imageSequenceMetadata,omitempty"`
	HasAudio *bool `json:"hasAudio,omitempty"`
	AudioBigEndian *bool `json:"audioBigEndian,omitempty"`
	AudioSampleRate *float32 `json:"audioSampleRate,omitempty"`
}

// NewContentVideoMetadata instantiates a new ContentVideoMetadata object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewContentVideoMetadata() *ContentVideoMetadata {
	this := ContentVideoMetadata{}
	return &this
}

// NewContentVideoMetadataWithDefaults instantiates a new ContentVideoMetadata object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewContentVideoMetadataWithDefaults() *ContentVideoMetadata {
	this := ContentVideoMetadata{}
	return &this
}

// GetImageSequenceMetadata returns the ImageSequenceMetadata field value if set, zero value otherwise.
func (o *ContentVideoMetadata) GetImageSequenceMetadata() ContentImageSequenceMetadata {
	if o == nil || o.ImageSequenceMetadata == nil {
		var ret ContentImageSequenceMetadata
		return ret
	}
	return *o.ImageSequenceMetadata
}

// GetImageSequenceMetadataOk returns a tuple with the ImageSequenceMetadata field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ContentVideoMetadata) GetImageSequenceMetadataOk() (*ContentImageSequenceMetadata, bool) {
	if o == nil || o.ImageSequenceMetadata == nil {
		return nil, false
	}
	return o.ImageSequenceMetadata, true
}

// HasImageSequenceMetadata returns a boolean if a field has been set.
func (o *ContentVideoMetadata) HasImageSequenceMetadata() bool {
	if o != nil && o.ImageSequenceMetadata != nil {
		return true
	}

	return false
}

// SetImageSequenceMetadata gets a reference to the given ContentImageSequenceMetadata and assigns it to the ImageSequenceMetadata field.
func (o *ContentVideoMetadata) SetImageSequenceMetadata(v ContentImageSequenceMetadata) {
	o.ImageSequenceMetadata = &v
}

// GetHasAudio returns the HasAudio field value if set, zero value otherwise.
func (o *ContentVideoMetadata) GetHasAudio() bool {
	if o == nil || o.HasAudio == nil {
		var ret bool
		return ret
	}
	return *o.HasAudio
}

// GetHasAudioOk returns a tuple with the HasAudio field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ContentVideoMetadata) GetHasAudioOk() (*bool, bool) {
	if o == nil || o.HasAudio == nil {
		return nil, false
	}
	return o.HasAudio, true
}

// HasHasAudio returns a boolean if a field has been set.
func (o *ContentVideoMetadata) HasHasAudio() bool {
	if o != nil && o.HasAudio != nil {
		return true
	}

	return false
}

// SetHasAudio gets a reference to the given bool and assigns it to the HasAudio field.
func (o *ContentVideoMetadata) SetHasAudio(v bool) {
	o.HasAudio = &v
}

// GetAudioBigEndian returns the AudioBigEndian field value if set, zero value otherwise.
func (o *ContentVideoMetadata) GetAudioBigEndian() bool {
	if o == nil || o.AudioBigEndian == nil {
		var ret bool
		return ret
	}
	return *o.AudioBigEndian
}

// GetAudioBigEndianOk returns a tuple with the AudioBigEndian field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ContentVideoMetadata) GetAudioBigEndianOk() (*bool, bool) {
	if o == nil || o.AudioBigEndian == nil {
		return nil, false
	}
	return o.AudioBigEndian, true
}

// HasAudioBigEndian returns a boolean if a field has been set.
func (o *ContentVideoMetadata) HasAudioBigEndian() bool {
	if o != nil && o.AudioBigEndian != nil {
		return true
	}

	return false
}

// SetAudioBigEndian gets a reference to the given bool and assigns it to the AudioBigEndian field.
func (o *ContentVideoMetadata) SetAudioBigEndian(v bool) {
	o.AudioBigEndian = &v
}

// GetAudioSampleRate returns the AudioSampleRate field value if set, zero value otherwise.
func (o *ContentVideoMetadata) GetAudioSampleRate() float32 {
	if o == nil || o.AudioSampleRate == nil {
		var ret float32
		return ret
	}
	return *o.AudioSampleRate
}

// GetAudioSampleRateOk returns a tuple with the AudioSampleRate field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ContentVideoMetadata) GetAudioSampleRateOk() (*float32, bool) {
	if o == nil || o.AudioSampleRate == nil {
		return nil, false
	}
	return o.AudioSampleRate, true
}

// HasAudioSampleRate returns a boolean if a field has been set.
func (o *ContentVideoMetadata) HasAudioSampleRate() bool {
	if o != nil && o.AudioSampleRate != nil {
		return true
	}

	return false
}

// SetAudioSampleRate gets a reference to the given float32 and assigns it to the AudioSampleRate field.
func (o *ContentVideoMetadata) SetAudioSampleRate(v float32) {
	o.AudioSampleRate = &v
}

func (o ContentVideoMetadata) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ImageSequenceMetadata != nil {
		toSerialize["imageSequenceMetadata"] = o.ImageSequenceMetadata
	}
	if o.HasAudio != nil {
		toSerialize["hasAudio"] = o.HasAudio
	}
	if o.AudioBigEndian != nil {
		toSerialize["audioBigEndian"] = o.AudioBigEndian
	}
	if o.AudioSampleRate != nil {
		toSerialize["audioSampleRate"] = o.AudioSampleRate
	}
	return json.Marshal(toSerialize)
}

type NullableContentVideoMetadata struct {
	value *ContentVideoMetadata
	isSet bool
}

func (v NullableContentVideoMetadata) Get() *ContentVideoMetadata {
	return v.value
}

func (v *NullableContentVideoMetadata) Set(val *ContentVideoMetadata) {
	v.value = val
	v.isSet = true
}

func (v NullableContentVideoMetadata) IsSet() bool {
	return v.isSet
}

func (v *NullableContentVideoMetadata) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableContentVideoMetadata(val *ContentVideoMetadata) *NullableContentVideoMetadata {
	return &NullableContentVideoMetadata{value: val, isSet: true}
}

func (v NullableContentVideoMetadata) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableContentVideoMetadata) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

