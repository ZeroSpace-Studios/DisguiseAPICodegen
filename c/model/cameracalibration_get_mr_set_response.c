#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_get_mr_set_response.h"



cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response_create(
    cameracalibration_mr_set_info_t *result
    ) {
    cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response_local_var = malloc(sizeof(cameracalibration_get_mr_set_response_t));
    if (!cameracalibration_get_mr_set_response_local_var) {
        return NULL;
    }
    cameracalibration_get_mr_set_response_local_var->result = result;

    return cameracalibration_get_mr_set_response_local_var;
}


void cameracalibration_get_mr_set_response_free(cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response) {
    if(NULL == cameracalibration_get_mr_set_response){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_get_mr_set_response->result) {
        cameracalibration_mr_set_info_free(cameracalibration_get_mr_set_response->result);
        cameracalibration_get_mr_set_response->result = NULL;
    }
    free(cameracalibration_get_mr_set_response);
}

cJSON *cameracalibration_get_mr_set_response_convertToJSON(cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_get_mr_set_response->result
    if(cameracalibration_get_mr_set_response->result) { 
    cJSON *result_local_JSON = cameracalibration_mr_set_info_convertToJSON(cameracalibration_get_mr_set_response->result);
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

cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response_parseFromJSON(cJSON *cameracalibration_get_mr_set_responseJSON){

    cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response_local_var = NULL;

    // cameracalibration_get_mr_set_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(cameracalibration_get_mr_set_responseJSON, "result");
    cameracalibration_mr_set_info_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = cameracalibration_mr_set_info_parseFromJSON(result); //nonprimitive
    }


    cameracalibration_get_mr_set_response_local_var = cameracalibration_get_mr_set_response_create (
        result ? result_local_nonprim : NULL
        );

    return cameracalibration_get_mr_set_response_local_var;
end:
    if (result_local_nonprim) {
        cameracalibration_mr_set_info_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
