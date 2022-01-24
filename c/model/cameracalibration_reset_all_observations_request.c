#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_reset_all_observations_request.h"



cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request_create(
    char *camera_uid
    ) {
    cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request_local_var = malloc(sizeof(cameracalibration_reset_all_observations_request_t));
    if (!cameracalibration_reset_all_observations_request_local_var) {
        return NULL;
    }
    cameracalibration_reset_all_observations_request_local_var->camera_uid = camera_uid;

    return cameracalibration_reset_all_observations_request_local_var;
}


void cameracalibration_reset_all_observations_request_free(cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request) {
    if(NULL == cameracalibration_reset_all_observations_request){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_reset_all_observations_request->camera_uid) {
        free(cameracalibration_reset_all_observations_request->camera_uid);
        cameracalibration_reset_all_observations_request->camera_uid = NULL;
    }
    free(cameracalibration_reset_all_observations_request);
}

cJSON *cameracalibration_reset_all_observations_request_convertToJSON(cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_reset_all_observations_request->camera_uid
    if(cameracalibration_reset_all_observations_request->camera_uid) { 
    if(cJSON_AddStringToObject(item, "cameraUid", cameracalibration_reset_all_observations_request->camera_uid) == NULL) {
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

cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request_parseFromJSON(cJSON *cameracalibration_reset_all_observations_requestJSON){

    cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request_local_var = NULL;

    // cameracalibration_reset_all_observations_request->camera_uid
    cJSON *camera_uid = cJSON_GetObjectItemCaseSensitive(cameracalibration_reset_all_observations_requestJSON, "cameraUid");
    if (camera_uid) { 
    if(!cJSON_IsString(camera_uid))
    {
    goto end; //String
    }
    }


    cameracalibration_reset_all_observations_request_local_var = cameracalibration_reset_all_observations_request_create (
        camera_uid ? strdup(camera_uid->valuestring) : NULL
        );

    return cameracalibration_reset_all_observations_request_local_var;
end:
    return NULL;

}
