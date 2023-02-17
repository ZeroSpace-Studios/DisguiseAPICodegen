# TransportGotoNoteInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Transport** | Pointer to [**D3apiLocator**](D3apiLocator.md) |  | [optional] 
**Note** | Pointer to **string** |  | [optional] 
**Playmode** | Pointer to [**TransportAPIPlayMode**](TransportAPIPlayMode.md) |  | [optional] [default to NOT_SET]

## Methods

### NewTransportGotoNoteInfo

`func NewTransportGotoNoteInfo() *TransportGotoNoteInfo`

NewTransportGotoNoteInfo instantiates a new TransportGotoNoteInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewTransportGotoNoteInfoWithDefaults

`func NewTransportGotoNoteInfoWithDefaults() *TransportGotoNoteInfo`

NewTransportGotoNoteInfoWithDefaults instantiates a new TransportGotoNoteInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetTransport

`func (o *TransportGotoNoteInfo) GetTransport() D3apiLocator`

GetTransport returns the Transport field if non-nil, zero value otherwise.

### GetTransportOk

`func (o *TransportGotoNoteInfo) GetTransportOk() (*D3apiLocator, bool)`

GetTransportOk returns a tuple with the Transport field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetTransport

`func (o *TransportGotoNoteInfo) SetTransport(v D3apiLocator)`

SetTransport sets Transport field to given value.

### HasTransport

`func (o *TransportGotoNoteInfo) HasTransport() bool`

HasTransport returns a boolean if a field has been set.

### GetNote

`func (o *TransportGotoNoteInfo) GetNote() string`

GetNote returns the Note field if non-nil, zero value otherwise.

### GetNoteOk

`func (o *TransportGotoNoteInfo) GetNoteOk() (*string, bool)`

GetNoteOk returns a tuple with the Note field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNote

`func (o *TransportGotoNoteInfo) SetNote(v string)`

SetNote sets Note field to given value.

### HasNote

`func (o *TransportGotoNoteInfo) HasNote() bool`

HasNote returns a boolean if a field has been set.

### GetPlaymode

`func (o *TransportGotoNoteInfo) GetPlaymode() TransportAPIPlayMode`

GetPlaymode returns the Playmode field if non-nil, zero value otherwise.

### GetPlaymodeOk

`func (o *TransportGotoNoteInfo) GetPlaymodeOk() (*TransportAPIPlayMode, bool)`

GetPlaymodeOk returns a tuple with the Playmode field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPlaymode

`func (o *TransportGotoNoteInfo) SetPlaymode(v TransportAPIPlayMode)`

SetPlaymode sets Playmode field to given value.

### HasPlaymode

`func (o *TransportGotoNoteInfo) HasPlaymode() bool`

HasPlaymode returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


