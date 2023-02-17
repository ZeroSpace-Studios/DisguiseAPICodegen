# StatusNotificationsReport

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Machine** | Pointer to [**Statusd3Machine**](Statusd3Machine.md) |  | [optional] 
**Notifications** | Pointer to [**[]StatusNotification**](StatusNotification.md) |  | [optional] 

## Methods

### NewStatusNotificationsReport

`func NewStatusNotificationsReport() *StatusNotificationsReport`

NewStatusNotificationsReport instantiates a new StatusNotificationsReport object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusNotificationsReportWithDefaults

`func NewStatusNotificationsReportWithDefaults() *StatusNotificationsReport`

NewStatusNotificationsReportWithDefaults instantiates a new StatusNotificationsReport object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMachine

`func (o *StatusNotificationsReport) GetMachine() Statusd3Machine`

GetMachine returns the Machine field if non-nil, zero value otherwise.

### GetMachineOk

`func (o *StatusNotificationsReport) GetMachineOk() (*Statusd3Machine, bool)`

GetMachineOk returns a tuple with the Machine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMachine

`func (o *StatusNotificationsReport) SetMachine(v Statusd3Machine)`

SetMachine sets Machine field to given value.

### HasMachine

`func (o *StatusNotificationsReport) HasMachine() bool`

HasMachine returns a boolean if a field has been set.

### GetNotifications

`func (o *StatusNotificationsReport) GetNotifications() []StatusNotification`

GetNotifications returns the Notifications field if non-nil, zero value otherwise.

### GetNotificationsOk

`func (o *StatusNotificationsReport) GetNotificationsOk() (*[]StatusNotification, bool)`

GetNotificationsOk returns a tuple with the Notifications field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNotifications

`func (o *StatusNotificationsReport) SetNotifications(v []StatusNotification)`

SetNotifications sets Notifications field to given value.

### HasNotifications

`func (o *StatusNotificationsReport) HasNotifications() bool`

HasNotifications returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


