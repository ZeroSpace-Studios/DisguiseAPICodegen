# StatusHealthStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**AverageFPS** | Pointer to **float32** |  | [optional] 
**VideoDroppedFrames** | Pointer to **float32** |  | [optional] 
**VideoMissedFrames** | Pointer to **float32** |  | [optional] 
**States** | Pointer to [**[]StatusHealthStates**](StatusHealthStates.md) |  | [optional] 

## Methods

### NewStatusHealthStatus

`func NewStatusHealthStatus() *StatusHealthStatus`

NewStatusHealthStatus instantiates a new StatusHealthStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusHealthStatusWithDefaults

`func NewStatusHealthStatusWithDefaults() *StatusHealthStatus`

NewStatusHealthStatusWithDefaults instantiates a new StatusHealthStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetAverageFPS

`func (o *StatusHealthStatus) GetAverageFPS() float32`

GetAverageFPS returns the AverageFPS field if non-nil, zero value otherwise.

### GetAverageFPSOk

`func (o *StatusHealthStatus) GetAverageFPSOk() (*float32, bool)`

GetAverageFPSOk returns a tuple with the AverageFPS field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAverageFPS

`func (o *StatusHealthStatus) SetAverageFPS(v float32)`

SetAverageFPS sets AverageFPS field to given value.

### HasAverageFPS

`func (o *StatusHealthStatus) HasAverageFPS() bool`

HasAverageFPS returns a boolean if a field has been set.

### GetVideoDroppedFrames

`func (o *StatusHealthStatus) GetVideoDroppedFrames() float32`

GetVideoDroppedFrames returns the VideoDroppedFrames field if non-nil, zero value otherwise.

### GetVideoDroppedFramesOk

`func (o *StatusHealthStatus) GetVideoDroppedFramesOk() (*float32, bool)`

GetVideoDroppedFramesOk returns a tuple with the VideoDroppedFrames field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVideoDroppedFrames

`func (o *StatusHealthStatus) SetVideoDroppedFrames(v float32)`

SetVideoDroppedFrames sets VideoDroppedFrames field to given value.

### HasVideoDroppedFrames

`func (o *StatusHealthStatus) HasVideoDroppedFrames() bool`

HasVideoDroppedFrames returns a boolean if a field has been set.

### GetVideoMissedFrames

`func (o *StatusHealthStatus) GetVideoMissedFrames() float32`

GetVideoMissedFrames returns the VideoMissedFrames field if non-nil, zero value otherwise.

### GetVideoMissedFramesOk

`func (o *StatusHealthStatus) GetVideoMissedFramesOk() (*float32, bool)`

GetVideoMissedFramesOk returns a tuple with the VideoMissedFrames field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVideoMissedFrames

`func (o *StatusHealthStatus) SetVideoMissedFrames(v float32)`

SetVideoMissedFrames sets VideoMissedFrames field to given value.

### HasVideoMissedFrames

`func (o *StatusHealthStatus) HasVideoMissedFrames() bool`

HasVideoMissedFrames returns a boolean if a field has been set.

### GetStates

`func (o *StatusHealthStatus) GetStates() []StatusHealthStates`

GetStates returns the States field if non-nil, zero value otherwise.

### GetStatesOk

`func (o *StatusHealthStatus) GetStatesOk() (*[]StatusHealthStates, bool)`

GetStatesOk returns a tuple with the States field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStates

`func (o *StatusHealthStatus) SetStates(v []StatusHealthStates)`

SetStates sets States field to given value.

### HasStates

`func (o *StatusHealthStatus) HasStates() bool`

HasStates returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


