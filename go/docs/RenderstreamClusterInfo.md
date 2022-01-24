# RenderstreamClusterInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**RenderMachines** | Pointer to [**[]RenderstreamRenderMachineInfo**](RenderstreamRenderMachineInfo.md) |  | [optional] 
**ContentSourceMachine** | Pointer to [**RenderstreamRenderMachineInfo**](RenderstreamRenderMachineInfo.md) |  | [optional] 
**Understudies** | Pointer to [**[]RenderstreamRenderMachineInfo**](RenderstreamRenderMachineInfo.md) |  | [optional] 

## Methods

### NewRenderstreamClusterInfo

`func NewRenderstreamClusterInfo() *RenderstreamClusterInfo`

NewRenderstreamClusterInfo instantiates a new RenderstreamClusterInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamClusterInfoWithDefaults

`func NewRenderstreamClusterInfoWithDefaults() *RenderstreamClusterInfo`

NewRenderstreamClusterInfoWithDefaults instantiates a new RenderstreamClusterInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *RenderstreamClusterInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *RenderstreamClusterInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *RenderstreamClusterInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *RenderstreamClusterInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetRenderMachines

`func (o *RenderstreamClusterInfo) GetRenderMachines() []RenderstreamRenderMachineInfo`

GetRenderMachines returns the RenderMachines field if non-nil, zero value otherwise.

### GetRenderMachinesOk

`func (o *RenderstreamClusterInfo) GetRenderMachinesOk() (*[]RenderstreamRenderMachineInfo, bool)`

GetRenderMachinesOk returns a tuple with the RenderMachines field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRenderMachines

`func (o *RenderstreamClusterInfo) SetRenderMachines(v []RenderstreamRenderMachineInfo)`

SetRenderMachines sets RenderMachines field to given value.

### HasRenderMachines

`func (o *RenderstreamClusterInfo) HasRenderMachines() bool`

HasRenderMachines returns a boolean if a field has been set.

### GetContentSourceMachine

`func (o *RenderstreamClusterInfo) GetContentSourceMachine() RenderstreamRenderMachineInfo`

GetContentSourceMachine returns the ContentSourceMachine field if non-nil, zero value otherwise.

### GetContentSourceMachineOk

`func (o *RenderstreamClusterInfo) GetContentSourceMachineOk() (*RenderstreamRenderMachineInfo, bool)`

GetContentSourceMachineOk returns a tuple with the ContentSourceMachine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetContentSourceMachine

`func (o *RenderstreamClusterInfo) SetContentSourceMachine(v RenderstreamRenderMachineInfo)`

SetContentSourceMachine sets ContentSourceMachine field to given value.

### HasContentSourceMachine

`func (o *RenderstreamClusterInfo) HasContentSourceMachine() bool`

HasContentSourceMachine returns a boolean if a field has been set.

### GetUnderstudies

`func (o *RenderstreamClusterInfo) GetUnderstudies() []RenderstreamRenderMachineInfo`

GetUnderstudies returns the Understudies field if non-nil, zero value otherwise.

### GetUnderstudiesOk

`func (o *RenderstreamClusterInfo) GetUnderstudiesOk() (*[]RenderstreamRenderMachineInfo, bool)`

GetUnderstudiesOk returns a tuple with the Understudies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnderstudies

`func (o *RenderstreamClusterInfo) SetUnderstudies(v []RenderstreamRenderMachineInfo)`

SetUnderstudies sets Understudies field to given value.

### HasUnderstudies

`func (o *RenderstreamClusterInfo) HasUnderstudies() bool`

HasUnderstudies returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


