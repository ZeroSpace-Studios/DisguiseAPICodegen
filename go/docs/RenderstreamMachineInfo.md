# RenderstreamMachineInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Uid** | Pointer to **string** |  | [optional] 
**Name** | Pointer to **string** |  | [optional] 
**PreferredSyncAdapter** | Pointer to **string** |  | [optional] 
**Adapters** | Pointer to [**[]RenderstreamAdapterInfo**](RenderstreamAdapterInfo.md) |  | [optional] 

## Methods

### NewRenderstreamMachineInfo

`func NewRenderstreamMachineInfo() *RenderstreamMachineInfo`

NewRenderstreamMachineInfo instantiates a new RenderstreamMachineInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamMachineInfoWithDefaults

`func NewRenderstreamMachineInfoWithDefaults() *RenderstreamMachineInfo`

NewRenderstreamMachineInfoWithDefaults instantiates a new RenderstreamMachineInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetUid

`func (o *RenderstreamMachineInfo) GetUid() string`

GetUid returns the Uid field if non-nil, zero value otherwise.

### GetUidOk

`func (o *RenderstreamMachineInfo) GetUidOk() (*string, bool)`

GetUidOk returns a tuple with the Uid field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetUid

`func (o *RenderstreamMachineInfo) SetUid(v string)`

SetUid sets Uid field to given value.

### HasUid

`func (o *RenderstreamMachineInfo) HasUid() bool`

HasUid returns a boolean if a field has been set.

### GetName

`func (o *RenderstreamMachineInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *RenderstreamMachineInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *RenderstreamMachineInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *RenderstreamMachineInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetPreferredSyncAdapter

`func (o *RenderstreamMachineInfo) GetPreferredSyncAdapter() string`

GetPreferredSyncAdapter returns the PreferredSyncAdapter field if non-nil, zero value otherwise.

### GetPreferredSyncAdapterOk

`func (o *RenderstreamMachineInfo) GetPreferredSyncAdapterOk() (*string, bool)`

GetPreferredSyncAdapterOk returns a tuple with the PreferredSyncAdapter field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPreferredSyncAdapter

`func (o *RenderstreamMachineInfo) SetPreferredSyncAdapter(v string)`

SetPreferredSyncAdapter sets PreferredSyncAdapter field to given value.

### HasPreferredSyncAdapter

`func (o *RenderstreamMachineInfo) HasPreferredSyncAdapter() bool`

HasPreferredSyncAdapter returns a boolean if a field has been set.

### GetAdapters

`func (o *RenderstreamMachineInfo) GetAdapters() []RenderstreamAdapterInfo`

GetAdapters returns the Adapters field if non-nil, zero value otherwise.

### GetAdaptersOk

`func (o *RenderstreamMachineInfo) GetAdaptersOk() (*[]RenderstreamAdapterInfo, bool)`

GetAdaptersOk returns a tuple with the Adapters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAdapters

`func (o *RenderstreamMachineInfo) SetAdapters(v []RenderstreamAdapterInfo)`

SetAdapters sets Adapters field to given value.

### HasAdapters

`func (o *RenderstreamMachineInfo) HasAdapters() bool`

HasAdapters returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


