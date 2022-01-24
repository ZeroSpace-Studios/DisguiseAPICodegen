# RenderstreamFailoverInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**WorkloadID** | Pointer to **string** |  | [optional] 
**FailedInstanceIndex** | Pointer to **int64** |  | [optional] 
**CoveringInstanceIndex** | Pointer to **int64** |  | [optional] 
**CoveringMachineName** | Pointer to **string** |  | [optional] 
**ErrorString** | Pointer to **string** |  | [optional] 
**Streams** | Pointer to [**[]RenderstreamStreamInfo**](RenderstreamStreamInfo.md) |  | [optional] 

## Methods

### NewRenderstreamFailoverInfo

`func NewRenderstreamFailoverInfo() *RenderstreamFailoverInfo`

NewRenderstreamFailoverInfo instantiates a new RenderstreamFailoverInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamFailoverInfoWithDefaults

`func NewRenderstreamFailoverInfoWithDefaults() *RenderstreamFailoverInfo`

NewRenderstreamFailoverInfoWithDefaults instantiates a new RenderstreamFailoverInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetWorkloadID

`func (o *RenderstreamFailoverInfo) GetWorkloadID() string`

GetWorkloadID returns the WorkloadID field if non-nil, zero value otherwise.

### GetWorkloadIDOk

`func (o *RenderstreamFailoverInfo) GetWorkloadIDOk() (*string, bool)`

GetWorkloadIDOk returns a tuple with the WorkloadID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWorkloadID

`func (o *RenderstreamFailoverInfo) SetWorkloadID(v string)`

SetWorkloadID sets WorkloadID field to given value.

### HasWorkloadID

`func (o *RenderstreamFailoverInfo) HasWorkloadID() bool`

HasWorkloadID returns a boolean if a field has been set.

### GetFailedInstanceIndex

`func (o *RenderstreamFailoverInfo) GetFailedInstanceIndex() int64`

GetFailedInstanceIndex returns the FailedInstanceIndex field if non-nil, zero value otherwise.

### GetFailedInstanceIndexOk

`func (o *RenderstreamFailoverInfo) GetFailedInstanceIndexOk() (*int64, bool)`

GetFailedInstanceIndexOk returns a tuple with the FailedInstanceIndex field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFailedInstanceIndex

`func (o *RenderstreamFailoverInfo) SetFailedInstanceIndex(v int64)`

SetFailedInstanceIndex sets FailedInstanceIndex field to given value.

### HasFailedInstanceIndex

`func (o *RenderstreamFailoverInfo) HasFailedInstanceIndex() bool`

HasFailedInstanceIndex returns a boolean if a field has been set.

### GetCoveringInstanceIndex

`func (o *RenderstreamFailoverInfo) GetCoveringInstanceIndex() int64`

GetCoveringInstanceIndex returns the CoveringInstanceIndex field if non-nil, zero value otherwise.

### GetCoveringInstanceIndexOk

`func (o *RenderstreamFailoverInfo) GetCoveringInstanceIndexOk() (*int64, bool)`

GetCoveringInstanceIndexOk returns a tuple with the CoveringInstanceIndex field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCoveringInstanceIndex

`func (o *RenderstreamFailoverInfo) SetCoveringInstanceIndex(v int64)`

SetCoveringInstanceIndex sets CoveringInstanceIndex field to given value.

### HasCoveringInstanceIndex

`func (o *RenderstreamFailoverInfo) HasCoveringInstanceIndex() bool`

HasCoveringInstanceIndex returns a boolean if a field has been set.

### GetCoveringMachineName

`func (o *RenderstreamFailoverInfo) GetCoveringMachineName() string`

GetCoveringMachineName returns the CoveringMachineName field if non-nil, zero value otherwise.

### GetCoveringMachineNameOk

`func (o *RenderstreamFailoverInfo) GetCoveringMachineNameOk() (*string, bool)`

GetCoveringMachineNameOk returns a tuple with the CoveringMachineName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCoveringMachineName

`func (o *RenderstreamFailoverInfo) SetCoveringMachineName(v string)`

SetCoveringMachineName sets CoveringMachineName field to given value.

### HasCoveringMachineName

`func (o *RenderstreamFailoverInfo) HasCoveringMachineName() bool`

HasCoveringMachineName returns a boolean if a field has been set.

### GetErrorString

`func (o *RenderstreamFailoverInfo) GetErrorString() string`

GetErrorString returns the ErrorString field if non-nil, zero value otherwise.

### GetErrorStringOk

`func (o *RenderstreamFailoverInfo) GetErrorStringOk() (*string, bool)`

GetErrorStringOk returns a tuple with the ErrorString field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetErrorString

`func (o *RenderstreamFailoverInfo) SetErrorString(v string)`

SetErrorString sets ErrorString field to given value.

### HasErrorString

`func (o *RenderstreamFailoverInfo) HasErrorString() bool`

HasErrorString returns a boolean if a field has been set.

### GetStreams

`func (o *RenderstreamFailoverInfo) GetStreams() []RenderstreamStreamInfo`

GetStreams returns the Streams field if non-nil, zero value otherwise.

### GetStreamsOk

`func (o *RenderstreamFailoverInfo) GetStreamsOk() (*[]RenderstreamStreamInfo, bool)`

GetStreamsOk returns a tuple with the Streams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStreams

`func (o *RenderstreamFailoverInfo) SetStreams(v []RenderstreamStreamInfo)`

SetStreams sets Streams field to given value.

### HasStreams

`func (o *RenderstreamFailoverInfo) HasStreams() bool`

HasStreams returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


