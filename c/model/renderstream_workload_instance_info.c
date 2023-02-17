#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_workload_instance_info.h"



renderstream_workload_instance_info_t *renderstream_workload_instance_info_create(
    char *machine_uid,
    char *machine_name,
    char *state,
    char *health_message,
    char *health_details
    ) {
    renderstream_workload_instance_info_t *renderstream_workload_instance_info_local_var = malloc(sizeof(renderstream_workload_instance_info_t));
    if (!renderstream_workload_instance_info_local_var) {
        return NULL;
    }
    renderstream_workload_instance_info_local_var->machine_uid = machine_uid;
    renderstream_workload_instance_info_local_var->machine_name = machine_name;
    renderstream_workload_instance_info_local_var->state = state;
    renderstream_workload_instance_info_local_var->health_message = health_message;
    renderstream_workload_instance_info_local_var->health_details = health_details;

    return renderstream_workload_instance_info_local_var;
}


void renderstream_workload_instance_info_free(renderstream_workload_instance_info_t *renderstream_workload_instance_info) {
    if(NULL == renderstream_workload_instance_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_workload_instance_info->machine_uid) {
        free(renderstream_workload_instance_info->machine_uid);
        renderstream_workload_instance_info->machine_uid = NULL;
    }
    if (renderstream_workload_instance_info->machine_name) {
        free(renderstream_workload_instance_info->machine_name);
        renderstream_workload_instance_info->machine_name = NULL;
    }
    if (renderstream_workload_instance_info->state) {
        free(renderstream_workload_instance_info->state);
        renderstream_workload_instance_info->state = NULL;
    }
    if (renderstream_workload_instance_info->health_message) {
        free(renderstream_workload_instance_info->health_message);
        renderstream_workload_instance_info->health_message = NULL;
    }
    if (renderstream_workload_instance_info->health_details) {
        free(renderstream_workload_instance_info->health_details);
        renderstream_workload_instance_info->health_details = NULL;
    }
    free(renderstream_workload_instance_info);
}

cJSON *renderstream_workload_instance_info_convertToJSON(renderstream_workload_instance_info_t *renderstream_workload_instance_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_workload_instance_info->machine_uid
    if(renderstream_workload_instance_info->machine_uid) { 
    if(cJSON_AddStringToObject(item, "machineUid", renderstream_workload_instance_info->machine_uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_instance_info->machine_name
    if(renderstream_workload_instance_info->machine_name) { 
    if(cJSON_AddStringToObject(item, "machineName", renderstream_workload_instance_info->machine_name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_instance_info->state
    if(renderstream_workload_instance_info->state) { 
    if(cJSON_AddStringToObject(item, "state", renderstream_workload_instance_info->state) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_instance_info->health_message
    if(renderstream_workload_instance_info->health_message) { 
    if(cJSON_AddStringToObject(item, "healthMessage", renderstream_workload_instance_info->health_message) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_instance_info->health_details
    if(renderstream_workload_instance_info->health_details) { 
    if(cJSON_AddStringToObject(item, "healthDetails", renderstream_workload_instance_info->health_details) == NULL) {
    goto fail; //String
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

    // renderstream_workload_instance_info->machine_uid
    cJSON *machine_uid = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "machineUid");
    if (machine_uid) { 
    if(!cJSON_IsString(machine_uid))
    {
    goto end; //String
    }
    }

    // renderstream_workload_instance_info->machine_name
    cJSON *machine_name = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "machineName");
    if (machine_name) { 
    if(!cJSON_IsString(machine_name))
    {
    goto end; //String
    }
    }

    // renderstream_workload_instance_info->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "state");
    if (state) { 
    if(!cJSON_IsString(state))
    {
    goto end; //String
    }
    }

    // renderstream_workload_instance_info->health_message
    cJSON *health_message = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "healthMessage");
    if (health_message) { 
    if(!cJSON_IsString(health_message))
    {
    goto end; //String
    }
    }

    // renderstream_workload_instance_info->health_details
    cJSON *health_details = cJSON_GetObjectItemCaseSensitive(renderstream_workload_instance_infoJSON, "healthDetails");
    if (health_details) { 
    if(!cJSON_IsString(health_details))
    {
    goto end; //String
    }
    }


    renderstream_workload_instance_info_local_var = renderstream_workload_instance_info_create (
        machine_uid ? strdup(machine_uid->valuestring) : NULL,
        machine_name ? strdup(machine_name->valuestring) : NULL,
        state ? strdup(state->valuestring) : NULL,
        health_message ? strdup(health_message->valuestring) : NULL,
        health_details ? strdup(health_details->valuestring) : NULL
        );

    return renderstream_workload_instance_info_local_var;
end:
    return NULL;

}
