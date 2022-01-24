#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_mr_set_info.h"



cameracalibration_mr_set_info_t *cameracalibration_mr_set_info_create(
    char *uid,
    char *name,
    cameracalibration_camera_info_t *target_camera
    ) {
    cameracalibration_mr_set_info_t *cameracalibration_mr_set_info_local_var = malloc(sizeof(cameracalibration_mr_set_info_t));
    if (!cameracalibration_mr_set_info_local_var) {
        return NULL;
    }
    cameracalibration_mr_set_info_local_var->uid = uid;
    cameracalibration_mr_set_info_local_var->name = name;
    cameracalibration_mr_set_info_local_var->target_camera = target_camera;

    return cameracalibration_mr_set_info_local_var;
}


void cameracalibration_mr_set_info_free(cameracalibration_mr_set_info_t *cameracalibration_mr_set_info) {
    if(NULL == cameracalibration_mr_set_info){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_mr_set_info->uid) {
        free(cameracalibration_mr_set_info->uid);
        cameracalibration_mr_set_info->uid = NULL;
    }
    if (cameracalibration_mr_set_info->name) {
        free(cameracalibration_mr_set_info->name);
        cameracalibration_mr_set_info->name = NULL;
    }
    if (cameracalibration_mr_set_info->target_camera) {
        cameracalibration_camera_info_free(cameracalibration_mr_set_info->target_camera);
        cameracalibration_mr_set_info->target_camera = NULL;
    }
    free(cameracalibration_mr_set_info);
}

cJSON *cameracalibration_mr_set_info_convertToJSON(cameracalibration_mr_set_info_t *cameracalibration_mr_set_info) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_mr_set_info->uid
    if(cameracalibration_mr_set_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", cameracalibration_mr_set_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_mr_set_info->name
    if(cameracalibration_mr_set_info->name) { 
    if(cJSON_AddStringToObject(item, "name", cameracalibration_mr_set_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_mr_set_info->target_camera
    if(cameracalibration_mr_set_info->target_camera) { 
    cJSON *target_camera_local_JSON = cameracalibration_camera_info_convertToJSON(cameracalibration_mr_set_info->target_camera);
    if(target_camera_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "targetCamera", target_camera_local_JSON);
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

cameracalibration_mr_set_info_t *cameracalibration_mr_set_info_parseFromJSON(cJSON *cameracalibration_mr_set_infoJSON){

    cameracalibration_mr_set_info_t *cameracalibration_mr_set_info_local_var = NULL;

    // cameracalibration_mr_set_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(cameracalibration_mr_set_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // cameracalibration_mr_set_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cameracalibration_mr_set_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // cameracalibration_mr_set_info->target_camera
    cJSON *target_camera = cJSON_GetObjectItemCaseSensitive(cameracalibration_mr_set_infoJSON, "targetCamera");
    cameracalibration_camera_info_t *target_camera_local_nonprim = NULL;
    if (target_camera) { 
    target_camera_local_nonprim = cameracalibration_camera_info_parseFromJSON(target_camera); //nonprimitive
    }


    cameracalibration_mr_set_info_local_var = cameracalibration_mr_set_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        target_camera ? target_camera_local_nonprim : NULL
        );

    return cameracalibration_mr_set_info_local_var;
end:
    if (target_camera_local_nonprim) {
        cameracalibration_camera_info_free(target_camera_local_nonprim);
        target_camera_local_nonprim = NULL;
    }
    return NULL;

}
