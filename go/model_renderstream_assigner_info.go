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

// RenderstreamAssignerInfo struct for RenderstreamAssignerInfo
type RenderstreamAssignerInfo struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
	Transport *RenderstreamTransportInfo `json:"transport,omitempty"`
	Alpha *bool `json:"alpha,omitempty"`
	OverlapPixels *int32 `json:"overlapPixels,omitempty"`
	PaddingPixels *int32 `json:"paddingPixels,omitempty"`
	PreferredNetwork *RenderstreamNetworkInfo `json:"preferredNetwork,omitempty"`
}

// NewRenderstreamAssignerInfo instantiates a new RenderstreamAssignerInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamAssignerInfo() *RenderstreamAssignerInfo {
	this := RenderstreamAssignerInfo{}
	return &this
}

// NewRenderstreamAssignerInfoWithDefaults instantiates a new RenderstreamAssignerInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamAssignerInfoWithDefaults() *RenderstreamAssignerInfo {
	this := RenderstreamAssignerInfo{}
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *RenderstreamAssignerInfo) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *RenderstreamAssignerInfo) SetName(v string) {
	o.Name = &v
}

// GetTransport returns the Transport field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetTransport() RenderstreamTransportInfo {
	if o == nil || o.Transport == nil {
		var ret RenderstreamTransportInfo
		return ret
	}
	return *o.Transport
}

// GetTransportOk returns a tuple with the Transport field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetTransportOk() (*RenderstreamTransportInfo, bool) {
	if o == nil || o.Transport == nil {
		return nil, false
	}
	return o.Transport, true
}

// HasTransport returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasTransport() bool {
	if o != nil && o.Transport != nil {
		return true
	}

	return false
}

// SetTransport gets a reference to the given RenderstreamTransportInfo and assigns it to the Transport field.
func (o *RenderstreamAssignerInfo) SetTransport(v RenderstreamTransportInfo) {
	o.Transport = &v
}

// GetAlpha returns the Alpha field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetAlpha() bool {
	if o == nil || o.Alpha == nil {
		var ret bool
		return ret
	}
	return *o.Alpha
}

// GetAlphaOk returns a tuple with the Alpha field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetAlphaOk() (*bool, bool) {
	if o == nil || o.Alpha == nil {
		return nil, false
	}
	return o.Alpha, true
}

// HasAlpha returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasAlpha() bool {
	if o != nil && o.Alpha != nil {
		return true
	}

	return false
}

// SetAlpha gets a reference to the given bool and assigns it to the Alpha field.
func (o *RenderstreamAssignerInfo) SetAlpha(v bool) {
	o.Alpha = &v
}

// GetOverlapPixels returns the OverlapPixels field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetOverlapPixels() int32 {
	if o == nil || o.OverlapPixels == nil {
		var ret int32
		return ret
	}
	return *o.OverlapPixels
}

// GetOverlapPixelsOk returns a tuple with the OverlapPixels field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetOverlapPixelsOk() (*int32, bool) {
	if o == nil || o.OverlapPixels == nil {
		return nil, false
	}
	return o.OverlapPixels, true
}

// HasOverlapPixels returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasOverlapPixels() bool {
	if o != nil && o.OverlapPixels != nil {
		return true
	}

	return false
}

// SetOverlapPixels gets a reference to the given int32 and assigns it to the OverlapPixels field.
func (o *RenderstreamAssignerInfo) SetOverlapPixels(v int32) {
	o.OverlapPixels = &v
}

// GetPaddingPixels returns the PaddingPixels field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetPaddingPixels() int32 {
	if o == nil || o.PaddingPixels == nil {
		var ret int32
		return ret
	}
	return *o.PaddingPixels
}

// GetPaddingPixelsOk returns a tuple with the PaddingPixels field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetPaddingPixelsOk() (*int32, bool) {
	if o == nil || o.PaddingPixels == nil {
		return nil, false
	}
	return o.PaddingPixels, true
}

// HasPaddingPixels returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasPaddingPixels() bool {
	if o != nil && o.PaddingPixels != nil {
		return true
	}

	return false
}

// SetPaddingPixels gets a reference to the given int32 and assigns it to the PaddingPixels field.
func (o *RenderstreamAssignerInfo) SetPaddingPixels(v int32) {
	o.PaddingPixels = &v
}

// GetPreferredNetwork returns the PreferredNetwork field value if set, zero value otherwise.
func (o *RenderstreamAssignerInfo) GetPreferredNetwork() RenderstreamNetworkInfo {
	if o == nil || o.PreferredNetwork == nil {
		var ret RenderstreamNetworkInfo
		return ret
	}
	return *o.PreferredNetwork
}

// GetPreferredNetworkOk returns a tuple with the PreferredNetwork field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamAssignerInfo) GetPreferredNetworkOk() (*RenderstreamNetworkInfo, bool) {
	if o == nil || o.PreferredNetwork == nil {
		return nil, false
	}
	return o.PreferredNetwork, true
}

// HasPreferredNetwork returns a boolean if a field has been set.
func (o *RenderstreamAssignerInfo) HasPreferredNetwork() bool {
	if o != nil && o.PreferredNetwork != nil {
		return true
	}

	return false
}

// SetPreferredNetwork gets a reference to the given RenderstreamNetworkInfo and assigns it to the PreferredNetwork field.
func (o *RenderstreamAssignerInfo) SetPreferredNetwork(v RenderstreamNetworkInfo) {
	o.PreferredNetwork = &v
}

func (o RenderstreamAssignerInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.Transport != nil {
		toSerialize["transport"] = o.Transport
	}
	if o.Alpha != nil {
		toSerialize["alpha"] = o.Alpha
	}
	if o.OverlapPixels != nil {
		toSerialize["overlapPixels"] = o.OverlapPixels
	}
	if o.PaddingPixels != nil {
		toSerialize["paddingPixels"] = o.PaddingPixels
	}
	if o.PreferredNetwork != nil {
		toSerialize["preferredNetwork"] = o.PreferredNetwork
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamAssignerInfo struct {
	value *RenderstreamAssignerInfo
	isSet bool
}

func (v NullableRenderstreamAssignerInfo) Get() *RenderstreamAssignerInfo {
	return v.value
}

func (v *NullableRenderstreamAssignerInfo) Set(val *RenderstreamAssignerInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamAssignerInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamAssignerInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamAssignerInfo(val *RenderstreamAssignerInfo) *NullableRenderstreamAssignerInfo {
	return &NullableRenderstreamAssignerInfo{value: val, isSet: true}
}

func (v NullableRenderstreamAssignerInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamAssignerInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

