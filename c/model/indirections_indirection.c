#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_indirection.h"



indirections_indirection_t *indirections_indirection_create(
    char *uid,
    char *resource_type,
    char *name,
    indirections_manual_indirection_t *manual_indirection,
    indirections_list_indirection_t *list_indirection
    ) {
    indirections_indirection_t *indirections_indirection_local_var = malloc(sizeof(indirections_indirection_t));
    if (!indirections_indirection_local_var) {
        return NULL;
    }
    indirections_indirection_local_var->uid = uid;
    indirections_indirection_local_var->resource_type = resource_type;
    indirections_indirection_local_var->name = name;
    indirections_indirection_local_var->manual_indirection = manual_indirection;
    indirections_indirection_local_var->list_indirection = list_indirection;

    return indirections_indirection_local_var;
}


void indirections_indirection_free(indirections_indirection_t *indirections_indirection) {
    if(NULL == indirections_indirection){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_indirection->uid) {
        free(indirections_indirection->uid);
        indirections_indirection->uid = NULL;
    }
    if (indirections_indirection->resource_type) {
        free(indirections_indirection->resource_type);
        indirections_indirection->resource_type = NULL;
    }
    if (indirections_indirection->name) {
        free(indirections_indirection->name);
        indirections_indirection->name = NULL;
    }
    if (indirections_indirection->manual_indirection) {
        indirections_manual_indirection_free(indirections_indirection->manual_indirection);
        indirections_indirection->manual_indirection = NULL;
    }
    if (indirections_indirection->list_indirection) {
        indirections_list_indirection_free(indirections_indirection->list_indirection);
        indirections_indirection->list_indirection = NULL;
    }
    free(indirections_indirection);
}

cJSON *indirections_indirection_convertToJSON(indirections_indirection_t *indirections_indirection) {
    cJSON *item = cJSON_CreateObject();

    // indirections_indirection->uid
    if(indirections_indirection->uid) { 
    if(cJSON_AddStringToObject(item, "uid", indirections_indirection->uid) == NULL) {
    goto fail; //String
    }
     } 


    // indirections_indirection->resource_type
    if(indirections_indirection->resource_type) { 
    if(cJSON_AddStringToObject(item, "resourceType", indirections_indirection->resource_type) == NULL) {
    goto fail; //String
    }
     } 


    // indirections_indirection->name
    if(indirections_indirection->name) { 
    if(cJSON_AddStringToObject(item, "name", indirections_indirection->name) == NULL) {
    goto fail; //String
    }
     } 


    // indirections_indirection->manual_indirection
    if(indirections_indirection->manual_indirection) { 
    cJSON *manual_indirection_local_JSON = indirections_manual_indirection_convertToJSON(indirections_indirection->manual_indirection);
    if(manual_indirection_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "manualIndirection", manual_indirection_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // indirections_indirection->list_indirection
    if(indirections_indirection->list_indirection) { 
    cJSON *list_indirection_local_JSON = indirections_list_indirection_convertToJSON(indirections_indirection->list_indirection);
    if(list_indirection_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "listIndirection", list_indirection_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

indirections_indirection_t *indirections_indirection_parseFromJSON(cJSON *indirections_indirectionJSON){

    indirections_indirection_t *indirections_indirection_local_var = NULL;

    // indirections_indirection->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(indirections_indirectionJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // indirections_indirection->resource_type
    cJSON *resource_type = cJSON_GetObjectItemCaseSensitive(indirections_indirectionJSON, "resourceType");
    if (resource_type) { 
    if(!cJSON_IsString(resource_type))
    {
    goto end; //String
    }
    }

    // indirections_indirection->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(indirections_indirectionJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // indirections_indirection->manual_indirection
    cJSON *manual_indirection = cJSON_GetObjectItemCaseSensitive(indirections_indirectionJSON, "manualIndirection");
    indirections_manual_indirection_t *manual_indirection_local_nonprim = NULL;
    if (manual_indirection) { 
    manual_indirection_local_nonprim = indirections_manual_indirection_parseFromJSON(manual_indirection); //nonprimitive
    }

    // indirections_indirection->list_indirection
    cJSON *list_indirection = cJSON_GetObjectItemCaseSensitive(indirections_indirectionJSON, "listIndirection");
    indirections_list_indirection_t *list_indirection_local_nonprim = NULL;
    if (list_indirection) { 
    list_indirection_local_nonprim = indirections_list_indirection_parseFromJSON(list_indirection); //nonprimitive
    }


    indirections_indirection_local_var = indirections_indirection_create (
        uid ? strdup(uid->valuestring) : NULL,
        resource_type ? strdup(resource_type->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        manual_indirection ? manual_indirection_local_nonprim : NULL,
        list_indirection ? list_indirection_local_nonprim : NULL
        );

    return indirections_indirection_local_var;
end:
    if (manual_indirection_local_nonprim) {
        indirections_manual_indirection_free(manual_indirection_local_nonprim);
        manual_indirection_local_nonprim = NULL;
    }
    if (list_indirection_local_nonprim) {
        indirections_list_indirection_free(list_indirection_local_nonprim);
        list_indirection_local_nonprim = NULL;
    }
    return NULL;

}
