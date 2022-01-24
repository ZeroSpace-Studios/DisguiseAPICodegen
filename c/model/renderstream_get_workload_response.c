#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_get_workload_response.h"



renderstream_get_workload_response_t *renderstream_get_workload_response_create(
    renderstream_workload_info_t *result
    ) {
    renderstream_get_workload_response_t *renderstream_get_workload_response_local_var = malloc(sizeof(renderstream_get_workload_response_t));
    if (!renderstream_get_workload_response_local_var) {
        return NULL;
    }
    renderstream_get_workload_response_local_var->result = result;

    return renderstream_get_workload_response_local_var;
}


void renderstream_get_workload_response_free(renderstream_get_workload_response_t *renderstream_get_workload_response) {
    if(NULL == renderstream_get_workload_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_get_workload_response->result) {
        renderstream_workload_info_free(renderstream_get_workload_response->result);
        renderstream_get_workload_response->result = NULL;
    }
    free(renderstream_get_workload_response);
}

cJSON *renderstream_get_workload_response_convertToJSON(renderstream_get_workload_response_t *renderstream_get_workload_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_get_workload_response->result
    if(renderstream_get_workload_response->result) { 
    cJSON *result_local_JSON = renderstream_workload_info_convertToJSON(renderstream_get_workload_response->result);
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

renderstream_get_workload_response_t *renderstream_get_workload_response_parseFromJSON(cJSON *renderstream_get_workload_responseJSON){

    renderstream_get_workload_response_t *renderstream_get_workload_response_local_var = NULL;

    // renderstream_get_workload_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(renderstream_get_workload_responseJSON, "result");
    renderstream_workload_info_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = renderstream_workload_info_parseFromJSON(result); //nonprimitive
    }


    renderstream_get_workload_response_local_var = renderstream_get_workload_response_create (
        result ? result_local_nonprim : NULL
        );

    return renderstream_get_workload_response_local_var;
end:
    if (result_local_nonprim) {
        renderstream_workload_info_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
