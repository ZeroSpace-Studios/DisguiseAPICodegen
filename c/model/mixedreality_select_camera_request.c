#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_select_camera_request.h"



mixedreality_select_camera_request_t *mixedreality_select_camera_request_create(
    d3api_locator_t *mr_set,
    d3api_locator_t *camera_override
    ) {
    mixedreality_select_camera_request_t *mixedreality_select_camera_request_local_var = malloc(sizeof(mixedreality_select_camera_request_t));
    if (!mixedreality_select_camera_request_local_var) {
        return NULL;
    }
    mixedreality_select_camera_request_local_var->mr_set = mr_set;
    mixedreality_select_camera_request_local_var->camera_override = camera_override;

    return mixedreality_select_camera_request_local_var;
}


void mixedreality_select_camera_request_free(mixedreality_select_camera_request_t *mixedreality_select_camera_request) {
    if(NULL == mixedreality_select_camera_request){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_select_camera_request->mr_set) {
        d3api_locator_free(mixedreality_select_camera_request->mr_set);
        mixedreality_select_camera_request->mr_set = NULL;
    }
    if (mixedreality_select_camera_request->camera_override) {
        d3api_locator_free(mixedreality_select_camera_request->camera_override);
        mixedreality_select_camera_request->camera_override = NULL;
    }
    free(mixedreality_select_camera_request);
}

cJSON *mixedreality_select_camera_request_convertToJSON(mixedreality_select_camera_request_t *mixedreality_select_camera_request) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_select_camera_request->mr_set
    if(mixedreality_select_camera_request->mr_set) { 
    cJSON *mr_set_local_JSON = d3api_locator_convertToJSON(mixedreality_select_camera_request->mr_set);
    if(mr_set_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mrSet", mr_set_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_select_camera_request->camera_override
    if(mixedreality_select_camera_request->camera_override) { 
    cJSON *camera_override_local_JSON = d3api_locator_convertToJSON(mixedreality_select_camera_request->camera_override);
    if(camera_override_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cameraOverride", camera_override_local_JSON);
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

mixedreality_select_camera_request_t *mixedreality_select_camera_request_parseFromJSON(cJSON *mixedreality_select_camera_requestJSON){

    mixedreality_select_camera_request_t *mixedreality_select_camera_request_local_var = NULL;

    // mixedreality_select_camera_request->mr_set
    cJSON *mr_set = cJSON_GetObjectItemCaseSensitive(mixedreality_select_camera_requestJSON, "mrSet");
    d3api_locator_t *mr_set_local_nonprim = NULL;
    if (mr_set) { 
    mr_set_local_nonprim = d3api_locator_parseFromJSON(mr_set); //nonprimitive
    }

    // mixedreality_select_camera_request->camera_override
    cJSON *camera_override = cJSON_GetObjectItemCaseSensitive(mixedreality_select_camera_requestJSON, "cameraOverride");
    d3api_locator_t *camera_override_local_nonprim = NULL;
    if (camera_override) { 
    camera_override_local_nonprim = d3api_locator_parseFromJSON(camera_override); //nonprimitive
    }


    mixedreality_select_camera_request_local_var = mixedreality_select_camera_request_create (
        mr_set ? mr_set_local_nonprim : NULL,
        camera_override ? camera_override_local_nonprim : NULL
        );

    return mixedreality_select_camera_request_local_var;
end:
    if (mr_set_local_nonprim) {
        d3api_locator_free(mr_set_local_nonprim);
        mr_set_local_nonprim = NULL;
    }
    if (camera_override_local_nonprim) {
        d3api_locator_free(camera_override_local_nonprim);
        camera_override_local_nonprim = NULL;
    }
    return NULL;

}
