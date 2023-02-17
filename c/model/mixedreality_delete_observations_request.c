#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_delete_observations_request.h"



mixedreality_delete_observations_request_t *mixedreality_delete_observations_request_create(
    list_t *observations
    ) {
    mixedreality_delete_observations_request_t *mixedreality_delete_observations_request_local_var = malloc(sizeof(mixedreality_delete_observations_request_t));
    if (!mixedreality_delete_observations_request_local_var) {
        return NULL;
    }
    mixedreality_delete_observations_request_local_var->observations = observations;

    return mixedreality_delete_observations_request_local_var;
}


void mixedreality_delete_observations_request_free(mixedreality_delete_observations_request_t *mixedreality_delete_observations_request) {
    if(NULL == mixedreality_delete_observations_request){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_delete_observations_request->observations) {
        list_ForEach(listEntry, mixedreality_delete_observations_request->observations) {
            free(listEntry->data);
        }
        list_free(mixedreality_delete_observations_request->observations);
        mixedreality_delete_observations_request->observations = NULL;
    }
    free(mixedreality_delete_observations_request);
}

cJSON *mixedreality_delete_observations_request_convertToJSON(mixedreality_delete_observations_request_t *mixedreality_delete_observations_request) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_delete_observations_request->observations
    if(mixedreality_delete_observations_request->observations) { 
    cJSON *observations = cJSON_AddArrayToObject(item, "observations");
    if(observations == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *observationsListEntry;
    list_ForEach(observationsListEntry, mixedreality_delete_observations_request->observations) {
    if(cJSON_AddStringToObject(observations, "", (char*)observationsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mixedreality_delete_observations_request_t *mixedreality_delete_observations_request_parseFromJSON(cJSON *mixedreality_delete_observations_requestJSON){

    mixedreality_delete_observations_request_t *mixedreality_delete_observations_request_local_var = NULL;

    // mixedreality_delete_observations_request->observations
    cJSON *observations = cJSON_GetObjectItemCaseSensitive(mixedreality_delete_observations_requestJSON, "observations");
    list_t *observationsList;
    if (observations) { 
    cJSON *observations_local;
    if(!cJSON_IsArray(observations)) {
        goto end;//primitive container
    }
    observationsList = list_create();

    cJSON_ArrayForEach(observations_local, observations)
    {
        if(!cJSON_IsString(observations_local))
        {
            goto end;
        }
        list_addElement(observationsList , strdup(observations_local->valuestring));
    }
    }


    mixedreality_delete_observations_request_local_var = mixedreality_delete_observations_request_create (
        observations ? observationsList : NULL
        );

    return mixedreality_delete_observations_request_local_var;
end:
    return NULL;

}
