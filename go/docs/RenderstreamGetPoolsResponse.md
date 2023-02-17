# RenderstreamGetPoolsResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to [**RpcStatus**](RpcStatus.md) |  | [optional] 
**Result** | Pointer to [**[]RenderstreamPoolInfo**](RenderstreamPoolInfo.md) |  | [optional] 

## Methods

### NewRenderstreamGetPoolsResponse

`func NewRenderstreamGetPoolsResponse() *RenderstreamGetPoolsResponse`

NewRenderstreamGetPoolsResponse instantiates a new RenderstreamGetPoolsResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamGetPoolsResponseWithDefaults

`func NewRenderstreamGetPoolsResponseWithDefaults() *RenderstreamGetPoolsResponse`

NewRenderstreamGetPoolsResponseWithDefaults instantiates a new RenderstreamGetPoolsResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *RenderstreamGetPoolsResponse) GetStatus() RpcStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *RenderstreamGetPoolsResponse) GetStatusOk() (*RpcStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *RenderstreamGetPoolsResponse) SetStatus(v RpcStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *RenderstreamGetPoolsResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetResult

`func (o *RenderstreamGetPoolsResponse) GetResult() []RenderstreamPoolInfo`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *RenderstreamGetPoolsResponse) GetResultOk() (*[]RenderstreamPoolInfo, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *RenderstreamGetPoolsResponse) SetResult(v []RenderstreamPoolInfo)`

SetResult sets Result field to given value.

### HasResult

`func (o *RenderstreamGetPoolsResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


