#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_spatial_calibration_info.h"



mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info_create(
    char *uid,
    char *name
    ) {
    mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info_local_var = malloc(sizeof(mixedreality_spatial_calibration_info_t));
    if (!mixedreality_spatial_calibration_info_local_var) {
        return NULL;
    }
    mixedreality_spatial_calibration_info_local_var->uid = uid;
    mixedreality_spatial_calibration_info_local_var->name = name;

    return mixedreality_spatial_calibration_info_local_var;
}


void mixedreality_spatial_calibration_info_free(mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info) {
    if(NULL == mixedreality_spatial_calibration_info){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_spatial_calibration_info->uid) {
        free(mixedreality_spatial_calibration_info->uid);
        mixedreality_spatial_calibration_info->uid = NULL;
    }
    if (mixedreality_spatial_calibration_info->name) {
        free(mixedreality_spatial_calibration_info->name);
        mixedreality_spatial_calibration_info->name = NULL;
    }
    free(mixedreality_spatial_calibration_info);
}

cJSON *mixedreality_spatial_calibration_info_convertToJSON(mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_spatial_calibration_info->uid
    if(mixedreality_spatial_calibration_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_spatial_calibration_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_spatial_calibration_info->name
    if(mixedreality_spatial_calibration_info->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_spatial_calibration_info->name) == NULL) {
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

mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info_parseFromJSON(cJSON *mixedreality_spatial_calibration_infoJSON){

    mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info_local_var = NULL;

    // mixedreality_spatial_calibration_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_spatial_calibration_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_spatial_calibration_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_spatial_calibration_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    mixedreality_spatial_calibration_info_local_var = mixedreality_spatial_calibration_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return mixedreality_spatial_calibration_info_local_var;
end:
    return NULL;

}
