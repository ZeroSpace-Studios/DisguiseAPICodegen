#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_workload_instance_info.h"


char* statusrenderstream_workload_instance_info_ToString(d3_api_renderstream_workload_instance_info__e status) {
    char* statusArray[] =  { "NULL", "UNKNOWN", "CRASHED", "ERROR", "STOPPING", "STOPPED", "LAUNCHING", "STARTING", "READY", "STANDBY", "RUNNING" };
	return statusArray[status];
}

d3_api_renderstream_workload_instance_info__e statusrenderstream_workload_instance_info_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "UNKNOWN", "CRASHED", "ERROR", "STOPPING", "STOPPED", "LAUNCHING", "STARTING", "READY", "STANDBY", "RUNNING" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

renderstream_workload_instance_info_t *renderstream_workload_instance_info_create(
    char *workloadid,
    long instanceid,
    int process_running,
    int dropping_frames,
    int dropping_input_frames
    ) {
    renderstream_workload_instance_info_t *renderstream_workload_instance_info_local_var = malloc(sizeof(renderstream_workload_instance_info_t));
    if (!renderstream_workload_instance_info_local_var) {
        return NULL;
    }
    renderstream_workload_instance_info_local_var->workloadid = workloadid;
    renderstream_workload_instance_info_local_var->instanceid = instanceid;
    renderstream_workload_instance_info_local_var->process_running = process_running;
    renderstream_workload_instance_info_local_var->dropping_frames = dropping_frames;
    renderstream_workload_instance_info_local_var->status = status;
    renderstream_workload_instance_info_local_var->dropping_input_frames = dropping_input_frames;

    return renderstream_workload_instance_info_local_var;
}


void renderstream_workload_instance_info_free(renderstream_workload_instance_info_t *renderstream_workload_instance_info) {
    if(NULL == renderstream_workload_instance_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_workload_instance_info->workloadid) {
        free(renderstream_workload_instance_info->workloadid);
        renderstream_workload_instance_info->workloadid = NULL;
    }
    free(renderstream_workload_instance_info);
}

cJSON *renderstream_workload_instance_info_convertToJSON(renderstream_workload_instance_info_t *renderstream_workload_instance_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_workload_instance_info->workloadid
    if(renderstream_workload_instance_info->workloadid) { 
    if(cJSON_AddStringToObject(item, "workloadid", renderstream_workload_instance_info->workloadid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_instance_info->instanceid
    if(renderstream_workload_instance_info->instanceid) { 
    if(cJSON_AddNumberToObject(item, "instanceid", renderstream_workload_instance_info->instanceid) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_workload_instance_info->process_running
    if(renderstream_workload_instance_info->process_running) { 
    if(cJSON_AddBoolToObject(item, "processRunning", renderstream_workload_instance_info->process_running) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_workload_instance_info->dropping_frames
    if(renderstream_workload_instance_info->dropping_frames) { 
    if(cJSON_AddBoolToObject(item, "droppingFrames", renderstream_workload_instance_info->dropping_frames) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_workload_instance_info->status
    
    


    // renderstream_workload_instance_info->dropping_input_frames
    if(renderstream_workload_instance_info->dropping_input_frames) { 
    if(cJSON_AddBoolToObject(item, "droppingInputFrames", renderstream_workload_instance_info->dropping_input_frames) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

renderstream_workload_instance_info_t *renderstream_workload_instance_info_parseFromJSON(cJSON *renderstream_workload_instance_infoJSON){

    renderstream_workload_instance_info_t *renderstream_workload_instance_info_local_var = NULL;

    // renderstream_workload_instance_info->workloadid
    cJSON *workloadid = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "workloadid");
    if (workloadid) { 
    if(!cJSON_IsString(workloadid))
    {
    goto end; //String
    }
    }

    // renderstream_workload_instance_info->instanceid
    cJSON *instanceid = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "instanceid");
    if (instanceid) { 
    if(!cJSON_IsNumber(instanceid))
    {
    goto end; //Numeric
    }
    }

    // renderstream_workload_instance_info->process_running
    cJSON *process_running = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "processRunning");
    if (process_running) { 
    if(!cJSON_IsBool(process_running))
    {
    goto end; //Bool
    }
    }

    // renderstream_workload_instance_info->dropping_frames
    cJSON *dropping_frames = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "droppingFrames");
    if (dropping_frames) { 
    if(!cJSON_IsBool(dropping_frames))
    {
    goto end; //Bool
    }
    }

    // renderstream_workload_instance_info->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "status");
    }

    // renderstream_workload_instance_info->dropping_input_frames
    cJSON *dropping_input_frames = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "droppingInputFrames");
    if (dropping_input_frames) { 
    if(!cJSON_IsBool(dropping_input_frames))
    {
    goto end; //Bool
    }
    }


    renderstream_workload_instance_info_local_var = renderstream_workload_instance_info_create (
        workloadid ? strdup(workloadid->valuestring) : NULL,
        instanceid ? instanceid->valuedouble : 0,
        process_running ? process_running->valueint : 0,
        dropping_frames ? dropping_frames->valueint : 0,
        dropping_input_frames ? dropping_input_frames->valueint : 0
        );

    return renderstream_workload_instance_info_local_var;
end:
    return NULL;

}
