#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_get_session_response.h"



status_get_session_response_t *status_get_session_response_create(
    rpc_status_t *status,
    status_get_session_result_t *result
    ) {
    status_get_session_response_t *status_get_session_response_local_var = malloc(sizeof(status_get_session_response_t));
    if (!status_get_session_response_local_var) {
        return NULL;
    }
    status_get_session_response_local_var->status = status;
    status_get_session_response_local_var->result = result;

    return status_get_session_response_local_var;
}


void status_get_session_response_free(status_get_session_response_t *status_get_session_response) {
    if(NULL == status_get_session_response){
        return ;
    }
    listEntry_t *listEntry;
    if (status_get_session_response->status) {
        rpc_status_free(status_get_session_response->status);
        status_get_session_response->status = NULL;
    }
    if (status_get_session_response->result) {
        status_get_session_result_free(status_get_session_response->result);
        status_get_session_response->result = NULL;
    }
    free(status_get_session_response);
}

cJSON *status_get_session_response_convertToJSON(status_get_session_response_t *status_get_session_response) {
    cJSON *item = cJSON_CreateObject();

    // status_get_session_response->status
    if(status_get_session_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(status_get_session_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // status_get_session_response->result
    if(status_get_session_response->result) { 
    cJSON *result_local_JSON = status_get_session_result_convertToJSON(status_get_session_response->result);
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

status_get_session_response_t *status_get_session_response_parseFromJSON(cJSON *status_get_session_responseJSON){

    status_get_session_response_t *status_get_session_response_local_var = NULL;

    // status_get_session_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(status_get_session_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // status_get_session_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(status_get_session_responseJSON, "result");
    status_get_session_result_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = status_get_session_result_parseFromJSON(result); //nonprimitive
    }


    status_get_session_response_local_var = status_get_session_response_create (
        status ? status_local_nonprim : NULL,
        result ? result_local_nonprim : NULL
        );

    return status_get_session_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    if (result_local_nonprim) {
        status_get_session_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
