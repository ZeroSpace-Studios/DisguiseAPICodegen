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

// CameracalibrationGetObservationProgressResponse struct for CameracalibrationGetObservationProgressResponse
type CameracalibrationGetObservationProgressResponse struct {
	InProgress *bool `json:"inProgress,omitempty"`
}

// NewCameracalibrationGetObservationProgressResponse instantiates a new CameracalibrationGetObservationProgressResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCameracalibrationGetObservationProgressResponse() *CameracalibrationGetObservationProgressResponse {
	this := CameracalibrationGetObservationProgressResponse{}
	return &this
}

// NewCameracalibrationGetObservationProgressResponseWithDefaults instantiates a new CameracalibrationGetObservationProgressResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCameracalibrationGetObservationProgressResponseWithDefaults() *CameracalibrationGetObservationProgressResponse {
	this := CameracalibrationGetObservationProgressResponse{}
	return &this
}

// GetInProgress returns the InProgress field value if set, zero value otherwise.
func (o *CameracalibrationGetObservationProgressResponse) GetInProgress() bool {
	if o == nil || o.InProgress == nil {
		var ret bool
		return ret
	}
	return *o.InProgress
}

// GetInProgressOk returns a tuple with the InProgress field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CameracalibrationGetObservationProgressResponse) GetInProgressOk() (*bool, bool) {
	if o == nil || o.InProgress == nil {
		return nil, false
	}
	return o.InProgress, true
}

// HasInProgress returns a boolean if a field has been set.
func (o *CameracalibrationGetObservationProgressResponse) HasInProgress() bool {
	if o != nil && o.InProgress != nil {
		return true
	}

	return false
}

// SetInProgress gets a reference to the given bool and assigns it to the InProgress field.
func (o *CameracalibrationGetObservationProgressResponse) SetInProgress(v bool) {
	o.InProgress = &v
}

func (o CameracalibrationGetObservationProgressResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.InProgress != nil {
		toSerialize["inProgress"] = o.InProgress
	}
	return json.Marshal(toSerialize)
}

type NullableCameracalibrationGetObservationProgressResponse struct {
	value *CameracalibrationGetObservationProgressResponse
	isSet bool
}

func (v NullableCameracalibrationGetObservationProgressResponse) Get() *CameracalibrationGetObservationProgressResponse {
	return v.value
}

func (v *NullableCameracalibrationGetObservationProgressResponse) Set(val *CameracalibrationGetObservationProgressResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableCameracalibrationGetObservationProgressResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableCameracalibrationGetObservationProgressResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCameracalibrationGetObservationProgressResponse(val *CameracalibrationGetObservationProgressResponse) *NullableCameracalibrationGetObservationProgressResponse {
	return &NullableCameracalibrationGetObservationProgressResponse{value: val, isSet: true}
}

func (v NullableCameracalibrationGetObservationProgressResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCameracalibrationGetObservationProgressResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

