#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickcal_list_reference_points_response.h"



quickcal_list_reference_points_response_t *quickcal_list_reference_points_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    quickcal_list_reference_points_response_t *quickcal_list_reference_points_response_local_var = malloc(sizeof(quickcal_list_reference_points_response_t));
    if (!quickcal_list_reference_points_response_local_var) {
        return NULL;
    }
    quickcal_list_reference_points_response_local_var->status = status;
    quickcal_list_reference_points_response_local_var->result = result;

    return quickcal_list_reference_points_response_local_var;
}


void quickcal_list_reference_points_response_free(quickcal_list_reference_points_response_t *quickcal_list_reference_points_response) {
    if(NULL == quickcal_list_reference_points_response){
        return ;
    }
    listEntry_t *listEntry;
    if (quickcal_list_reference_points_response->status) {
        rpc_status_free(quickcal_list_reference_points_response->status);
        quickcal_list_reference_points_response->status = NULL;
    }
    if (quickcal_list_reference_points_response->result) {
        list_ForEach(listEntry, quickcal_list_reference_points_response->result) {
            quickcal_reference_point_info_free(listEntry->data);
        }
        list_free(quickcal_list_reference_points_response->result);
        quickcal_list_reference_points_response->result = NULL;
    }
    free(quickcal_list_reference_points_response);
}

cJSON *quickcal_list_reference_points_response_convertToJSON(quickcal_list_reference_points_response_t *quickcal_list_reference_points_response) {
    cJSON *item = cJSON_CreateObject();

    // quickcal_list_reference_points_response->status
    if(quickcal_list_reference_points_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(quickcal_list_reference_points_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // quickcal_list_reference_points_response->result
    if(quickcal_list_reference_points_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (quickcal_list_reference_points_response->result) {
    list_ForEach(resultListEntry, quickcal_list_reference_points_response->result) {
    cJSON *itemLocal = quickcal_reference_point_info_convertToJSON(resultListEntry->data);
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

quickcal_list_reference_points_response_t *quickcal_list_reference_points_response_parseFromJSON(cJSON *quickcal_list_reference_points_responseJSON){

    quickcal_list_reference_points_response_t *quickcal_list_reference_points_response_local_var = NULL;

    // quickcal_list_reference_points_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(quickcal_list_reference_points_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // quickcal_list_reference_points_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(quickcal_list_reference_points_responseJSON, "result");
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
        quickcal_reference_point_info_t *resultItem = quickcal_reference_point_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    quickcal_list_reference_points_response_local_var = quickcal_list_reference_points_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return quickcal_list_reference_points_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
