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

// SetIndirectionsResponseFailedAssignment struct for SetIndirectionsResponseFailedAssignment
type SetIndirectionsResponseFailedAssignment struct {
	Uid *string `json:"uid,omitempty"`
	ResourceIndex *int64 `json:"resourceIndex,omitempty"`
	ResourceUid *string `json:"resourceUid,omitempty"`
	Error *string `json:"error,omitempty"`
}

// NewSetIndirectionsResponseFailedAssignment instantiates a new SetIndirectionsResponseFailedAssignment object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSetIndirectionsResponseFailedAssignment() *SetIndirectionsResponseFailedAssignment {
	this := SetIndirectionsResponseFailedAssignment{}
	return &this
}

// NewSetIndirectionsResponseFailedAssignmentWithDefaults instantiates a new SetIndirectionsResponseFailedAssignment object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSetIndirectionsResponseFailedAssignmentWithDefaults() *SetIndirectionsResponseFailedAssignment {
	this := SetIndirectionsResponseFailedAssignment{}
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *SetIndirectionsResponseFailedAssignment) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SetIndirectionsResponseFailedAssignment) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *SetIndirectionsResponseFailedAssignment) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *SetIndirectionsResponseFailedAssignment) SetUid(v string) {
	o.Uid = &v
}

// GetResourceIndex returns the ResourceIndex field value if set, zero value otherwise.
func (o *SetIndirectionsResponseFailedAssignment) GetResourceIndex() int64 {
	if o == nil || o.ResourceIndex == nil {
		var ret int64
		return ret
	}
	return *o.ResourceIndex
}

// GetResourceIndexOk returns a tuple with the ResourceIndex field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SetIndirectionsResponseFailedAssignment) GetResourceIndexOk() (*int64, bool) {
	if o == nil || o.ResourceIndex == nil {
		return nil, false
	}
	return o.ResourceIndex, true
}

// HasResourceIndex returns a boolean if a field has been set.
func (o *SetIndirectionsResponseFailedAssignment) HasResourceIndex() bool {
	if o != nil && o.ResourceIndex != nil {
		return true
	}

	return false
}

// SetResourceIndex gets a reference to the given int64 and assigns it to the ResourceIndex field.
func (o *SetIndirectionsResponseFailedAssignment) SetResourceIndex(v int64) {
	o.ResourceIndex = &v
}

// GetResourceUid returns the ResourceUid field value if set, zero value otherwise.
func (o *SetIndirectionsResponseFailedAssignment) GetResourceUid() string {
	if o == nil || o.ResourceUid == nil {
		var ret string
		return ret
	}
	return *o.ResourceUid
}

// GetResourceUidOk returns a tuple with the ResourceUid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SetIndirectionsResponseFailedAssignment) GetResourceUidOk() (*string, bool) {
	if o == nil || o.ResourceUid == nil {
		return nil, false
	}
	return o.ResourceUid, true
}

// HasResourceUid returns a boolean if a field has been set.
func (o *SetIndirectionsResponseFailedAssignment) HasResourceUid() bool {
	if o != nil && o.ResourceUid != nil {
		return true
	}

	return false
}

// SetResourceUid gets a reference to the given string and assigns it to the ResourceUid field.
func (o *SetIndirectionsResponseFailedAssignment) SetResourceUid(v string) {
	o.ResourceUid = &v
}

// GetError returns the Error field value if set, zero value otherwise.
func (o *SetIndirectionsResponseFailedAssignment) GetError() string {
	if o == nil || o.Error == nil {
		var ret string
		return ret
	}
	return *o.Error
}

// GetErrorOk returns a tuple with the Error field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SetIndirectionsResponseFailedAssignment) GetErrorOk() (*string, bool) {
	if o == nil || o.Error == nil {
		return nil, false
	}
	return o.Error, true
}

// HasError returns a boolean if a field has been set.
func (o *SetIndirectionsResponseFailedAssignment) HasError() bool {
	if o != nil && o.Error != nil {
		return true
	}

	return false
}

// SetError gets a reference to the given string and assigns it to the Error field.
func (o *SetIndirectionsResponseFailedAssignment) SetError(v string) {
	o.Error = &v
}

func (o SetIndirectionsResponseFailedAssignment) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.ResourceIndex != nil {
		toSerialize["resourceIndex"] = o.ResourceIndex
	}
	if o.ResourceUid != nil {
		toSerialize["resourceUid"] = o.ResourceUid
	}
	if o.Error != nil {
		toSerialize["error"] = o.Error
	}
	return json.Marshal(toSerialize)
}

type NullableSetIndirectionsResponseFailedAssignment struct {
	value *SetIndirectionsResponseFailedAssignment
	isSet bool
}

func (v NullableSetIndirectionsResponseFailedAssignment) Get() *SetIndirectionsResponseFailedAssignment {
	return v.value
}

func (v *NullableSetIndirectionsResponseFailedAssignment) Set(val *SetIndirectionsResponseFailedAssignment) {
	v.value = val
	v.isSet = true
}

func (v NullableSetIndirectionsResponseFailedAssignment) IsSet() bool {
	return v.isSet
}

func (v *NullableSetIndirectionsResponseFailedAssignment) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSetIndirectionsResponseFailedAssignment(val *SetIndirectionsResponseFailedAssignment) *NullableSetIndirectionsResponseFailedAssignment {
	return &NullableSetIndirectionsResponseFailedAssignment{value: val, isSet: true}
}

func (v NullableSetIndirectionsResponseFailedAssignment) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSetIndirectionsResponseFailedAssignment) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

