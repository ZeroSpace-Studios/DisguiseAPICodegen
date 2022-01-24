#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_camera_info.h"



cameracalibration_camera_info_t *cameracalibration_camera_info_create(
    char *uid,
    char *name,
    list_t *observations
    ) {
    cameracalibration_camera_info_t *cameracalibration_camera_info_local_var = malloc(sizeof(cameracalibration_camera_info_t));
    if (!cameracalibration_camera_info_local_var) {
        return NULL;
    }
    cameracalibration_camera_info_local_var->uid = uid;
    cameracalibration_camera_info_local_var->name = name;
    cameracalibration_camera_info_local_var->observations = observations;

    return cameracalibration_camera_info_local_var;
}


void cameracalibration_camera_info_free(cameracalibration_camera_info_t *cameracalibration_camera_info) {
    if(NULL == cameracalibration_camera_info){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_camera_info->uid) {
        free(cameracalibration_camera_info->uid);
        cameracalibration_camera_info->uid = NULL;
    }
    if (cameracalibration_camera_info->name) {
        free(cameracalibration_camera_info->name);
        cameracalibration_camera_info->name = NULL;
    }
    if (cameracalibration_camera_info->observations) {
        list_ForEach(listEntry, cameracalibration_camera_info->observations) {
            cameracalibration_observation_info_free(listEntry->data);
        }
        list_free(cameracalibration_camera_info->observations);
        cameracalibration_camera_info->observations = NULL;
    }
    free(cameracalibration_camera_info);
}

cJSON *cameracalibration_camera_info_convertToJSON(cameracalibration_camera_info_t *cameracalibration_camera_info) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_camera_info->uid
    if(cameracalibration_camera_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", cameracalibration_camera_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_camera_info->name
    if(cameracalibration_camera_info->name) { 
    if(cJSON_AddStringToObject(item, "name", cameracalibration_camera_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_camera_info->observations
    if(cameracalibration_camera_info->observations) { 
    cJSON *observations = cJSON_AddArrayToObject(item, "observations");
    if(observations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *observationsListEntry;
    if (cameracalibration_camera_info->observations) {
    list_ForEach(observationsListEntry, cameracalibration_camera_info->observations) {
    cJSON *itemLocal = cameracalibration_observation_info_convertToJSON(observationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(observations, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cameracalibration_camera_info_t *cameracalibration_camera_info_parseFromJSON(cJSON *cameracalibration_camera_infoJSON){

    cameracalibration_camera_info_t *cameracalibration_camera_info_local_var = NULL;

    // cameracalibration_camera_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(cameracalibration_camera_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // cameracalibration_camera_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cameracalibration_camera_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // cameracalibration_camera_info->observations
    cJSON *observations = cJSON_GetObjectItemCaseSensitive(cameracalibration_camera_infoJSON, "observations");
    list_t *observationsList;
    if (observations) { 
    cJSON *observations_local_nonprimitive;
    if(!cJSON_IsArray(observations)){
        goto end; //nonprimitive container
    }

    observationsList = list_create();

    cJSON_ArrayForEach(observations_local_nonprimitive,observations )
    {
        if(!cJSON_IsObject(observations_local_nonprimitive)){
            goto end;
        }
        cameracalibration_observation_info_t *observationsItem = cameracalibration_observation_info_parseFromJSON(observations_local_nonprimitive);

        list_addElement(observationsList, observationsItem);
    }
    }


    cameracalibration_camera_info_local_var = cameracalibration_camera_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        observations ? observationsList : NULL
        );

    return cameracalibration_camera_info_local_var;
end:
    return NULL;

}
