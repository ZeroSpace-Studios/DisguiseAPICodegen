# QuickcalListReferencePointsResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to [**RpcStatus**](RpcStatus.md) |  | [optional] 
**Result** | Pointer to [**[]QuickcalReferencePointInfo**](QuickcalReferencePointInfo.md) |  | [optional] 

## Methods

### NewQuickcalListReferencePointsResponse

`func NewQuickcalListReferencePointsResponse() *QuickcalListReferencePointsResponse`

NewQuickcalListReferencePointsResponse instantiates a new QuickcalListReferencePointsResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewQuickcalListReferencePointsResponseWithDefaults

`func NewQuickcalListReferencePointsResponseWithDefaults() *QuickcalListReferencePointsResponse`

NewQuickcalListReferencePointsResponseWithDefaults instantiates a new QuickcalListReferencePointsResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *QuickcalListReferencePointsResponse) GetStatus() RpcStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *QuickcalListReferencePointsResponse) GetStatusOk() (*RpcStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *QuickcalListReferencePointsResponse) SetStatus(v RpcStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *QuickcalListReferencePointsResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetResult

`func (o *QuickcalListReferencePointsResponse) GetResult() []QuickcalReferencePointInfo`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *QuickcalListReferencePointsResponse) GetResultOk() (*[]QuickcalReferencePointInfo, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *QuickcalListReferencePointsResponse) SetResult(v []QuickcalReferencePointInfo)`

SetResult sets Result field to given value.

### HasResult

`func (o *QuickcalListReferencePointsResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


