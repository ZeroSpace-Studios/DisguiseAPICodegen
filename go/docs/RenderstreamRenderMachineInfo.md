# RenderstreamRenderMachineInfo

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**Name** | Pointer to **string** |  | [optional] 
**StatusString** | Pointer to **string** |  | [optional] 
**Status** | Pointer to [**RenderMachineInfoStatus**](RenderMachineInfoStatus.md) |  | [optional] [default to UNKNOWN]
**Online** | Pointer to **bool** |  | [optional] 
**LoadFactor** | Pointer to **float32** |  | [optional] 
**PreferredAdapter** | Pointer to **string** |  | [optional] 
**NetworkAdapters** | Pointer to [**[]RenderstreamAdapterInfo**](RenderstreamAdapterInfo.md) |  | [optional] 
**Streams** | Pointer to [**[]RenderstreamStreamInfo**](RenderstreamStreamInfo.md) |  | [optional] 
**Assets** | Pointer to [**[]RenderstreamAssetInfo**](RenderstreamAssetInfo.md) |  | [optional] 

## Methods

### NewRenderstreamRenderMachineInfo

`func NewRenderstreamRenderMachineInfo() *RenderstreamRenderMachineInfo`

NewRenderstreamRenderMachineInfo instantiates a new RenderstreamRenderMachineInfo object
This constructor will assign default values to properties that have it defined,
and makes sure properties required by API are set, but the set of arguments
will change when the set of required properties is changed

### NewRenderstreamRenderMachineInfoWithDefaults

`func NewRenderstreamRenderMachineInfoWithDefaults() *RenderstreamRenderMachineInfo`

NewRenderstreamRenderMachineInfoWithDefaults instantiates a new RenderstreamRenderMachineInfo object
This constructor will only assign default values to properties that have it defined,
but it doesn't guarantee that properties required by API are set

### GetName

`func (o *RenderstreamRenderMachineInfo) GetName() string`

GetName returns the Name field if non-nil, zero value otherwise.

### GetNameOk

`func (o *RenderstreamRenderMachineInfo) GetNameOk() (*string, bool)`

GetNameOk returns a tuple with the Name field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetName

`func (o *RenderstreamRenderMachineInfo) SetName(v string)`

SetName sets Name field to given value.

### HasName

`func (o *RenderstreamRenderMachineInfo) HasName() bool`

HasName returns a boolean if a field has been set.

### GetStatusString

`func (o *RenderstreamRenderMachineInfo) GetStatusString() string`

GetStatusString returns the StatusString field if non-nil, zero value otherwise.

### GetStatusStringOk

`func (o *RenderstreamRenderMachineInfo) GetStatusStringOk() (*string, bool)`

GetStatusStringOk returns a tuple with the StatusString field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatusString

`func (o *RenderstreamRenderMachineInfo) SetStatusString(v string)`

SetStatusString sets StatusString field to given value.

### HasStatusString

`func (o *RenderstreamRenderMachineInfo) HasStatusString() bool`

HasStatusString returns a boolean if a field has been set.

### GetStatus

`func (o *RenderstreamRenderMachineInfo) GetStatus() RenderMachineInfoStatus`

GetStatus returns the Status field if non-nil, zero value otherwise.

### GetStatusOk

`func (o *RenderstreamRenderMachineInfo) GetStatusOk() (*RenderMachineInfoStatus, bool)`

GetStatusOk returns a tuple with the Status field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStatus

`func (o *RenderstreamRenderMachineInfo) SetStatus(v RenderMachineInfoStatus)`

SetStatus sets Status field to given value.

### HasStatus

`func (o *RenderstreamRenderMachineInfo) HasStatus() bool`

HasStatus returns a boolean if a field has been set.

### GetOnline

`func (o *RenderstreamRenderMachineInfo) GetOnline() bool`

GetOnline returns the Online field if non-nil, zero value otherwise.

### GetOnlineOk

`func (o *RenderstreamRenderMachineInfo) GetOnlineOk() (*bool, bool)`

GetOnlineOk returns a tuple with the Online field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetOnline

`func (o *RenderstreamRenderMachineInfo) SetOnline(v bool)`

