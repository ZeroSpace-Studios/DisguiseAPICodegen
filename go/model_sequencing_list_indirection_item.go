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

// SequencingListIndirectionItem struct for SequencingListIndirectionItem
type SequencingListIndirectionItem struct {
	Uid *string `json:"uid,omitempty"`
	Name *string `json:"name,omitempty"`
	ResourceType *string `json:"resourceType,omitempty"`
	CurrentResource *SequencingIndirectionResource `json:"currentResource,omitempty"`
}

// NewSequencingListIndirectionItem instantiates a new SequencingListIndirectionItem object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSequencingListIndirectionItem() *SequencingListIndirectionItem {
	this := SequencingListIndirectionItem{}
	return &this
}

// NewSequencingListIndirectionItemWithDefaults instantiates a new SequencingListIndirectionItem object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSequencingListIndirectionItemWithDefaults() *SequencingListIndirectionItem {
	this := SequencingListIndirectionItem{}
	return &this
}

// GetUid returns the Uid field value if set, zero value otherwise.
func (o *SequencingListIndirectionItem) GetUid() string {
	if o == nil || o.Uid == nil {
		var ret string
		return ret
	}
	return *o.Uid
}

// GetUidOk returns a tuple with the Uid field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SequencingListIndirectionItem) GetUidOk() (*string, bool) {
	if o == nil || o.Uid == nil {
		return nil, false
	}
	return o.Uid, true
}

// HasUid returns a boolean if a field has been set.
func (o *SequencingListIndirectionItem) HasUid() bool {
	if o != nil && o.Uid != nil {
		return true
	}

	return false
}

// SetUid gets a reference to the given string and assigns it to the Uid field.
func (o *SequencingListIndirectionItem) SetUid(v string) {
	o.Uid = &v
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *SequencingListIndirectionItem) GetName() string {
	if o == nil || o.Name == nil {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SequencingListIndirectionItem) GetNameOk() (*string, bool) {
	if o == nil || o.Name == nil {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *SequencingListIndirectionItem) HasName() bool {
	if o != nil && o.Name != nil {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *SequencingListIndirectionItem) SetName(v string) {
	o.Name = &v
}

// GetResourceType returns the ResourceType field value if set, zero value otherwise.
func (o *SequencingListIndirectionItem) GetResourceType() string {
	if o == nil || o.ResourceType == nil {
		var ret string
		return ret
	}
	return *o.ResourceType
}

// GetResourceTypeOk returns a tuple with the ResourceType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SequencingListIndirectionItem) GetResourceTypeOk() (*string, bool) {
	if o == nil || o.ResourceType == nil {
		return nil, false
	}
	return o.ResourceType, true
}

// HasResourceType returns a boolean if a field has been set.
func (o *SequencingListIndirectionItem) HasResourceType() bool {
	if o != nil && o.ResourceType != nil {
		return true
	}

	return false
}

// SetResourceType gets a reference to the given string and assigns it to the ResourceType field.
func (o *SequencingListIndirectionItem) SetResourceType(v string) {
	o.ResourceType = &v
}

// GetCurrentResource returns the CurrentResource field value if set, zero value otherwise.
func (o *SequencingListIndirectionItem) GetCurrentResource() SequencingIndirectionResource {
	if o == nil || o.CurrentResource == nil {
		var ret SequencingIndirectionResource
		return ret
	}
	return *o.CurrentResource
}

// GetCurrentResourceOk returns a tuple with the CurrentResource field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *SequencingListIndirectionItem) GetCurrentResourceOk() (*SequencingIndirectionResource, bool) {
	if o == nil || o.CurrentResource == nil {
		return nil, false
	}
	return o.CurrentResource, true
}

// HasCurrentResource returns a boolean if a field has been set.
func (o *SequencingListIndirectionItem) HasCurrentResource() bool {
	if o != nil && o.CurrentResource != nil {
		return true
	}

	return false
}

// SetCurrentResource gets a reference to the given SequencingIndirectionResource and assigns it to the CurrentResource field.
func (o *SequencingListIndirectionItem) SetCurrentResource(v SequencingIndirectionResource) {
	o.CurrentResource = &v
}

func (o SequencingListIndirectionItem) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Uid != nil {
		toSerialize["uid"] = o.Uid
	}
	if o.Name != nil {
		toSerialize["name"] = o.Name
	}
	if o.ResourceType != nil {
		toSerialize["resourceType"] = o.ResourceType
	}
	if o.CurrentResource != nil {
		toSerialize["currentResource"] = o.CurrentResource
	}
	return json.Marshal(toSerialize)
}

type NullableSequencingListIndirectionItem struct {
	value *SequencingListIndirectionItem
	isSet bool
}

func (v NullableSequencingListIndirectionItem) Get() *SequencingListIndirectionItem {
	return v.value
}

func (v *NullableSequencingListIndirectionItem) Set(val *SequencingListIndirectionItem) {
	v.value = val
	v.isSet = true
}

func (v NullableSequencingListIndirectionItem) IsSet() bool {
	return v.isSet
}

func (v *NullableSequencingListIndirectionItem) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSequencingListIndirectionItem(val *SequencingListIndirectionItem) *NullableSequencingListIndirectionItem {
	return &NullableSequencingListIndirectionItem{value: val, isSet: true}
}

func (v NullableSequencingListIndirectionItem) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSequencingListIndirectionItem) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

