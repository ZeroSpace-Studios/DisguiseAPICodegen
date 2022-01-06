# V1EnableObservationRequest

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ObservationUid** | Pointer to **string** |  | [optional] 
**Enabled** | Pointer to **bool** |  | [optional] 

## Methods

### NewV1EnableObservationRequest

`func NewV1EnableObservationRequest() *V1EnableObservationRequest`

NewV1EnableObservationRequest instantiates a new V1EnableObservationRequest object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1EnableObservationRequestWithDefaults

`func NewV1EnableObservationRequestWithDefaults() *V1EnableObservationRequest`

NewV1EnableObservationRequestWithDefaults instantiates a new V1EnableObservationRequest object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetObservationUid

`func (o *V1EnableObservationRequest) GetObservationUid() string`

GetObservationUid returns the ObservationUid field if non-nil, zero value otherwise.

### GetObservationUidOk

`func (o *V1EnableObservationRequest) GetObservationUidOk() (*string, bool)`

GetObservationUidOk returns a tuple with the ObservationUid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetObservationUid

`func (o *V1EnableObservationRequest) SetObservationUid(v string)`

SetObservationUid sets ObservationUid field to given value.

### HasObservationUid

`func (o *V1EnableObservationRequest) HasObservationUid() bool`

HasObservationUid returns a boolean if a field has been set.

### GetEnabled

`func (o *V1EnableObservationRequest) GetEnabled() bool`

GetEnabled returns the Enabled field if non-nil, zero value otherwise.

### GetEnabledOk

`func (o *V1EnableObservationRequest) GetEnabledOk() (*bool, bool)`

GetEnabledOk returns a tuple with the Enabled field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetEnabled

`func (o *V1EnableObservationRequest) SetEnabled(v bool)`

SetEnabled sets Enabled field to given value.

### HasEnabled

`func (o *V1EnableObservationRequest) HasEnabled() bool`

HasEnabled returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


