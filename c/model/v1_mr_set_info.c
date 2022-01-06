#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_mr_set_info.h"



v1_mr_set_info_t *v1_mr_set_info_create(
    char *uid,
    char *name,
    v1_camera_info_t *target_camera
    ) {
    v1_mr_set_info_t *v1_mr_set_info_local_var = malloc(sizeof(v1_mr_set_info_t));
    if (!v1_mr_set_info_local_var) {
        return NULL;
    }
    v1_mr_set_info_local_var->uid = uid;
    v1_mr_set_info_local_var->name = name;
    v1_mr_set_info_local_var->target_camera = target_camera;

    return v1_mr_set_info_local_var;
}


void v1_mr_set_info_free(v1_mr_set_info_t *v1_mr_set_info) {
    if(NULL == v1_mr_set_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_mr_set_info->uid) {
        free(v1_mr_set_info->uid);
        v1_mr_set_info->uid = NULL;
    }
    if (v1_mr_set_info->name) {
        free(v1_mr_set_info->name);
        v1_mr_set_info->name = NULL;
    }
    if (v1_mr_set_info->target_camera) {
        v1_camera_info_free(v1_mr_set_info->target_camera);
        v1_mr_set_info->target_camera = NULL;
    }
    free(v1_mr_set_info);
}

cJSON *v1_mr_set_info_convertToJSON(v1_mr_set_info_t *v1_mr_set_info) {
    cJSON *item = cJSON_CreateObject();

    // v1_mr_set_info->uid
    if(v1_mr_set_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", v1_mr_set_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // v1_mr_set_info->name
    if(v1_mr_set_info->name) { 
    if(cJSON_AddStringToObject(item, "name", v1_mr_set_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // v1_mr_set_info->target_camera
    if(v1_mr_set_info->target_camera) { 
    cJSON *target_camera_local_JSON = v1_camera_info_convertToJSON(v1_mr_set_info->target_camera);
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

v1_mr_set_info_t *v1_mr_set_info_parseFromJSON(cJSON *v1_mr_set_infoJSON){

    v1_mr_set_info_t *v1_mr_set_info_local_var = NULL;

    // v1_mr_set_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(v1_mr_set_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // v1_mr_set_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v1_mr_set_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // v1_mr_set_info->target_camera
    cJSON *target_camera = cJSON_GetObjectItemCaseSensitive(v1_mr_set_infoJSON, "targetCamera");
    v1_camera_info_t *target_camera_local_nonprim = NULL;
    if (target_camera) { 
    target_camera_local_nonprim = v1_camera_info_parseFromJSON(target_camera); //nonprimitive
    }


    v1_mr_set_info_local_var = v1_mr_set_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        target_camera ? target_camera_local_nonprim : NULL
        );

    return v1_mr_set_info_local_var;
end:
    if (target_camera_local_nonprim) {
        v1_camera_info_free(target_camera_local_nonprim);
        target_camera_local_nonprim = NULL;
    }
    return NULL;

}
