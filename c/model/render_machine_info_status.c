#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "render_machine_info_status.h"


char* render_machine_info_status_render_machine_info_status_ToString(d3_api_render_machine_info_status__e render_machine_info_status) {
    char *render_machine_info_statusArray[] =  { "NULL", "UNKNOWN", "OFFLINE", "OK", "STANDBY", "FAILED" };
    return render_machine_info_statusArray[render_machine_info_status];
}

d3_api_render_machine_info_status__e render_machine_info_status_render_machine_info_status_FromString(char* render_machine_info_status) {
    int stringToReturn = 0;
    char *render_machine_info_statusArray[] =  { "NULL", "UNKNOWN", "OFFLINE", "OK", "STANDBY", "FAILED" };
    size_t sizeofArray = sizeof(render_machine_info_statusArray) / sizeof(render_machine_info_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(render_machine_info_status, render_machine_info_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *render_machine_info_status_render_machine_info_status_convertToJSON(d3_api_render_machine_info_status__e render_machine_info_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "render_machine_info_status", render_machine_info_status_render_machine_info_status_ToString(render_machine_info_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_render_machine_info_status__e render_machine_info_status_render_machine_info_status_parseFromJSON(cJSON *render_machine_info_statusJSON) {
    d3_api_render_machine_info_status__e *render_machine_info_status = NULL;
    d3_api_render_machine_info_status__e render_machine_info_statusVariable;
    cJSON *render_machine_info_statusVar = cJSON_GetObjectItemCaseSensitive(render_machine_info_statusJSON, "render_machine_info_status");
    if(!cJSON_IsString(render_machine_info_statusVar) || (render_machine_info_statusVar->valuestring == NULL)){
        goto end;
    }
    render_machine_info_statusVariable = render_machine_info_status_render_machine_info_status_FromString(render_machine_info_statusVar->valuestring);
    return render_machine_info_statusVariable;
end:
    return 0;
}
