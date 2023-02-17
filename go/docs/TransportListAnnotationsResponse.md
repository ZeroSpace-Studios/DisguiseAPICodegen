# TransportListAnnotationsResponse

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Status** | Pointer to [**RpcStatus**](RpcStatus.md) |  | [optional] 
**Result** | Pointer to [**TransportListAnnotationsResult**](TransportListAnnotationsResult.md) |  | [optional] 

## Methods

### NewTransportListAnnotationsResponse

`func NewTransportListAnnotationsResponse() *TransportListAnnotationsResponse`

NewTransportListAnnotationsResponse instantiates a new TransportListAnnotationsResponse object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportListAnnotationsResponseWithDefaults

`func NewTransportListAnnotationsResponseWithDefaults() *TransportListAnnotationsResponse`

NewTransportListAnnotationsResponseWithDefaults instantiates a new TransportListAnnotationsResponse object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetStatus

`func (o *TransportListAnnotationsResponse) GetStatus() RpcStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *TransportListAnnotationsResponse) GetStatusOk() (*RpcStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *TransportListAnnotationsResponse) SetStatus(v RpcStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *TransportListAnnotationsResponse) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetResult

`func (o *TransportListAnnotationsResponse) GetResult() TransportListAnnotationsResult`

GetResult returns the Result field if non-nil, zero value otherwise.

### GetResultOk

`func (o *TransportListAnnotationsResponse) GetResultOk() (*TransportListAnnotationsResult, bool)`

GetResultOk returns a tuple with the Result field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResult

`func (o *TransportListAnnotationsResponse) SetResult(v TransportListAnnotationsResult)`

SetResult sets Result field to given value.

### HasResult

`func (o *TransportListAnnotationsResponse) HasResult() bool`

HasResult returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


