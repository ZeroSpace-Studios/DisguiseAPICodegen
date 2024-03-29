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

// StatusListHealthResponse struct for StatusListHealthResponse
type StatusListHealthResponse struct {
	Status *RpcStatus `json:"status,omitempty"`
	Result *[]StatusHealthReport `json:"result,omitempty"`
}

// NewStatusListHealthResponse instantiates a new StatusListHealthResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewStatusListHealthResponse() *StatusListHealthResponse {
	this := StatusListHealthResponse{}
	return &this
}

// NewStatusListHealthResponseWithDefaults instantiates a new StatusListHealthResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewStatusListHealthResponseWithDefaults() *StatusListHealthResponse {
	this := StatusListHealthResponse{}
	return &this
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *StatusListHealthResponse) GetStatus() RpcStatus {
	if o == nil || o.Status == nil {
		var ret RpcStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusListHealthResponse) GetStatusOk() (*RpcStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *StatusListHealthResponse) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given RpcStatus and assigns it to the Status field.
func (o *StatusListHealthResponse) SetStatus(v RpcStatus) {
	o.Status = &v
}

// GetResult returns the Result field value if set, zero value otherwise.
func (o *StatusListHealthResponse) GetResult() []StatusHealthReport {
	if o == nil || o.Result == nil {
		var ret []StatusHealthReport
		return ret
	}
	return *o.Result
}

// GetResultOk returns a tuple with the Result field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *StatusListHealthResponse) GetResultOk() (*[]StatusHealthReport, bool) {
	if o == nil || o.Result == nil {
		return nil, false
	}
	return o.Result, true
}

// HasResult returns a boolean if a field has been set.
func (o *StatusListHealthResponse) HasResult() bool {
	if o != nil && o.Result != nil {
		return true
	}

	return false
}

// SetResult gets a reference to the given []StatusHealthReport and assigns it to the Result field.
func (o *StatusListHealthResponse) SetResult(v []StatusHealthReport) {
	o.Result = &v
}

func (o StatusListHealthResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.Result != nil {
		toSerialize["result"] = o.Result
	}
	return json.Marshal(toSerialize)
}

type NullableStatusListHealthResponse struct {
	value *StatusListHealthResponse
	isSet bool
}

func (v NullableStatusListHealthResponse) Get() *StatusListHealthResponse {
	return v.value
}

func (v *NullableStatusListHealthResponse) Set(val *StatusListHealthResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableStatusListHealthResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableStatusListHealthResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableStatusListHealthResponse(val *StatusListHealthResponse) *NullableStatusListHealthResponse {
	return &NullableStatusListHealthResponse{value: val, isSet: true}
}

func (v NullableStatusListHealthResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableStatusListHealthResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


