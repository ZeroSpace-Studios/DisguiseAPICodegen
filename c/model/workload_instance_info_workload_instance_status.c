#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "workload_instance_info_workload_instance_status.h"


char* workload_instance_info_workload_instance_status_workload_instance_info_workload_instance_status_ToString(d3_api_workload_instance_info_workload_instance_status__e workload_instance_info_workload_instance_status) {
    char *workload_instance_info_workload_instance_statusArray[] =  { "NULL", "UNKNOWN", "CRASHED", "ERROR", "STOPPING", "STOPPED", "LAUNCHING", "STARTING", "READY", "STANDBY", "RUNNING" };
    return workload_instance_info_workload_instance_statusArray[workload_instance_info_workload_instance_status];
}

d3_api_workload_instance_info_workload_instance_status__e workload_instance_info_workload_instance_status_workload_instance_info_workload_instance_status_FromString(char* workload_instance_info_workload_instance_status) {
    int stringToReturn = 0;
    char *workload_instance_info_workload_instance_statusArray[] =  { "NULL", "UNKNOWN", "CRASHED", "ERROR", "STOPPING", "STOPPED", "LAUNCHING", "STARTING", "READY", "STANDBY", "RUNNING" };
    size_t sizeofArray = sizeof(workload_instance_info_workload_instance_statusArray) / sizeof(workload_instance_info_workload_instance_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(workload_instance_info_workload_instance_status, workload_instance_info_workload_instance_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *workload_instance_info_workload_instance_status_workload_instance_info_workload_instance_status_convertToJSON(d3_api_workload_instance_info_workload_instance_status__e workload_instance_info_workload_instance_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "workload_instance_info_workload_instance_status", workload_instance_info_workload_instance_status_workload_instance_info_workload_instance_status_ToString(workload_instance_info_workload_instance_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_workload_instance_info_workload_instance_status__e workload_instance_info_workload_instance_status_workload_instance_info_workload_instance_status_parseFromJSON(cJSON *workload_instance_info_workload_instance_statusJSON) {
    d3_api_workload_instance_info_workload_instance_status__e *workload_instance_info_workload_instance_status = NULL;
    d3_api_workload_instance_info_workload_instance_status__e workload_instance_info_workload_instance_statusVariable;
    cJSON *workload_instance_info_workload_instance_statusVar = cJSON_GetObjectItemCaseSensitive(workload_instance_info_workload_instance_statusJSON, "workload_instance_info_workload_instance_status");
    if(!cJSON_IsString(workload_instance_info_workload_instance_statusVar) || (workload_instance_info_workload_instance_statusVar->valuestring == NULL)){
        goto end;
    }
    workload_instance_info_workload_instance_statusVariable = workload_instance_info_workload_instance_status_workload_instance_info_workload_instance_status_FromString(workload_instance_info_workload_instance_statusVar->valuestring);
    return workload_instance_info_workload_instance_statusVariable;
end:
    return 0;
}
