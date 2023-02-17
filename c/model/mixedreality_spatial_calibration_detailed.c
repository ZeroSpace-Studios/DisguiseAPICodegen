#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_spatial_calibration_detailed.h"



mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed_create(
    char *uid,
    char *name,
    list_t *mrsets,
    list_t *observations
    ) {
    mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed_local_var = malloc(sizeof(mixedreality_spatial_calibration_detailed_t));
    if (!mixedreality_spatial_calibration_detailed_local_var) {
        return NULL;
    }
    mixedreality_spatial_calibration_detailed_local_var->uid = uid;
    mixedreality_spatial_calibration_detailed_local_var->name = name;
    mixedreality_spatial_calibration_detailed_local_var->mrsets = mrsets;
    mixedreality_spatial_calibration_detailed_local_var->observations = observations;

    return mixedreality_spatial_calibration_detailed_local_var;
}


void mixedreality_spatial_calibration_detailed_free(mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed) {
    if(NULL == mixedreality_spatial_calibration_detailed){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_spatial_calibration_detailed->uid) {
        free(mixedreality_spatial_calibration_detailed->uid);
        mixedreality_spatial_calibration_detailed->uid = NULL;
    }
    if (mixedreality_spatial_calibration_detailed->name) {
        free(mixedreality_spatial_calibration_detailed->name);
        mixedreality_spatial_calibration_detailed->name = NULL;
    }
    if (mixedreality_spatial_calibration_detailed->mrsets) {
        list_ForEach(listEntry, mixedreality_spatial_calibration_detailed->mrsets) {
            mixedreality_mr_set_info_free(listEntry->data);
        }
        list_free(mixedreality_spatial_calibration_detailed->mrsets);
        mixedreality_spatial_calibration_detailed->mrsets = NULL;
    }
    if (mixedreality_spatial_calibration_detailed->observations) {
        list_ForEach(listEntry, mixedreality_spatial_calibration_detailed->observations) {
            mixedreality_observation_info_free(listEntry->data);
        }
        list_free(mixedreality_spatial_calibration_detailed->observations);
        mixedreality_spatial_calibration_detailed->observations = NULL;
    }
    free(mixedreality_spatial_calibration_detailed);
}

cJSON *mixedreality_spatial_calibration_detailed_convertToJSON(mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_spatial_calibration_detailed->uid
    if(mixedreality_spatial_calibration_detailed->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_spatial_calibration_detailed->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_spatial_calibration_detailed->name
    if(mixedreality_spatial_calibration_detailed->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_spatial_calibration_detailed->name) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_spatial_calibration_detailed->mrsets
    if(mixedreality_spatial_calibration_detailed->mrsets) { 
    cJSON *mrsets = cJSON_AddArrayToObject(item, "mrsets");
    if(mrsets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *mrsetsListEntry;
    if (mixedreality_spatial_calibration_detailed->mrsets) {
    list_ForEach(mrsetsListEntry, mixedreality_spatial_calibration_detailed->mrsets) {
    cJSON *itemLocal = mixedreality_mr_set_info_convertToJSON(mrsetsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(mrsets, itemLocal);
    }
    }
     } 


    // mixedreality_spatial_calibration_detailed->observations
    if(mixedreality_spatial_calibration_detailed->observations) { 
    cJSON *observations = cJSON_AddArrayToObject(item, "observations");
    if(observations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *observationsListEntry;
    if (mixedreality_spatial_calibration_detailed->observations) {
    list_ForEach(observationsListEntry, mixedreality_spatial_calibration_detailed->observations) {
    cJSON *itemLocal = mixedreality_observation_info_convertToJSON(observationsListEntry->data);
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

mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed_parseFromJSON(cJSON *mixedreality_spatial_calibration_detailedJSON){

    mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed_local_var = NULL;

    // mixedreality_spatial_calibration_detailed->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_spatial_calibration_detailedJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_spatial_calibration_detailed->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_spatial_calibration_detailedJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // mixedreality_spatial_calibration_detailed->mrsets
    cJSON *mrsets = cJSON_GetObjectItemCaseSensitive(mixedreality_spatial_calibration_detailedJSON, "mrsets");
    list_t *mrsetsList;
    if (mrsets) { 
    cJSON *mrsets_local_nonprimitive;
    if(!cJSON_IsArray(mrsets)){
        goto end; //nonprimitive container
    }

    mrsetsList = list_create();

    cJSON_ArrayForEach(mrsets_local_nonprimitive,mrsets )
    {
        if(!cJSON_IsObject(mrsets_local_nonprimitive)){
            goto end;
        }
        mixedreality_mr_set_info_t *mrsetsItem = mixedreality_mr_set_info_parseFromJSON(mrsets_local_nonprimitive);

        list_addElement(mrsetsList, mrsetsItem);
    }
    }

    // mixedreality_spatial_calibration_detailed->observations
    cJSON *observations = cJSON_GetObjectItemCaseSensitive(mixedreality_spatial_calibration_detailedJSON, "observations");
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
        mixedreality_observation_info_t *observationsItem = mixedreality_observation_info_parseFromJSON(observations_local_nonprimitive);

        list_addElement(observationsList, observationsItem);
    }
    }


    mixedreality_spatial_calibration_detailed_local_var = mixedreality_spatial_calibration_detailed_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        mrsets ? mrsetsList : NULL,
        observations ? observationsList : NULL
        );

    return mixedreality_spatial_calibration_detailed_local_var;
end:
    return NULL;

}
