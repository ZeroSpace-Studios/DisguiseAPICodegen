#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_observation_info.h"



v1_observation_info_t *v1_observation_info_create(
    char *uid,
    char *description,
    v1_float3_t *tracked_pos,
    v1_float3_t *tracked_rot,
    float tracked_zoom,
    float tracked_focus,
    int is_enabled,
    int is_primary
    ) {
    v1_observation_info_t *v1_observation_info_local_var = malloc(sizeof(v1_observation_info_t));
    if (!v1_observation_info_local_var) {
        return NULL;
    }
    v1_observation_info_local_var->uid = uid;
    v1_observation_info_local_var->description = description;
    v1_observation_info_local_var->tracked_pos = tracked_pos;
    v1_observation_info_local_var->tracked_rot = tracked_rot;
    v1_observation_info_local_var->tracked_zoom = tracked_zoom;
    v1_observation_info_local_var->tracked_focus = tracked_focus;
    v1_observation_info_local_var->is_enabled = is_enabled;
    v1_observation_info_local_var->is_primary = is_primary;

    return v1_observation_info_local_var;
}


void v1_observation_info_free(v1_observation_info_t *v1_observation_info) {
    if(NULL == v1_observation_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_observation_info->uid) {
        free(v1_observation_info->uid);
        v1_observation_info->uid = NULL;
    }
    if (v1_observation_info->description) {
        free(v1_observation_info->description);
        v1_observation_info->description = NULL;
    }
    if (v1_observation_info->tracked_pos) {
        v1_float3_free(v1_observation_info->tracked_pos);
        v1_observation_info->tracked_pos = NULL;
    }
    if (v1_observation_info->tracked_rot) {
        v1_float3_free(v1_observation_info->tracked_rot);
        v1_observation_info->tracked_rot = NULL;
    }
    free(v1_observation_info);
}

cJSON *v1_observation_info_convertToJSON(v1_observation_info_t *v1_observation_info) {
    cJSON *item = cJSON_CreateObject();

    // v1_observation_info->uid
    if(v1_observation_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", v1_observation_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // v1_observation_info->description
    if(v1_observation_info->description) { 
    if(cJSON_AddStringToObject(item, "description", v1_observation_info->description) == NULL) {
    goto fail; //String
    }
     } 


    // v1_observation_info->tracked_pos
    if(v1_observation_info->tracked_pos) { 
    cJSON *tracked_pos_local_JSON = v1_float3_convertToJSON(v1_observation_info->tracked_pos);
    if(tracked_pos_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trackedPos", tracked_pos_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // v1_observation_info->tracked_rot
    if(v1_observation_info->tracked_rot) { 
    cJSON *tracked_rot_local_JSON = v1_float3_convertToJSON(v1_observation_info->tracked_rot);
    if(tracked_rot_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trackedRot", tracked_rot_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // v1_observation_info->tracked_zoom
    if(v1_observation_info->tracked_zoom) { 
    if(cJSON_AddNumberToObject(item, "trackedZoom", v1_observation_info->tracked_zoom) == NULL) {
    goto fail; //Numeric
    }
     } 


    // v1_observation_info->tracked_focus
    if(v1_observation_info->tracked_focus) { 
    if(cJSON_AddNumberToObject(item, "trackedFocus", v1_observation_info->tracked_focus) == NULL) {
    goto fail; //Numeric
    }
     } 


    // v1_observation_info->is_enabled
    if(v1_observation_info->is_enabled) { 
    if(cJSON_AddBoolToObject(item, "isEnabled", v1_observation_info->is_enabled) == NULL) {
    goto fail; //Bool
    }
     } 


    // v1_observation_info->is_primary
    if(v1_observation_info->is_primary) { 
    if(cJSON_AddBoolToObject(item, "isPrimary", v1_observation_info->is_primary) == NULL) {
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

v1_observation_info_t *v1_observation_info_parseFromJSON(cJSON *v1_observation_infoJSON){

    v1_observation_info_t *v1_observation_info_local_var = NULL;

    // v1_observation_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // v1_observation_info->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }
    }

    // v1_observation_info->tracked_pos
    cJSON *tracked_pos = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "trackedPos");
    v1_float3_t *tracked_pos_local_nonprim = NULL;
    if (tracked_pos) { 
    tracked_pos_local_nonprim = v1_float3_parseFromJSON(tracked_pos); //nonprimitive
    }

    // v1_observation_info->tracked_rot
    cJSON *tracked_rot = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "trackedRot");
    v1_float3_t *tracked_rot_local_nonprim = NULL;
    if (tracked_rot) { 
    tracked_rot_local_nonprim = v1_float3_parseFromJSON(tracked_rot); //nonprimitive
    }

    // v1_observation_info->tracked_zoom
    cJSON *tracked_zoom = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "trackedZoom");
    if (tracked_zoom) { 
    if(!cJSON_IsNumber(tracked_zoom))
    {
    goto end; //Numeric
    }
    }

    // v1_observation_info->tracked_focus
    cJSON *tracked_focus = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "trackedFocus");
    if (tracked_focus) { 
    if(!cJSON_IsNumber(tracked_focus))
    {
    goto end; //Numeric
    }
    }

    // v1_observation_info->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // v1_observation_info->is_primary
    cJSON *is_primary = cJSON_GetObjectItemCaseSensitive(v1_observation_infoJSON, "isPrimary");
    if (is_primary) { 
    if(!cJSON_IsBool(is_primary))
    {
    goto end; //Bool
    }
    }


    v1_observation_info_local_var = v1_observation_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        description ? strdup(description->valuestring) : NULL,
        tracked_pos ? tracked_pos_local_nonprim : NULL,
        tracked_rot ? tracked_rot_local_nonprim : NULL,
        tracked_zoom ? tracked_zoom->valuedouble : 0,
        tracked_focus ? tracked_focus->valuedouble : 0,
        is_enabled ? is_enabled->valueint : 0,
        is_primary ? is_primary->valueint : 0
        );

    return v1_observation_info_local_var;
end:
    if (tracked_pos_local_nonprim) {
        v1_float3_free(tracked_pos_local_nonprim);
        tracked_pos_local_nonprim = NULL;
    }
    if (tracked_rot_local_nonprim) {
        v1_float3_free(tracked_rot_local_nonprim);
        tracked_rot_local_nonprim = NULL;
    }
    return NULL;

}
