#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_enable_observations_request.h"



mixedreality_enable_observations_request_t *mixedreality_enable_observations_request_create(
    list_t *observations
    ) {
    mixedreality_enable_observations_request_t *mixedreality_enable_observations_request_local_var = malloc(sizeof(mixedreality_enable_observations_request_t));
    if (!mixedreality_enable_observations_request_local_var) {
        return NULL;
    }
    mixedreality_enable_observations_request_local_var->observations = observations;

    return mixedreality_enable_observations_request_local_var;
}


void mixedreality_enable_observations_request_free(mixedreality_enable_observations_request_t *mixedreality_enable_observations_request) {
    if(NULL == mixedreality_enable_observations_request){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_enable_observations_request->observations) {
        list_ForEach(listEntry, mixedreality_enable_observations_request->observations) {
            mixedreality_enable_observation_params_free(listEntry->data);
        }
        list_free(mixedreality_enable_observations_request->observations);
        mixedreality_enable_observations_request->observations = NULL;
    }
    free(mixedreality_enable_observations_request);
}

cJSON *mixedreality_enable_observations_request_convertToJSON(mixedreality_enable_observations_request_t *mixedreality_enable_observations_request) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_enable_observations_request->observations
    if(mixedreality_enable_observations_request->observations) { 
    cJSON *observations = cJSON_AddArrayToObject(item, "observations");
    if(observations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *observationsListEntry;
    if (mixedreality_enable_observations_request->observations) {
    list_ForEach(observationsListEntry, mixedreality_enable_observations_request->observations) {
    cJSON *itemLocal = mixedreality_enable_observation_params_convertToJSON(observationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(observations, itemLocal);
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

mixedreality_enable_observations_request_t *mixedreality_enable_observations_request_parseFromJSON(cJSON *mixedreality_enable_observations_requestJSON){

    mixedreality_enable_observations_request_t *mixedreality_enable_observations_request_local_var = NULL;

    // mixedreality_enable_observations_request->observations
    cJSON *observations = cJSON_GetObjectItemCaseSensitive(mixedreality_enable_observations_requestJSON, "observations");
    list_t *observationsList;
    if (observations) { 
    cJSON *observations_local_nonprimitive;
    if(!cJSON_IsArray(observations)){
        goto end; //nonprimitive container
    }

    observationsList = list_create();

    cJSON_ArrayForEach(observations_local_nonprimitive,observations )
    {
        if(!cJSON_IsObject(observations_local_nonprimitive)){
            goto end;
        }
        mixedreality_enable_observation_params_t *observationsItem = mixedreality_enable_observation_params_parseFromJSON(observations_local_nonprimitive);

        list_addElement(observationsList, observationsItem);
    }
    }


    mixedreality_enable_observations_request_local_var = mixedreality_enable_observations_request_create (
        observations ? observationsList : NULL
        );

    return mixedreality_enable_observations_request_local_var;
end:
    return NULL;

}
