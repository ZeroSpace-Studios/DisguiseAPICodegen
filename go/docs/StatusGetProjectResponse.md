# StatusGetProjectResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to [**RpcStatus**](RpcStatus.md) |  | [optional] 
**Result** | Pointer to [**StatusGetProjectResult**](StatusGetProjectResult.md) |  | [optional] 

## Methods

### NewStatusGetProjectResponse

`func NewStatusGetProjectResponse() *StatusGetProjectResponse`

NewStatusGetProjectResponse instantiates a new StatusGetProjectResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusGetProjectResponseWithDefaults

`func NewStatusGetProjectResponseWithDefaults() *StatusGetProjectResponse`

NewStatusGetProjectResponseWithDefaults instantiates a new StatusGetProjectResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *StatusGetProjectResponse) GetStatus() RpcStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *StatusGetProjectResponse) GetStatusOk() (*RpcStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *StatusGetProjectResponse) SetStatus(v RpcStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *StatusGetProjectResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetResult

`func (o *StatusGetProjectResponse) GetResult() StatusGetProjectResult`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *StatusGetProjectResponse) GetResultOk() (*StatusGetProjectResult, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *StatusGetProjectResponse) SetResult(v StatusGetProjectResult)`

SetResult sets Result field to given value.

### HasResult

`func (o *StatusGetProjectResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


