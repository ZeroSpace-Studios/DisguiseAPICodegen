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

// TransportGoToTimeRequest struct for TransportGoToTimeRequest
type TransportGoToTimeRequest struct {
	Transports *[]TransportGoToTimeInfo `json:"transports,omitempty"`
}

// NewTransportGoToTimeRequest instantiates a new TransportGoToTimeRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportGoToTimeRequest() *TransportGoToTimeRequest {
	this := TransportGoToTimeRequest{}
	return &this
}

// NewTransportGoToTimeRequestWithDefaults instantiates a new TransportGoToTimeRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportGoToTimeRequestWithDefaults() *TransportGoToTimeRequest {
	this := TransportGoToTimeRequest{}
	return &this
}

// GetTransports returns the Transports field value if set, zero value otherwise.
func (o *TransportGoToTimeRequest) GetTransports() []TransportGoToTimeInfo {
	if o == nil || o.Transports == nil {
		var ret []TransportGoToTimeInfo
		return ret
	}
	return *o.Transports
}

// GetTransportsOk returns a tuple with the Transports field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportGoToTimeRequest) GetTransportsOk() (*[]TransportGoToTimeInfo, bool) {
	if o == nil || o.Transports == nil {
		return nil, false
	}
	return o.Transports, true
}

// HasTransports returns a boolean if a field has been set.
func (o *TransportGoToTimeRequest) HasTransports() bool {
	if o != nil && o.Transports != nil {
		return true
	}

	return false
}

// SetTransports gets a reference to the given []TransportGoToTimeInfo and assigns it to the Transports field.
func (o *TransportGoToTimeRequest) SetTransports(v []TransportGoToTimeInfo) {
	o.Transports = &v
}

func (o TransportGoToTimeRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Transports != nil {
		toSerialize["transports"] = o.Transports
	}
	return json.Marshal(toSerialize)
}

type NullableTransportGoToTimeRequest struct {
	value *TransportGoToTimeRequest
	isSet bool
}

func (v NullableTransportGoToTimeRequest) Get() *TransportGoToTimeRequest {
	return v.value
}

func (v *NullableTransportGoToTimeRequest) Set(val *TransportGoToTimeRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportGoToTimeRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportGoToTimeRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportGoToTimeRequest(val *TransportGoToTimeRequest) *NullableTransportGoToTimeRequest {
	return &NullableTransportGoToTimeRequest{value: val, isSet: true}
}

func (v NullableTransportGoToTimeRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportGoToTimeRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


