# StatusGetSessionResult

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**IsRunningSolo** | Pointer to **bool** | Is machine is running in the solo mode. Solo mode means that project is running on a standalone machine (not director set), so not as part of a wider session. | [optional] 
**IsDirectorDedicated** | Pointer to **bool** | Is a director machine is set as dedicated or not Dedicated means that the machine controls Actors but is not intended to output video to the stage; it is used only for visualisation. It if is not dedicated then that means the machine controls all other Actors in the network but also outputs video through its remaining outputs. | [optional] 
**Director** | Pointer to [**StatusMachineInfo**](StatusMachineInfo.md) |  | [optional] 
**Actors** | Pointer to [**[]StatusMachineInfo**](StatusMachineInfo.md) |  | [optional] 
**Understudies** | Pointer to [**[]StatusMachineInfo**](StatusMachineInfo.md) |  | [optional] 

## Methods

### NewStatusGetSessionResult

`func NewStatusGetSessionResult() *StatusGetSessionResult`

NewStatusGetSessionResult instantiates a new StatusGetSessionResult object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusGetSessionResultWithDefaults

`func NewStatusGetSessionResultWithDefaults() *StatusGetSessionResult`

NewStatusGetSessionResultWithDefaults instantiates a new StatusGetSessionResult object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetIsRunningSolo

`func (o *StatusGetSessionResult) GetIsRunningSolo() bool`

GetIsRunningSolo returns the IsRunningSolo field if non-nil, zero value otherwise.

### GetIsRunningSoloOk

`func (o *StatusGetSessionResult) GetIsRunningSoloOk() (*bool, bool)`

GetIsRunningSoloOk returns a tuple with the IsRunningSolo field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsRunningSolo

`func (o *StatusGetSessionResult) SetIsRunningSolo(v bool)`

SetIsRunningSolo sets IsRunningSolo field to given value.

### HasIsRunningSolo

`func (o *StatusGetSessionResult) HasIsRunningSolo() bool`

HasIsRunningSolo returns a boolean if a field has been set.

### GetIsDirectorDedicated

`func (o *StatusGetSessionResult) GetIsDirectorDedicated() bool`

GetIsDirectorDedicated returns the IsDirectorDedicated field if non-nil, zero value otherwise.

### GetIsDirectorDedicatedOk

`func (o *StatusGetSessionResult) GetIsDirectorDedicatedOk() (*bool, bool)`

GetIsDirectorDedicatedOk returns a tuple with the IsDirectorDedicated field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetIsDirectorDedicated

`func (o *StatusGetSessionResult) SetIsDirectorDedicated(v bool)`

SetIsDirectorDedicated sets IsDirectorDedicated field to given value.

### HasIsDirectorDedicated

`func (o *StatusGetSessionResult) HasIsDirectorDedicated() bool`

HasIsDirectorDedicated returns a boolean if a field has been set.

### GetDirector

`func (o *StatusGetSessionResult) GetDirector() StatusMachineInfo`

GetDirector returns the Director field if non-nil, zero value otherwise.

### GetDirectorOk

`func (o *StatusGetSessionResult) GetDirectorOk() (*StatusMachineInfo, bool)`

GetDirectorOk returns a tuple with the Director field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDirector

`func (o *StatusGetSessionResult) SetDirector(v StatusMachineInfo)`

SetDirector sets Director field to given value.

### HasDirector

`func (o *StatusGetSessionResult) HasDirector() bool`

HasDirector returns a boolean if a field has been set.

### GetActors

`func (o *StatusGetSessionResult) GetActors() []StatusMachineInfo`

GetActors returns the Actors field if non-nil, zero value otherwise.

### GetActorsOk

`func (o *StatusGetSessionResult) GetActorsOk() (*[]StatusMachineInfo, bool)`

GetActorsOk returns a tuple with the Actors field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetActors

`func (o *StatusGetSessionResult) SetActors(v []StatusMachineInfo)`

SetActors sets Actors field to given value.

### HasActors

`func (o *StatusGetSessionResult) HasActors() bool`

HasActors returns a boolean if a field has been set.

### GetUnderstudies

`func (o *StatusGetSessionResult) GetUnderstudies() []StatusMachineInfo`

GetUnderstudies returns the Understudies field if non-nil, zero value otherwise.

### GetUnderstudiesOk

`func (o *StatusGetSessionResult) GetUnderstudiesOk() (*[]StatusMachineInfo, bool)`

GetUnderstudiesOk returns a tuple with the Understudies field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUnderstudies

`func (o *StatusGetSessionResult) SetUnderstudies(v []StatusMachineInfo)`

SetUnderstudies sets Understudies field to given value.

### HasUnderstudies

`func (o *StatusGetSessionResult) HasUnderstudies() bool`

HasUnderstudies returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


