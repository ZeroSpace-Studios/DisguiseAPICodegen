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

// TransportListTracksResponse struct for TransportListTracksResponse
type TransportListTracksResponse struct {
	Status *RpcStatus `json:"status,omitempty"`
	Result *[]TransportTrackInfo `json:"result,omitempty"`
}

// NewTransportListTracksResponse instantiates a new TransportListTracksResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewTransportListTracksResponse() *TransportListTracksResponse {
	this := TransportListTracksResponse{}
	return &this
}

// NewTransportListTracksResponseWithDefaults instantiates a new TransportListTracksResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewTransportListTracksResponseWithDefaults() *TransportListTracksResponse {
	this := TransportListTracksResponse{}
	return &this
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *TransportListTracksResponse) GetStatus() RpcStatus {
	if o == nil || o.Status == nil {
		var ret RpcStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportListTracksResponse) GetStatusOk() (*RpcStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *TransportListTracksResponse) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given RpcStatus and assigns it to the Status field.
func (o *TransportListTracksResponse) SetStatus(v RpcStatus) {
	o.Status = &v
}

// GetResult returns the Result field value if set, zero value otherwise.
func (o *TransportListTracksResponse) GetResult() []TransportTrackInfo {
	if o == nil || o.Result == nil {
		var ret []TransportTrackInfo
		return ret
	}
	return *o.Result
}

// GetResultOk returns a tuple with the Result field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *TransportListTracksResponse) GetResultOk() (*[]TransportTrackInfo, bool) {
	if o == nil || o.Result == nil {
		return nil, false
	}
	return o.Result, true
}

// HasResult returns a boolean if a field has been set.
func (o *TransportListTracksResponse) HasResult() bool {
	if o != nil && o.Result != nil {
		return true
	}

	return false
}

// SetResult gets a reference to the given []TransportTrackInfo and assigns it to the Result field.
func (o *TransportListTracksResponse) SetResult(v []TransportTrackInfo) {
	o.Result = &v
}

func (o TransportListTracksResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.Result != nil {
		toSerialize["result"] = o.Result
	}
	return json.Marshal(toSerialize)
}

type NullableTransportListTracksResponse struct {
	value *TransportListTracksResponse
	isSet bool
}

func (v NullableTransportListTracksResponse) Get() *TransportListTracksResponse {
	return v.value
}

func (v *NullableTransportListTracksResponse) Set(val *TransportListTracksResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableTransportListTracksResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableTransportListTracksResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableTransportListTracksResponse(val *TransportListTracksResponse) *NullableTransportListTracksResponse {
	return &NullableTransportListTracksResponse{value: val, isSet: true}
}

func (v NullableTransportListTracksResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableTransportListTracksResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

