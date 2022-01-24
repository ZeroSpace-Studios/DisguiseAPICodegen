# RenderstreamStreamInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**WorkloadID** | Pointer to **string** |  | [optional] 
**MachineName** | Pointer to **string** |  | [optional] 
**Status** | Pointer to [**StreamInfoStreamStatus**](StreamInfoStreamStatus.md) |  | [optional] [default to NONE]
**ReceivingLocally** | Pointer to **bool** |  | [optional] 
**Clipping** | Pointer to [**RenderstreamClippingRegion**](RenderstreamClippingRegion.md) |  | [optional] 

## Methods

### NewRenderstreamStreamInfo

`func NewRenderstreamStreamInfo() *RenderstreamStreamInfo`

NewRenderstreamStreamInfo instantiates a new RenderstreamStreamInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamStreamInfoWithDefaults

`func NewRenderstreamStreamInfoWithDefaults() *RenderstreamStreamInfo`

NewRenderstreamStreamInfoWithDefaults instantiates a new RenderstreamStreamInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *RenderstreamStreamInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *RenderstreamStreamInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *RenderstreamStreamInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *RenderstreamStreamInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetWorkloadID

`func (o *RenderstreamStreamInfo) GetWorkloadID() string`

GetWorkloadID returns the WorkloadID field if non-nil, zero value otherwise.

### GetWorkloadIDOk

`func (o *RenderstreamStreamInfo) GetWorkloadIDOk() (*string, bool)`

GetWorkloadIDOk returns a tuple with the WorkloadID field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetWorkloadID

`func (o *RenderstreamStreamInfo) SetWorkloadID(v string)`

SetWorkloadID sets WorkloadID field to given value.

### HasWorkloadID

`func (o *RenderstreamStreamInfo) HasWorkloadID() bool`

HasWorkloadID returns a boolean if a field has been set.

### GetMachineName

`func (o *RenderstreamStreamInfo) GetMachineName() string`

GetMachineName returns the MachineName field if non-nil, zero value otherwise.

### GetMachineNameOk

`func (o *RenderstreamStreamInfo) GetMachineNameOk() (*string, bool)`

GetMachineNameOk returns a tuple with the MachineName field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMachineName

`func (o *RenderstreamStreamInfo) SetMachineName(v string)`

SetMachineName sets MachineName field to given value.

### HasMachineName

`func (o *RenderstreamStreamInfo) HasMachineName() bool`

HasMachineName returns a boolean if a field has been set.

### GetStatus

`func (o *RenderstreamStreamInfo) GetStatus() StreamInfoStreamStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *RenderstreamStreamInfo) GetStatusOk() (*StreamInfoStreamStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *RenderstreamStreamInfo) SetStatus(v StreamInfoStreamStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *RenderstreamStreamInfo) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetReceivingLocally

`func (o *RenderstreamStreamInfo) GetReceivingLocally() bool`

GetReceivingLocally returns the ReceivingLocally field if non-nil, zero value otherwise.

### GetReceivingLocallyOk

`func (o *RenderstreamStreamInfo) GetReceivingLocallyOk() (*bool, bool)`

GetReceivingLocallyOk returns a tuple with the ReceivingLocally field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetReceivingLocally

`func (o *RenderstreamStreamInfo) SetReceivingLocally(v bool)`

SetReceivingLocally sets ReceivingLocally field to given value.

### HasReceivingLocally

`func (o *RenderstreamStreamInfo) HasReceivingLocally() bool`

HasReceivingLocally returns a boolean if a field has been set.

### GetClipping

`func (o *RenderstreamStreamInfo) GetClipping() RenderstreamClippingRegion`

GetClipping returns the Clipping field if non-nil, zero value otherwise.

### GetClippingOk

`func (o *RenderstreamStreamInfo) GetClippingOk() (*RenderstreamClippingRegion, bool)`

GetClippingOk returns a tuple with the Clipping field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetClipping

`func (o *RenderstreamStreamInfo) SetClipping(v RenderstreamClippingRegion)`

SetClipping sets Clipping field to given value.

### HasClipping

`func (o *RenderstreamStreamInfo) HasClipping() bool`

HasClipping returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


