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

// ContentGetMediaMetadataResponse struct for ContentGetMediaMetadataResponse
type ContentGetMediaMetadataResponse struct {
	Result *ContentMediaMetadata `json:"result,omitempty"`
}

// NewContentGetMediaMetadataResponse instantiates a new ContentGetMediaMetadataResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewContentGetMediaMetadataResponse() *ContentGetMediaMetadataResponse {
	this := ContentGetMediaMetadataResponse{}
	return &this
}

// NewContentGetMediaMetadataResponseWithDefaults instantiates a new ContentGetMediaMetadataResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewContentGetMediaMetadataResponseWithDefaults() *ContentGetMediaMetadataResponse {
	this := ContentGetMediaMetadataResponse{}
	return &this
}

// GetResult returns the Result field value if set, zero value otherwise.
func (o *ContentGetMediaMetadataResponse) GetResult() ContentMediaMetadata {
	if o == nil || o.Result == nil {
		var ret ContentMediaMetadata
		return ret
	}
	return *o.Result
}

// GetResultOk returns a tuple with the Result field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ContentGetMediaMetadataResponse) GetResultOk() (*ContentMediaMetadata, bool) {
	if o == nil || o.Result == nil {
		return nil, false
	}
	return o.Result, true
}

// HasResult returns a boolean if a field has been set.
func (o *ContentGetMediaMetadataResponse) HasResult() bool {
	if o != nil && o.Result != nil {
		return true
	}

	return false
}

// SetResult gets a reference to the given ContentMediaMetadata and assigns it to the Result field.
func (o *ContentGetMediaMetadataResponse) SetResult(v ContentMediaMetadata) {
	o.Result = &v
}

func (o ContentGetMediaMetadataResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Result != nil {
		toSerialize["result"] = o.Result
	}
	return json.Marshal(toSerialize)
}

type NullableContentGetMediaMetadataResponse struct {
	value *ContentGetMediaMetadataResponse
	isSet bool
}

func (v NullableContentGetMediaMetadataResponse) Get() *ContentGetMediaMetadataResponse {
	return v.value
}

func (v *NullableContentGetMediaMetadataResponse) Set(val *ContentGetMediaMetadataResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableContentGetMediaMetadataResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableContentGetMediaMetadataResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableContentGetMediaMetadataResponse(val *ContentGetMediaMetadataResponse) *NullableContentGetMediaMetadataResponse {
	return &NullableContentGetMediaMetadataResponse{value: val, isSet: true}
}

func (v NullableContentGetMediaMetadataResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableContentGetMediaMetadataResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

