# V1ListMRSetsResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Result** | Pointer to [**[]V1MRSetInfo**](V1MRSetInfo.md) |  | [optional] 

## Methods

### NewV1ListMRSetsResponse

`func NewV1ListMRSetsResponse() *V1ListMRSetsResponse`

NewV1ListMRSetsResponse instantiates a new V1ListMRSetsResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1ListMRSetsResponseWithDefaults

`func NewV1ListMRSetsResponseWithDefaults() *V1ListMRSetsResponse`

NewV1ListMRSetsResponseWithDefaults instantiates a new V1ListMRSetsResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetResult

`func (o *V1ListMRSetsResponse) GetResult() []V1MRSetInfo`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *V1ListMRSetsResponse) GetResultOk() (*[]V1MRSetInfo, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *V1ListMRSetsResponse) SetResult(v []V1MRSetInfo)`

SetResult sets Result field to given value.

### HasResult

`func (o *V1ListMRSetsResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


