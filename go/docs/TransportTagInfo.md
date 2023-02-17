# TransportTagInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Time** | Pointer to **float64** |  | [optional] 
**Type** | Pointer to [**TransportTagType**](TransportTagType.md) |  | [optional] [default to TAG_TYPE_UNKNOWN]
**Value** | Pointer to **string** |  | [optional] 

## Methods

### NewTransportTagInfo

`func NewTransportTagInfo() *TransportTagInfo`

NewTransportTagInfo instantiates a new TransportTagInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportTagInfoWithDefaults

`func NewTransportTagInfoWithDefaults() *TransportTagInfo`

NewTransportTagInfoWithDefaults instantiates a new TransportTagInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTime

`func (o *TransportTagInfo) GetTime() float64`

GetTime returns the Time field if non-nil, zero value otherwise.

### GetTimeOk

`func (o *TransportTagInfo) GetTimeOk() (*float64, bool)`

GetTimeOk returns a tuple with the Time field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTime

`func (o *TransportTagInfo) SetTime(v float64)`

SetTime sets Time field to given value.

### HasTime

`func (o *TransportTagInfo) HasTime() bool`

HasTime returns a boolean if a field has been set.

### GetType

`func (o *TransportTagInfo) GetType() TransportTagType`

GetType returns the Type field if non-nil, zero value otherwise.

### GetTypeOk

`func (o *TransportTagInfo) GetTypeOk() (*TransportTagType, bool)`

GetTypeOk returns a tuple with the Type field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetType

`func (o *TransportTagInfo) SetType(v TransportTagType)`

SetType sets Type field to given value.

### HasType

`func (o *TransportTagInfo) HasType() bool`

HasType returns a boolean if a field has been set.

### GetValue

`func (o *TransportTagInfo) GetValue() string`

GetValue returns the Value field if non-nil, zero value otherwise.

### GetValueOk

`func (o *TransportTagInfo) GetValueOk() (*string, bool)`

GetValueOk returns a tuple with the Value field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetValue

`func (o *TransportTagInfo) SetValue(v string)`

SetValue sets Value field to given value.

### HasValue

`func (o *TransportTagInfo) HasValue() bool`

HasValue returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


