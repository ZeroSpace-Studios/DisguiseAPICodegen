#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_mr_set_info.h"



mixedreality_mr_set_info_t *mixedreality_mr_set_info_create(
    char *uid,
    char *name
    ) {
    mixedreality_mr_set_info_t *mixedreality_mr_set_info_local_var = malloc(sizeof(mixedreality_mr_set_info_t));
    if (!mixedreality_mr_set_info_local_var) {
        return NULL;
    }
    mixedreality_mr_set_info_local_var->uid = uid;
    mixedreality_mr_set_info_local_var->name = name;

    return mixedreality_mr_set_info_local_var;
}


void mixedreality_mr_set_info_free(mixedreality_mr_set_info_t *mixedreality_mr_set_info) {
    if(NULL == mixedreality_mr_set_info){
        return ;
    }
    listEntry_t *listEntry;
    if (mixedreality_mr_set_info->uid) {
        free(mixedreality_mr_set_info->uid);
        mixedreality_mr_set_info->uid = NULL;
    }
    if (mixedreality_mr_set_info->name) {
        free(mixedreality_mr_set_info->name);
        mixedreality_mr_set_info->name = NULL;
    }
    free(mixedreality_mr_set_info);
}

cJSON *mixedreality_mr_set_info_convertToJSON(mixedreality_mr_set_info_t *mixedreality_mr_set_info) {
    cJSON *item = cJSON_CreateObject();

    // mixedreality_mr_set_info->uid
    if(mixedreality_mr_set_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", mixedreality_mr_set_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // mixedreality_mr_set_info->name
    if(mixedreality_mr_set_info->name) { 
    if(cJSON_AddStringToObject(item, "name", mixedreality_mr_set_info->name) == NULL) {
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

mixedreality_mr_set_info_t *mixedreality_mr_set_info_parseFromJSON(cJSON *mixedreality_mr_set_infoJSON){

    mixedreality_mr_set_info_t *mixedreality_mr_set_info_local_var = NULL;

    // mixedreality_mr_set_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(mixedreality_mr_set_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // mixedreality_mr_set_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(mixedreality_mr_set_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    mixedreality_mr_set_info_local_var = mixedreality_mr_set_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return mixedreality_mr_set_info_local_var;
end:
    return NULL;

}
