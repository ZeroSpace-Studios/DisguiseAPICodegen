# TransportGoToTagInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Type** | Pointer to [**TransportTagType**](TransportTagType.md) |  | [optional] [default to TAG_TYPE_UNKNOWN]
**Value** | Pointer to **string** |  | [optional] 
**AllowGlobalJump** | Pointer to **bool** |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportGoToTagInfo

`func NewTransportGoToTagInfo() *TransportGoToTagInfo`

NewTransportGoToTagInfo instantiates a new TransportGoToTagInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportGoToTagInfoWithDefaults

`func NewTransportGoToTagInfoWithDefaults() *TransportGoToTagInfo`

NewTransportGoToTagInfoWithDefaults instantiates a new TransportGoToTagInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportGoToTagInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportGoToTagInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportGoToTagInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportGoToTagInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetType

`func (o *TransportGoToTagInfo) GetType() TransportTagType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *TransportGoToTagInfo) GetTypeOk() (*TransportTagType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *TransportGoToTagInfo) SetType(v TransportTagType)`

SetType sets Type field to given value.

### HasType

`func (o *TransportGoToTagInfo) HasType() bool`

HasType returns a boolean if a field has been set.

### GetValue

`func (o *TransportGoToTagInfo) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *TransportGoToTagInfo) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *TransportGoToTagInfo) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *TransportGoToTagInfo) HasValue() bool`

HasValue returns a boolean if a field has been set.

### GetAllowGlobalJump

`func (o *TransportGoToTagInfo) GetAllowGlobalJump() bool`

GetAllowGlobalJump returns the AllowGlobalJump field if non-nil, zero value otherwise.

### GetAllowGlobalJumpOk

`func (o *TransportGoToTagInfo) GetAllowGlobalJumpOk() (*bool, bool)`

GetAllowGlobalJumpOk returns a tuple with the AllowGlobalJump field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAllowGlobalJump

`func (o *TransportGoToTagInfo) SetAllowGlobalJump(v bool)`

SetAllowGlobalJump sets AllowGlobalJump field to given value.

### HasAllowGlobalJump

`func (o *TransportGoToTagInfo) HasAllowGlobalJump() bool`

HasAllowGlobalJump returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportGoToTagInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportGoToTagInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportGoToTagInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportGoToTagInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


