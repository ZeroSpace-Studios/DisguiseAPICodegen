# RenderstreamGetLayerStatusResult

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Reference** | Pointer to [**RenderstreamReferenceInfo**](RenderstreamReferenceInfo.md) |  | [optional] 
**Workload** | Pointer to [**RenderstreamWorkloadInfo**](RenderstreamWorkloadInfo.md) |  | [optional] 
**Streams** | Pointer to [**[]RenderstreamStreamInfo**](RenderstreamStreamInfo.md) |  | [optional] 
**AssetErrors** | Pointer to **[]string** |  | [optional] 

## Methods

### NewRenderstreamGetLayerStatusResult

`func NewRenderstreamGetLayerStatusResult() *RenderstreamGetLayerStatusResult`

NewRenderstreamGetLayerStatusResult instantiates a new RenderstreamGetLayerStatusResult object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamGetLayerStatusResultWithDefaults

`func NewRenderstreamGetLayerStatusResultWithDefaults() *RenderstreamGetLayerStatusResult`

NewRenderstreamGetLayerStatusResultWithDefaults instantiates a new RenderstreamGetLayerStatusResult object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetReference

`func (o *RenderstreamGetLayerStatusResult) GetReference() RenderstreamReferenceInfo`

GetReference returns the Reference field if non-nil, zero value otherwise.

### GetReferenceOk

`func (o *RenderstreamGetLayerStatusResult) GetReferenceOk() (*RenderstreamReferenceInfo, bool)`

GetReferenceOk returns a tuple with the Reference field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReference

`func (o *RenderstreamGetLayerStatusResult) SetReference(v RenderstreamReferenceInfo)`

SetReference sets Reference field to given value.

### HasReference

`func (o *RenderstreamGetLayerStatusResult) HasReference() bool`

HasReference returns a boolean if a field has been set.

### GetWorkload

`func (o *RenderstreamGetLayerStatusResult) GetWorkload() RenderstreamWorkloadInfo`

GetWorkload returns the Workload field if non-nil, zero value otherwise.

### GetWorkloadOk

`func (o *RenderstreamGetLayerStatusResult) GetWorkloadOk() (*RenderstreamWorkloadInfo, bool)`

GetWorkloadOk returns a tuple with the Workload field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWorkload

`func (o *RenderstreamGetLayerStatusResult) SetWorkload(v RenderstreamWorkloadInfo)`

SetWorkload sets Workload field to given value.

### HasWorkload

`func (o *RenderstreamGetLayerStatusResult) HasWorkload() bool`

HasWorkload returns a boolean if a field has been set.

### GetStreams

`func (o *RenderstreamGetLayerStatusResult) GetStreams() []RenderstreamStreamInfo`

GetStreams returns the Streams field if non-nil, zero value otherwise.

### GetStreamsOk

`func (o *RenderstreamGetLayerStatusResult) GetStreamsOk() (*[]RenderstreamStreamInfo, bool)`

GetStreamsOk returns a tuple with the Streams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStreams

`func (o *RenderstreamGetLayerStatusResult) SetStreams(v []RenderstreamStreamInfo)`

SetStreams sets Streams field to given value.

### HasStreams

`func (o *RenderstreamGetLayerStatusResult) HasStreams() bool`

HasStreams returns a boolean if a field has been set.

### GetAssetErrors

`func (o *RenderstreamGetLayerStatusResult) GetAssetErrors() []string`

GetAssetErrors returns the AssetErrors field if non-nil, zero value otherwise.

### GetAssetErrorsOk

`func (o *RenderstreamGetLayerStatusResult) GetAssetErrorsOk() (*[]string, bool)`

GetAssetErrorsOk returns a tuple with the AssetErrors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssetErrors

`func (o *RenderstreamGetLayerStatusResult) SetAssetErrors(v []string)`

SetAssetErrors sets AssetErrors field to given value.

### HasAssetErrors

`func (o *RenderstreamGetLayerStatusResult) HasAssetErrors() bool`

HasAssetErrors returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


