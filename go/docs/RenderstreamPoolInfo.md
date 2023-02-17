# RenderstreamPoolInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Machines** | Pointer to [**[]RenderstreamMachineInfo**](RenderstreamMachineInfo.md) |  | [optional] 
**Understudies** | Pointer to [**[]RenderstreamMachineInfo**](RenderstreamMachineInfo.md) |  | [optional] 

## Methods

### NewRenderstreamPoolInfo

`func NewRenderstreamPoolInfo() *RenderstreamPoolInfo`

NewRenderstreamPoolInfo instantiates a new RenderstreamPoolInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamPoolInfoWithDefaults

`func NewRenderstreamPoolInfoWithDefaults() *RenderstreamPoolInfo`

NewRenderstreamPoolInfoWithDefaults instantiates a new RenderstreamPoolInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *RenderstreamPoolInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *RenderstreamPoolInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *RenderstreamPoolInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *RenderstreamPoolInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *RenderstreamPoolInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *RenderstreamPoolInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *RenderstreamPoolInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *RenderstreamPoolInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetMachines

`func (o *RenderstreamPoolInfo) GetMachines() []RenderstreamMachineInfo`

GetMachines returns the Machines field if non-nil, zero value otherwise.

### GetMachinesOk

`func (o *RenderstreamPoolInfo) GetMachinesOk() (*[]RenderstreamMachineInfo, bool)`

GetMachinesOk returns a tuple with the Machines field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMachines

`func (o *RenderstreamPoolInfo) SetMachines(v []RenderstreamMachineInfo)`

SetMachines sets Machines field to given value.

### HasMachines

`func (o *RenderstreamPoolInfo) HasMachines() bool`

HasMachines returns a boolean if a field has been set.

### GetUnderstudies

`func (o *RenderstreamPoolInfo) GetUnderstudies() []RenderstreamMachineInfo`

GetUnderstudies returns the Understudies field if non-nil, zero value otherwise.

### GetUnderstudiesOk

`func (o *RenderstreamPoolInfo) GetUnderstudiesOk() (*[]RenderstreamMachineInfo, bool)`

GetUnderstudiesOk returns a tuple with the Understudies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnderstudies

`func (o *RenderstreamPoolInfo) SetUnderstudies(v []RenderstreamMachineInfo)`

SetUnderstudies sets Understudies field to given value.

### HasUnderstudies

`func (o *RenderstreamPoolInfo) HasUnderstudies() bool`

HasUnderstudies returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


