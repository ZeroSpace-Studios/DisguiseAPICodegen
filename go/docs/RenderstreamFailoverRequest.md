# RenderstreamFailoverRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Machine** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 

## Methods

### NewRenderstreamFailoverRequest

`func NewRenderstreamFailoverRequest() *RenderstreamFailoverRequest`

NewRenderstreamFailoverRequest instantiates a new RenderstreamFailoverRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamFailoverRequestWithDefaults

`func NewRenderstreamFailoverRequestWithDefaults() *RenderstreamFailoverRequest`

NewRenderstreamFailoverRequestWithDefaults instantiates a new RenderstreamFailoverRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMachine

`func (o *RenderstreamFailoverRequest) GetMachine() D3apiLocator`

GetMachine returns the Machine field if non-nil, zero value otherwise.

### GetMachineOk

`func (o *RenderstreamFailoverRequest) GetMachineOk() (*D3apiLocator, bool)`

GetMachineOk returns a tuple with the Machine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMachine

`func (o *RenderstreamFailoverRequest) SetMachine(v D3apiLocator)`

SetMachine sets Machine field to given value.

### HasMachine

`func (o *RenderstreamFailoverRequest) HasMachine() bool`

HasMachine returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


