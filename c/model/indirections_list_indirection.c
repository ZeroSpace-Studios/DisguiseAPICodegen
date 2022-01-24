#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_list_indirection.h"



indirections_list_indirection_t *indirections_list_indirection_create(
    long resource_index,
    list_t *resource_uids
    ) {
    indirections_list_indirection_t *indirections_list_indirection_local_var = malloc(sizeof(indirections_list_indirection_t));
    if (!indirections_list_indirection_local_var) {
        return NULL;
    }
    indirections_list_indirection_local_var->resource_index = resource_index;
    indirections_list_indirection_local_var->resource_uids = resource_uids;

    return indirections_list_indirection_local_var;
}


void indirections_list_indirection_free(indirections_list_indirection_t *indirections_list_indirection) {
    if(NULL == indirections_list_indirection){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_list_indirection->resource_uids) {
        list_ForEach(listEntry, indirections_list_indirection->resource_uids) {
            free(listEntry->data);
        }
        list_free(indirections_list_indirection->resource_uids);
        indirections_list_indirection->resource_uids = NULL;
    }
    free(indirections_list_indirection);
}

cJSON *indirections_list_indirection_convertToJSON(indirections_list_indirection_t *indirections_list_indirection) {
    cJSON *item = cJSON_CreateObject();

    // indirections_list_indirection->resource_index
    if(indirections_list_indirection->resource_index) { 
    if(cJSON_AddNumberToObject(item, "resourceIndex", indirections_list_indirection->resource_index) == NULL) {
    goto fail; //Numeric
    }
     } 


    // indirections_list_indirection->resource_uids
    if(indirections_list_indirection->resource_uids) { 
    cJSON *resource_uids = cJSON_AddArrayToObject(item, "resourceUids");
    if(resource_uids == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *resource_uidsListEntry;
    list_ForEach(resource_uidsListEntry, indirections_list_indirection->resource_uids) {
    if(cJSON_AddStringToObject(resource_uids, "", (char*)resource_uidsListEntry->data) == NULL)
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

indirections_list_indirection_t *indirections_list_indirection_parseFromJSON(cJSON *indirections_list_indirectionJSON){

    indirections_list_indirection_t *indirections_list_indirection_local_var = NULL;

    // indirections_list_indirection->resource_index
    cJSON *resource_index = cJSON_GetObjectItemCaseSensitive(indirections_list_indirectionJSON, "resourceIndex");
    if (resource_index) { 
    if(!cJSON_IsNumber(resource_index))
    {
    goto end; //Numeric
    }
    }

    // indirections_list_indirection->resource_uids
    cJSON *resource_uids = cJSON_GetObjectItemCaseSensitive(indirections_list_indirectionJSON, "resourceUids");
    list_t *resource_uidsList;
    if (resource_uids) { 
    cJSON *resource_uids_local;
    if(!cJSON_IsArray(resource_uids)) {
        goto end;//primitive container
    }
    resource_uidsList = list_create();

    cJSON_ArrayForEach(resource_uids_local, resource_uids)
    {
        if(!cJSON_IsString(resource_uids_local))
        {
            goto end;
        }
        list_addElement(resource_uidsList , strdup(resource_uids_local->valuestring));
    }
    }


    indirections_list_indirection_local_var = indirections_list_indirection_create (
        resource_index ? resource_index->valuedouble : 0,
        resource_uids ? resource_uidsList : NULL
        );

    return indirections_list_indirection_local_var;
end:
    return NULL;

}
