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

// MixedrealityGetMRSetsResponse struct for MixedrealityGetMRSetsResponse
type MixedrealityGetMRSetsResponse struct {
	Status *RpcStatus `json:"status,omitempty"`
	Result *[]MixedrealityMRSet `json:"result,omitempty"`
}

// NewMixedrealityGetMRSetsResponse instantiates a new MixedrealityGetMRSetsResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMixedrealityGetMRSetsResponse() *MixedrealityGetMRSetsResponse {
	this := MixedrealityGetMRSetsResponse{}
	return &this
}

// NewMixedrealityGetMRSetsResponseWithDefaults instantiates a new MixedrealityGetMRSetsResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMixedrealityGetMRSetsResponseWithDefaults() *MixedrealityGetMRSetsResponse {
	this := MixedrealityGetMRSetsResponse{}
	return &this
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *MixedrealityGetMRSetsResponse) GetStatus() RpcStatus {
	if o == nil || o.Status == nil {
		var ret RpcStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityGetMRSetsResponse) GetStatusOk() (*RpcStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *MixedrealityGetMRSetsResponse) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given RpcStatus and assigns it to the Status field.
func (o *MixedrealityGetMRSetsResponse) SetStatus(v RpcStatus) {
	o.Status = &v
}

// GetResult returns the Result field value if set, zero value otherwise.
func (o *MixedrealityGetMRSetsResponse) GetResult() []MixedrealityMRSet {
	if o == nil || o.Result == nil {
		var ret []MixedrealityMRSet
		return ret
	}
	return *o.Result
}

// GetResultOk returns a tuple with the Result field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *MixedrealityGetMRSetsResponse) GetResultOk() (*[]MixedrealityMRSet, bool) {
	if o == nil || o.Result == nil {
		return nil, false
	}
	return o.Result, true
}

// HasResult returns a boolean if a field has been set.
func (o *MixedrealityGetMRSetsResponse) HasResult() bool {
	if o != nil && o.Result != nil {
		return true
	}

	return false
}

// SetResult gets a reference to the given []MixedrealityMRSet and assigns it to the Result field.
func (o *MixedrealityGetMRSetsResponse) SetResult(v []MixedrealityMRSet) {
	o.Result = &v
}

func (o MixedrealityGetMRSetsResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.Result != nil {
		toSerialize["result"] = o.Result
	}
	return json.Marshal(toSerialize)
}

type NullableMixedrealityGetMRSetsResponse struct {
	value *MixedrealityGetMRSetsResponse
	isSet bool
}

func (v NullableMixedrealityGetMRSetsResponse) Get() *MixedrealityGetMRSetsResponse {
	return v.value
}

func (v *NullableMixedrealityGetMRSetsResponse) Set(val *MixedrealityGetMRSetsResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableMixedrealityGetMRSetsResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableMixedrealityGetMRSetsResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMixedrealityGetMRSetsResponse(val *MixedrealityGetMRSetsResponse) *NullableMixedrealityGetMRSetsResponse {
	return &NullableMixedrealityGetMRSetsResponse{value: val, isSet: true}
}

func (v NullableMixedrealityGetMRSetsResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMixedrealityGetMRSetsResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

