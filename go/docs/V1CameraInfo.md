# V1CameraInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Observations** | Pointer to [**[]V1ObservationInfo**](V1ObservationInfo.md) |  | [optional] 

## Methods

### NewV1CameraInfo

`func NewV1CameraInfo() *V1CameraInfo`

NewV1CameraInfo instantiates a new V1CameraInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewV1CameraInfoWithDefaults

`func NewV1CameraInfoWithDefaults() *V1CameraInfo`

NewV1CameraInfoWithDefaults instantiates a new V1CameraInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *V1CameraInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *V1CameraInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *V1CameraInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *V1CameraInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *V1CameraInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *V1CameraInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *V1CameraInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *V1CameraInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetObservations

`func (o *V1CameraInfo) GetObservations() []V1ObservationInfo`

GetObservations returns the Observations field if non-nil, zero value otherwise.

### GetObservationsOk

`func (o *V1CameraInfo) GetObservationsOk() (*[]V1ObservationInfo, bool)`

GetObservationsOk returns a tuple with the Observations field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetObservations

`func (o *V1CameraInfo) SetObservations(v []V1ObservationInfo)`

SetObservations sets Observations field to given value.

### HasObservations

`func (o *V1CameraInfo) HasObservations() bool`

HasObservations returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


