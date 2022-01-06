#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_get_mr_set_response.h"



v1_get_mr_set_response_t *v1_get_mr_set_response_create(
    v1_mr_set_info_t *result
    ) {
    v1_get_mr_set_response_t *v1_get_mr_set_response_local_var = malloc(sizeof(v1_get_mr_set_response_t));
    if (!v1_get_mr_set_response_local_var) {
        return NULL;
    }
    v1_get_mr_set_response_local_var->result = result;

    return v1_get_mr_set_response_local_var;
}


void v1_get_mr_set_response_free(v1_get_mr_set_response_t *v1_get_mr_set_response) {
    if(NULL == v1_get_mr_set_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_get_mr_set_response->result) {
        v1_mr_set_info_free(v1_get_mr_set_response->result);
        v1_get_mr_set_response->result = NULL;
    }
    free(v1_get_mr_set_response);
}

cJSON *v1_get_mr_set_response_convertToJSON(v1_get_mr_set_response_t *v1_get_mr_set_response) {
    cJSON *item = cJSON_CreateObject();

    // v1_get_mr_set_response->result
    if(v1_get_mr_set_response->result) { 
    cJSON *result_local_JSON = v1_mr_set_info_convertToJSON(v1_get_mr_set_response->result);
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

v1_get_mr_set_response_t *v1_get_mr_set_response_parseFromJSON(cJSON *v1_get_mr_set_responseJSON){

    v1_get_mr_set_response_t *v1_get_mr_set_response_local_var = NULL;

    // v1_get_mr_set_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(v1_get_mr_set_responseJSON, "result");
    v1_mr_set_info_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = v1_mr_set_info_parseFromJSON(result); //nonprimitive
    }


    v1_get_mr_set_response_local_var = v1_get_mr_set_response_create (
        result ? result_local_nonprim : NULL
        );

    return v1_get_mr_set_response_local_var;
end:
    if (result_local_nonprim) {
        v1_mr_set_info_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
