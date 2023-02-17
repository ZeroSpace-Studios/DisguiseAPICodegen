# StatusMachineInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Hostname** | Pointer to **string** |  | [optional] 
**Type** | Pointer to [**MachineInfoMachineType**](MachineInfoMachineType.md) |  | [optional] [default to UNKNOWN]

## Methods

### NewStatusMachineInfo

`func NewStatusMachineInfo() *StatusMachineInfo`

NewStatusMachineInfo instantiates a new StatusMachineInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusMachineInfoWithDefaults

`func NewStatusMachineInfoWithDefaults() *StatusMachineInfo`

NewStatusMachineInfoWithDefaults instantiates a new StatusMachineInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *StatusMachineInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *StatusMachineInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *StatusMachineInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *StatusMachineInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *StatusMachineInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *StatusMachineInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *StatusMachineInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *StatusMachineInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetHostname

`func (o *StatusMachineInfo) GetHostname() string`

GetHostname returns the Hostname field if non-nil, zero value otherwise.

### GetHostnameOk

`func (o *StatusMachineInfo) GetHostnameOk() (*string, bool)`

GetHostnameOk returns a tuple with the Hostname field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHostname

`func (o *StatusMachineInfo) SetHostname(v string)`

SetHostname sets Hostname field to given value.

### HasHostname

`func (o *StatusMachineInfo) HasHostname() bool`

HasHostname returns a boolean if a field has been set.

### GetType

`func (o *StatusMachineInfo) GetType() MachineInfoMachineType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *StatusMachineInfo) GetTypeOk() (*MachineInfoMachineType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *StatusMachineInfo) SetType(v MachineInfoMachineType)`

SetType sets Type field to given value.

### HasType

`func (o *StatusMachineInfo) HasType() bool`

HasType returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


