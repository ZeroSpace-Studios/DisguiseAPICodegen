#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_get_active_transport_response.h"



transport_get_active_transport_response_t *transport_get_active_transport_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    transport_get_active_transport_response_t *transport_get_active_transport_response_local_var = malloc(sizeof(transport_get_active_transport_response_t));
    if (!transport_get_active_transport_response_local_var) {
        return NULL;
    }
    transport_get_active_transport_response_local_var->status = status;
    transport_get_active_transport_response_local_var->result = result;

    return transport_get_active_transport_response_local_var;
}


void transport_get_active_transport_response_free(transport_get_active_transport_response_t *transport_get_active_transport_response) {
    if(NULL == transport_get_active_transport_response){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_get_active_transport_response->status) {
        rpc_status_free(transport_get_active_transport_response->status);
        transport_get_active_transport_response->status = NULL;
    }
    if (transport_get_active_transport_response->result) {
        list_ForEach(listEntry, transport_get_active_transport_response->result) {
            transport_transport_info_free(listEntry->data);
        }
        list_free(transport_get_active_transport_response->result);
        transport_get_active_transport_response->result = NULL;
    }
    free(transport_get_active_transport_response);
}

cJSON *transport_get_active_transport_response_convertToJSON(transport_get_active_transport_response_t *transport_get_active_transport_response) {
    cJSON *item = cJSON_CreateObject();

    // transport_get_active_transport_response->status
    if(transport_get_active_transport_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(transport_get_active_transport_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_get_active_transport_response->result
    if(transport_get_active_transport_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (transport_get_active_transport_response->result) {
    list_ForEach(resultListEntry, transport_get_active_transport_response->result) {
    cJSON *itemLocal = transport_transport_info_convertToJSON(resultListEntry->data);
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

transport_get_active_transport_response_t *transport_get_active_transport_response_parseFromJSON(cJSON *transport_get_active_transport_responseJSON){

    transport_get_active_transport_response_t *transport_get_active_transport_response_local_var = NULL;

    // transport_get_active_transport_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(transport_get_active_transport_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // transport_get_active_transport_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(transport_get_active_transport_responseJSON, "result");
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
        transport_transport_info_t *resultItem = transport_transport_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    transport_get_active_transport_response_local_var = transport_get_active_transport_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return transport_get_active_transport_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
