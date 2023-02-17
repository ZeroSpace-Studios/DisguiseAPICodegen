#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "d3api_empty_response.h"



d3api_empty_response_t *d3api_empty_response_create(
    rpc_status_t *status
    ) {
    d3api_empty_response_t *d3api_empty_response_local_var = malloc(sizeof(d3api_empty_response_t));
    if (!d3api_empty_response_local_var) {
        return NULL;
    }
    d3api_empty_response_local_var->status = status;

    return d3api_empty_response_local_var;
}


void d3api_empty_response_free(d3api_empty_response_t *d3api_empty_response) {
    if(NULL == d3api_empty_response){
        return ;
    }
    listEntry_t *listEntry;
    if (d3api_empty_response->status) {
        rpc_status_free(d3api_empty_response->status);
        d3api_empty_response->status = NULL;
    }
    free(d3api_empty_response);
}

cJSON *d3api_empty_response_convertToJSON(d3api_empty_response_t *d3api_empty_response) {
    cJSON *item = cJSON_CreateObject();

    // d3api_empty_response->status
    if(d3api_empty_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(d3api_empty_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
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

d3api_empty_response_t *d3api_empty_response_parseFromJSON(cJSON *d3api_empty_responseJSON){

    d3api_empty_response_t *d3api_empty_response_local_var = NULL;

    // d3api_empty_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(d3api_empty_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }


    d3api_empty_response_local_var = d3api_empty_response_create (
        status ? status_local_nonprim : NULL
        );

    return d3api_empty_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
