# StatusNotification

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Summary** | Pointer to **string** |  | [optional] 
**Detail** | Pointer to **string** |  | [optional] 

## Methods

### NewStatusNotification

`func NewStatusNotification() *StatusNotification`

NewStatusNotification instantiates a new StatusNotification object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusNotificationWithDefaults

`func NewStatusNotificationWithDefaults() *StatusNotification`

NewStatusNotificationWithDefaults instantiates a new StatusNotification object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetSummary

`func (o *StatusNotification) GetSummary() string`

GetSummary returns the Summary field if non-nil, zero value otherwise.

### GetSummaryOk

`func (o *StatusNotification) GetSummaryOk() (*string, bool)`

GetSummaryOk returns a tuple with the Summary field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSummary

`func (o *StatusNotification) SetSummary(v string)`

SetSummary sets Summary field to given value.

### HasSummary

`func (o *StatusNotification) HasSummary() bool`

HasSummary returns a boolean if a field has been set.

### GetDetail

`func (o *StatusNotification) GetDetail() string`

GetDetail returns the Detail field if non-nil, zero value otherwise.

### GetDetailOk

`func (o *StatusNotification) GetDetailOk() (*string, bool)`

GetDetailOk returns a tuple with the Detail field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetail

`func (o *StatusNotification) SetDetail(v string)`

SetDetail sets Detail field to given value.

### HasDetail

`func (o *StatusNotification) HasDetail() bool`

HasDetail returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


