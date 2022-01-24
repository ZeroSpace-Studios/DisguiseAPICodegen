#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_failover_info.h"



renderstream_failover_info_t *renderstream_failover_info_create(
    char *workload_id,
    long failed_instance_index,
    long covering_instance_index,
    char *covering_machine_name,
    char *error_string,
    list_t *streams
    ) {
    renderstream_failover_info_t *renderstream_failover_info_local_var = malloc(sizeof(renderstream_failover_info_t));
    if (!renderstream_failover_info_local_var) {
        return NULL;
    }
    renderstream_failover_info_local_var->workload_id = workload_id;
    renderstream_failover_info_local_var->failed_instance_index = failed_instance_index;
    renderstream_failover_info_local_var->covering_instance_index = covering_instance_index;
    renderstream_failover_info_local_var->covering_machine_name = covering_machine_name;
    renderstream_failover_info_local_var->error_string = error_string;
    renderstream_failover_info_local_var->streams = streams;

    return renderstream_failover_info_local_var;
}


void renderstream_failover_info_free(renderstream_failover_info_t *renderstream_failover_info) {
    if(NULL == renderstream_failover_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_failover_info->workload_id) {
        free(renderstream_failover_info->workload_id);
        renderstream_failover_info->workload_id = NULL;
    }
    if (renderstream_failover_info->covering_machine_name) {
        free(renderstream_failover_info->covering_machine_name);
        renderstream_failover_info->covering_machine_name = NULL;
    }
    if (renderstream_failover_info->error_string) {
        free(renderstream_failover_info->error_string);
        renderstream_failover_info->error_string = NULL;
    }
    if (renderstream_failover_info->streams) {
        list_ForEach(listEntry, renderstream_failover_info->streams) {
            renderstream_stream_info_free(listEntry->data);
        }
        list_free(renderstream_failover_info->streams);
        renderstream_failover_info->streams = NULL;
    }
    free(renderstream_failover_info);
}

cJSON *renderstream_failover_info_convertToJSON(renderstream_failover_info_t *renderstream_failover_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_failover_info->workload_id
    if(renderstream_failover_info->workload_id) { 
    if(cJSON_AddStringToObject(item, "workloadID", renderstream_failover_info->workload_id) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_failover_info->failed_instance_index
    if(renderstream_failover_info->failed_instance_index) { 
    if(cJSON_AddNumberToObject(item, "failedInstanceIndex", renderstream_failover_info->failed_instance_index) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_failover_info->covering_instance_index
    if(renderstream_failover_info->covering_instance_index) { 
    if(cJSON_AddNumberToObject(item, "coveringInstanceIndex", renderstream_failover_info->covering_instance_index) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_failover_info->covering_machine_name
    if(renderstream_failover_info->covering_machine_name) { 
    if(cJSON_AddStringToObject(item, "coveringMachineName", renderstream_failover_info->covering_machine_name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_failover_info->error_string
    if(renderstream_failover_info->error_string) { 
    if(cJSON_AddStringToObject(item, "errorString", renderstream_failover_info->error_string) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_failover_info->streams
    if(renderstream_failover_info->streams) { 
    cJSON *streams = cJSON_AddArrayToObject(item, "streams");
    if(streams == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *streamsListEntry;
    if (renderstream_failover_info->streams) {
    list_ForEach(streamsListEntry, renderstream_failover_info->streams) {
    cJSON *itemLocal = renderstream_stream_info_convertToJSON(streamsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(streams, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

renderstream_failover_info_t *renderstream_failover_info_parseFromJSON(cJSON *renderstream_failover_infoJSON){

    renderstream_failover_info_t *renderstream_failover_info_local_var = NULL;

    // renderstream_failover_info->workload_id
    cJSON *workload_id = cJSON_GetObjectItemCaseSensitive(renderstream_failover_infoJSON, "workloadID");
    if (workload_id) { 
    if(!cJSON_IsString(workload_id))
    {
    goto end; //String
    }
    }

    // renderstream_failover_info->failed_instance_index
    cJSON *failed_instance_index = cJSON_GetObjectItemCaseSensitive(renderstream_failover_infoJSON, "failedInstanceIndex");
    if (failed_instance_index) { 
    if(!cJSON_IsNumber(failed_instance_index))
    {
    goto end; //Numeric
    }
    }

    // renderstream_failover_info->covering_instance_index
    cJSON *covering_instance_index = cJSON_GetObjectItemCaseSensitive(renderstream_failover_infoJSON, "coveringInstanceIndex");
    if (covering_instance_index) { 
    if(!cJSON_IsNumber(covering_instance_index))
    {
    goto end; //Numeric
    }
    }

    // renderstream_failover_info->covering_machine_name
    cJSON *covering_machine_name = cJSON_GetObjectItemCaseSensitive(renderstream_failover_infoJSON, "coveringMachineName");
    if (covering_machine_name) { 
    if(!cJSON_IsString(covering_machine_name))
    {
    goto end; //String
    }
    }

    // renderstream_failover_info->error_string
    cJSON *error_string = cJSON_GetObjectItemCaseSensitive(renderstream_failover_infoJSON, "errorString");
    if (error_string) { 
    if(!cJSON_IsString(error_string))
    {
    goto end; //String
    }
    }

    // renderstream_failover_info->streams
    cJSON *streams = cJSON_GetObjectItemCaseSensitive(renderstream_failover_infoJSON, "streams");
    list_t *streamsList;
    if (streams) { 
    cJSON *streams_local_nonprimitive;
    if(!cJSON_IsArray(streams)){
        goto end; //nonprimitive container
    }

    streamsList = list_create();

    cJSON_ArrayForEach(streams_local_nonprimitive,streams )
    {
        if(!cJSON_IsObject(streams_local_nonprimitive)){
            goto end;
        }
        renderstream_stream_info_t *streamsItem = renderstream_stream_info_parseFromJSON(streams_local_nonprimitive);

        list_addElement(streamsList, streamsItem);
    }
    }


    renderstream_failover_info_local_var = renderstream_failover_info_create (
        workload_id ? strdup(workload_id->valuestring) : NULL,
        failed_instance_index ? failed_instance_index->valuedouble : 0,
        covering_instance_index ? covering_instance_index->valuedouble : 0,
        covering_machine_name ? strdup(covering_machine_name->valuestring) : NULL,
        error_string ? strdup(error_string->valuestring) : NULL,
        streams ? streamsList : NULL
        );

    return renderstream_failover_info_local_var;
end:
    return NULL;

}
