# ContentImageMetadata

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Resolution** | Pointer to [**ContentResolution**](ContentResolution.md) |  | [optional] 
**BitsPerPixel** | Pointer to **int64** |  | [optional] 
**Codec** | Pointer to **string** |  | [optional] 
**HasAlpha** | Pointer to **bool** |  | [optional] 

## Methods

### NewContentImageMetadata

`func NewContentImageMetadata() *ContentImageMetadata`

NewContentImageMetadata instantiates a new ContentImageMetadata object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewContentImageMetadataWithDefaults

`func NewContentImageMetadataWithDefaults() *ContentImageMetadata`

NewContentImageMetadataWithDefaults instantiates a new ContentImageMetadata object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetResolution

`func (o *ContentImageMetadata) GetResolution() ContentResolution`

GetResolution returns the Resolution field if non-nil, zero value otherwise.

### GetResolutionOk

`func (o *ContentImageMetadata) GetResolutionOk() (*ContentResolution, bool)`

GetResolutionOk returns a tuple with the Resolution field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetResolution

`func (o *ContentImageMetadata) SetResolution(v ContentResolution)`

SetResolution sets Resolution field to given value.

### HasResolution

`func (o *ContentImageMetadata) HasResolution() bool`

HasResolution returns a boolean if a field has been set.

### GetBitsPerPixel

`func (o *ContentImageMetadata) GetBitsPerPixel() int64`

GetBitsPerPixel returns the BitsPerPixel field if non-nil, zero value otherwise.

### GetBitsPerPixelOk

`func (o *ContentImageMetadata) GetBitsPerPixelOk() (*int64, bool)`

GetBitsPerPixelOk returns a tuple with the BitsPerPixel field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetBitsPerPixel

`func (o *ContentImageMetadata) SetBitsPerPixel(v int64)`

SetBitsPerPixel sets BitsPerPixel field to given value.

### HasBitsPerPixel

`func (o *ContentImageMetadata) HasBitsPerPixel() bool`

HasBitsPerPixel returns a boolean if a field has been set.

### GetCodec

`func (o *ContentImageMetadata) GetCodec() string`

GetCodec returns the Codec field if non-nil, zero value otherwise.

### GetCodecOk

`func (o *ContentImageMetadata) GetCodecOk() (*string, bool)`

GetCodecOk returns a tuple with the Codec field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCodec

`func (o *ContentImageMetadata) SetCodec(v string)`

SetCodec sets Codec field to given value.

### HasCodec

`func (o *ContentImageMetadata) HasCodec() bool`

HasCodec returns a boolean if a field has been set.

### GetHasAlpha

`func (o *ContentImageMetadata) GetHasAlpha() bool`

GetHasAlpha returns the HasAlpha field if non-nil, zero value otherwise.

### GetHasAlphaOk

`func (o *ContentImageMetadata) GetHasAlphaOk() (*bool, bool)`

GetHasAlphaOk returns a tuple with the HasAlpha field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetHasAlpha

`func (o *ContentImageMetadata) SetHasAlpha(v bool)`

SetHasAlpha sets HasAlpha field to given value.

### HasHasAlpha

`func (o *ContentImageMetadata) HasHasAlpha() bool`

HasHasAlpha returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


