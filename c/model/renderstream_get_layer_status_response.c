#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_get_layer_status_response.h"



renderstream_get_layer_status_response_t *renderstream_get_layer_status_response_create(
    rpc_status_t *status,
    renderstream_get_layer_status_result_t *result
    ) {
    renderstream_get_layer_status_response_t *renderstream_get_layer_status_response_local_var = malloc(sizeof(renderstream_get_layer_status_response_t));
    if (!renderstream_get_layer_status_response_local_var) {
        return NULL;
    }
    renderstream_get_layer_status_response_local_var->status = status;
    renderstream_get_layer_status_response_local_var->result = result;

    return renderstream_get_layer_status_response_local_var;
}


void renderstream_get_layer_status_response_free(renderstream_get_layer_status_response_t *renderstream_get_layer_status_response) {
    if(NULL == renderstream_get_layer_status_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_get_layer_status_response->status) {
        rpc_status_free(renderstream_get_layer_status_response->status);
        renderstream_get_layer_status_response->status = NULL;
    }
    if (renderstream_get_layer_status_response->result) {
        renderstream_get_layer_status_result_free(renderstream_get_layer_status_response->result);
        renderstream_get_layer_status_response->result = NULL;
    }
    free(renderstream_get_layer_status_response);
}

cJSON *renderstream_get_layer_status_response_convertToJSON(renderstream_get_layer_status_response_t *renderstream_get_layer_status_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_get_layer_status_response->status
    if(renderstream_get_layer_status_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(renderstream_get_layer_status_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_get_layer_status_response->result
    if(renderstream_get_layer_status_response->result) { 
    cJSON *result_local_JSON = renderstream_get_layer_status_result_convertToJSON(renderstream_get_layer_status_response->result);
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

renderstream_get_layer_status_response_t *renderstream_get_layer_status_response_parseFromJSON(cJSON *renderstream_get_layer_status_responseJSON){

    renderstream_get_layer_status_response_t *renderstream_get_layer_status_response_local_var = NULL;

    // renderstream_get_layer_status_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_status_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // renderstream_get_layer_status_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_status_responseJSON, "result");
    renderstream_get_layer_status_result_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = renderstream_get_layer_status_result_parseFromJSON(result); //nonprimitive
    }


    renderstream_get_layer_status_response_local_var = renderstream_get_layer_status_response_create (
        status ? status_local_nonprim : NULL,
        result ? result_local_nonprim : NULL
        );

    return renderstream_get_layer_status_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    if (result_local_nonprim) {
        renderstream_get_layer_status_result_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
