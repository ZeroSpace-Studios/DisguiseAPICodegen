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

// TransportListAnnotationsResult struct for TransportListAnnotationsResult
type TransportListAnnotationsResult struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
	Annotations *TransportAnnotationInfo `json:"annotations,omitempty"`
}

// NewTransportListAnnotationsResult instantiates a new TransportListAnnotationsResult object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportListAnnotationsResult() *TransportListAnnotationsResult {
	this := TransportListAnnotationsResult{}
	return &this
}

// NewTransportListAnnotationsResultWithDefaults instantiates a new TransportListAnnotationsResult object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportListAnnotationsResultWithDefaults() *TransportListAnnotationsResult {
	this := TransportListAnnotationsResult{}
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *TransportListAnnotationsResult) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportListAnnotationsResult) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *TransportListAnnotationsResult) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *TransportListAnnotationsResult) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *TransportListAnnotationsResult) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportListAnnotationsResult) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *TransportListAnnotationsResult) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *TransportListAnnotationsResult) SetName(v string) {
	o.Name = &v
}

// GetAnnotations returns the Annotations field value if set, zero value otherwise.
func (o *TransportListAnnotationsResult) GetAnnotations() TransportAnnotationInfo {
	if o == nil || o.Annotations == nil {
		var ret TransportAnnotationInfo
		return ret
	}
	return *o.Annotations
}

// GetAnnotationsOk returns a tuple with the Annotations field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportListAnnotationsResult) GetAnnotationsOk() (*TransportAnnotationInfo, bool) {
	if o == nil || o.Annotations == nil {
		return nil, false
	}
	return o.Annotations, true
}

// HasAnnotations returns a boolean if a field has been set.
func (o *TransportListAnnotationsResult) HasAnnotations() bool {
	if o != nil && o.Annotations != nil {
		return true
	}

	return false
}

// SetAnnotations gets a reference to the given TransportAnnotationInfo and assigns it to the Annotations field.
func (o *TransportListAnnotationsResult) SetAnnotations(v TransportAnnotationInfo) {
	o.Annotations = &v
}

func (o TransportListAnnotationsResult) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.Annotations != nil {
		toSerialize["annotations"] = o.Annotations
	}
	return json.Marshal(toSerialize)
}

type NullableTransportListAnnotationsResult struct {
	value *TransportListAnnotationsResult
	isSet bool
}

func (v NullableTransportListAnnotationsResult) Get() *TransportListAnnotationsResult {
	return v.value
}

func (v *NullableTransportListAnnotationsResult) Set(val *TransportListAnnotationsResult) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportListAnnotationsResult) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportListAnnotationsResult) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportListAnnotationsResult(val *TransportListAnnotationsResult) *NullableTransportListAnnotationsResult {
	return &NullableTransportListAnnotationsResult{value: val, isSet: true}
}

func (v NullableTransportListAnnotationsResult) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportListAnnotationsResult) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

