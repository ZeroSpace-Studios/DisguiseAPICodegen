#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_enable_observation_request.h"



cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request_create(
    char *observation_uid,
    int enabled
    ) {
    cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request_local_var = malloc(sizeof(cameracalibration_enable_observation_request_t));
    if (!cameracalibration_enable_observation_request_local_var) {
        return NULL;
    }
    cameracalibration_enable_observation_request_local_var->observation_uid = observation_uid;
    cameracalibration_enable_observation_request_local_var->enabled = enabled;

    return cameracalibration_enable_observation_request_local_var;
}


void cameracalibration_enable_observation_request_free(cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request) {
    if(NULL == cameracalibration_enable_observation_request){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_enable_observation_request->observation_uid) {
        free(cameracalibration_enable_observation_request->observation_uid);
        cameracalibration_enable_observation_request->observation_uid = NULL;
    }
    free(cameracalibration_enable_observation_request);
}

cJSON *cameracalibration_enable_observation_request_convertToJSON(cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_enable_observation_request->observation_uid
    if(cameracalibration_enable_observation_request->observation_uid) { 
    if(cJSON_AddStringToObject(item, "observationUid", cameracalibration_enable_observation_request->observation_uid) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_enable_observation_request->enabled
    if(cameracalibration_enable_observation_request->enabled) { 
    if(cJSON_AddBoolToObject(item, "enabled", cameracalibration_enable_observation_request->enabled) == NULL) {
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

cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request_parseFromJSON(cJSON *cameracalibration_enable_observation_requestJSON){

    cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request_local_var = NULL;

    // cameracalibration_enable_observation_request->observation_uid
    cJSON *observation_uid = cJSON_GetObjectItemCaseSensitive(cameracalibration_enable_observation_requestJSON, "observationUid");
    if (observation_uid) { 
    if(!cJSON_IsString(observation_uid))
    {
    goto end; //String
    }
    }

    // cameracalibration_enable_observation_request->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cameracalibration_enable_observation_requestJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    cameracalibration_enable_observation_request_local_var = cameracalibration_enable_observation_request_create (
        observation_uid ? strdup(observation_uid->valuestring) : NULL,
        enabled ? enabled->valueint : 0
        );

    return cameracalibration_enable_observation_request_local_var;
end:
    return NULL;

}