SetOnline sets Online field to given value.

### HasOnline

`func (o *RenderstreamRenderMachineInfo) HasOnline() bool`

HasOnline returns a boolean if a field has been set.

### GetLoadFactor

`func (o *RenderstreamRenderMachineInfo) GetLoadFactor() float32`

GetLoadFactor returns the LoadFactor field if non-nil, zero value otherwise.

### GetLoadFactorOk

`func (o *RenderstreamRenderMachineInfo) GetLoadFactorOk() (*float32, bool)`

GetLoadFactorOk returns a tuple with the LoadFactor field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetLoadFactor

`func (o *RenderstreamRenderMachineInfo) SetLoadFactor(v float32)`

SetLoadFactor sets LoadFactor field to given value.

### HasLoadFactor

`func (o *RenderstreamRenderMachineInfo) HasLoadFactor() bool`

HasLoadFactor returns a boolean if a field has been set.

### GetPreferredAdapter

`func (o *RenderstreamRenderMachineInfo) GetPreferredAdapter() string`

GetPreferredAdapter returns the PreferredAdapter field if non-nil, zero value otherwise.

### GetPreferredAdapterOk

`func (o *RenderstreamRenderMachineInfo) GetPreferredAdapterOk() (*string, bool)`

GetPreferredAdapterOk returns a tuple with the PreferredAdapter field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetPreferredAdapter

`func (o *RenderstreamRenderMachineInfo) SetPreferredAdapter(v string)`

SetPreferredAdapter sets PreferredAdapter field to given value.

### HasPreferredAdapter

`func (o *RenderstreamRenderMachineInfo) HasPreferredAdapter() bool`

HasPreferredAdapter returns a boolean if a field has been set.

### GetNetworkAdapters

`func (o *RenderstreamRenderMachineInfo) GetNetworkAdapters() []RenderstreamAdapterInfo`

GetNetworkAdapters returns the NetworkAdapters field if non-nil, zero value otherwise.

### GetNetworkAdaptersOk

`func (o *RenderstreamRenderMachineInfo) GetNetworkAdaptersOk() (*[]RenderstreamAdapterInfo, bool)`

GetNetworkAdaptersOk returns a tuple with the NetworkAdapters field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetNetworkAdapters

`func (o *RenderstreamRenderMachineInfo) SetNetworkAdapters(v []RenderstreamAdapterInfo)`

SetNetworkAdapters sets NetworkAdapters field to given value.

### HasNetworkAdapters

`func (o *RenderstreamRenderMachineInfo) HasNetworkAdapters() bool`

HasNetworkAdapters returns a boolean if a field has been set.

### GetStreams

`func (o *RenderstreamRenderMachineInfo) GetStreams() []RenderstreamStreamInfo`

GetStreams returns the Streams field if non-nil, zero value otherwise.

### GetStreamsOk

`func (o *RenderstreamRenderMachineInfo) GetStreamsOk() (*[]RenderstreamStreamInfo, bool)`

GetStreamsOk returns a tuple with the Streams field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetStreams

`func (o *RenderstreamRenderMachineInfo) SetStreams(v []RenderstreamStreamInfo)`

SetStreams sets Streams field to given value.

### HasStreams

`func (o *RenderstreamRenderMachineInfo) HasStreams() bool`

HasStreams returns a boolean if a field has been set.

### GetAssets

`func (o *RenderstreamRenderMachineInfo) GetAssets() []RenderstreamAssetInfo`

GetAssets returns the Assets field if non-nil, zero value otherwise.

### GetAssetsOk

`func (o *RenderstreamRenderMachineInfo) GetAssetsOk() (*[]RenderstreamAssetInfo, bool)`

GetAssetsOk returns a tuple with the Assets field if it's non-nil, zero value otherwise
and a boolean to check if the value has been set.

### SetAssets

`func (o *RenderstreamRenderMachineInfo) SetAssets(v []RenderstreamAssetInfo)`

SetAssets sets Assets field to given value.

### HasAssets

`func (o *RenderstreamRenderMachineInfo) HasAssets() bool`

HasAssets returns a boolean if a field has been set.


[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


