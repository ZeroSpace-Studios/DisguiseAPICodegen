#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_enable_observation_response.h"



v1_enable_observation_response_t *v1_enable_observation_response_create(
    int result
    ) {
    v1_enable_observation_response_t *v1_enable_observation_response_local_var = malloc(sizeof(v1_enable_observation_response_t));
    if (!v1_enable_observation_response_local_var) {
        return NULL;
    }
    v1_enable_observation_response_local_var->result = result;

    return v1_enable_observation_response_local_var;
}


void v1_enable_observation_response_free(v1_enable_observation_response_t *v1_enable_observation_response) {
    if(NULL == v1_enable_observation_response){
        return ;
    }
    listEntry_t *listEntry;
    free(v1_enable_observation_response);
}

cJSON *v1_enable_observation_response_convertToJSON(v1_enable_observation_response_t *v1_enable_observation_response) {
    cJSON *item = cJSON_CreateObject();

    // v1_enable_observation_response->result
    if(v1_enable_observation_response->result) { 
    if(cJSON_AddBoolToObject(item, "result", v1_enable_observation_response->result) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1_enable_observation_response_t *v1_enable_observation_response_parseFromJSON(cJSON *v1_enable_observation_responseJSON){

    v1_enable_observation_response_t *v1_enable_observation_response_local_var = NULL;

    // v1_enable_observation_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(v1_enable_observation_responseJSON, "result");
    if (result) { 
    if(!cJSON_IsBool(result))
    {
    goto end; //Bool
    }
    }


    v1_enable_observation_response_local_var = v1_enable_observation_response_create (
        result ? result->valueint : 0
        );

    return v1_enable_observation_response_local_var;
end:
    return NULL;

}
