#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_add_observation_request.h"



cameracalibration_add_observation_request_t *cameracalibration_add_observation_request_create(
    char *camera_uid
    ) {
    cameracalibration_add_observation_request_t *cameracalibration_add_observation_request_local_var = malloc(sizeof(cameracalibration_add_observation_request_t));
    if (!cameracalibration_add_observation_request_local_var) {
        return NULL;
    }
    cameracalibration_add_observation_request_local_var->camera_uid = camera_uid;

    return cameracalibration_add_observation_request_local_var;
}


void cameracalibration_add_observation_request_free(cameracalibration_add_observation_request_t *cameracalibration_add_observation_request) {
    if(NULL == cameracalibration_add_observation_request){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_add_observation_request->camera_uid) {
        free(cameracalibration_add_observation_request->camera_uid);
        cameracalibration_add_observation_request->camera_uid = NULL;
    }
    free(cameracalibration_add_observation_request);
}

cJSON *cameracalibration_add_observation_request_convertToJSON(cameracalibration_add_observation_request_t *cameracalibration_add_observation_request) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_add_observation_request->camera_uid
    if(cameracalibration_add_observation_request->camera_uid) { 
    if(cJSON_AddStringToObject(item, "cameraUid", cameracalibration_add_observation_request->camera_uid) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cameracalibration_add_observation_request_t *cameracalibration_add_observation_request_parseFromJSON(cJSON *cameracalibration_add_observation_requestJSON){

    cameracalibration_add_observation_request_t *cameracalibration_add_observation_request_local_var = NULL;

    // cameracalibration_add_observation_request->camera_uid
    cJSON *camera_uid = cJSON_GetObjectItemCaseSensitive(cameracalibration_add_observation_requestJSON, "cameraUid");
    if (camera_uid) { 
    if(!cJSON_IsString(camera_uid))
    {
    goto end; //String
    }
    }


    cameracalibration_add_observation_request_local_var = cameracalibration_add_observation_request_create (
        camera_uid ? strdup(camera_uid->valuestring) : NULL
        );

    return cameracalibration_add_observation_request_local_var;
end:
    return NULL;

}
