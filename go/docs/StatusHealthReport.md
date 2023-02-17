# StatusHealthReport

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Machine** | Pointer to [**Statusd3Machine**](Statusd3Machine.md) |  | [optional] 
**RunningAsMachine** | Pointer to [**Statusd3Machine**](Statusd3Machine.md) |  | [optional] 
**Status** | Pointer to [**StatusHealthStatus**](StatusHealthStatus.md) |  | [optional] 

## Methods

### NewStatusHealthReport

`func NewStatusHealthReport() *StatusHealthReport`

NewStatusHealthReport instantiates a new StatusHealthReport object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusHealthReportWithDefaults

`func NewStatusHealthReportWithDefaults() *StatusHealthReport`

NewStatusHealthReportWithDefaults instantiates a new StatusHealthReport object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetMachine

`func (o *StatusHealthReport) GetMachine() Statusd3Machine`

GetMachine returns the Machine field if non-nil, zero value otherwise.

### GetMachineOk

`func (o *StatusHealthReport) GetMachineOk() (*Statusd3Machine, bool)`

GetMachineOk returns a tuple with the Machine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMachine

`func (o *StatusHealthReport) SetMachine(v Statusd3Machine)`

SetMachine sets Machine field to given value.

### HasMachine

`func (o *StatusHealthReport) HasMachine() bool`

HasMachine returns a boolean if a field has been set.

### GetRunningAsMachine

`func (o *StatusHealthReport) GetRunningAsMachine() Statusd3Machine`

GetRunningAsMachine returns the RunningAsMachine field if non-nil, zero value otherwise.

### GetRunningAsMachineOk

`func (o *StatusHealthReport) GetRunningAsMachineOk() (*Statusd3Machine, bool)`

GetRunningAsMachineOk returns a tuple with the RunningAsMachine field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRunningAsMachine

`func (o *StatusHealthReport) SetRunningAsMachine(v Statusd3Machine)`

SetRunningAsMachine sets RunningAsMachine field to given value.

### HasRunningAsMachine

`func (o *StatusHealthReport) HasRunningAsMachine() bool`

HasRunningAsMachine returns a boolean if a field has been set.

### GetStatus

`func (o *StatusHealthReport) GetStatus() StatusHealthStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *StatusHealthReport) GetStatusOk() (*StatusHealthStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *StatusHealthReport) SetStatus(v StatusHealthStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *StatusHealthReport) HasStatus() bool`

HasStatus returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


