#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_camera_info.h"



mixedreality_camera_info_t *mixedreality_camera_info_create(
    char *uid,
    char *name,
    mixedreality_spatial_calibration_info_t *spatial_calibration
    ) {
    mixedreality_camera_info_t *mixedreality_camera_info_local_var = malloc(sizeof(mixedreality_camera_info_t));
    if (!mixedreality_camera_info_local_var) {
        return NULL;
    }
    mixedreality_camera_info_local_var->uid = uid;
    mixedreality_camera_info_local_var->name = name;
    mixedreality_camera_info_local_var->spatial_calibration = spatial_calibration;

    return mixedreality_camera_info_local_var;
}


void mixedreality_camera_info_free(mixedreality_camera_info_t *mixedreality_camera_info) {
    if(NULL == mixedreality_camera_info){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_camera_info->uid) {
        free(mixedreality_camera_info->uid);
        mixedreality_camera_info->uid = NULL;
    }
    if (mixedreality_camera_info->name) {
        free(mixedreality_camera_info->name);
        mixedreality_camera_info->name = NULL;
    }
    if (mixedreality_camera_info->spatial_calibration) {
        mixedreality_spatial_calibration_info_free(mixedreality_camera_info->spatial_calibration);
        mixedreality_camera_info->spatial_calibration = NULL;
    }
    free(mixedreality_camera_info);
}

cJSON *mixedreality_camera_info_convertToJSON(mixedreality_camera_info_t *mixedreality_camera_info) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_camera_info->uid
    if(mixedreality_camera_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_camera_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_camera_info->name
    if(mixedreality_camera_info->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_camera_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_camera_info->spatial_calibration
    if(mixedreality_camera_info->spatial_calibration) { 
    cJSON *spatial_calibration_local_JSON = mixedreality_spatial_calibration_info_convertToJSON(mixedreality_camera_info->spatial_calibration);
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

mixedreality_camera_info_t *mixedreality_camera_info_parseFromJSON(cJSON *mixedreality_camera_infoJSON){

    mixedreality_camera_info_t *mixedreality_camera_info_local_var = NULL;

    // mixedreality_camera_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_camera_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_camera_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_camera_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // mixedreality_camera_info->spatial_calibration
    cJSON *spatial_calibration = cJSON_GetObjectItemCaseSensitive(mixedreality_camera_infoJSON, "spatialCalibration");
    mixedreality_spatial_calibration_info_t *spatial_calibration_local_nonprim = NULL;
    if (spatial_calibration) { 
    spatial_calibration_local_nonprim = mixedreality_spatial_calibration_info_parseFromJSON(spatial_calibration); //nonprimitive
    }


    mixedreality_camera_info_local_var = mixedreality_camera_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        spatial_calibration ? spatial_calibration_local_nonprim : NULL
        );

    return mixedreality_camera_info_local_var;
end:
    if (spatial_calibration_local_nonprim) {
        mixedreality_spatial_calibration_info_free(spatial_calibration_local_nonprim);
        spatial_calibration_local_nonprim = NULL;
    }
    return NULL;

}
