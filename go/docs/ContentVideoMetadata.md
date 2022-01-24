# ContentVideoMetadata

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ImageSequenceMetadata** | Pointer to [**ContentImageSequenceMetadata**](ContentImageSequenceMetadata.md) |  | [optional] 
**HasAudio** | Pointer to **bool** |  | [optional] 
**AudioBigEndian** | Pointer to **bool** |  | [optional] 
**AudioSampleRate** | Pointer to **float32** |  | [optional] 

## Methods

### NewContentVideoMetadata

`func NewContentVideoMetadata() *ContentVideoMetadata`

NewContentVideoMetadata instantiates a new ContentVideoMetadata object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewContentVideoMetadataWithDefaults

`func NewContentVideoMetadataWithDefaults() *ContentVideoMetadata`

NewContentVideoMetadataWithDefaults instantiates a new ContentVideoMetadata object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetImageSequenceMetadata

`func (o *ContentVideoMetadata) GetImageSequenceMetadata() ContentImageSequenceMetadata`

GetImageSequenceMetadata returns the ImageSequenceMetadata field if non-nil, zero value otherwise.

### GetImageSequenceMetadataOk

`func (o *ContentVideoMetadata) GetImageSequenceMetadataOk() (*ContentImageSequenceMetadata, bool)`

GetImageSequenceMetadataOk returns a tuple with the ImageSequenceMetadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImageSequenceMetadata

`func (o *ContentVideoMetadata) SetImageSequenceMetadata(v ContentImageSequenceMetadata)`

SetImageSequenceMetadata sets ImageSequenceMetadata field to given value.

### HasImageSequenceMetadata

`func (o *ContentVideoMetadata) HasImageSequenceMetadata() bool`

HasImageSequenceMetadata returns a boolean if a field has been set.

### GetHasAudio

`func (o *ContentVideoMetadata) GetHasAudio() bool`

GetHasAudio returns the HasAudio field if non-nil, zero value otherwise.

### GetHasAudioOk

`func (o *ContentVideoMetadata) GetHasAudioOk() (*bool, bool)`

GetHasAudioOk returns a tuple with the HasAudio field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasAudio

`func (o *ContentVideoMetadata) SetHasAudio(v bool)`

SetHasAudio sets HasAudio field to given value.

### HasHasAudio

`func (o *ContentVideoMetadata) HasHasAudio() bool`

HasHasAudio returns a boolean if a field has been set.

### GetAudioBigEndian

`func (o *ContentVideoMetadata) GetAudioBigEndian() bool`

GetAudioBigEndian returns the AudioBigEndian field if non-nil, zero value otherwise.

### GetAudioBigEndianOk

`func (o *ContentVideoMetadata) GetAudioBigEndianOk() (*bool, bool)`

GetAudioBigEndianOk returns a tuple with the AudioBigEndian field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAudioBigEndian

`func (o *ContentVideoMetadata) SetAudioBigEndian(v bool)`

SetAudioBigEndian sets AudioBigEndian field to given value.

### HasAudioBigEndian

`func (o *ContentVideoMetadata) HasAudioBigEndian() bool`

HasAudioBigEndian returns a boolean if a field has been set.

### GetAudioSampleRate

`func (o *ContentVideoMetadata) GetAudioSampleRate() float32`

GetAudioSampleRate returns the AudioSampleRate field if non-nil, zero value otherwise.

### GetAudioSampleRateOk

`func (o *ContentVideoMetadata) GetAudioSampleRateOk() (*float32, bool)`

GetAudioSampleRateOk returns a tuple with the AudioSampleRate field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAudioSampleRate

`func (o *ContentVideoMetadata) SetAudioSampleRate(v float32)`

SetAudioSampleRate sets AudioSampleRate field to given value.

### HasAudioSampleRate

`func (o *ContentVideoMetadata) HasAudioSampleRate() bool`

HasAudioSampleRate returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


