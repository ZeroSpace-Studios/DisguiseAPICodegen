#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_get_cameras_response.h"



mixedreality_get_cameras_response_t *mixedreality_get_cameras_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    mixedreality_get_cameras_response_t *mixedreality_get_cameras_response_local_var = malloc(sizeof(mixedreality_get_cameras_response_t));
    if (!mixedreality_get_cameras_response_local_var) {
        return NULL;
    }
    mixedreality_get_cameras_response_local_var->status = status;
    mixedreality_get_cameras_response_local_var->result = result;

    return mixedreality_get_cameras_response_local_var;
}


void mixedreality_get_cameras_response_free(mixedreality_get_cameras_response_t *mixedreality_get_cameras_response) {
    if(NULL == mixedreality_get_cameras_response){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_get_cameras_response->status) {
        rpc_status_free(mixedreality_get_cameras_response->status);
        mixedreality_get_cameras_response->status = NULL;
    }
    if (mixedreality_get_cameras_response->result) {
        list_ForEach(listEntry, mixedreality_get_cameras_response->result) {
            mixedreality_camera_info_free(listEntry->data);
        }
        list_free(mixedreality_get_cameras_response->result);
        mixedreality_get_cameras_response->result = NULL;
    }
    free(mixedreality_get_cameras_response);
}

cJSON *mixedreality_get_cameras_response_convertToJSON(mixedreality_get_cameras_response_t *mixedreality_get_cameras_response) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_get_cameras_response->status
    if(mixedreality_get_cameras_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(mixedreality_get_cameras_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_get_cameras_response->result
    if(mixedreality_get_cameras_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (mixedreality_get_cameras_response->result) {
    list_ForEach(resultListEntry, mixedreality_get_cameras_response->result) {
    cJSON *itemLocal = mixedreality_camera_info_convertToJSON(resultListEntry->data);
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

mixedreality_get_cameras_response_t *mixedreality_get_cameras_response_parseFromJSON(cJSON *mixedreality_get_cameras_responseJSON){

    mixedreality_get_cameras_response_t *mixedreality_get_cameras_response_local_var = NULL;

    // mixedreality_get_cameras_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(mixedreality_get_cameras_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // mixedreality_get_cameras_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(mixedreality_get_cameras_responseJSON, "result");
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
        mixedreality_camera_info_t *resultItem = mixedreality_camera_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    mixedreality_get_cameras_response_local_var = mixedreality_get_cameras_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return mixedreality_get_cameras_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
