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

// RenderstreamWorkloadInfo struct for RenderstreamWorkloadInfo
type RenderstreamWorkloadInfo struct {
	Id *string `json:"id,omitempty"`
	FriendlyName *string `json:"friendlyName,omitempty"`
	Asset *RenderstreamAssetInfo `json:"asset,omitempty"`
	Status *WorkloadInstanceInfoWorkloadInstanceStatus `json:"status,omitempty"`
	Instances *[]RenderstreamWorkloadInstanceInfo `json:"instances,omitempty"`
	EngineSync *bool `json:"engineSync,omitempty"`
	// The UID of the Layer the workload is started from.
	LayerUID *string `json:"layerUID,omitempty"`
	// Description of the location of the workload.
	LocationDescription *string `json:"locationDescription,omitempty"`
}

// NewRenderstreamWorkloadInfo instantiates a new RenderstreamWorkloadInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRenderstreamWorkloadInfo() *RenderstreamWorkloadInfo {
	this := RenderstreamWorkloadInfo{}
	var status WorkloadInstanceInfoWorkloadInstanceStatus = UNKNOWN
	this.Status = &status
	return &this
}

// NewRenderstreamWorkloadInfoWithDefaults instantiates a new RenderstreamWorkloadInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRenderstreamWorkloadInfoWithDefaults() *RenderstreamWorkloadInfo {
	this := RenderstreamWorkloadInfo{}
	var status WorkloadInstanceInfoWorkloadInstanceStatus = UNKNOWN
	this.Status = &status
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetId() string {
	if o == nil || o.Id == nil {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetIdOk() (*string, bool) {
	if o == nil || o.Id == nil {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasId() bool {
	if o != nil && o.Id != nil {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *RenderstreamWorkloadInfo) SetId(v string) {
	o.Id = &v
}

// GetFriendlyName returns the FriendlyName field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetFriendlyName() string {
	if o == nil || o.FriendlyName == nil {
		var ret string
		return ret
	}
	return *o.FriendlyName
}

// GetFriendlyNameOk returns a tuple with the FriendlyName field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetFriendlyNameOk() (*string, bool) {
	if o == nil || o.FriendlyName == nil {
		return nil, false
	}
	return o.FriendlyName, true
}

// HasFriendlyName returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasFriendlyName() bool {
	if o != nil && o.FriendlyName != nil {
		return true
	}

	return false
}

// SetFriendlyName gets a reference to the given string and assigns it to the FriendlyName field.
func (o *RenderstreamWorkloadInfo) SetFriendlyName(v string) {
	o.FriendlyName = &v
}

// GetAsset returns the Asset field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetAsset() RenderstreamAssetInfo {
	if o == nil || o.Asset == nil {
		var ret RenderstreamAssetInfo
		return ret
	}
	return *o.Asset
}

// GetAssetOk returns a tuple with the Asset field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetAssetOk() (*RenderstreamAssetInfo, bool) {
	if o == nil || o.Asset == nil {
		return nil, false
	}
	return o.Asset, true
}

// HasAsset returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasAsset() bool {
	if o != nil && o.Asset != nil {
		return true
	}

	return false
}

// SetAsset gets a reference to the given RenderstreamAssetInfo and assigns it to the Asset field.
func (o *RenderstreamWorkloadInfo) SetAsset(v RenderstreamAssetInfo) {
	o.Asset = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetStatus() WorkloadInstanceInfoWorkloadInstanceStatus {
	if o == nil || o.Status == nil {
		var ret WorkloadInstanceInfoWorkloadInstanceStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetStatusOk() (*WorkloadInstanceInfoWorkloadInstanceStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given WorkloadInstanceInfoWorkloadInstanceStatus and assigns it to the Status field.
func (o *RenderstreamWorkloadInfo) SetStatus(v WorkloadInstanceInfoWorkloadInstanceStatus) {
	o.Status = &v
}

// GetInstances returns the Instances field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetInstances() []RenderstreamWorkloadInstanceInfo {
	if o == nil || o.Instances == nil {
		var ret []RenderstreamWorkloadInstanceInfo
		return ret
	}
	return *o.Instances
}

// GetInstancesOk returns a tuple with the Instances field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetInstancesOk() (*[]RenderstreamWorkloadInstanceInfo, bool) {
	if o == nil || o.Instances == nil {
		return nil, false
	}
	return o.Instances, true
}

// HasInstances returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasInstances() bool {
	if o != nil && o.Instances != nil {
		return true
	}

	return false
}

// SetInstances gets a reference to the given []RenderstreamWorkloadInstanceInfo and assigns it to the Instances field.
func (o *RenderstreamWorkloadInfo) SetInstances(v []RenderstreamWorkloadInstanceInfo) {
	o.Instances = &v
}

// GetEngineSync returns the EngineSync field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetEngineSync() bool {
	if o == nil || o.EngineSync == nil {
		var ret bool
		return ret
	}
	return *o.EngineSync
}

