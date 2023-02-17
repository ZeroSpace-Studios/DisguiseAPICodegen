#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_get_layers_response.h"



renderstream_get_layers_response_t *renderstream_get_layers_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    renderstream_get_layers_response_t *renderstream_get_layers_response_local_var = malloc(sizeof(renderstream_get_layers_response_t));
    if (!renderstream_get_layers_response_local_var) {
        return NULL;
    }
    renderstream_get_layers_response_local_var->status = status;
    renderstream_get_layers_response_local_var->result = result;

    return renderstream_get_layers_response_local_var;
}


void renderstream_get_layers_response_free(renderstream_get_layers_response_t *renderstream_get_layers_response) {
    if(NULL == renderstream_get_layers_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_get_layers_response->status) {
        rpc_status_free(renderstream_get_layers_response->status);
        renderstream_get_layers_response->status = NULL;
    }
    if (renderstream_get_layers_response->result) {
        list_ForEach(listEntry, renderstream_get_layers_response->result) {
            renderstream_render_stream_info_free(listEntry->data);
        }
        list_free(renderstream_get_layers_response->result);
        renderstream_get_layers_response->result = NULL;
    }
    free(renderstream_get_layers_response);
}

cJSON *renderstream_get_layers_response_convertToJSON(renderstream_get_layers_response_t *renderstream_get_layers_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_get_layers_response->status
    if(renderstream_get_layers_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(renderstream_get_layers_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_get_layers_response->result
    if(renderstream_get_layers_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (renderstream_get_layers_response->result) {
    list_ForEach(resultListEntry, renderstream_get_layers_response->result) {
    cJSON *itemLocal = renderstream_render_stream_info_convertToJSON(resultListEntry->data);
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

renderstream_get_layers_response_t *renderstream_get_layers_response_parseFromJSON(cJSON *renderstream_get_layers_responseJSON){

    renderstream_get_layers_response_t *renderstream_get_layers_response_local_var = NULL;

    // renderstream_get_layers_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_get_layers_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // renderstream_get_layers_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(renderstream_get_layers_responseJSON, "result");
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
        renderstream_render_stream_info_t *resultItem = renderstream_render_stream_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    renderstream_get_layers_response_local_var = renderstream_get_layers_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return renderstream_get_layers_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
