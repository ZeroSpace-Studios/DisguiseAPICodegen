#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_observation_info.h"



cameracalibration_observation_info_t *cameracalibration_observation_info_create(
    char *uid,
    char *description,
    cameracalibration_float3_t *tracked_pos,
    cameracalibration_float3_t *tracked_rot,
    float tracked_zoom,
    float tracked_focus,
    int is_enabled,
    int is_primary
    ) {
    cameracalibration_observation_info_t *cameracalibration_observation_info_local_var = malloc(sizeof(cameracalibration_observation_info_t));
    if (!cameracalibration_observation_info_local_var) {
        return NULL;
    }
    cameracalibration_observation_info_local_var->uid = uid;
    cameracalibration_observation_info_local_var->description = description;
    cameracalibration_observation_info_local_var->tracked_pos = tracked_pos;
    cameracalibration_observation_info_local_var->tracked_rot = tracked_rot;
    cameracalibration_observation_info_local_var->tracked_zoom = tracked_zoom;
    cameracalibration_observation_info_local_var->tracked_focus = tracked_focus;
    cameracalibration_observation_info_local_var->is_enabled = is_enabled;
    cameracalibration_observation_info_local_var->is_primary = is_primary;

    return cameracalibration_observation_info_local_var;
}


void cameracalibration_observation_info_free(cameracalibration_observation_info_t *cameracalibration_observation_info) {
    if(NULL == cameracalibration_observation_info){
        return ;
    }
    listEntry_t *listEntry;
    if (cameracalibration_observation_info->uid) {
        free(cameracalibration_observation_info->uid);
        cameracalibration_observation_info->uid = NULL;
    }
    if (cameracalibration_observation_info->description) {
        free(cameracalibration_observation_info->description);
        cameracalibration_observation_info->description = NULL;
    }
    if (cameracalibration_observation_info->tracked_pos) {
        cameracalibration_float3_free(cameracalibration_observation_info->tracked_pos);
        cameracalibration_observation_info->tracked_pos = NULL;
    }
    if (cameracalibration_observation_info->tracked_rot) {
        cameracalibration_float3_free(cameracalibration_observation_info->tracked_rot);
        cameracalibration_observation_info->tracked_rot = NULL;
    }
    free(cameracalibration_observation_info);
}

cJSON *cameracalibration_observation_info_convertToJSON(cameracalibration_observation_info_t *cameracalibration_observation_info) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_observation_info->uid
    if(cameracalibration_observation_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", cameracalibration_observation_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_observation_info->description
    if(cameracalibration_observation_info->description) { 
    if(cJSON_AddStringToObject(item, "description", cameracalibration_observation_info->description) == NULL) {
    goto fail; //String
    }
     } 


    // cameracalibration_observation_info->tracked_pos
    if(cameracalibration_observation_info->tracked_pos) { 
    cJSON *tracked_pos_local_JSON = cameracalibration_float3_convertToJSON(cameracalibration_observation_info->tracked_pos);
    if(tracked_pos_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trackedPos", tracked_pos_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // cameracalibration_observation_info->tracked_rot
    if(cameracalibration_observation_info->tracked_rot) { 
    cJSON *tracked_rot_local_JSON = cameracalibration_float3_convertToJSON(cameracalibration_observation_info->tracked_rot);
    if(tracked_rot_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trackedRot", tracked_rot_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // cameracalibration_observation_info->tracked_zoom
    if(cameracalibration_observation_info->tracked_zoom) { 
    if(cJSON_AddNumberToObject(item, "trackedZoom", cameracalibration_observation_info->tracked_zoom) == NULL) {
    goto fail; //Numeric
    }
     } 


    // cameracalibration_observation_info->tracked_focus
    if(cameracalibration_observation_info->tracked_focus) { 
    if(cJSON_AddNumberToObject(item, "trackedFocus", cameracalibration_observation_info->tracked_focus) == NULL) {
    goto fail; //Numeric
    }
     } 


    // cameracalibration_observation_info->is_enabled
    if(cameracalibration_observation_info->is_enabled) { 
    if(cJSON_AddBoolToObject(item, "isEnabled", cameracalibration_observation_info->is_enabled) == NULL) {
    goto fail; //Bool
    }
     } 


    // cameracalibration_observation_info->is_primary
    if(cameracalibration_observation_info->is_primary) { 
    if(cJSON_AddBoolToObject(item, "isPrimary", cameracalibration_observation_info->is_primary) == NULL) {
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

cameracalibration_observation_info_t *cameracalibration_observation_info_parseFromJSON(cJSON *cameracalibration_observation_infoJSON){

    cameracalibration_observation_info_t *cameracalibration_observation_info_local_var = NULL;

    // cameracalibration_observation_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // cameracalibration_observation_info->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // cameracalibration_observation_info->tracked_pos
    cJSON *tracked_pos = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "trackedPos");
    cameracalibration_float3_t *tracked_pos_local_nonprim = NULL;
    if (tracked_pos) { 
    tracked_pos_local_nonprim = cameracalibration_float3_parseFromJSON(tracked_pos); //nonprimitive
    }

    // cameracalibration_observation_info->tracked_rot
    cJSON *tracked_rot = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "trackedRot");
    cameracalibration_float3_t *tracked_rot_local_nonprim = NULL;
    if (tracked_rot) { 
    tracked_rot_local_nonprim = cameracalibration_float3_parseFromJSON(tracked_rot); //nonprimitive
    }

    // cameracalibration_observation_info->tracked_zoom
    cJSON *tracked_zoom = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "trackedZoom");
    if (tracked_zoom) { 
    if(!cJSON_IsNumber(tracked_zoom))
    {
    goto end; //Numeric
    }
    }

    // cameracalibration_observation_info->tracked_focus
    cJSON *tracked_focus = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "trackedFocus");
    if (tracked_focus) { 
    if(!cJSON_IsNumber(tracked_focus))
    {
    goto end; //Numeric
    }
    }

    // cameracalibration_observation_info->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // cameracalibration_observation_info->is_primary
    cJSON *is_primary = cJSON_GetObjectItemCaseSensitive(cameracalibration_observation_infoJSON, "isPrimary");
    if (is_primary) { 
    if(!cJSON_IsBool(is_primary))
    {
    goto end; //Bool
    }
    }


    cameracalibration_observation_info_local_var = cameracalibration_observation_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        tracked_pos ? tracked_pos_local_nonprim : NULL,
        tracked_rot ? tracked_rot_local_nonprim : NULL,
        tracked_zoom ? tracked_zoom->valuedouble : 0,
        tracked_focus ? tracked_focus->valuedouble : 0,
        is_enabled ? is_enabled->valueint : 0,
        is_primary ? is_primary->valueint : 0
        );

    return cameracalibration_observation_info_local_var;
end:
    if (tracked_pos_local_nonprim) {
        cameracalibration_float3_free(tracked_pos_local_nonprim);
        tracked_pos_local_nonprim = NULL;
    }
    if (tracked_rot_local_nonprim) {
        cameracalibration_float3_free(tracked_rot_local_nonprim);
        tracked_rot_local_nonprim = NULL;
    }
    return NULL;

}
