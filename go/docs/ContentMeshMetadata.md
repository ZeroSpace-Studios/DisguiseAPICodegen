# ContentMeshMetadata

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**NVertices** | Pointer to **int64** |  | [optional] 
**NTriangles** | Pointer to **int64** |  | [optional] 
**Centroid** | Pointer to [**ContentVector3**](ContentVector3.md) |  | [optional] 
**ExtentsMin** | Pointer to [**ContentVector3**](ContentVector3.md) |  | [optional] 
**ExtentsMax** | Pointer to [**ContentVector3**](ContentVector3.md) |  | [optional] 

## Methods

### NewContentMeshMetadata

`func NewContentMeshMetadata() *ContentMeshMetadata`

NewContentMeshMetadata instantiates a new ContentMeshMetadata object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewContentMeshMetadataWithDefaults

`func NewContentMeshMetadataWithDefaults() *ContentMeshMetadata`

NewContentMeshMetadataWithDefaults instantiates a new ContentMeshMetadata object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetNVertices

`func (o *ContentMeshMetadata) GetNVertices() int64`

GetNVertices returns the NVertices field if non-nil, zero value otherwise.

### GetNVerticesOk

`func (o *ContentMeshMetadata) GetNVerticesOk() (*int64, bool)`

GetNVerticesOk returns a tuple with the NVertices field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNVertices

`func (o *ContentMeshMetadata) SetNVertices(v int64)`

SetNVertices sets NVertices field to given value.

### HasNVertices

`func (o *ContentMeshMetadata) HasNVertices() bool`

HasNVertices returns a boolean if a field has been set.

### GetNTriangles

`func (o *ContentMeshMetadata) GetNTriangles() int64`

GetNTriangles returns the NTriangles field if non-nil, zero value otherwise.

### GetNTrianglesOk

`func (o *ContentMeshMetadata) GetNTrianglesOk() (*int64, bool)`

GetNTrianglesOk returns a tuple with the NTriangles field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNTriangles

`func (o *ContentMeshMetadata) SetNTriangles(v int64)`

SetNTriangles sets NTriangles field to given value.

### HasNTriangles

`func (o *ContentMeshMetadata) HasNTriangles() bool`

HasNTriangles returns a boolean if a field has been set.

### GetCentroid

`func (o *ContentMeshMetadata) GetCentroid() ContentVector3`

GetCentroid returns the Centroid field if non-nil, zero value otherwise.

### GetCentroidOk

`func (o *ContentMeshMetadata) GetCentroidOk() (*ContentVector3, bool)`

GetCentroidOk returns a tuple with the Centroid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCentroid

`func (o *ContentMeshMetadata) SetCentroid(v ContentVector3)`

SetCentroid sets Centroid field to given value.

### HasCentroid

`func (o *ContentMeshMetadata) HasCentroid() bool`

HasCentroid returns a boolean if a field has been set.

### GetExtentsMin

`func (o *ContentMeshMetadata) GetExtentsMin() ContentVector3`

GetExtentsMin returns the ExtentsMin field if non-nil, zero value otherwise.

### GetExtentsMinOk

`func (o *ContentMeshMetadata) GetExtentsMinOk() (*ContentVector3, bool)`

GetExtentsMinOk returns a tuple with the ExtentsMin field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtentsMin

`func (o *ContentMeshMetadata) SetExtentsMin(v ContentVector3)`

SetExtentsMin sets ExtentsMin field to given value.

### HasExtentsMin

`func (o *ContentMeshMetadata) HasExtentsMin() bool`

HasExtentsMin returns a boolean if a field has been set.

### GetExtentsMax

`func (o *ContentMeshMetadata) GetExtentsMax() ContentVector3`

GetExtentsMax returns the ExtentsMax field if non-nil, zero value otherwise.

### GetExtentsMaxOk

`func (o *ContentMeshMetadata) GetExtentsMaxOk() (*ContentVector3, bool)`

GetExtentsMaxOk returns a tuple with the ExtentsMax field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetExtentsMax

`func (o *ContentMeshMetadata) SetExtentsMax(v ContentVector3)`

SetExtentsMax sets ExtentsMax field to given value.

### HasExtentsMax

`func (o *ContentMeshMetadata) HasExtentsMax() bool`

HasExtentsMax returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


