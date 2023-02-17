#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickcal_reference_point_info.h"



quickcal_reference_point_info_t *quickcal_reference_point_info_create(
    char *uid,
    char *name
    ) {
    quickcal_reference_point_info_t *quickcal_reference_point_info_local_var = malloc(sizeof(quickcal_reference_point_info_t));
    if (!quickcal_reference_point_info_local_var) {
        return NULL;
    }
    quickcal_reference_point_info_local_var->uid = uid;
    quickcal_reference_point_info_local_var->name = name;

    return quickcal_reference_point_info_local_var;
}


void quickcal_reference_point_info_free(quickcal_reference_point_info_t *quickcal_reference_point_info) {
    if(NULL == quickcal_reference_point_info){
        return ;
    }
    listEntry_t *listEntry;
    if (quickcal_reference_point_info->uid) {
        free(quickcal_reference_point_info->uid);
        quickcal_reference_point_info->uid = NULL;
    }
    if (quickcal_reference_point_info->name) {
        free(quickcal_reference_point_info->name);
        quickcal_reference_point_info->name = NULL;
    }
    free(quickcal_reference_point_info);
}

cJSON *quickcal_reference_point_info_convertToJSON(quickcal_reference_point_info_t *quickcal_reference_point_info) {
    cJSON *item = cJSON_CreateObject();

    // quickcal_reference_point_info->uid
    if(quickcal_reference_point_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", quickcal_reference_point_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // quickcal_reference_point_info->name
    if(quickcal_reference_point_info->name) { 
    if(cJSON_AddStringToObject(item, "name", quickcal_reference_point_info->name) == NULL) {
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

quickcal_reference_point_info_t *quickcal_reference_point_info_parseFromJSON(cJSON *quickcal_reference_point_infoJSON){

    quickcal_reference_point_info_t *quickcal_reference_point_info_local_var = NULL;

    // quickcal_reference_point_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(quickcal_reference_point_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // quickcal_reference_point_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(quickcal_reference_point_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    quickcal_reference_point_info_local_var = quickcal_reference_point_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return quickcal_reference_point_info_local_var;
end:
    return NULL;

}
