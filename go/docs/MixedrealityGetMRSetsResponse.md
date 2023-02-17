# MixedrealityGetMRSetsResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to [**RpcStatus**](RpcStatus.md) |  | [optional] 
**Result** | Pointer to [**[]MixedrealityMRSet**](MixedrealityMRSet.md) |  | [optional] 

## Methods

### NewMixedrealityGetMRSetsResponse

`func NewMixedrealityGetMRSetsResponse() *MixedrealityGetMRSetsResponse`

NewMixedrealityGetMRSetsResponse instantiates a new MixedrealityGetMRSetsResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMixedrealityGetMRSetsResponseWithDefaults

`func NewMixedrealityGetMRSetsResponseWithDefaults() *MixedrealityGetMRSetsResponse`

NewMixedrealityGetMRSetsResponseWithDefaults instantiates a new MixedrealityGetMRSetsResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *MixedrealityGetMRSetsResponse) GetStatus() RpcStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *MixedrealityGetMRSetsResponse) GetStatusOk() (*RpcStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *MixedrealityGetMRSetsResponse) SetStatus(v RpcStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *MixedrealityGetMRSetsResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetResult

`func (o *MixedrealityGetMRSetsResponse) GetResult() []MixedrealityMRSet`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *MixedrealityGetMRSetsResponse) GetResultOk() (*[]MixedrealityMRSet, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *MixedrealityGetMRSetsResponse) SetResult(v []MixedrealityMRSet)`

SetResult sets Result field to given value.

### HasResult

`func (o *MixedrealityGetMRSetsResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