// GetEngineSyncOk returns a tuple with the EngineSync field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetEngineSyncOk() (*bool, bool) {
	if o == nil || o.EngineSync == nil {
		return nil, false
	}
	return o.EngineSync, true
}

// HasEngineSync returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasEngineSync() bool {
	if o != nil && o.EngineSync != nil {
		return true
	}

	return false
}

// SetEngineSync gets a reference to the given bool and assigns it to the EngineSync field.
func (o *RenderstreamWorkloadInfo) SetEngineSync(v bool) {
	o.EngineSync = &v
}

// GetLayerUID returns the LayerUID field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetLayerUID() string {
	if o == nil || o.LayerUID == nil {
		var ret string
		return ret
	}
	return *o.LayerUID
}

// GetLayerUIDOk returns a tuple with the LayerUID field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetLayerUIDOk() (*string, bool) {
	if o == nil || o.LayerUID == nil {
		return nil, false
	}
	return o.LayerUID, true
}

// HasLayerUID returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasLayerUID() bool {
	if o != nil && o.LayerUID != nil {
		return true
	}

	return false
}

// SetLayerUID gets a reference to the given string and assigns it to the LayerUID field.
func (o *RenderstreamWorkloadInfo) SetLayerUID(v string) {
	o.LayerUID = &v
}

// GetLocationDescription returns the LocationDescription field value if set, zero value otherwise.
func (o *RenderstreamWorkloadInfo) GetLocationDescription() string {
	if o == nil || o.LocationDescription == nil {
		var ret string
		return ret
	}
	return *o.LocationDescription
}

// GetLocationDescriptionOk returns a tuple with the LocationDescription field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RenderstreamWorkloadInfo) GetLocationDescriptionOk() (*string, bool) {
	if o == nil || o.LocationDescription == nil {
		return nil, false
	}
	return o.LocationDescription, true
}

// HasLocationDescription returns a boolean if a field has been set.
func (o *RenderstreamWorkloadInfo) HasLocationDescription() bool {
	if o != nil && o.LocationDescription != nil {
		return true
	}

	return false
}

// SetLocationDescription gets a reference to the given string and assigns it to the LocationDescription field.
func (o *RenderstreamWorkloadInfo) SetLocationDescription(v string) {
	o.LocationDescription = &v
}

func (o RenderstreamWorkloadInfo) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Id != nil {
		toSerialize["id"] = o.Id
	}
	if o.FriendlyName != nil {
		toSerialize["friendlyName"] = o.FriendlyName
	}
	if o.Asset != nil {
		toSerialize["asset"] = o.Asset
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	if o.Instances != nil {
		toSerialize["instances"] = o.Instances
	}
	if o.EngineSync != nil {
		toSerialize["engineSync"] = o.EngineSync
	}
	if o.LayerUID != nil {
		toSerialize["layerUID"] = o.LayerUID
	}
	if o.LocationDescription != nil {
		toSerialize["locationDescription"] = o.LocationDescription
	}
	return json.Marshal(toSerialize)
}

type NullableRenderstreamWorkloadInfo struct {
	value *RenderstreamWorkloadInfo
	isSet bool
}

func (v NullableRenderstreamWorkloadInfo) Get() *RenderstreamWorkloadInfo {
	return v.value
}

func (v *NullableRenderstreamWorkloadInfo) Set(val *RenderstreamWorkloadInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableRenderstreamWorkloadInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableRenderstreamWorkloadInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRenderstreamWorkloadInfo(val *RenderstreamWorkloadInfo) *NullableRenderstreamWorkloadInfo {
	return &NullableRenderstreamWorkloadInfo{value: val, isSet: true}
}

func (v NullableRenderstreamWorkloadInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRenderstreamWorkloadInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

