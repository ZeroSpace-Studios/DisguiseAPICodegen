#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_list_mr_sets_response.h"



cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response_create(
    list_t *result
    ) {
    cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response_local_var = malloc(sizeof(cameracalibration_list_mr_sets_response_t));
    if (!cameracalibration_list_mr_sets_response_local_var) {
        return NULL;
    }
    cameracalibration_list_mr_sets_response_local_var->result = result;

    return cameracalibration_list_mr_sets_response_local_var;
}


void cameracalibration_list_mr_sets_response_free(cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response) {
    if(NULL == cameracalibration_list_mr_sets_response){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_list_mr_sets_response->result) {
        list_ForEach(listEntry, cameracalibration_list_mr_sets_response->result) {
            cameracalibration_mr_set_info_free(listEntry->data);
        }
        list_free(cameracalibration_list_mr_sets_response->result);
        cameracalibration_list_mr_sets_response->result = NULL;
    }
    free(cameracalibration_list_mr_sets_response);
}

cJSON *cameracalibration_list_mr_sets_response_convertToJSON(cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_list_mr_sets_response->result
    if(cameracalibration_list_mr_sets_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (cameracalibration_list_mr_sets_response->result) {
    list_ForEach(resultListEntry, cameracalibration_list_mr_sets_response->result) {
    cJSON *itemLocal = cameracalibration_mr_set_info_convertToJSON(resultListEntry->data);
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

cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response_parseFromJSON(cJSON *cameracalibration_list_mr_sets_responseJSON){

    cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response_local_var = NULL;

    // cameracalibration_list_mr_sets_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(cameracalibration_list_mr_sets_responseJSON, "result");
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
        cameracalibration_mr_set_info_t *resultItem = cameracalibration_mr_set_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    cameracalibration_list_mr_sets_response_local_var = cameracalibration_list_mr_sets_response_create (
        result ? resultList : NULL
        );

    return cameracalibration_list_mr_sets_response_local_var;
end:
    return NULL;

}
