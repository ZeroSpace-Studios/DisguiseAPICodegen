# MixedrealityPose

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Position** | Pointer to [**D3apiVec3Float**](D3apiVec3Float.md) |  | [optional] 
**Rotation** | Pointer to [**D3apiVec3Float**](D3apiVec3Float.md) |  | [optional] 

## Methods

### NewMixedrealityPose

`func NewMixedrealityPose() *MixedrealityPose`

NewMixedrealityPose instantiates a new MixedrealityPose object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewMixedrealityPoseWithDefaults

`func NewMixedrealityPoseWithDefaults() *MixedrealityPose`

NewMixedrealityPoseWithDefaults instantiates a new MixedrealityPose object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetPosition

`func (o *MixedrealityPose) GetPosition() D3apiVec3Float`

GetPosition returns the Position field if non-nil, zero value otherwise.

### GetPositionOk

`func (o *MixedrealityPose) GetPositionOk() (*D3apiVec3Float, bool)`

GetPositionOk returns a tuple with the Position field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPosition

`func (o *MixedrealityPose) SetPosition(v D3apiVec3Float)`

SetPosition sets Position field to given value.

### HasPosition

`func (o *MixedrealityPose) HasPosition() bool`

HasPosition returns a boolean if a field has been set.

### GetRotation

`func (o *MixedrealityPose) GetRotation() D3apiVec3Float`

GetRotation returns the Rotation field if non-nil, zero value otherwise.

### GetRotationOk

`func (o *MixedrealityPose) GetRotationOk() (*D3apiVec3Float, bool)`

GetRotationOk returns a tuple with the Rotation field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetRotation

`func (o *MixedrealityPose) SetRotation(v D3apiVec3Float)`

SetRotation sets Rotation field to given value.

### HasRotation

`func (o *MixedrealityPose) HasRotation() bool`

HasRotation returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


