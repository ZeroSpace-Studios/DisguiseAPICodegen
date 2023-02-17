# TransportStopRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transports** | Pointer to [**[]D3apiLocator**](D3apiLocator.md) |  | [optional] 

## Methods

### NewTransportStopRequest

`func NewTransportStopRequest() *TransportStopRequest`

NewTransportStopRequest instantiates a new TransportStopRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportStopRequestWithDefaults

`func NewTransportStopRequestWithDefaults() *TransportStopRequest`

NewTransportStopRequestWithDefaults instantiates a new TransportStopRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransports

`func (o *TransportStopRequest) GetTransports() []D3apiLocator`

GetTransports returns the Transports field if non-nil, zero value otherwise.

### GetTransportsOk

`func (o *TransportStopRequest) GetTransportsOk() (*[]D3apiLocator, bool)`

GetTransportsOk returns a tuple with the Transports field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransports

`func (o *TransportStopRequest) SetTransports(v []D3apiLocator)`

SetTransports sets Transports field to given value.

### HasTransports

`func (o *TransportStopRequest) HasTransports() bool`

HasTransports returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


