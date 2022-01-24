# RenderstreamWorkloadInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Id** | Pointer to **string** |  | [optional] 
**FriendlyName** | Pointer to **string** |  | [optional] 
**Asset** | Pointer to [**RenderstreamAssetInfo**](RenderstreamAssetInfo.md) |  | [optional] 
**Status** | Pointer to [**WorkloadInstanceInfoWorkloadInstanceStatus**](WorkloadInstanceInfoWorkloadInstanceStatus.md) |  | [optional] [default to UNKNOWN]
**Instances** | Pointer to [**[]RenderstreamWorkloadInstanceInfo**](RenderstreamWorkloadInstanceInfo.md) |  | [optional] 
**EngineSync** | Pointer to **bool** |  | [optional] 
**LayerUID** | Pointer to **string** | The UID of the Layer the workload is started from. | [optional] 
**LocationDescription** | Pointer to **string** | Description of the location of the workload. | [optional] 

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

### GetId

`func (o *RenderstreamWorkloadInfo) GetId() string`

GetId returns the Id field if non-nil, zero value otherwise.

### GetIdOk

`func (o *RenderstreamWorkloadInfo) GetIdOk() (*string, bool)`

GetIdOk returns a tuple with the Id field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetId

`func (o *RenderstreamWorkloadInfo) SetId(v string)`

SetId sets Id field to given value.

### HasId

`func (o *RenderstreamWorkloadInfo) HasId() bool`

HasId returns a boolean if a field has been set.

### GetFriendlyName

`func (o *RenderstreamWorkloadInfo) GetFriendlyName() string`

GetFriendlyName returns the FriendlyName field if non-nil, zero value otherwise.

### GetFriendlyNameOk

`func (o *RenderstreamWorkloadInfo) GetFriendlyNameOk() (*string, bool)`

GetFriendlyNameOk returns a tuple with the FriendlyName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFriendlyName

`func (o *RenderstreamWorkloadInfo) SetFriendlyName(v string)`

SetFriendlyName sets FriendlyName field to given value.

### HasFriendlyName

`func (o *RenderstreamWorkloadInfo) HasFriendlyName() bool`

HasFriendlyName returns a boolean if a field has been set.

### GetAsset

`func (o *RenderstreamWorkloadInfo) GetAsset() RenderstreamAssetInfo`

GetAsset returns the Asset field if non-nil, zero value otherwise.

### GetAssetOk

`func (o *RenderstreamWorkloadInfo) GetAssetOk() (*RenderstreamAssetInfo, bool)`

GetAssetOk returns a tuple with the Asset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAsset

`func (o *RenderstreamWorkloadInfo) SetAsset(v RenderstreamAssetInfo)`

SetAsset sets Asset field to given value.

### HasAsset

`func (o *RenderstreamWorkloadInfo) HasAsset() bool`

HasAsset returns a boolean if a field has been set.

### GetStatus

`func (o *RenderstreamWorkloadInfo) GetStatus() WorkloadInstanceInfoWorkloadInstanceStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *RenderstreamWorkloadInfo) GetStatusOk() (*WorkloadInstanceInfoWorkloadInstanceStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *RenderstreamWorkloadInfo) SetStatus(v WorkloadInstanceInfoWorkloadInstanceStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *RenderstreamWorkloadInfo) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

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

### GetEngineSync

`func (o *RenderstreamWorkloadInfo) GetEngineSync() bool`

GetEngineSync returns the EngineSync field if non-nil, zero value otherwise.

### GetEngineSyncOk

`func (o *RenderstreamWorkloadInfo) GetEngineSyncOk() (*bool, bool)`

GetEngineSyncOk returns a tuple with the EngineSync field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEngineSync

`func (o *RenderstreamWorkloadInfo) SetEngineSync(v bool)`

SetEngineSync sets EngineSync field to given value.

### HasEngineSync

`func (o *RenderstreamWorkloadInfo) HasEngineSync() bool`

HasEngineSync returns a boolean if a field has been set.

### GetLayerUID

`func (o *RenderstreamWorkloadInfo) GetLayerUID() string`

GetLayerUID returns the LayerUID field if non-nil, zero value otherwise.

### GetLayerUIDOk

`func (o *RenderstreamWorkloadInfo) GetLayerUIDOk() (*string, bool)`

GetLayerUIDOk returns a tuple with the LayerUID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLayerUID

`func (o *RenderstreamWorkloadInfo) SetLayerUID(v string)`

SetLayerUID sets LayerUID field to given value.

### HasLayerUID

`func (o *RenderstreamWorkloadInfo) HasLayerUID() bool`

HasLayerUID returns a boolean if a field has been set.

### GetLocationDescription

`func (o *RenderstreamWorkloadInfo) GetLocationDescription() string`

GetLocationDescription returns the LocationDescription field if non-nil, zero value otherwise.

### GetLocationDescriptionOk

`func (o *RenderstreamWorkloadInfo) GetLocationDescriptionOk() (*string, bool)`

GetLocationDescriptionOk returns a tuple with the LocationDescription field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLocationDescription

`func (o *RenderstreamWorkloadInfo) SetLocationDescription(v string)`

SetLocationDescription sets LocationDescription field to given value.

### HasLocationDescription

`func (o *RenderstreamWorkloadInfo) HasLocationDescription() bool`

HasLocationDescription returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


