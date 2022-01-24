# ContentImageSequenceMetadata

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ImageMetadata** | Pointer to [**ContentImageMetadata**](ContentImageMetadata.md) |  | [optional] 
**Fps** | Pointer to **float32** |  | [optional] 
**NFrames** | Pointer to **int64** |  | [optional] 

## Methods

### NewContentImageSequenceMetadata

`func NewContentImageSequenceMetadata() *ContentImageSequenceMetadata`

NewContentImageSequenceMetadata instantiates a new ContentImageSequenceMetadata object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewContentImageSequenceMetadataWithDefaults

`func NewContentImageSequenceMetadataWithDefaults() *ContentImageSequenceMetadata`

NewContentImageSequenceMetadataWithDefaults instantiates a new ContentImageSequenceMetadata object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetImageMetadata

`func (o *ContentImageSequenceMetadata) GetImageMetadata() ContentImageMetadata`

GetImageMetadata returns the ImageMetadata field if non-nil, zero value otherwise.

### GetImageMetadataOk

`func (o *ContentImageSequenceMetadata) GetImageMetadataOk() (*ContentImageMetadata, bool)`

GetImageMetadataOk returns a tuple with the ImageMetadata field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetImageMetadata

`func (o *ContentImageSequenceMetadata) SetImageMetadata(v ContentImageMetadata)`

SetImageMetadata sets ImageMetadata field to given value.

### HasImageMetadata

`func (o *ContentImageSequenceMetadata) HasImageMetadata() bool`

HasImageMetadata returns a boolean if a field has been set.

### GetFps

`func (o *ContentImageSequenceMetadata) GetFps() float32`

GetFps returns the Fps field if non-nil, zero value otherwise.

### GetFpsOk

`func (o *ContentImageSequenceMetadata) GetFpsOk() (*float32, bool)`

GetFpsOk returns a tuple with the Fps field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetFps

`func (o *ContentImageSequenceMetadata) SetFps(v float32)`

SetFps sets Fps field to given value.

### HasFps

`func (o *ContentImageSequenceMetadata) HasFps() bool`

HasFps returns a boolean if a field has been set.

### GetNFrames

`func (o *ContentImageSequenceMetadata) GetNFrames() int64`

GetNFrames returns the NFrames field if non-nil, zero value otherwise.

### GetNFramesOk

`func (o *ContentImageSequenceMetadata) GetNFramesOk() (*int64, bool)`

GetNFramesOk returns a tuple with the NFrames field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNFrames

`func (o *ContentImageSequenceMetadata) SetNFrames(v int64)`

SetNFrames sets NFrames field to given value.

### HasNFrames

`func (o *ContentImageSequenceMetadata) HasNFrames() bool`

HasNFrames returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


