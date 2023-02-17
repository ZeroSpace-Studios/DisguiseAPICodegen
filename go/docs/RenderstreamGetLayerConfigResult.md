# RenderstreamGetLayerConfigResult

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**FramerateFractionDivisor** | Pointer to **int32** |  | [optional] 
**Asset** | Pointer to [**RenderstreamAsset**](RenderstreamAsset.md) |  | [optional] 
**Pool** | Pointer to [**RenderstreamPool**](RenderstreamPool.md) |  | [optional] 
**ChannelMappings** | Pointer to [**[]RenderstreamChannelMappingInfo**](RenderstreamChannelMappingInfo.md) |  | [optional] 
**DefaultAssigner** | Pointer to [**RenderstreamAssigner**](RenderstreamAssigner.md) |  | [optional] 

## Methods

### NewRenderstreamGetLayerConfigResult

`func NewRenderstreamGetLayerConfigResult() *RenderstreamGetLayerConfigResult`

NewRenderstreamGetLayerConfigResult instantiates a new RenderstreamGetLayerConfigResult object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamGetLayerConfigResultWithDefaults

`func NewRenderstreamGetLayerConfigResultWithDefaults() *RenderstreamGetLayerConfigResult`

NewRenderstreamGetLayerConfigResultWithDefaults instantiates a new RenderstreamGetLayerConfigResult object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetFramerateFractionDivisor

`func (o *RenderstreamGetLayerConfigResult) GetFramerateFractionDivisor() int32`

GetFramerateFractionDivisor returns the FramerateFractionDivisor field if non-nil, zero value otherwise.

### GetFramerateFractionDivisorOk

`func (o *RenderstreamGetLayerConfigResult) GetFramerateFractionDivisorOk() (*int32, bool)`

GetFramerateFractionDivisorOk returns a tuple with the FramerateFractionDivisor field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFramerateFractionDivisor

`func (o *RenderstreamGetLayerConfigResult) SetFramerateFractionDivisor(v int32)`

SetFramerateFractionDivisor sets FramerateFractionDivisor field to given value.

### HasFramerateFractionDivisor

`func (o *RenderstreamGetLayerConfigResult) HasFramerateFractionDivisor() bool`

HasFramerateFractionDivisor returns a boolean if a field has been set.

### GetAsset

`func (o *RenderstreamGetLayerConfigResult) GetAsset() RenderstreamAsset`

GetAsset returns the Asset field if non-nil, zero value otherwise.

### GetAssetOk

`func (o *RenderstreamGetLayerConfigResult) GetAssetOk() (*RenderstreamAsset, bool)`

GetAssetOk returns a tuple with the Asset field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAsset

`func (o *RenderstreamGetLayerConfigResult) SetAsset(v RenderstreamAsset)`

SetAsset sets Asset field to given value.

### HasAsset

`func (o *RenderstreamGetLayerConfigResult) HasAsset() bool`

HasAsset returns a boolean if a field has been set.

### GetPool

`func (o *RenderstreamGetLayerConfigResult) GetPool() RenderstreamPool`

GetPool returns the Pool field if non-nil, zero value otherwise.

### GetPoolOk

`func (o *RenderstreamGetLayerConfigResult) GetPoolOk() (*RenderstreamPool, bool)`

GetPoolOk returns a tuple with the Pool field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPool

`func (o *RenderstreamGetLayerConfigResult) SetPool(v RenderstreamPool)`

SetPool sets Pool field to given value.

### HasPool

`func (o *RenderstreamGetLayerConfigResult) HasPool() bool`

HasPool returns a boolean if a field has been set.

### GetChannelMappings

`func (o *RenderstreamGetLayerConfigResult) GetChannelMappings() []RenderstreamChannelMappingInfo`

GetChannelMappings returns the ChannelMappings field if non-nil, zero value otherwise.

### GetChannelMappingsOk

`func (o *RenderstreamGetLayerConfigResult) GetChannelMappingsOk() (*[]RenderstreamChannelMappingInfo, bool)`

GetChannelMappingsOk returns a tuple with the ChannelMappings field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChannelMappings

`func (o *RenderstreamGetLayerConfigResult) SetChannelMappings(v []RenderstreamChannelMappingInfo)`

SetChannelMappings sets ChannelMappings field to given value.

### HasChannelMappings

`func (o *RenderstreamGetLayerConfigResult) HasChannelMappings() bool`

HasChannelMappings returns a boolean if a field has been set.

### GetDefaultAssigner

`func (o *RenderstreamGetLayerConfigResult) GetDefaultAssigner() RenderstreamAssigner`

GetDefaultAssigner returns the DefaultAssigner field if non-nil, zero value otherwise.

### GetDefaultAssignerOk

`func (o *RenderstreamGetLayerConfigResult) GetDefaultAssignerOk() (*RenderstreamAssigner, bool)`

GetDefaultAssignerOk returns a tuple with the DefaultAssigner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDefaultAssigner

`func (o *RenderstreamGetLayerConfigResult) SetDefaultAssigner(v RenderstreamAssigner)`

SetDefaultAssigner sets DefaultAssigner field to given value.

### HasDefaultAssigner

`func (o *RenderstreamGetLayerConfigResult) HasDefaultAssigner() bool`

HasDefaultAssigner returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


