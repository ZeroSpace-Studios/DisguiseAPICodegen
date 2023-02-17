#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_enable_observation_params.h"



mixedreality_enable_observation_params_t *mixedreality_enable_observation_params_create(
    char *uid,
    int enable
    ) {
    mixedreality_enable_observation_params_t *mixedreality_enable_observation_params_local_var = malloc(sizeof(mixedreality_enable_observation_params_t));
    if (!mixedreality_enable_observation_params_local_var) {
        return NULL;
    }
    mixedreality_enable_observation_params_local_var->uid = uid;
    mixedreality_enable_observation_params_local_var->enable = enable;

    return mixedreality_enable_observation_params_local_var;
}


void mixedreality_enable_observation_params_free(mixedreality_enable_observation_params_t *mixedreality_enable_observation_params) {
    if(NULL == mixedreality_enable_observation_params){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_enable_observation_params->uid) {
        free(mixedreality_enable_observation_params->uid);
        mixedreality_enable_observation_params->uid = NULL;
    }
    free(mixedreality_enable_observation_params);
}

cJSON *mixedreality_enable_observation_params_convertToJSON(mixedreality_enable_observation_params_t *mixedreality_enable_observation_params) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_enable_observation_params->uid
    if(mixedreality_enable_observation_params->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_enable_observation_params->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_enable_observation_params->enable
    if(mixedreality_enable_observation_params->enable) { 
    if(cJSON_AddBoolToObject(item, "enable", mixedreality_enable_observation_params->enable) == NULL) {
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

mixedreality_enable_observation_params_t *mixedreality_enable_observation_params_parseFromJSON(cJSON *mixedreality_enable_observation_paramsJSON){

    mixedreality_enable_observation_params_t *mixedreality_enable_observation_params_local_var = NULL;

    // mixedreality_enable_observation_params->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_enable_observation_paramsJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_enable_observation_params->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(mixedreality_enable_observation_paramsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }


    mixedreality_enable_observation_params_local_var = mixedreality_enable_observation_params_create (
        uid ? strdup(uid->valuestring) : NULL,
        enable ? enable->valueint : 0
        );

    return mixedreality_enable_observation_params_local_var;
end:
    return NULL;

}
