# ContentMediaMetadata

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**VideoMetadata** | Pointer to [**ContentVideoMetadata**](ContentVideoMetadata.md) |  | [optional] 
**AudioMetadata** | Pointer to [**ContentAudioMetadata**](ContentAudioMetadata.md) |  | [optional] 
**MeshMetadata** | Pointer to [**ContentMeshMetadata**](ContentMeshMetadata.md) |  | [optional] 

## Methods

### NewContentMediaMetadata

`func NewContentMediaMetadata() *ContentMediaMetadata`

NewContentMediaMetadata instantiates a new ContentMediaMetadata object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewContentMediaMetadataWithDefaults

`func NewContentMediaMetadataWithDefaults() *ContentMediaMetadata`

NewContentMediaMetadataWithDefaults instantiates a new ContentMediaMetadata object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *ContentMediaMetadata) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *ContentMediaMetadata) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *ContentMediaMetadata) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *ContentMediaMetadata) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetVideoMetadata

`func (o *ContentMediaMetadata) GetVideoMetadata() ContentVideoMetadata`

GetVideoMetadata returns the VideoMetadata field if non-nil, zero value otherwise.

### GetVideoMetadataOk

`func (o *ContentMediaMetadata) GetVideoMetadataOk() (*ContentVideoMetadata, bool)`

GetVideoMetadataOk returns a tuple with the VideoMetadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetVideoMetadata

`func (o *ContentMediaMetadata) SetVideoMetadata(v ContentVideoMetadata)`

SetVideoMetadata sets VideoMetadata field to given value.

### HasVideoMetadata

`func (o *ContentMediaMetadata) HasVideoMetadata() bool`

HasVideoMetadata returns a boolean if a field has been set.

### GetAudioMetadata

`func (o *ContentMediaMetadata) GetAudioMetadata() ContentAudioMetadata`

GetAudioMetadata returns the AudioMetadata field if non-nil, zero value otherwise.

### GetAudioMetadataOk

`func (o *ContentMediaMetadata) GetAudioMetadataOk() (*ContentAudioMetadata, bool)`

GetAudioMetadataOk returns a tuple with the AudioMetadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAudioMetadata

`func (o *ContentMediaMetadata) SetAudioMetadata(v ContentAudioMetadata)`

SetAudioMetadata sets AudioMetadata field to given value.

### HasAudioMetadata

`func (o *ContentMediaMetadata) HasAudioMetadata() bool`

HasAudioMetadata returns a boolean if a field has been set.

### GetMeshMetadata

`func (o *ContentMediaMetadata) GetMeshMetadata() ContentMeshMetadata`

GetMeshMetadata returns the MeshMetadata field if non-nil, zero value otherwise.

### GetMeshMetadataOk

`func (o *ContentMediaMetadata) GetMeshMetadataOk() (*ContentMeshMetadata, bool)`

GetMeshMetadataOk returns a tuple with the MeshMetadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMeshMetadata

`func (o *ContentMediaMetadata) SetMeshMetadata(v ContentMeshMetadata)`

SetMeshMetadata sets MeshMetadata field to given value.

### HasMeshMetadata

`func (o *ContentMediaMetadata) HasMeshMetadata() bool`

HasMeshMetadata returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


