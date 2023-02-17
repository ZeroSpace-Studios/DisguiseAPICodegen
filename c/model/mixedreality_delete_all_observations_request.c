#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_delete_all_observations_request.h"



mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request_create(
    d3api_locator_t *spatial_calibration
    ) {
    mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request_local_var = malloc(sizeof(mixedreality_delete_all_observations_request_t));
    if (!mixedreality_delete_all_observations_request_local_var) {
        return NULL;
    }
    mixedreality_delete_all_observations_request_local_var->spatial_calibration = spatial_calibration;

    return mixedreality_delete_all_observations_request_local_var;
}


void mixedreality_delete_all_observations_request_free(mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request) {
    if(NULL == mixedreality_delete_all_observations_request){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_delete_all_observations_request->spatial_calibration) {
        d3api_locator_free(mixedreality_delete_all_observations_request->spatial_calibration);
        mixedreality_delete_all_observations_request->spatial_calibration = NULL;
    }
    free(mixedreality_delete_all_observations_request);
}

cJSON *mixedreality_delete_all_observations_request_convertToJSON(mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_delete_all_observations_request->spatial_calibration
    if(mixedreality_delete_all_observations_request->spatial_calibration) { 
    cJSON *spatial_calibration_local_JSON = d3api_locator_convertToJSON(mixedreality_delete_all_observations_request->spatial_calibration);
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

mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request_parseFromJSON(cJSON *mixedreality_delete_all_observations_requestJSON){

    mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request_local_var = NULL;

    // mixedreality_delete_all_observations_request->spatial_calibration
    cJSON *spatial_calibration = cJSON_GetObjectItemCaseSensitive(mixedreality_delete_all_observations_requestJSON, "spatialCalibration");
    d3api_locator_t *spatial_calibration_local_nonprim = NULL;
    if (spatial_calibration) { 
    spatial_calibration_local_nonprim = d3api_locator_parseFromJSON(spatial_calibration); //nonprimitive
    }


    mixedreality_delete_all_observations_request_local_var = mixedreality_delete_all_observations_request_create (
        spatial_calibration ? spatial_calibration_local_nonprim : NULL
        );

    return mixedreality_delete_all_observations_request_local_var;
end:
    if (spatial_calibration_local_nonprim) {
        d3api_locator_free(spatial_calibration_local_nonprim);
        spatial_calibration_local_nonprim = NULL;
    }
    return NULL;

}
