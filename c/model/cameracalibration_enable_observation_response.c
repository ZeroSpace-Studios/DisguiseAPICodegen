#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_enable_observation_response.h"



cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response_create(
    int result
    ) {
    cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response_local_var = malloc(sizeof(cameracalibration_enable_observation_response_t));
    if (!cameracalibration_enable_observation_response_local_var) {
        return NULL;
    }
    cameracalibration_enable_observation_response_local_var->result = result;

    return cameracalibration_enable_observation_response_local_var;
}


void cameracalibration_enable_observation_response_free(cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response) {
    if(NULL == cameracalibration_enable_observation_response){
        return ;
    }
    listEntry_t *listEntry;
    free(cameracalibration_enable_observation_response);
}

cJSON *cameracalibration_enable_observation_response_convertToJSON(cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_enable_observation_response->result
    if(cameracalibration_enable_observation_response->result) { 
    if(cJSON_AddBoolToObject(item, "result", cameracalibration_enable_observation_response->result) == NULL) {
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

cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response_parseFromJSON(cJSON *cameracalibration_enable_observation_responseJSON){

    cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response_local_var = NULL;

    // cameracalibration_enable_observation_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(cameracalibration_enable_observation_responseJSON, "result");
    if (result) { 
    if(!cJSON_IsBool(result))
    {
    goto end; //Bool
    }
    }


    cameracalibration_enable_observation_response_local_var = cameracalibration_enable_observation_response_create (
        result ? result->valueint : 0
        );

    return cameracalibration_enable_observation_response_local_var;
end:
    return NULL;

}
