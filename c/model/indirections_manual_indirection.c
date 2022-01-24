#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_manual_indirection.h"



indirections_manual_indirection_t *indirections_manual_indirection_create(
    char *resource_uid
    ) {
    indirections_manual_indirection_t *indirections_manual_indirection_local_var = malloc(sizeof(indirections_manual_indirection_t));
    if (!indirections_manual_indirection_local_var) {
        return NULL;
    }
    indirections_manual_indirection_local_var->resource_uid = resource_uid;

    return indirections_manual_indirection_local_var;
}


void indirections_manual_indirection_free(indirections_manual_indirection_t *indirections_manual_indirection) {
    if(NULL == indirections_manual_indirection){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_manual_indirection->resource_uid) {
        free(indirections_manual_indirection->resource_uid);
        indirections_manual_indirection->resource_uid = NULL;
    }
    free(indirections_manual_indirection);
}

cJSON *indirections_manual_indirection_convertToJSON(indirections_manual_indirection_t *indirections_manual_indirection) {
    cJSON *item = cJSON_CreateObject();

    // indirections_manual_indirection->resource_uid
    if(indirections_manual_indirection->resource_uid) { 
    if(cJSON_AddStringToObject(item, "resourceUid", indirections_manual_indirection->resource_uid) == NULL) {
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

indirections_manual_indirection_t *indirections_manual_indirection_parseFromJSON(cJSON *indirections_manual_indirectionJSON){

    indirections_manual_indirection_t *indirections_manual_indirection_local_var = NULL;

    // indirections_manual_indirection->resource_uid
    cJSON *resource_uid = cJSON_GetObjectItemCaseSensitive(indirections_manual_indirectionJSON, "resourceUid");
    if (resource_uid) { 
    if(!cJSON_IsString(resource_uid))
    {
    goto end; //String
    }
    }


    indirections_manual_indirection_local_var = indirections_manual_indirection_create (
        resource_uid ? strdup(resource_uid->valuestring) : NULL
        );

    return indirections_manual_indirection_local_var;
end:
    return NULL;

}
