# D3apiBoolResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to [**RpcStatus**](RpcStatus.md) |  | [optional] 
**Result** | Pointer to **bool** |  | [optional] 

## Methods

### NewD3apiBoolResponse

`func NewD3apiBoolResponse() *D3apiBoolResponse`

NewD3apiBoolResponse instantiates a new D3apiBoolResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewD3apiBoolResponseWithDefaults

`func NewD3apiBoolResponseWithDefaults() *D3apiBoolResponse`

NewD3apiBoolResponseWithDefaults instantiates a new D3apiBoolResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *D3apiBoolResponse) GetStatus() RpcStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *D3apiBoolResponse) GetStatusOk() (*RpcStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *D3apiBoolResponse) SetStatus(v RpcStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *D3apiBoolResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetResult

`func (o *D3apiBoolResponse) GetResult() bool`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *D3apiBoolResponse) GetResultOk() (*bool, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *D3apiBoolResponse) SetResult(v bool)`

SetResult sets Result field to given value.

### HasResult

`func (o *D3apiBoolResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


