#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickcal_line_up_current_pose_request.h"



quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request_create(
    d3api_locator_t *projector,
    d3api_locator_t *reference_point,
    d3api_vec2_float_t *position
    ) {
    quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request_local_var = malloc(sizeof(quickcal_line_up_current_pose_request_t));
    if (!quickcal_line_up_current_pose_request_local_var) {
        return NULL;
    }
    quickcal_line_up_current_pose_request_local_var->projector = projector;
    quickcal_line_up_current_pose_request_local_var->reference_point = reference_point;
    quickcal_line_up_current_pose_request_local_var->position = position;

    return quickcal_line_up_current_pose_request_local_var;
}


void quickcal_line_up_current_pose_request_free(quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request) {
    if(NULL == quickcal_line_up_current_pose_request){
        return ;
    }
    listEntry_t *listEntry;
    if (quickcal_line_up_current_pose_request->projector) {
        d3api_locator_free(quickcal_line_up_current_pose_request->projector);
        quickcal_line_up_current_pose_request->projector = NULL;
    }
    if (quickcal_line_up_current_pose_request->reference_point) {
        d3api_locator_free(quickcal_line_up_current_pose_request->reference_point);
        quickcal_line_up_current_pose_request->reference_point = NULL;
    }
    if (quickcal_line_up_current_pose_request->position) {
        d3api_vec2_float_free(quickcal_line_up_current_pose_request->position);
        quickcal_line_up_current_pose_request->position = NULL;
    }
    free(quickcal_line_up_current_pose_request);
}

cJSON *quickcal_line_up_current_pose_request_convertToJSON(quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request) {
    cJSON *item = cJSON_CreateObject();

    // quickcal_line_up_current_pose_request->projector
    if(quickcal_line_up_current_pose_request->projector) { 
    cJSON *projector_local_JSON = d3api_locator_convertToJSON(quickcal_line_up_current_pose_request->projector);
    if(projector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "projector", projector_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // quickcal_line_up_current_pose_request->reference_point
    if(quickcal_line_up_current_pose_request->reference_point) { 
    cJSON *reference_point_local_JSON = d3api_locator_convertToJSON(quickcal_line_up_current_pose_request->reference_point);
    if(reference_point_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "referencePoint", reference_point_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // quickcal_line_up_current_pose_request->position
    if(quickcal_line_up_current_pose_request->position) { 
    cJSON *position_local_JSON = d3api_vec2_float_convertToJSON(quickcal_line_up_current_pose_request->position);
    if(position_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "position", position_local_JSON);
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

quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request_parseFromJSON(cJSON *quickcal_line_up_current_pose_requestJSON){

    quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request_local_var = NULL;

    // quickcal_line_up_current_pose_request->projector
    cJSON *projector = cJSON_GetObjectItemCaseSensitive(quickcal_line_up_current_pose_requestJSON, "projector");
    d3api_locator_t *projector_local_nonprim = NULL;
    if (projector) { 
    projector_local_nonprim = d3api_locator_parseFromJSON(projector); //nonprimitive
    }

    // quickcal_line_up_current_pose_request->reference_point
    cJSON *reference_point = cJSON_GetObjectItemCaseSensitive(quickcal_line_up_current_pose_requestJSON, "referencePoint");
    d3api_locator_t *reference_point_local_nonprim = NULL;
    if (reference_point) { 
    reference_point_local_nonprim = d3api_locator_parseFromJSON(reference_point); //nonprimitive
    }

    // quickcal_line_up_current_pose_request->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(quickcal_line_up_current_pose_requestJSON, "position");
    d3api_vec2_float_t *position_local_nonprim = NULL;
    if (position) { 
    position_local_nonprim = d3api_vec2_float_parseFromJSON(position); //nonprimitive
    }


    quickcal_line_up_current_pose_request_local_var = quickcal_line_up_current_pose_request_create (
        projector ? projector_local_nonprim : NULL,
        reference_point ? reference_point_local_nonprim : NULL,
        position ? position_local_nonprim : NULL
        );

    return quickcal_line_up_current_pose_request_local_var;
end:
    if (projector_local_nonprim) {
        d3api_locator_free(projector_local_nonprim);
        projector_local_nonprim = NULL;
    }
    if (reference_point_local_nonprim) {
        d3api_locator_free(reference_point_local_nonprim);
        reference_point_local_nonprim = NULL;
    }
    if (position_local_nonprim) {
        d3api_vec2_float_free(position_local_nonprim);
        position_local_nonprim = NULL;
    }
    return NULL;

}
