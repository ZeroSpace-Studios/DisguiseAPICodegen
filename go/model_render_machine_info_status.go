/*
d3 API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

API version: 1.4.0
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// RenderMachineInfoStatus the model 'RenderMachineInfoStatus'
type RenderMachineInfoStatus string

// List of RenderMachineInfoStatus
const (
	UNKNOWN RenderMachineInfoStatus = "UNKNOWN"
	OFFLINE RenderMachineInfoStatus = "OFFLINE"
	OK RenderMachineInfoStatus = "OK"
	STANDBY RenderMachineInfoStatus = "STANDBY"
	FAILED RenderMachineInfoStatus = "FAILED"
)

// All allowed values of RenderMachineInfoStatus enum
var AllowedRenderMachineInfoStatusEnumValues = []RenderMachineInfoStatus{
	"UNKNOWN",
	"OFFLINE",
	"OK",
	"STANDBY",
	"FAILED",
}

func (v *RenderMachineInfoStatus) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := RenderMachineInfoStatus(value)
	for _, existing := range AllowedRenderMachineInfoStatusEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid RenderMachineInfoStatus", value)
}

// NewRenderMachineInfoStatusFromValue returns a pointer to a valid RenderMachineInfoStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewRenderMachineInfoStatusFromValue(v string) (*RenderMachineInfoStatus, error) {
	ev := RenderMachineInfoStatus(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for RenderMachineInfoStatus: valid values are %v", v, AllowedRenderMachineInfoStatusEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v RenderMachineInfoStatus) IsValid() bool {
	for _, existing := range AllowedRenderMachineInfoStatusEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to RenderMachineInfoStatus value
func (v RenderMachineInfoStatus) Ptr() *RenderMachineInfoStatus {
	return &v
}

type NullableRenderMachineInfoStatus struct {
	value *RenderMachineInfoStatus
	isSet bool
}

func (v NullableRenderMachineInfoStatus) Get() *RenderMachineInfoStatus {
	return v.value
}

func (v *NullableRenderMachineInfoStatus) Set(val *RenderMachineInfoStatus) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderMachineInfoStatus) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderMachineInfoStatus) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderMachineInfoStatus(val *RenderMachineInfoStatus) *NullableRenderMachineInfoStatus {
	return &NullableRenderMachineInfoStatus{value: val, isSet: true}
}

func (v NullableRenderMachineInfoStatus) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderMachineInfoStatus) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

