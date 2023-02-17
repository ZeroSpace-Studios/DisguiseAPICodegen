# RpcStatus

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Code** | Pointer to **int32** | The status code, which should be an enum value of [google.rpc.Code][google.rpc.Code]. | [optional] 
**Message** | Pointer to **string** | A developer-facing error message, which should be in English. Any user-facing error message should be localized and sent in the [google.rpc.Status.details][google.rpc.Status.details] field, or localized by the client. | [optional] 
**Details** | Pointer to [**[]ProtobufAny**](ProtobufAny.md) | A list of messages that carry the error details.  There is a common set of message types for APIs to use. | [optional] 

## Methods

### NewRpcStatus

`func NewRpcStatus() *RpcStatus`

NewRpcStatus instantiates a new RpcStatus object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRpcStatusWithDefaults

`func NewRpcStatusWithDefaults() *RpcStatus`

NewRpcStatusWithDefaults instantiates a new RpcStatus object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetCode

`func (o *RpcStatus) GetCode() int32`

GetCode returns the Code field if non-nil, zero value otherwise.

### GetCodeOk

`func (o *RpcStatus) GetCodeOk() (*int32, bool)`

GetCodeOk returns a tuple with the Code field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetCode

`func (o *RpcStatus) SetCode(v int32)`

SetCode sets Code field to given value.

### HasCode

`func (o *RpcStatus) HasCode() bool`

HasCode returns a boolean if a field has been set.

### GetMessage

`func (o *RpcStatus) GetMessage() string`

GetMessage returns the Message field if non-nil, zero value otherwise.

### GetMessageOk

`func (o *RpcStatus) GetMessageOk() (*string, bool)`

GetMessageOk returns a tuple with the Message field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetMessage

`func (o *RpcStatus) SetMessage(v string)`

SetMessage sets Message field to given value.

### HasMessage

`func (o *RpcStatus) HasMessage() bool`

HasMessage returns a boolean if a field has been set.

### GetDetails

`func (o *RpcStatus) GetDetails() []ProtobufAny`

GetDetails returns the Details field if non-nil, zero value otherwise.

### GetDetailsOk

`func (o *RpcStatus) GetDetailsOk() (*[]ProtobufAny, bool)`

GetDetailsOk returns a tuple with the Details field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetDetails

`func (o *RpcStatus) SetDetails(v []ProtobufAny)`

SetDetails sets Details field to given value.

### HasDetails

`func (o *RpcStatus) HasDetails() bool`

HasDetails returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


