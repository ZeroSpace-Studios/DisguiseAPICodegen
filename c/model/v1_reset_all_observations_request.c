#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_reset_all_observations_request.h"



v1_reset_all_observations_request_t *v1_reset_all_observations_request_create(
    char *camera_uid
    ) {
    v1_reset_all_observations_request_t *v1_reset_all_observations_request_local_var = malloc(sizeof(v1_reset_all_observations_request_t));
    if (!v1_reset_all_observations_request_local_var) {
        return NULL;
    }
    v1_reset_all_observations_request_local_var->camera_uid = camera_uid;

    return v1_reset_all_observations_request_local_var;
}


void v1_reset_all_observations_request_free(v1_reset_all_observations_request_t *v1_reset_all_observations_request) {
    if(NULL == v1_reset_all_observations_request){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_reset_all_observations_request->camera_uid) {
        free(v1_reset_all_observations_request->camera_uid);
        v1_reset_all_observations_request->camera_uid = NULL;
    }
    free(v1_reset_all_observations_request);
}

cJSON *v1_reset_all_observations_request_convertToJSON(v1_reset_all_observations_request_t *v1_reset_all_observations_request) {
    cJSON *item = cJSON_CreateObject();

    // v1_reset_all_observations_request->camera_uid
    if(v1_reset_all_observations_request->camera_uid) { 
    if(cJSON_AddStringToObject(item, "cameraUid", v1_reset_all_observations_request->camera_uid) == NULL) {
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

v1_reset_all_observations_request_t *v1_reset_all_observations_request_parseFromJSON(cJSON *v1_reset_all_observations_requestJSON){

    v1_reset_all_observations_request_t *v1_reset_all_observations_request_local_var = NULL;

    // v1_reset_all_observations_request->camera_uid
    cJSON *camera_uid = cJSON_GetObjectItemCaseSensitive(v1_reset_all_observations_requestJSON, "cameraUid");
    if (camera_uid) { 
    if(!cJSON_IsString(camera_uid))
    {
    goto end; //String
    }
    }


    v1_reset_all_observations_request_local_var = v1_reset_all_observations_request_create (
        camera_uid ? strdup(camera_uid->valuestring) : NULL
        );

    return v1_reset_all_observations_request_local_var;
end:
    return NULL;

}
