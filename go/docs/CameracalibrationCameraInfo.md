# CameracalibrationCameraInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Observations** | Pointer to [**[]CameracalibrationObservationInfo**](CameracalibrationObservationInfo.md) |  | [optional] 

## Methods

### NewCameracalibrationCameraInfo

`func NewCameracalibrationCameraInfo() *CameracalibrationCameraInfo`

NewCameracalibrationCameraInfo instantiates a new CameracalibrationCameraInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewCameracalibrationCameraInfoWithDefaults

`func NewCameracalibrationCameraInfoWithDefaults() *CameracalibrationCameraInfo`

NewCameracalibrationCameraInfoWithDefaults instantiates a new CameracalibrationCameraInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *CameracalibrationCameraInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *CameracalibrationCameraInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *CameracalibrationCameraInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *CameracalibrationCameraInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *CameracalibrationCameraInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *CameracalibrationCameraInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *CameracalibrationCameraInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *CameracalibrationCameraInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetObservations

`func (o *CameracalibrationCameraInfo) GetObservations() []CameracalibrationObservationInfo`

GetObservations returns the Observations field if non-nil, zero value otherwise.

### GetObservationsOk

`func (o *CameracalibrationCameraInfo) GetObservationsOk() (*[]CameracalibrationObservationInfo, bool)`

GetObservationsOk returns a tuple with the Observations field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetObservations

`func (o *CameracalibrationCameraInfo) SetObservations(v []CameracalibrationObservationInfo)`

SetObservations sets Observations field to given value.

### HasObservations

`func (o *CameracalibrationCameraInfo) HasObservations() bool`

HasObservations returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


