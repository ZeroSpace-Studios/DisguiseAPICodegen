#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_enable_observation_request.h"



v1_enable_observation_request_t *v1_enable_observation_request_create(
    char *observation_uid,
    int enabled
    ) {
    v1_enable_observation_request_t *v1_enable_observation_request_local_var = malloc(sizeof(v1_enable_observation_request_t));
    if (!v1_enable_observation_request_local_var) {
        return NULL;
    }
    v1_enable_observation_request_local_var->observation_uid = observation_uid;
    v1_enable_observation_request_local_var->enabled = enabled;

    return v1_enable_observation_request_local_var;
}


void v1_enable_observation_request_free(v1_enable_observation_request_t *v1_enable_observation_request) {
    if(NULL == v1_enable_observation_request){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_enable_observation_request->observation_uid) {
        free(v1_enable_observation_request->observation_uid);
        v1_enable_observation_request->observation_uid = NULL;
    }
    free(v1_enable_observation_request);
}

cJSON *v1_enable_observation_request_convertToJSON(v1_enable_observation_request_t *v1_enable_observation_request) {
    cJSON *item = cJSON_CreateObject();

    // v1_enable_observation_request->observation_uid
    if(v1_enable_observation_request->observation_uid) { 
    if(cJSON_AddStringToObject(item, "observationUid", v1_enable_observation_request->observation_uid) == NULL) {
    goto fail; //String
    }
     } 


    // v1_enable_observation_request->enabled
    if(v1_enable_observation_request->enabled) { 
    if(cJSON_AddBoolToObject(item, "enabled", v1_enable_observation_request->enabled) == NULL) {
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

v1_enable_observation_request_t *v1_enable_observation_request_parseFromJSON(cJSON *v1_enable_observation_requestJSON){

    v1_enable_observation_request_t *v1_enable_observation_request_local_var = NULL;

    // v1_enable_observation_request->observation_uid
    cJSON *observation_uid = cJSON_GetObjectItemCaseSensitive(v1_enable_observation_requestJSON, "observationUid");
    if (observation_uid) { 
    if(!cJSON_IsString(observation_uid))
    {
    goto end; //String
    }
    }

    // v1_enable_observation_request->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(v1_enable_observation_requestJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    v1_enable_observation_request_local_var = v1_enable_observation_request_create (
        observation_uid ? strdup(observation_uid->valuestring) : NULL,
        enabled ? enabled->valueint : 0
        );

    return v1_enable_observation_request_local_var;
end:
    return NULL;

}
