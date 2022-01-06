#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_get_observation_progress_response.h"



v1_get_observation_progress_response_t *v1_get_observation_progress_response_create(
    int in_progress
    ) {
    v1_get_observation_progress_response_t *v1_get_observation_progress_response_local_var = malloc(sizeof(v1_get_observation_progress_response_t));
    if (!v1_get_observation_progress_response_local_var) {
        return NULL;
    }
    v1_get_observation_progress_response_local_var->in_progress = in_progress;

    return v1_get_observation_progress_response_local_var;
}


void v1_get_observation_progress_response_free(v1_get_observation_progress_response_t *v1_get_observation_progress_response) {
    if(NULL == v1_get_observation_progress_response){
        return ;
    }
    listEntry_t *listEntry;
    free(v1_get_observation_progress_response);
}

cJSON *v1_get_observation_progress_response_convertToJSON(v1_get_observation_progress_response_t *v1_get_observation_progress_response) {
    cJSON *item = cJSON_CreateObject();

    // v1_get_observation_progress_response->in_progress
    if(v1_get_observation_progress_response->in_progress) { 
    if(cJSON_AddBoolToObject(item, "inProgress", v1_get_observation_progress_response->in_progress) == NULL) {
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

v1_get_observation_progress_response_t *v1_get_observation_progress_response_parseFromJSON(cJSON *v1_get_observation_progress_responseJSON){

    v1_get_observation_progress_response_t *v1_get_observation_progress_response_local_var = NULL;

    // v1_get_observation_progress_response->in_progress
    cJSON *in_progress = cJSON_GetObjectItemCaseSensitive(v1_get_observation_progress_responseJSON, "inProgress");
    if (in_progress) { 
    if(!cJSON_IsBool(in_progress))
    {
    goto end; //Bool
    }
    }


    v1_get_observation_progress_response_local_var = v1_get_observation_progress_response_create (
        in_progress ? in_progress->valueint : 0
        );

    return v1_get_observation_progress_response_local_var;
end:
    return NULL;

}
