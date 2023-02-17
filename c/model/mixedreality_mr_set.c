#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_mr_set.h"



mixedreality_mr_set_t *mixedreality_mr_set_create(
    char *uid,
    char *name,
    mixedreality_camera_identity_info_t *current_camera,
    int is_camera_override
    ) {
    mixedreality_mr_set_t *mixedreality_mr_set_local_var = malloc(sizeof(mixedreality_mr_set_t));
    if (!mixedreality_mr_set_local_var) {
        return NULL;
    }
    mixedreality_mr_set_local_var->uid = uid;
    mixedreality_mr_set_local_var->name = name;
    mixedreality_mr_set_local_var->current_camera = current_camera;
    mixedreality_mr_set_local_var->is_camera_override = is_camera_override;

    return mixedreality_mr_set_local_var;
}


void mixedreality_mr_set_free(mixedreality_mr_set_t *mixedreality_mr_set) {
    if(NULL == mixedreality_mr_set){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_mr_set->uid) {
        free(mixedreality_mr_set->uid);
        mixedreality_mr_set->uid = NULL;
    }
    if (mixedreality_mr_set->name) {
        free(mixedreality_mr_set->name);
        mixedreality_mr_set->name = NULL;
    }
    if (mixedreality_mr_set->current_camera) {
        mixedreality_camera_identity_info_free(mixedreality_mr_set->current_camera);
        mixedreality_mr_set->current_camera = NULL;
    }
    free(mixedreality_mr_set);
}

cJSON *mixedreality_mr_set_convertToJSON(mixedreality_mr_set_t *mixedreality_mr_set) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_mr_set->uid
    if(mixedreality_mr_set->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_mr_set->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_mr_set->name
    if(mixedreality_mr_set->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_mr_set->name) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_mr_set->current_camera
    if(mixedreality_mr_set->current_camera) { 
    cJSON *current_camera_local_JSON = mixedreality_camera_identity_info_convertToJSON(mixedreality_mr_set->current_camera);
    if(current_camera_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currentCamera", current_camera_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_mr_set->is_camera_override
    if(mixedreality_mr_set->is_camera_override) { 
    if(cJSON_AddBoolToObject(item, "isCameraOverride", mixedreality_mr_set->is_camera_override) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mixedreality_mr_set_t *mixedreality_mr_set_parseFromJSON(cJSON *mixedreality_mr_setJSON){

    mixedreality_mr_set_t *mixedreality_mr_set_local_var = NULL;

    // mixedreality_mr_set->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_mr_setJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_mr_set->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_mr_setJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // mixedreality_mr_set->current_camera
    cJSON *current_camera = cJSON_GetObjectItemCaseSensitive(mixedreality_mr_setJSON, "currentCamera");
    mixedreality_camera_identity_info_t *current_camera_local_nonprim = NULL;
    if (current_camera) { 
    current_camera_local_nonprim = mixedreality_camera_identity_info_parseFromJSON(current_camera); //nonprimitive
    }

    // mixedreality_mr_set->is_camera_override
    cJSON *is_camera_override = cJSON_GetObjectItemCaseSensitive(mixedreality_mr_setJSON, "isCameraOverride");
    if (is_camera_override) { 
    if(!cJSON_IsBool(is_camera_override))
    {
    goto end; //Bool
    }
    }


    mixedreality_mr_set_local_var = mixedreality_mr_set_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        current_camera ? current_camera_local_nonprim : NULL,
        is_camera_override ? is_camera_override->valueint : 0
        );

    return mixedreality_mr_set_local_var;
end:
    if (current_camera_local_nonprim) {
        mixedreality_camera_identity_info_free(current_camera_local_nonprim);
        current_camera_local_nonprim = NULL;
    }
    return NULL;

}
