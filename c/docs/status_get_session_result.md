# status_get_session_result_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**is_running_solo** | **int** | Is machine is running in the solo mode. Solo mode means that project is running on a standalone machine (not director set), so not as part of a wider session. | [optional] 
**is_director_dedicated** | **int** | Is a director machine is set as dedicated or not Dedicated means that the machine controls Actors but is not intended to output video to the stage; it is used only for visualisation. It if is not dedicated then that means the machine controls all other Actors in the network but also outputs video through its remaining outputs. | [optional] 
**director** | [**status_machine_info_t**](status_machine_info.md) \* |  | [optional] 
**actors** | [**list_t**](status_machine_info.md) \* |  | [optional] 
**understudies** | [**list_t**](status_machine_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


