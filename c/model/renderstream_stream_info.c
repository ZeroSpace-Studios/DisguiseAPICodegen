#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_stream_info.h"



renderstream_stream_info_t *renderstream_stream_info_create(
    char *uid,
    char *name,
    char *source_machine,
    char *receiver_machine,
    renderstream_stream_status_t *status,
    char *status_string
    ) {
    renderstream_stream_info_t *renderstream_stream_info_local_var = malloc(sizeof(renderstream_stream_info_t));
    if (!renderstream_stream_info_local_var) {
        return NULL;
    }
    renderstream_stream_info_local_var->uid = uid;
    renderstream_stream_info_local_var->name = name;
    renderstream_stream_info_local_var->source_machine = source_machine;
    renderstream_stream_info_local_var->receiver_machine = receiver_machine;
    renderstream_stream_info_local_var->status = status;
    renderstream_stream_info_local_var->status_string = status_string;

    return renderstream_stream_info_local_var;
}


void renderstream_stream_info_free(renderstream_stream_info_t *renderstream_stream_info) {
    if(NULL == renderstream_stream_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_stream_info->uid) {
        free(renderstream_stream_info->uid);
        renderstream_stream_info->uid = NULL;
    }
    if (renderstream_stream_info->name) {
        free(renderstream_stream_info->name);
        renderstream_stream_info->name = NULL;
    }
    if (renderstream_stream_info->source_machine) {
        free(renderstream_stream_info->source_machine);
        renderstream_stream_info->source_machine = NULL;
    }
    if (renderstream_stream_info->receiver_machine) {
        free(renderstream_stream_info->receiver_machine);
        renderstream_stream_info->receiver_machine = NULL;
    }
    if (renderstream_stream_info->status) {
        renderstream_stream_status_free(renderstream_stream_info->status);
        renderstream_stream_info->status = NULL;
    }
    if (renderstream_stream_info->status_string) {
        free(renderstream_stream_info->status_string);
        renderstream_stream_info->status_string = NULL;
    }
    free(renderstream_stream_info);
}

cJSON *renderstream_stream_info_convertToJSON(renderstream_stream_info_t *renderstream_stream_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_stream_info->uid
    if(renderstream_stream_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_stream_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->name
    if(renderstream_stream_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_stream_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->source_machine
    if(renderstream_stream_info->source_machine) { 
    if(cJSON_AddStringToObject(item, "sourceMachine", renderstream_stream_info->source_machine) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->receiver_machine
    if(renderstream_stream_info->receiver_machine) { 
    if(cJSON_AddStringToObject(item, "receiverMachine", renderstream_stream_info->receiver_machine) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_stream_info->status
    if(renderstream_stream_info->status) { 
    cJSON *status_local_JSON = renderstream_stream_status_convertToJSON(renderstream_stream_info->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_stream_info->status_string
    if(renderstream_stream_info->status_string) { 
    if(cJSON_AddStringToObject(item, "statusString", renderstream_stream_info->status_string) == NULL) {
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

renderstream_stream_info_t *renderstream_stream_info_parseFromJSON(cJSON *renderstream_stream_infoJSON){

    renderstream_stream_info_t *renderstream_stream_info_local_var = NULL;

    // renderstream_stream_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->source_machine
    cJSON *source_machine = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "sourceMachine");
    if (source_machine) { 
    if(!cJSON_IsString(source_machine))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->receiver_machine
    cJSON *receiver_machine = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "receiverMachine");
    if (receiver_machine) { 
    if(!cJSON_IsString(receiver_machine))
    {
    goto end; //String
    }
    }

    // renderstream_stream_info->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "status");
    renderstream_stream_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = renderstream_stream_status_parseFromJSON(status); //nonprimitive
    }

    // renderstream_stream_info->status_string
    cJSON *status_string = cJSON_GetObjectItemCaseSensitive(renderstream_stream_infoJSON, "statusString");
    if (status_string) { 
    if(!cJSON_IsString(status_string))
    {
    goto end; //String
    }
    }


    renderstream_stream_info_local_var = renderstream_stream_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        source_machine ? strdup(source_machine->valuestring) : NULL,
        receiver_machine ? strdup(receiver_machine->valuestring) : NULL,
        status ? status_local_nonprim : NULL,
        status_string ? strdup(status_string->valuestring) : NULL
        );

    return renderstream_stream_info_local_var;
end:
    if (status_local_nonprim) {
        renderstream_stream_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
