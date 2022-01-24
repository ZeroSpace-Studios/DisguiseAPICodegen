#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_get_observation_progress_response.h"



cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response_create(
    int in_progress
    ) {
    cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response_local_var = malloc(sizeof(cameracalibration_get_observation_progress_response_t));
    if (!cameracalibration_get_observation_progress_response_local_var) {
        return NULL;
    }
    cameracalibration_get_observation_progress_response_local_var->in_progress = in_progress;

    return cameracalibration_get_observation_progress_response_local_var;
}


void cameracalibration_get_observation_progress_response_free(cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response) {
    if(NULL == cameracalibration_get_observation_progress_response){
        return ;
    }
    listEntry_t *listEntry;
    free(cameracalibration_get_observation_progress_response);
}

cJSON *cameracalibration_get_observation_progress_response_convertToJSON(cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_get_observation_progress_response->in_progress
    if(cameracalibration_get_observation_progress_response->in_progress) { 
    if(cJSON_AddBoolToObject(item, "inProgress", cameracalibration_get_observation_progress_response->in_progress) == NULL) {
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

cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response_parseFromJSON(cJSON *cameracalibration_get_observation_progress_responseJSON){

    cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response_local_var = NULL;

    // cameracalibration_get_observation_progress_response->in_progress
    cJSON *in_progress = cJSON_GetObjectItemCaseSensitive(cameracalibration_get_observation_progress_responseJSON, "inProgress");
    if (in_progress) { 
    if(!cJSON_IsBool(in_progress))
    {
    goto end; //Bool
    }
    }


    cameracalibration_get_observation_progress_response_local_var = cameracalibration_get_observation_progress_response_create (
        in_progress ? in_progress->valueint : 0
        );

    return cameracalibration_get_observation_progress_response_local_var;
end:
    return NULL;

}
