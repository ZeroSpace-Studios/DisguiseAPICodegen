#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_list_annotations_response.h"



transport_list_annotations_response_t *transport_list_annotations_response_create(
    rpc_status_t *status,
    transport_list_annotations_result_t *result
    ) {
    transport_list_annotations_response_t *transport_list_annotations_response_local_var = malloc(sizeof(transport_list_annotations_response_t));
    if (!transport_list_annotations_response_local_var) {
        return NULL;
    }
    transport_list_annotations_response_local_var->status = status;
    transport_list_annotations_response_local_var->result = result;

    return transport_list_annotations_response_local_var;
}


void transport_list_annotations_response_free(transport_list_annotations_response_t *transport_list_annotations_response) {
    if(NULL == transport_list_annotations_response){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_list_annotations_response->status) {
        rpc_status_free(transport_list_annotations_response->status);
        transport_list_annotations_response->status = NULL;
    }
    if (transport_list_annotations_response->result) {
        transport_list_annotations_result_free(transport_list_annotations_response->result);
        transport_list_annotations_response->result = NULL;
    }
    free(transport_list_annotations_response);
}

cJSON *transport_list_annotations_response_convertToJSON(transport_list_annotations_response_t *transport_list_annotations_response) {
    cJSON *item = cJSON_CreateObject();

    // transport_list_annotations_response->status
    if(transport_list_annotations_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(transport_list_annotations_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_list_annotations_response->result
    if(transport_list_annotations_response->result) { 
    cJSON *result_local_JSON = transport_list_annotations_result_convertToJSON(transport_list_annotations_response->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
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

transport_list_annotations_response_t *transport_list_annotations_response_parseFromJSON(cJSON *transport_list_annotations_responseJSON){

    transport_list_annotations_response_t *transport_list_annotations_response_local_var = NULL;

    // transport_list_annotations_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(transport_list_annotations_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // transport_list_annotations_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(transport_list_annotations_responseJSON, "result");
    transport_list_annotations_result_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = transport_list_annotations_result_parseFromJSON(result); //nonprimitive
    }


    transport_list_annotations_response_local_var = transport_list_annotations_response_create (
        status ? status_local_nonprim : NULL,
        result ? result_local_nonprim : NULL
        );

    return transport_list_annotations_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    if (result_local_nonprim) {
        transport_list_annotations_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
