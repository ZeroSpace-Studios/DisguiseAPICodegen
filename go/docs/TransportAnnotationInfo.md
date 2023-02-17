# TransportAnnotationInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Notes** | Pointer to [**[]TransportNoteInfo**](TransportNoteInfo.md) |  | [optional] 
**Tags** | Pointer to [**[]TransportTagInfo**](TransportTagInfo.md) |  | [optional] 
**Sections** | Pointer to [**[]TransportSectionInfo**](TransportSectionInfo.md) |  | [optional] 

## Methods

### NewTransportAnnotationInfo

`func NewTransportAnnotationInfo() *TransportAnnotationInfo`

NewTransportAnnotationInfo instantiates a new TransportAnnotationInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportAnnotationInfoWithDefaults

`func NewTransportAnnotationInfoWithDefaults() *TransportAnnotationInfo`

NewTransportAnnotationInfoWithDefaults instantiates a new TransportAnnotationInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetNotes

`func (o *TransportAnnotationInfo) GetNotes() []TransportNoteInfo`

GetNotes returns the Notes field if non-nil, zero value otherwise.

### GetNotesOk

`func (o *TransportAnnotationInfo) GetNotesOk() (*[]TransportNoteInfo, bool)`

GetNotesOk returns a tuple with the Notes field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNotes

`func (o *TransportAnnotationInfo) SetNotes(v []TransportNoteInfo)`

SetNotes sets Notes field to given value.

### HasNotes

`func (o *TransportAnnotationInfo) HasNotes() bool`

HasNotes returns a boolean if a field has been set.

### GetTags

`func (o *TransportAnnotationInfo) GetTags() []TransportTagInfo`

GetTags returns the Tags field if non-nil, zero value otherwise.

### GetTagsOk

`func (o *TransportAnnotationInfo) GetTagsOk() (*[]TransportTagInfo, bool)`

GetTagsOk returns a tuple with the Tags field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTags

`func (o *TransportAnnotationInfo) SetTags(v []TransportTagInfo)`

SetTags sets Tags field to given value.

### HasTags

`func (o *TransportAnnotationInfo) HasTags() bool`

HasTags returns a boolean if a field has been set.

### GetSections

`func (o *TransportAnnotationInfo) GetSections() []TransportSectionInfo`

GetSections returns the Sections field if non-nil, zero value otherwise.

### GetSectionsOk

`func (o *TransportAnnotationInfo) GetSectionsOk() (*[]TransportSectionInfo, bool)`

GetSectionsOk returns a tuple with the Sections field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetSections

`func (o *TransportAnnotationInfo) SetSections(v []TransportSectionInfo)`

SetSections sets Sections field to given value.

### HasSections

`func (o *TransportAnnotationInfo) HasSections() bool`

HasSections returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


