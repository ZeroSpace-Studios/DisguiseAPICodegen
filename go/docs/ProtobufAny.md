# ProtobufAny

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**TypeUrl** | Pointer to **string** | A URL/resource name whose content describes the type of the serialized protocol buffer message.  For URLs which use the scheme &#x60;http&#x60;, &#x60;https&#x60;, or no scheme, the following restrictions and interpretations apply:  * If no scheme is provided, &#x60;https&#x60; is assumed. * The last segment of the URL&#39;s path must represent the fully   qualified name of the type (as in &#x60;path/google.protobuf.Duration&#x60;).   The name should be in a canonical form (e.g., leading \&quot;.\&quot; is   not accepted). * An HTTP GET on the URL must yield a [google.protobuf.Type][]   value in binary format, or produce an error. * Applications are allowed to cache lookup results based on the   URL, or have them precompiled into a binary to avoid any   lookup. Therefore, binary compatibility needs to be preserved   on changes to types. (Use versioned type names to manage   breaking changes.)  Schemes other than &#x60;http&#x60;, &#x60;https&#x60; (or the empty scheme) might be used with implementation specific semantics. | [optional] 
**Value** | Pointer to **string** | Must be a valid serialized protocol buffer of the above specified type. | [optional] 

## Methods

### NewProtobufAny

`func NewProtobufAny() *ProtobufAny`

NewProtobufAny instantiates a new ProtobufAny object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewProtobufAnyWithDefaults

`func NewProtobufAnyWithDefaults() *ProtobufAny`

NewProtobufAnyWithDefaults instantiates a new ProtobufAny object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTypeUrl

`func (o *ProtobufAny) GetTypeUrl() string`

GetTypeUrl returns the TypeUrl field if non-nil, zero value otherwise.

### GetTypeUrlOk

`func (o *ProtobufAny) GetTypeUrlOk() (*string, bool)`

GetTypeUrlOk returns a tuple with the TypeUrl field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTypeUrl

`func (o *ProtobufAny) SetTypeUrl(v string)`

SetTypeUrl sets TypeUrl field to given value.

### HasTypeUrl

`func (o *ProtobufAny) HasTypeUrl() bool`

HasTypeUrl returns a boolean if a field has been set.

### GetValue

`func (o *ProtobufAny) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *ProtobufAny) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *ProtobufAny) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *ProtobufAny) HasValue() bool`

HasValue returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


