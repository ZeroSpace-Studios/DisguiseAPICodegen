#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resources_get_resource_response.h"



resources_get_resource_response_t *resources_get_resource_response_create(
    resources_resource_info_t *result
    ) {
    resources_get_resource_response_t *resources_get_resource_response_local_var = malloc(sizeof(resources_get_resource_response_t));
    if (!resources_get_resource_response_local_var) {
        return NULL;
    }
    resources_get_resource_response_local_var->result = result;

    return resources_get_resource_response_local_var;
}


void resources_get_resource_response_free(resources_get_resource_response_t *resources_get_resource_response) {
    if(NULL == resources_get_resource_response){
        return ;
    }
    listEntry_t *listEntry;
    if (resources_get_resource_response->result) {
        resources_resource_info_free(resources_get_resource_response->result);
        resources_get_resource_response->result = NULL;
    }
    free(resources_get_resource_response);
}

cJSON *resources_get_resource_response_convertToJSON(resources_get_resource_response_t *resources_get_resource_response) {
    cJSON *item = cJSON_CreateObject();

    // resources_get_resource_response->result
    if(resources_get_resource_response->result) { 
    cJSON *result_local_JSON = resources_resource_info_convertToJSON(resources_get_resource_response->result);
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

resources_get_resource_response_t *resources_get_resource_response_parseFromJSON(cJSON *resources_get_resource_responseJSON){

    resources_get_resource_response_t *resources_get_resource_response_local_var = NULL;

    // resources_get_resource_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(resources_get_resource_responseJSON, "result");
    resources_resource_info_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = resources_resource_info_parseFromJSON(result); //nonprimitive
    }


    resources_get_resource_response_local_var = resources_get_resource_response_create (
        result ? result_local_nonprim : NULL
        );

    return resources_get_resource_response_local_var;
end:
    if (result_local_nonprim) {
        resources_resource_info_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}
