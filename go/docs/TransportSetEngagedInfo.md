# TransportSetEngagedInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Engaged** | Pointer to **bool** |  | [optional] 

## Methods

### NewTransportSetEngagedInfo

`func NewTransportSetEngagedInfo() *TransportSetEngagedInfo`

NewTransportSetEngagedInfo instantiates a new TransportSetEngagedInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportSetEngagedInfoWithDefaults

`func NewTransportSetEngagedInfoWithDefaults() *TransportSetEngagedInfo`

NewTransportSetEngagedInfoWithDefaults instantiates a new TransportSetEngagedInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportSetEngagedInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportSetEngagedInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportSetEngagedInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportSetEngagedInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetEngaged

`func (o *TransportSetEngagedInfo) GetEngaged() bool`

GetEngaged returns the Engaged field if non-nil, zero value otherwise.

### GetEngagedOk

`func (o *TransportSetEngagedInfo) GetEngagedOk() (*bool, bool)`

GetEngagedOk returns a tuple with the Engaged field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEngaged

`func (o *TransportSetEngagedInfo) SetEngaged(v bool)`

SetEngaged sets Engaged field to given value.

### HasEngaged

`func (o *TransportSetEngagedInfo) HasEngaged() bool`

HasEngaged returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


