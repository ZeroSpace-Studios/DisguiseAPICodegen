#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_stream_info.h"


char* statusrenderstream_stream_info_ToString(d3_api_renderstream_stream_info__e status) {
    char* statusArray[] =  { "NULL", "None", "Good", "DroppingFrames", "BadStream", "NoStream", "Offline" };
	return statusArray[status];
}

d3_api_renderstream_stream_info__e statusrenderstream_stream_info_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "None", "Good", "DroppingFrames", "BadStream", "NoStream", "Offline" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

renderstream_stream_info_t *renderstream_stream_info_create(
    char *name,
    char *workload_id,
    char *machine_name,
    int receiving_locally,
    renderstream_clipping_region_t *clipping
    ) {
    renderstream_stream_info_t *renderstream_stream_info_local_var = malloc(sizeof(renderstream_stream_info_t));
    if (!renderstream_stream_info_local_var) {
        return NULL;
    }
    renderstream_stream_info_local_var->name = name;
    renderstream_stream_info_local_var->workload_id = workload_id;
    renderstream_stream_info_local_var->machine_name = machine_name;
    renderstream_stream_info_local_var->status = status;
    renderstream_stream_info_local_var->receiving_locally = receiving_locally;
    renderstream_stream_info_local_var->clipping = clipping;

    return renderstream_stream_info_local_var;
}


void renderstream_stream_info_free(renderstream_stream_info_t *renderstream_stream_info) {
    if(NULL == renderstream_stream_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_stream_info->name) {
        free(renderstream_stream_info->name);
        renderstream_stream_info->name = NULL;
    }
    if (renderstream_stream_info->workload_id) {
        free(renderstream_stream_info->workload_id);
        renderstream_stream_info->workload_id = NULL;
    }
    if (renderstream_stream_info->machine_name) {
        free(renderstream_stream_info->machine_name);
        renderstream_stream_info->machine_name = NULL;
    }
    if (renderstream_stream_info->clipping) {
        renderstream_clipping_region_free(renderstream_stream_info->clipping);
        renderstream_stream_info->clipping = NULL;
    }
    free(renderstream_stream_info);
}

cJSON *renderstream_stream_info_convertToJSON(renderstream_stream_info_t *renderstream_stream_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_stream_info->name
    if(renderstream_stream_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_stream_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->workload_id
    if(renderstream_stream_info->workload_id) { 
    if(cJSON_AddStringToObject(item, "workloadID", renderstream_stream_info->workload_id) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->machine_name
    if(renderstream_stream_info->machine_name) { 
    if(cJSON_AddStringToObject(item, "machineName", renderstream_stream_info->machine_name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->status
    
    


    // renderstream_stream_info->receiving_locally
    if(renderstream_stream_info->receiving_locally) { 
    if(cJSON_AddBoolToObject(item, "receivingLocally", renderstream_stream_info->receiving_locally) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_stream_info->clipping
    if(renderstream_stream_info->clipping) { 
    cJSON *clipping_local_JSON = renderstream_clipping_region_convertToJSON(renderstream_stream_info->clipping);
    if(clipping_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clipping", clipping_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

renderstream_stream_info_t *renderstream_stream_info_parseFromJSON(cJSON *renderstream_stream_infoJSON){

    renderstream_stream_info_t *renderstream_stream_info_local_var = NULL;

    // renderstream_stream_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->workload_id
    cJSON *workload_id = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "workloadID");
    if (workload_id) { 
    if(!cJSON_IsString(workload_id))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->machine_name
    cJSON *machine_name = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "machineName");
    if (machine_name) { 
    if(!cJSON_IsString(machine_name))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "status");
    }

    // renderstream_stream_info->receiving_locally
    cJSON *receiving_locally = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "receivingLocally");
    if (receiving_locally) { 
    if(!cJSON_IsBool(receiving_locally))
    {
    goto end; //Bool
    }
    }

    // renderstream_stream_info->clipping
    cJSON *clipping = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "clipping");
    renderstream_clipping_region_t *clipping_local_nonprim = NULL;
    if (clipping) { 
    clipping_local_nonprim = renderstream_clipping_region_parseFromJSON(clipping); //nonprimitive
    }


    renderstream_stream_info_local_var = renderstream_stream_info_create (
        name ? strdup(name->valuestring) : NULL,
        workload_id ? strdup(workload_id->valuestring) : NULL,
        machine_name ? strdup(machine_name->valuestring) : NULL,
        receiving_locally ? receiving_locally->valueint : 0,
        clipping ? clipping_local_nonprim : NULL
        );

    return renderstream_stream_info_local_var;
end:
    if (clipping_local_nonprim) {
        renderstream_clipping_region_free(clipping_local_nonprim);
        clipping_local_nonprim = NULL;
    }
    return NULL;

}
