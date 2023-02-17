#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sequencing_list_indirection_item.h"



sequencing_list_indirection_item_t *sequencing_list_indirection_item_create(
    char *uid,
    char *name,
    char *resource_type,
    sequencing_indirection_resource_t *current_resource
    ) {
    sequencing_list_indirection_item_t *sequencing_list_indirection_item_local_var = malloc(sizeof(sequencing_list_indirection_item_t));
    if (!sequencing_list_indirection_item_local_var) {
        return NULL;
    }
    sequencing_list_indirection_item_local_var->uid = uid;
    sequencing_list_indirection_item_local_var->name = name;
    sequencing_list_indirection_item_local_var->resource_type = resource_type;
    sequencing_list_indirection_item_local_var->current_resource = current_resource;

    return sequencing_list_indirection_item_local_var;
}


void sequencing_list_indirection_item_free(sequencing_list_indirection_item_t *sequencing_list_indirection_item) {
    if(NULL == sequencing_list_indirection_item){
        return ;
    }
    listEntry_t *listEntry;
    if (sequencing_list_indirection_item->uid) {
        free(sequencing_list_indirection_item->uid);
        sequencing_list_indirection_item->uid = NULL;
    }
    if (sequencing_list_indirection_item->name) {
        free(sequencing_list_indirection_item->name);
        sequencing_list_indirection_item->name = NULL;
    }
    if (sequencing_list_indirection_item->resource_type) {
        free(sequencing_list_indirection_item->resource_type);
        sequencing_list_indirection_item->resource_type = NULL;
    }
    if (sequencing_list_indirection_item->current_resource) {
        sequencing_indirection_resource_free(sequencing_list_indirection_item->current_resource);
        sequencing_list_indirection_item->current_resource = NULL;
    }
    free(sequencing_list_indirection_item);
}

cJSON *sequencing_list_indirection_item_convertToJSON(sequencing_list_indirection_item_t *sequencing_list_indirection_item) {
    cJSON *item = cJSON_CreateObject();

    // sequencing_list_indirection_item->uid
    if(sequencing_list_indirection_item->uid) { 
    if(cJSON_AddStringToObject(item, "uid", sequencing_list_indirection_item->uid) == NULL) {
    goto fail; //String
    }
     } 


    // sequencing_list_indirection_item->name
    if(sequencing_list_indirection_item->name) { 
    if(cJSON_AddStringToObject(item, "name", sequencing_list_indirection_item->name) == NULL) {
    goto fail; //String
    }
     } 


    // sequencing_list_indirection_item->resource_type
    if(sequencing_list_indirection_item->resource_type) { 
    if(cJSON_AddStringToObject(item, "resourceType", sequencing_list_indirection_item->resource_type) == NULL) {
    goto fail; //String
    }
     } 


    // sequencing_list_indirection_item->current_resource
    if(sequencing_list_indirection_item->current_resource) { 
    cJSON *current_resource_local_JSON = sequencing_indirection_resource_convertToJSON(sequencing_list_indirection_item->current_resource);
    if(current_resource_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currentResource", current_resource_local_JSON);
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

sequencing_list_indirection_item_t *sequencing_list_indirection_item_parseFromJSON(cJSON *sequencing_list_indirection_itemJSON){

    sequencing_list_indirection_item_t *sequencing_list_indirection_item_local_var = NULL;

    // sequencing_list_indirection_item->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(sequencing_list_indirection_itemJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // sequencing_list_indirection_item->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(sequencing_list_indirection_itemJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // sequencing_list_indirection_item->resource_type
    cJSON *resource_type = cJSON_GetObjectItemCaseSensitive(sequencing_list_indirection_itemJSON, "resourceType");
    if (resource_type) { 
    if(!cJSON_IsString(resource_type))
    {
    goto end; //String
    }
    }

    // sequencing_list_indirection_item->current_resource
    cJSON *current_resource = cJSON_GetObjectItemCaseSensitive(sequencing_list_indirection_itemJSON, "currentResource");
    sequencing_indirection_resource_t *current_resource_local_nonprim = NULL;
    if (current_resource) { 
    current_resource_local_nonprim = sequencing_indirection_resource_parseFromJSON(current_resource); //nonprimitive
    }


    sequencing_list_indirection_item_local_var = sequencing_list_indirection_item_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        resource_type ? strdup(resource_type->valuestring) : NULL,
        current_resource ? current_resource_local_nonprim : NULL
        );

    return sequencing_list_indirection_item_local_var;
end:
    if (current_resource_local_nonprim) {
        sequencing_indirection_resource_free(current_resource_local_nonprim);
        current_resource_local_nonprim = NULL;
    }
    return NULL;

}
