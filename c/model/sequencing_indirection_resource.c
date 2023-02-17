#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sequencing_indirection_resource.h"



sequencing_indirection_resource_t *sequencing_indirection_resource_create(
    char *uid,
    char *name
    ) {
    sequencing_indirection_resource_t *sequencing_indirection_resource_local_var = malloc(sizeof(sequencing_indirection_resource_t));
    if (!sequencing_indirection_resource_local_var) {
        return NULL;
    }
    sequencing_indirection_resource_local_var->uid = uid;
    sequencing_indirection_resource_local_var->name = name;

    return sequencing_indirection_resource_local_var;
}


void sequencing_indirection_resource_free(sequencing_indirection_resource_t *sequencing_indirection_resource) {
    if(NULL == sequencing_indirection_resource){
        return ;
    }
    listEntry_t *listEntry;
    if (sequencing_indirection_resource->uid) {
        free(sequencing_indirection_resource->uid);
        sequencing_indirection_resource->uid = NULL;
    }
    if (sequencing_indirection_resource->name) {
        free(sequencing_indirection_resource->name);
        sequencing_indirection_resource->name = NULL;
    }
    free(sequencing_indirection_resource);
}

cJSON *sequencing_indirection_resource_convertToJSON(sequencing_indirection_resource_t *sequencing_indirection_resource) {
    cJSON *item = cJSON_CreateObject();

    // sequencing_indirection_resource->uid
    if(sequencing_indirection_resource->uid) { 
    if(cJSON_AddStringToObject(item, "uid", sequencing_indirection_resource->uid) == NULL) {
    goto fail; //String
    }
     } 


    // sequencing_indirection_resource->name
    if(sequencing_indirection_resource->name) { 
    if(cJSON_AddStringToObject(item, "name", sequencing_indirection_resource->name) == NULL) {
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

sequencing_indirection_resource_t *sequencing_indirection_resource_parseFromJSON(cJSON *sequencing_indirection_resourceJSON){

    sequencing_indirection_resource_t *sequencing_indirection_resource_local_var = NULL;

    // sequencing_indirection_resource->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(sequencing_indirection_resourceJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // sequencing_indirection_resource->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(sequencing_indirection_resourceJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    sequencing_indirection_resource_local_var = sequencing_indirection_resource_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return sequencing_indirection_resource_local_var;
end:
    return NULL;

}
