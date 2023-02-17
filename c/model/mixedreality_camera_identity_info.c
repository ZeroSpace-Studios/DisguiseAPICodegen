#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_camera_identity_info.h"



mixedreality_camera_identity_info_t *mixedreality_camera_identity_info_create(
    char *uid,
    char *name
    ) {
    mixedreality_camera_identity_info_t *mixedreality_camera_identity_info_local_var = malloc(sizeof(mixedreality_camera_identity_info_t));
    if (!mixedreality_camera_identity_info_local_var) {
        return NULL;
    }
    mixedreality_camera_identity_info_local_var->uid = uid;
    mixedreality_camera_identity_info_local_var->name = name;

    return mixedreality_camera_identity_info_local_var;
}


void mixedreality_camera_identity_info_free(mixedreality_camera_identity_info_t *mixedreality_camera_identity_info) {
    if(NULL == mixedreality_camera_identity_info){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_camera_identity_info->uid) {
        free(mixedreality_camera_identity_info->uid);
        mixedreality_camera_identity_info->uid = NULL;
    }
    if (mixedreality_camera_identity_info->name) {
        free(mixedreality_camera_identity_info->name);
        mixedreality_camera_identity_info->name = NULL;
    }
    free(mixedreality_camera_identity_info);
}

cJSON *mixedreality_camera_identity_info_convertToJSON(mixedreality_camera_identity_info_t *mixedreality_camera_identity_info) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_camera_identity_info->uid
    if(mixedreality_camera_identity_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_camera_identity_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_camera_identity_info->name
    if(mixedreality_camera_identity_info->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_camera_identity_info->name) == NULL) {
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

mixedreality_camera_identity_info_t *mixedreality_camera_identity_info_parseFromJSON(cJSON *mixedreality_camera_identity_infoJSON){

    mixedreality_camera_identity_info_t *mixedreality_camera_identity_info_local_var = NULL;

    // mixedreality_camera_identity_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_camera_identity_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_camera_identity_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_camera_identity_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    mixedreality_camera_identity_info_local_var = mixedreality_camera_identity_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return mixedreality_camera_identity_info_local_var;
end:
    return NULL;

}
