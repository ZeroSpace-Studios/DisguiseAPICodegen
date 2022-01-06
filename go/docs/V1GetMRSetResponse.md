# V1GetMRSetResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Result** | Pointer to [**V1MRSetInfo**](V1MRSetInfo.md) |  | [optional] 

## Methods

### NewV1GetMRSetResponse

`func NewV1GetMRSetResponse() *V1GetMRSetResponse`

NewV1GetMRSetResponse instantiates a new V1GetMRSetResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1GetMRSetResponseWithDefaults

`func NewV1GetMRSetResponseWithDefaults() *V1GetMRSetResponse`

NewV1GetMRSetResponseWithDefaults instantiates a new V1GetMRSetResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetResult

`func (o *V1GetMRSetResponse) GetResult() V1MRSetInfo`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *V1GetMRSetResponse) GetResultOk() (*V1MRSetInfo, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *V1GetMRSetResponse) SetResult(v V1MRSetInfo)`

SetResult sets Result field to given value.

### HasResult

`func (o *V1GetMRSetResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


