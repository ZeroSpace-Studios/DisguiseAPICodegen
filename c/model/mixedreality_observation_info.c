#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_observation_info.h"


char* typemixedreality_observation_info_ToString(d3_api_mixedreality_observation_info__e type) {
    char* typeArray[] =  { "NULL", "Primary", "Secondary" };
	return typeArray[type];
}

d3_api_mixedreality_observation_info__e typemixedreality_observation_info_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Primary", "Secondary" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

mixedreality_observation_info_t *mixedreality_observation_info_create(
    char *uid,
    char *name,
    mixedreality_pose_t *tracked_pose,
    mixedreality_pose_t *solved_pose,
    int is_enabled,
    float zoom,
    float focus,
    double rms_error
    ) {
    mixedreality_observation_info_t *mixedreality_observation_info_local_var = malloc(sizeof(mixedreality_observation_info_t));
    if (!mixedreality_observation_info_local_var) {
        return NULL;
    }
    mixedreality_observation_info_local_var->uid = uid;
    mixedreality_observation_info_local_var->name = name;
    mixedreality_observation_info_local_var->tracked_pose = tracked_pose;
    mixedreality_observation_info_local_var->solved_pose = solved_pose;
    mixedreality_observation_info_local_var->is_enabled = is_enabled;
    mixedreality_observation_info_local_var->zoom = zoom;
    mixedreality_observation_info_local_var->focus = focus;
    mixedreality_observation_info_local_var->type = type;
    mixedreality_observation_info_local_var->rms_error = rms_error;

    return mixedreality_observation_info_local_var;
}


void mixedreality_observation_info_free(mixedreality_observation_info_t *mixedreality_observation_info) {
    if(NULL == mixedreality_observation_info){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_observation_info->uid) {
        free(mixedreality_observation_info->uid);
        mixedreality_observation_info->uid = NULL;
    }
    if (mixedreality_observation_info->name) {
        free(mixedreality_observation_info->name);
        mixedreality_observation_info->name = NULL;
    }
    if (mixedreality_observation_info->tracked_pose) {
        mixedreality_pose_free(mixedreality_observation_info->tracked_pose);
        mixedreality_observation_info->tracked_pose = NULL;
    }
    if (mixedreality_observation_info->solved_pose) {
        mixedreality_pose_free(mixedreality_observation_info->solved_pose);
        mixedreality_observation_info->solved_pose = NULL;
    }
    free(mixedreality_observation_info);
}

cJSON *mixedreality_observation_info_convertToJSON(mixedreality_observation_info_t *mixedreality_observation_info) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_observation_info->uid
    if(mixedreality_observation_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_observation_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_observation_info->name
    if(mixedreality_observation_info->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_observation_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_observation_info->tracked_pose
    if(mixedreality_observation_info->tracked_pose) { 
    cJSON *tracked_pose_local_JSON = mixedreality_pose_convertToJSON(mixedreality_observation_info->tracked_pose);
    if(tracked_pose_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "trackedPose", tracked_pose_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_observation_info->solved_pose
    if(mixedreality_observation_info->solved_pose) { 
    cJSON *solved_pose_local_JSON = mixedreality_pose_convertToJSON(mixedreality_observation_info->solved_pose);
    if(solved_pose_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "solvedPose", solved_pose_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // mixedreality_observation_info->is_enabled
    if(mixedreality_observation_info->is_enabled) { 
    if(cJSON_AddBoolToObject(item, "isEnabled", mixedreality_observation_info->is_enabled) == NULL) {
    goto fail; //Bool
    }
     } 


    // mixedreality_observation_info->zoom
    if(mixedreality_observation_info->zoom) { 
    if(cJSON_AddNumberToObject(item, "zoom", mixedreality_observation_info->zoom) == NULL) {
    goto fail; //Numeric
    }
     } 


    // mixedreality_observation_info->focus
    if(mixedreality_observation_info->focus) { 
    if(cJSON_AddNumberToObject(item, "focus", mixedreality_observation_info->focus) == NULL) {
    goto fail; //Numeric
    }
     } 


    // mixedreality_observation_info->type
    
    


    // mixedreality_observation_info->rms_error
    if(mixedreality_observation_info->rms_error) { 
    if(cJSON_AddNumberToObject(item, "rmsError", mixedreality_observation_info->rms_error) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mixedreality_observation_info_t *mixedreality_observation_info_parseFromJSON(cJSON *mixedreality_observation_infoJSON){

    mixedreality_observation_info_t *mixedreality_observation_info_local_var = NULL;

    // mixedreality_observation_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_observation_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // mixedreality_observation_info->tracked_pose
    cJSON *tracked_pose = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "trackedPose");
    mixedreality_pose_t *tracked_pose_local_nonprim = NULL;
    if (tracked_pose) { 
    tracked_pose_local_nonprim = mixedreality_pose_parseFromJSON(tracked_pose); //nonprimitive
    }

    // mixedreality_observation_info->solved_pose
    cJSON *solved_pose = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "solvedPose");
    mixedreality_pose_t *solved_pose_local_nonprim = NULL;
    if (solved_pose) { 
    solved_pose_local_nonprim = mixedreality_pose_parseFromJSON(solved_pose); //nonprimitive
    }

    // mixedreality_observation_info->is_enabled
    cJSON *is_enabled = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "isEnabled");
    if (is_enabled) { 
    if(!cJSON_IsBool(is_enabled))
    {
    goto end; //Bool
    }
    }

    // mixedreality_observation_info->zoom
    cJSON *zoom = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "zoom");
    if (zoom) { 
    if(!cJSON_IsNumber(zoom))
    {
    goto end; //Numeric
    }
    }

    // mixedreality_observation_info->focus
    cJSON *focus = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "focus");
    if (focus) { 
    if(!cJSON_IsNumber(focus))
    {
    goto end; //Numeric
    }
    }

    // mixedreality_observation_info->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "type");
    }

    // mixedreality_observation_info->rms_error
    cJSON *rms_error = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_infoJSON, "rmsError");
    if (rms_error) { 
    if(!cJSON_IsNumber(rms_error))
    {
    goto end; //Numeric
    }
    }


    mixedreality_observation_info_local_var = mixedreality_observation_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        tracked_pose ? tracked_pose_local_nonprim : NULL,
        solved_pose ? solved_pose_local_nonprim : NULL,
        is_enabled ? is_enabled->valueint : 0,
        zoom ? zoom->valuedouble : 0,
        focus ? focus->valuedouble : 0,
        rms_error ? rms_error->valuedouble : 0
        );

    return mixedreality_observation_info_local_var;
end:
    if (tracked_pose_local_nonprim) {
        mixedreality_pose_free(tracked_pose_local_nonprim);
        tracked_pose_local_nonprim = NULL;
    }
    if (solved_pose_local_nonprim) {
        mixedreality_pose_free(solved_pose_local_nonprim);
        solved_pose_local_nonprim = NULL;
    }
    return NULL;

}
