# RenderstreamWorkloadInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Instances** | Pointer to [**[]RenderstreamWorkloadInstanceInfo**](RenderstreamWorkloadInstanceInfo.md) |  | [optional] 

## Methods

### NewRenderstreamWorkloadInfo

`func NewRenderstreamWorkloadInfo() *RenderstreamWorkloadInfo`

NewRenderstreamWorkloadInfo instantiates a new RenderstreamWorkloadInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamWorkloadInfoWithDefaults

`func NewRenderstreamWorkloadInfoWithDefaults() *RenderstreamWorkloadInfo`

NewRenderstreamWorkloadInfoWithDefaults instantiates a new RenderstreamWorkloadInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *RenderstreamWorkloadInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *RenderstreamWorkloadInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *RenderstreamWorkloadInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *RenderstreamWorkloadInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *RenderstreamWorkloadInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *RenderstreamWorkloadInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *RenderstreamWorkloadInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *RenderstreamWorkloadInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetInstances

`func (o *RenderstreamWorkloadInfo) GetInstances() []RenderstreamWorkloadInstanceInfo`

GetInstances returns the Instances field if non-nil, zero value otherwise.

### GetInstancesOk

`func (o *RenderstreamWorkloadInfo) GetInstancesOk() (*[]RenderstreamWorkloadInstanceInfo, bool)`

GetInstancesOk returns a tuple with the Instances field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetInstances

`func (o *RenderstreamWorkloadInfo) SetInstances(v []RenderstreamWorkloadInstanceInfo)`

SetInstances sets Instances field to given value.

### HasInstances

`func (o *RenderstreamWorkloadInfo) HasInstances() bool`

HasInstances returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


