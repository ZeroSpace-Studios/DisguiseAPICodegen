#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_list_health_response.h"



status_list_health_response_t *status_list_health_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    status_list_health_response_t *status_list_health_response_local_var = malloc(sizeof(status_list_health_response_t));
    if (!status_list_health_response_local_var) {
        return NULL;
    }
    status_list_health_response_local_var->status = status;
    status_list_health_response_local_var->result = result;

    return status_list_health_response_local_var;
}


void status_list_health_response_free(status_list_health_response_t *status_list_health_response) {
    if(NULL == status_list_health_response){
        return ;
    }
    listEntry_t *listEntry;
    if (status_list_health_response->status) {
        rpc_status_free(status_list_health_response->status);
        status_list_health_response->status = NULL;
    }
    if (status_list_health_response->result) {
        list_ForEach(listEntry, status_list_health_response->result) {
            status_health_report_free(listEntry->data);
        }
        list_free(status_list_health_response->result);
        status_list_health_response->result = NULL;
    }
    free(status_list_health_response);
}

cJSON *status_list_health_response_convertToJSON(status_list_health_response_t *status_list_health_response) {
    cJSON *item = cJSON_CreateObject();

    // status_list_health_response->status
    if(status_list_health_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(status_list_health_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // status_list_health_response->result
    if(status_list_health_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (status_list_health_response->result) {
    list_ForEach(resultListEntry, status_list_health_response->result) {
    cJSON *itemLocal = status_health_report_convertToJSON(resultListEntry->data);
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

status_list_health_response_t *status_list_health_response_parseFromJSON(cJSON *status_list_health_responseJSON){

    status_list_health_response_t *status_list_health_response_local_var = NULL;

    // status_list_health_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(status_list_health_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // status_list_health_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(status_list_health_responseJSON, "result");
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
        status_health_report_t *resultItem = status_health_report_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    status_list_health_response_local_var = status_list_health_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return status_list_health_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
