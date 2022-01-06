#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_camera_info.h"



v1_camera_info_t *v1_camera_info_create(
    char *uid,
    char *name,
    list_t *observations
    ) {
    v1_camera_info_t *v1_camera_info_local_var = malloc(sizeof(v1_camera_info_t));
    if (!v1_camera_info_local_var) {
        return NULL;
    }
    v1_camera_info_local_var->uid = uid;
    v1_camera_info_local_var->name = name;
    v1_camera_info_local_var->observations = observations;

    return v1_camera_info_local_var;
}


void v1_camera_info_free(v1_camera_info_t *v1_camera_info) {
    if(NULL == v1_camera_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_camera_info->uid) {
        free(v1_camera_info->uid);
        v1_camera_info->uid = NULL;
    }
    if (v1_camera_info->name) {
        free(v1_camera_info->name);
        v1_camera_info->name = NULL;
    }
    if (v1_camera_info->observations) {
        list_ForEach(listEntry, v1_camera_info->observations) {
            v1_observation_info_free(listEntry->data);
        }
        list_free(v1_camera_info->observations);
        v1_camera_info->observations = NULL;
    }
    free(v1_camera_info);
}

cJSON *v1_camera_info_convertToJSON(v1_camera_info_t *v1_camera_info) {
    cJSON *item = cJSON_CreateObject();

    // v1_camera_info->uid
    if(v1_camera_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", v1_camera_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // v1_camera_info->name
    if(v1_camera_info->name) { 
    if(cJSON_AddStringToObject(item, "name", v1_camera_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // v1_camera_info->observations
    if(v1_camera_info->observations) { 
    cJSON *observations = cJSON_AddArrayToObject(item, "observations");
    if(observations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *observationsListEntry;
    if (v1_camera_info->observations) {
    list_ForEach(observationsListEntry, v1_camera_info->observations) {
    cJSON *itemLocal = v1_observation_info_convertToJSON(observationsListEntry->data);
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

v1_camera_info_t *v1_camera_info_parseFromJSON(cJSON *v1_camera_infoJSON){

    v1_camera_info_t *v1_camera_info_local_var = NULL;

    // v1_camera_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(v1_camera_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // v1_camera_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v1_camera_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // v1_camera_info->observations
    cJSON *observations = cJSON_GetObjectItemCaseSensitive(v1_camera_infoJSON, "observations");
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
        v1_observation_info_t *observationsItem = v1_observation_info_parseFromJSON(observations_local_nonprimitive);

        list_addElement(observationsList, observationsItem);
    }
    }


    v1_camera_info_local_var = v1_camera_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        observations ? observationsList : NULL
        );

    return v1_camera_info_local_var;
end:
    return NULL;

}
