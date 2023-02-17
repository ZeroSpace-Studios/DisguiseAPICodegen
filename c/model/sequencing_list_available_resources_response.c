#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sequencing_list_available_resources_response.h"



sequencing_list_available_resources_response_t *sequencing_list_available_resources_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    sequencing_list_available_resources_response_t *sequencing_list_available_resources_response_local_var = malloc(sizeof(sequencing_list_available_resources_response_t));
    if (!sequencing_list_available_resources_response_local_var) {
        return NULL;
    }
    sequencing_list_available_resources_response_local_var->status = status;
    sequencing_list_available_resources_response_local_var->result = result;

    return sequencing_list_available_resources_response_local_var;
}


void sequencing_list_available_resources_response_free(sequencing_list_available_resources_response_t *sequencing_list_available_resources_response) {
    if(NULL == sequencing_list_available_resources_response){
        return ;
    }
    listEntry_t *listEntry;
    if (sequencing_list_available_resources_response->status) {
        rpc_status_free(sequencing_list_available_resources_response->status);
        sequencing_list_available_resources_response->status = NULL;
    }
    if (sequencing_list_available_resources_response->result) {
        list_ForEach(listEntry, sequencing_list_available_resources_response->result) {
            sequencing_indirection_resource_free(listEntry->data);
        }
        list_free(sequencing_list_available_resources_response->result);
        sequencing_list_available_resources_response->result = NULL;
    }
    free(sequencing_list_available_resources_response);
}

cJSON *sequencing_list_available_resources_response_convertToJSON(sequencing_list_available_resources_response_t *sequencing_list_available_resources_response) {
    cJSON *item = cJSON_CreateObject();

    // sequencing_list_available_resources_response->status
    if(sequencing_list_available_resources_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(sequencing_list_available_resources_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // sequencing_list_available_resources_response->result
    if(sequencing_list_available_resources_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (sequencing_list_available_resources_response->result) {
    list_ForEach(resultListEntry, sequencing_list_available_resources_response->result) {
    cJSON *itemLocal = sequencing_indirection_resource_convertToJSON(resultListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(result, itemLocal);
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

sequencing_list_available_resources_response_t *sequencing_list_available_resources_response_parseFromJSON(cJSON *sequencing_list_available_resources_responseJSON){

    sequencing_list_available_resources_response_t *sequencing_list_available_resources_response_local_var = NULL;

    // sequencing_list_available_resources_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(sequencing_list_available_resources_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // sequencing_list_available_resources_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(sequencing_list_available_resources_responseJSON, "result");
    list_t *resultList;
    if (result) { 
    cJSON *result_local_nonprimitive;
    if(!cJSON_IsArray(result)){
        goto end; //nonprimitive container
    }

    resultList = list_create();

    cJSON_ArrayForEach(result_local_nonprimitive,result )
    {
        if(!cJSON_IsObject(result_local_nonprimitive)){
            goto end;
        }
        sequencing_indirection_resource_t *resultItem = sequencing_indirection_resource_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    sequencing_list_available_resources_response_local_var = sequencing_list_available_resources_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return sequencing_list_available_resources_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
