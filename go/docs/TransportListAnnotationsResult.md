# TransportListAnnotationsResult

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**Annotations** | Pointer to [**TransportAnnotationInfo**](TransportAnnotationInfo.md) |  | [optional] 

## Methods

### NewTransportListAnnotationsResult

`func NewTransportListAnnotationsResult() *TransportListAnnotationsResult`

NewTransportListAnnotationsResult instantiates a new TransportListAnnotationsResult object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportListAnnotationsResultWithDefaults

`func NewTransportListAnnotationsResultWithDefaults() *TransportListAnnotationsResult`

NewTransportListAnnotationsResultWithDefaults instantiates a new TransportListAnnotationsResult object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *TransportListAnnotationsResult) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *TransportListAnnotationsResult) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *TransportListAnnotationsResult) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *TransportListAnnotationsResult) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *TransportListAnnotationsResult) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *TransportListAnnotationsResult) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *TransportListAnnotationsResult) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *TransportListAnnotationsResult) HasName() bool`

HasName returns a boolean if a field has been set.

### GetAnnotations

`func (o *TransportListAnnotationsResult) GetAnnotations() TransportAnnotationInfo`

GetAnnotations returns the Annotations field if non-nil, zero value otherwise.

### GetAnnotationsOk

`func (o *TransportListAnnotationsResult) GetAnnotationsOk() (*TransportAnnotationInfo, bool)`

GetAnnotationsOk returns a tuple with the Annotations field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAnnotations

`func (o *TransportListAnnotationsResult) SetAnnotations(v TransportAnnotationInfo)`

SetAnnotations sets Annotations field to given value.

### HasAnnotations

`func (o *TransportListAnnotationsResult) HasAnnotations() bool`

HasAnnotations returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


