# StatusGetSessionResult


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**is_running_solo** | **bool** | Is machine is running in the solo mode. Solo mode means that project is running on a standalone machine (not director set), so not as part of a wider session. | [optional] 
**is_director_dedicated** | **bool** | Is a director machine is set as dedicated or not Dedicated means that the machine controls Actors but is not intended to output video to the stage; it is used only for visualisation. It if is not dedicated then that means the machine controls all other Actors in the network but also outputs video through its remaining outputs. | [optional] 
**director** | [**StatusMachineInfo**](StatusMachineInfo.md) |  | [optional] 
**actors** | [**[StatusMachineInfo]**](StatusMachineInfo.md) |  | [optional] 
**understudies** | [**[StatusMachineInfo]**](StatusMachineInfo.md) |  | [optional] 
**any string name** | **bool, date, datetime, dict, float, int, list, str, none_type** | any string name can be used but the value must be the correct type | [optional]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


