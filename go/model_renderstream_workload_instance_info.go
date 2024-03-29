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

// RenderstreamWorkloadInstanceInfo struct for RenderstreamWorkloadInstanceInfo
type RenderstreamWorkloadInstanceInfo struct {
	MachineUid *string `json:"machineUid,omitempty"`
	MachineName *string `json:"machineName,omitempty"`
	State *string `json:"state,omitempty"`
	HealthMessage *string `json:"healthMessage,omitempty"`
	HealthDetails *string `json:"healthDetails,omitempty"`
}

// NewRenderstreamWorkloadInstanceInfo instantiates a new RenderstreamWorkloadInstanceInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamWorkloadInstanceInfo() *RenderstreamWorkloadInstanceInfo {
	this := RenderstreamWorkloadInstanceInfo{}
	return &this
}

// NewRenderstreamWorkloadInstanceInfoWithDefaults instantiates a new RenderstreamWorkloadInstanceInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamWorkloadInstanceInfoWithDefaults() *RenderstreamWorkloadInstanceInfo {
	this := RenderstreamWorkloadInstanceInfo{}
	return &this
}

// GetMachineUid returns the MachineUid field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInstanceInfo) GetMachineUid() string {
	if o == nil || o.MachineUid == nil {
		var ret string
		return ret
	}
	return *o.MachineUid
}

// GetMachineUidOk returns a tuple with the MachineUid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInstanceInfo) GetMachineUidOk() (*string, bool) {
	if o == nil || o.MachineUid == nil {
		return nil, false
	}
	return o.MachineUid, true
}

// HasMachineUid returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInstanceInfo) HasMachineUid() bool {
	if o != nil && o.MachineUid != nil {
		return true
	}

	return false
}

// SetMachineUid gets a reference to the given string and assigns it to the MachineUid field.
func (o *RenderstreamWorkloadInstanceInfo) SetMachineUid(v string) {
	o.MachineUid = &v
}

// GetMachineName returns the MachineName field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInstanceInfo) GetMachineName() string {
	if o == nil || o.MachineName == nil {
		var ret string
		return ret
	}
	return *o.MachineName
}

// GetMachineNameOk returns a tuple with the MachineName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInstanceInfo) GetMachineNameOk() (*string, bool) {
	if o == nil || o.MachineName == nil {
		return nil, false
	}
	return o.MachineName, true
}

// HasMachineName returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInstanceInfo) HasMachineName() bool {
	if o != nil && o.MachineName != nil {
		return true
	}

	return false
}

// SetMachineName gets a reference to the given string and assigns it to the MachineName field.
func (o *RenderstreamWorkloadInstanceInfo) SetMachineName(v string) {
	o.MachineName = &v
}

// GetState returns the State field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInstanceInfo) GetState() string {
	if o == nil || o.State == nil {
		var ret string
		return ret
	}
	return *o.State
}

// GetStateOk returns a tuple with the State field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInstanceInfo) GetStateOk() (*string, bool) {
	if o == nil || o.State == nil {
		return nil, false
	}
	return o.State, true
}

// HasState returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInstanceInfo) HasState() bool {
	if o != nil && o.State != nil {
		return true
	}

	return false
}

// SetState gets a reference to the given string and assigns it to the State field.
func (o *RenderstreamWorkloadInstanceInfo) SetState(v string) {
	o.State = &v
}

// GetHealthMessage returns the HealthMessage field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInstanceInfo) GetHealthMessage() string {
	if o == nil || o.HealthMessage == nil {
		var ret string
		return ret
	}
	return *o.HealthMessage
}

// GetHealthMessageOk returns a tuple with the HealthMessage field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInstanceInfo) GetHealthMessageOk() (*string, bool) {
	if o == nil || o.HealthMessage == nil {
		return nil, false
	}
	return o.HealthMessage, true
}

// HasHealthMessage returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInstanceInfo) HasHealthMessage() bool {
	if o != nil && o.HealthMessage != nil {
		return true
	}

	return false
}

// SetHealthMessage gets a reference to the given string and assigns it to the HealthMessage field.
func (o *RenderstreamWorkloadInstanceInfo) SetHealthMessage(v string) {
	o.HealthMessage = &v
}

// GetHealthDetails returns the HealthDetails field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInstanceInfo) GetHealthDetails() string {
	if o == nil || o.HealthDetails == nil {
		var ret string
		return ret
	}
	return *o.HealthDetails
}

// GetHealthDetailsOk returns a tuple with the HealthDetails field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInstanceInfo) GetHealthDetailsOk() (*string, bool) {
	if o == nil || o.HealthDetails == nil {
		return nil, false
	}
	return o.HealthDetails, true
}

// HasHealthDetails returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInstanceInfo) HasHealthDetails() bool {
	if o != nil && o.HealthDetails != nil {
		return true
	}

	return false
}

// SetHealthDetails gets a reference to the given string and assigns it to the HealthDetails field.
func (o *RenderstreamWorkloadInstanceInfo) SetHealthDetails(v string) {
	o.HealthDetails = &v
}

func (o RenderstreamWorkloadInstanceInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.MachineUid != nil {
		toSerialize["machineUid"] = o.MachineUid
	}
	if o.MachineName != nil {
		toSerialize["machineName"] = o.MachineName
	}
	if o.State != nil {
		toSerialize["state"] = o.State
	}
	if o.HealthMessage != nil {
		toSerialize["healthMessage"] = o.HealthMessage
	}
	if o.HealthDetails != nil {
		toSerialize["healthDetails"] = o.HealthDetails
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamWorkloadInstanceInfo struct {
	value *RenderstreamWorkloadInstanceInfo
	isSet bool
}

func (v NullableRenderstreamWorkloadInstanceInfo) Get() *RenderstreamWorkloadInstanceInfo {
	return v.value
}

func (v *NullableRenderstreamWorkloadInstanceInfo) Set(val *RenderstreamWorkloadInstanceInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamWorkloadInstanceInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamWorkloadInstanceInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamWorkloadInstanceInfo(val *RenderstreamWorkloadInstanceInfo) *NullableRenderstreamWorkloadInstanceInfo {
	return &NullableRenderstreamWorkloadInstanceInfo{value: val, isSet: true}
}

func (v NullableRenderstreamWorkloadInstanceInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamWorkloadInstanceInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


