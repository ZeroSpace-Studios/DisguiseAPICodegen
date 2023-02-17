# RenderstreamChannelMappingInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Channel** | Pointer to **string** |  | [optional] 
**Mapping** | Pointer to [**RenderstreamMapping**](RenderstreamMapping.md) |  | [optional] 
**Assigner** | Pointer to [**RenderstreamAssigner**](RenderstreamAssigner.md) |  | [optional] 

## Methods

### NewRenderstreamChannelMappingInfo

`func NewRenderstreamChannelMappingInfo() *RenderstreamChannelMappingInfo`

NewRenderstreamChannelMappingInfo instantiates a new RenderstreamChannelMappingInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamChannelMappingInfoWithDefaults

`func NewRenderstreamChannelMappingInfoWithDefaults() *RenderstreamChannelMappingInfo`

NewRenderstreamChannelMappingInfoWithDefaults instantiates a new RenderstreamChannelMappingInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetChannel

`func (o *RenderstreamChannelMappingInfo) GetChannel() string`

GetChannel returns the Channel field if non-nil, zero value otherwise.

### GetChannelOk

`func (o *RenderstreamChannelMappingInfo) GetChannelOk() (*string, bool)`

GetChannelOk returns a tuple with the Channel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetChannel

`func (o *RenderstreamChannelMappingInfo) SetChannel(v string)`

SetChannel sets Channel field to given value.

### HasChannel

`func (o *RenderstreamChannelMappingInfo) HasChannel() bool`

HasChannel returns a boolean if a field has been set.

### GetMapping

`func (o *RenderstreamChannelMappingInfo) GetMapping() RenderstreamMapping`

GetMapping returns the Mapping field if non-nil, zero value otherwise.

### GetMappingOk

`func (o *RenderstreamChannelMappingInfo) GetMappingOk() (*RenderstreamMapping, bool)`

GetMappingOk returns a tuple with the Mapping field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMapping

`func (o *RenderstreamChannelMappingInfo) SetMapping(v RenderstreamMapping)`

SetMapping sets Mapping field to given value.

### HasMapping

`func (o *RenderstreamChannelMappingInfo) HasMapping() bool`

HasMapping returns a boolean if a field has been set.

### GetAssigner

`func (o *RenderstreamChannelMappingInfo) GetAssigner() RenderstreamAssigner`

GetAssigner returns the Assigner field if non-nil, zero value otherwise.

### GetAssignerOk

`func (o *RenderstreamChannelMappingInfo) GetAssignerOk() (*RenderstreamAssigner, bool)`

GetAssignerOk returns a tuple with the Assigner field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssigner

`func (o *RenderstreamChannelMappingInfo) SetAssigner(v RenderstreamAssigner)`

SetAssigner sets Assigner field to given value.

### HasAssigner

`func (o *RenderstreamChannelMappingInfo) HasAssigner() bool`

HasAssigner returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


