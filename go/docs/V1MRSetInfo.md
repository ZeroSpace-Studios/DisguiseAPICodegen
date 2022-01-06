# V1MRSetInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**TargetCamera** | Pointer to [**V1CameraInfo**](V1CameraInfo.md) |  | [optional] 

## Methods

### NewV1MRSetInfo

`func NewV1MRSetInfo() *V1MRSetInfo`

NewV1MRSetInfo instantiates a new V1MRSetInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1MRSetInfoWithDefaults

`func NewV1MRSetInfoWithDefaults() *V1MRSetInfo`

NewV1MRSetInfoWithDefaults instantiates a new V1MRSetInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *V1MRSetInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *V1MRSetInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *V1MRSetInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *V1MRSetInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *V1MRSetInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *V1MRSetInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *V1MRSetInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *V1MRSetInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetTargetCamera

`func (o *V1MRSetInfo) GetTargetCamera() V1CameraInfo`

GetTargetCamera returns the TargetCamera field if non-nil, zero value otherwise.

### GetTargetCameraOk

`func (o *V1MRSetInfo) GetTargetCameraOk() (*V1CameraInfo, bool)`

GetTargetCameraOk returns a tuple with the TargetCamera field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTargetCamera

`func (o *V1MRSetInfo) SetTargetCamera(v V1CameraInfo)`

SetTargetCamera sets TargetCamera field to given value.

### HasTargetCamera

`func (o *V1MRSetInfo) HasTargetCamera() bool`

HasTargetCamera returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


