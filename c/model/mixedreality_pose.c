#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_pose.h"



mixedreality_pose_t *mixedreality_pose_create(
    d3api_vec3_float_t *position,
    d3api_vec3_float_t *rotation
    ) {
    mixedreality_pose_t *mixedreality_pose_local_var = malloc(sizeof(mixedreality_pose_t));
    if (!mixedreality_pose_local_var) {
        return NULL;
    }
    mixedreality_pose_local_var->position = position;
    mixedreality_pose_local_var->rotation = rotation;

    return mixedreality_pose_local_var;
}


void mixedreality_pose_free(mixedreality_pose_t *mixedreality_pose) {
    if(NULL == mixedreality_pose){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_pose->position) {
        d3api_vec3_float_free(mixedreality_pose->position);
        mixedreality_pose->position = NULL;
    }
    if (mixedreality_pose->rotation) {
        d3api_vec3_float_free(mixedreality_pose->rotation);
        mixedreality_pose->rotation = NULL;
    }
    free(mixedreality_pose);
}

cJSON *mixedreality_pose_convertToJSON(mixedreality_pose_t *mixedreality_pose) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_pose->position
    if(mixedreality_pose->position) { 
    cJSON *position_local_JSON = d3api_vec3_float_convertToJSON(mixedreality_pose->position);
    if(position_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "position", position_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_pose->rotation
    if(mixedreality_pose->rotation) { 
    cJSON *rotation_local_JSON = d3api_vec3_float_convertToJSON(mixedreality_pose->rotation);
    if(rotation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rotation", rotation_local_JSON);
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

mixedreality_pose_t *mixedreality_pose_parseFromJSON(cJSON *mixedreality_poseJSON){

    mixedreality_pose_t *mixedreality_pose_local_var = NULL;

    // mixedreality_pose->position
    cJSON *position = cJSON_GetObjectItemCaseSensitive(mixedreality_poseJSON, "position");
    d3api_vec3_float_t *position_local_nonprim = NULL;
    if (position) { 
    position_local_nonprim = d3api_vec3_float_parseFromJSON(position); //nonprimitive
    }

    // mixedreality_pose->rotation
    cJSON *rotation = cJSON_GetObjectItemCaseSensitive(mixedreality_poseJSON, "rotation");
    d3api_vec3_float_t *rotation_local_nonprim = NULL;
    if (rotation) { 
    rotation_local_nonprim = d3api_vec3_float_parseFromJSON(rotation); //nonprimitive
    }


    mixedreality_pose_local_var = mixedreality_pose_create (
        position ? position_local_nonprim : NULL,
        rotation ? rotation_local_nonprim : NULL
        );

    return mixedreality_pose_local_var;
end:
    if (position_local_nonprim) {
        d3api_vec3_float_free(position_local_nonprim);
        position_local_nonprim = NULL;
    }
    if (rotation_local_nonprim) {
        d3api_vec3_float_free(rotation_local_nonprim);
        rotation_local_nonprim = NULL;
    }
    return NULL;

}
