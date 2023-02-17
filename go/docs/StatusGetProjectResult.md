# StatusGetProjectResult

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ProjectPath** | Pointer to **string** |  | [optional] 
**Version** | Pointer to [**StatusD3VersionInfo**](StatusD3VersionInfo.md) |  | [optional] 

## Methods

### NewStatusGetProjectResult

`func NewStatusGetProjectResult() *StatusGetProjectResult`

NewStatusGetProjectResult instantiates a new StatusGetProjectResult object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewStatusGetProjectResultWithDefaults

`func NewStatusGetProjectResultWithDefaults() *StatusGetProjectResult`

NewStatusGetProjectResultWithDefaults instantiates a new StatusGetProjectResult object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetProjectPath

`func (o *StatusGetProjectResult) GetProjectPath() string`

GetProjectPath returns the ProjectPath field if non-nil, zero value otherwise.

### GetProjectPathOk

`func (o *StatusGetProjectResult) GetProjectPathOk() (*string, bool)`

GetProjectPathOk returns a tuple with the ProjectPath field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetProjectPath

`func (o *StatusGetProjectResult) SetProjectPath(v string)`

SetProjectPath sets ProjectPath field to given value.

### HasProjectPath

`func (o *StatusGetProjectResult) HasProjectPath() bool`

HasProjectPath returns a boolean if a field has been set.

### GetVersion

`func (o *StatusGetProjectResult) GetVersion() StatusD3VersionInfo`

GetVersion returns the Version field if non-nil, zero value otherwise.

### GetVersionOk

`func (o *StatusGetProjectResult) GetVersionOk() (*StatusD3VersionInfo, bool)`

GetVersionOk returns a tuple with the Version field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVersion

`func (o *StatusGetProjectResult) SetVersion(v StatusD3VersionInfo)`

SetVersion sets Version field to given value.

### HasVersion

`func (o *StatusGetProjectResult) HasVersion() bool`

HasVersion returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


