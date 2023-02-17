#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_capture_observation_request.h"



mixedreality_capture_observation_request_t *mixedreality_capture_observation_request_create(
    d3api_locator_t *camera,
    d3api_locator_t *spatial_calibration
    ) {
    mixedreality_capture_observation_request_t *mixedreality_capture_observation_request_local_var = malloc(sizeof(mixedreality_capture_observation_request_t));
    if (!mixedreality_capture_observation_request_local_var) {
        return NULL;
    }
    mixedreality_capture_observation_request_local_var->camera = camera;
    mixedreality_capture_observation_request_local_var->spatial_calibration = spatial_calibration;

    return mixedreality_capture_observation_request_local_var;
}


void mixedreality_capture_observation_request_free(mixedreality_capture_observation_request_t *mixedreality_capture_observation_request) {
    if(NULL == mixedreality_capture_observation_request){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_capture_observation_request->camera) {
        d3api_locator_free(mixedreality_capture_observation_request->camera);
        mixedreality_capture_observation_request->camera = NULL;
    }
    if (mixedreality_capture_observation_request->spatial_calibration) {
        d3api_locator_free(mixedreality_capture_observation_request->spatial_calibration);
        mixedreality_capture_observation_request->spatial_calibration = NULL;
    }
    free(mixedreality_capture_observation_request);
}

cJSON *mixedreality_capture_observation_request_convertToJSON(mixedreality_capture_observation_request_t *mixedreality_capture_observation_request) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_capture_observation_request->camera
    if(mixedreality_capture_observation_request->camera) { 
    cJSON *camera_local_JSON = d3api_locator_convertToJSON(mixedreality_capture_observation_request->camera);
    if(camera_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "camera", camera_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_capture_observation_request->spatial_calibration
    if(mixedreality_capture_observation_request->spatial_calibration) { 
    cJSON *spatial_calibration_local_JSON = d3api_locator_convertToJSON(mixedreality_capture_observation_request->spatial_calibration);
    if(spatial_calibration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spatialCalibration", spatial_calibration_local_JSON);
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

mixedreality_capture_observation_request_t *mixedreality_capture_observation_request_parseFromJSON(cJSON *mixedreality_capture_observation_requestJSON){

    mixedreality_capture_observation_request_t *mixedreality_capture_observation_request_local_var = NULL;

    // mixedreality_capture_observation_request->camera
    cJSON *camera = cJSON_GetObjectItemCaseSensitive(mixedreality_capture_observation_requestJSON, "camera");
    d3api_locator_t *camera_local_nonprim = NULL;
    if (camera) { 
    camera_local_nonprim = d3api_locator_parseFromJSON(camera); //nonprimitive
    }

    // mixedreality_capture_observation_request->spatial_calibration
    cJSON *spatial_calibration = cJSON_GetObjectItemCaseSensitive(mixedreality_capture_observation_requestJSON, "spatialCalibration");
    d3api_locator_t *spatial_calibration_local_nonprim = NULL;
    if (spatial_calibration) { 
    spatial_calibration_local_nonprim = d3api_locator_parseFromJSON(spatial_calibration); //nonprimitive
    }


    mixedreality_capture_observation_request_local_var = mixedreality_capture_observation_request_create (
        camera ? camera_local_nonprim : NULL,
        spatial_calibration ? spatial_calibration_local_nonprim : NULL
        );

    return mixedreality_capture_observation_request_local_var;
end:
    if (camera_local_nonprim) {
        d3api_locator_free(camera_local_nonprim);
        camera_local_nonprim = NULL;
    }
    if (spatial_calibration_local_nonprim) {
        d3api_locator_free(spatial_calibration_local_nonprim);
        spatial_calibration_local_nonprim = NULL;
    }
    return NULL;

}
