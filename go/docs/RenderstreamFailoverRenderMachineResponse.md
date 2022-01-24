# RenderstreamFailoverRenderMachineResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AllInstancesFailedover** | Pointer to **bool** |  | [optional] 
**FailoverMappings** | Pointer to [**[]RenderstreamFailoverInfo**](RenderstreamFailoverInfo.md) |  | [optional] 

## Methods

### NewRenderstreamFailoverRenderMachineResponse

`func NewRenderstreamFailoverRenderMachineResponse() *RenderstreamFailoverRenderMachineResponse`

NewRenderstreamFailoverRenderMachineResponse instantiates a new RenderstreamFailoverRenderMachineResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamFailoverRenderMachineResponseWithDefaults

`func NewRenderstreamFailoverRenderMachineResponseWithDefaults() *RenderstreamFailoverRenderMachineResponse`

NewRenderstreamFailoverRenderMachineResponseWithDefaults instantiates a new RenderstreamFailoverRenderMachineResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAllInstancesFailedover

`func (o *RenderstreamFailoverRenderMachineResponse) GetAllInstancesFailedover() bool`

GetAllInstancesFailedover returns the AllInstancesFailedover field if non-nil, zero value otherwise.

### GetAllInstancesFailedoverOk

`func (o *RenderstreamFailoverRenderMachineResponse) GetAllInstancesFailedoverOk() (*bool, bool)`

GetAllInstancesFailedoverOk returns a tuple with the AllInstancesFailedover field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAllInstancesFailedover

`func (o *RenderstreamFailoverRenderMachineResponse) SetAllInstancesFailedover(v bool)`

SetAllInstancesFailedover sets AllInstancesFailedover field to given value.

### HasAllInstancesFailedover

`func (o *RenderstreamFailoverRenderMachineResponse) HasAllInstancesFailedover() bool`

HasAllInstancesFailedover returns a boolean if a field has been set.

### GetFailoverMappings

`func (o *RenderstreamFailoverRenderMachineResponse) GetFailoverMappings() []RenderstreamFailoverInfo`

GetFailoverMappings returns the FailoverMappings field if non-nil, zero value otherwise.

### GetFailoverMappingsOk

`func (o *RenderstreamFailoverRenderMachineResponse) GetFailoverMappingsOk() (*[]RenderstreamFailoverInfo, bool)`

GetFailoverMappingsOk returns a tuple with the FailoverMappings field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFailoverMappings

`func (o *RenderstreamFailoverRenderMachineResponse) SetFailoverMappings(v []RenderstreamFailoverInfo)`

SetFailoverMappings sets FailoverMappings field to given value.

### HasFailoverMappings

`func (o *RenderstreamFailoverRenderMachineResponse) HasFailoverMappings() bool`

HasFailoverMappings returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


