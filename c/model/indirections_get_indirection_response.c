#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_get_indirection_response.h"



indirections_get_indirection_response_t *indirections_get_indirection_response_create(
    indirections_indirection_t *result
    ) {
    indirections_get_indirection_response_t *indirections_get_indirection_response_local_var = malloc(sizeof(indirections_get_indirection_response_t));
    if (!indirections_get_indirection_response_local_var) {
        return NULL;
    }
    indirections_get_indirection_response_local_var->result = result;

    return indirections_get_indirection_response_local_var;
}


void indirections_get_indirection_response_free(indirections_get_indirection_response_t *indirections_get_indirection_response) {
    if(NULL == indirections_get_indirection_response){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_get_indirection_response->result) {
        indirections_indirection_free(indirections_get_indirection_response->result);
        indirections_get_indirection_response->result = NULL;
    }
    free(indirections_get_indirection_response);
}

cJSON *indirections_get_indirection_response_convertToJSON(indirections_get_indirection_response_t *indirections_get_indirection_response) {
    cJSON *item = cJSON_CreateObject();

    // indirections_get_indirection_response->result
    if(indirections_get_indirection_response->result) { 
    cJSON *result_local_JSON = indirections_indirection_convertToJSON(indirections_get_indirection_response->result);
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

indirections_get_indirection_response_t *indirections_get_indirection_response_parseFromJSON(cJSON *indirections_get_indirection_responseJSON){

    indirections_get_indirection_response_t *indirections_get_indirection_response_local_var = NULL;

    // indirections_get_indirection_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(indirections_get_indirection_responseJSON, "result");
    indirections_indirection_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = indirections_indirection_parseFromJSON(result); //nonprimitive
    }


    indirections_get_indirection_response_local_var = indirections_get_indirection_response_create (
        result ? result_local_nonprim : NULL
        );

    return indirections_get_indirection_response_local_var;
end:
    if (result_local_nonprim) {
        indirections_indirection_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
