#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_mapping.h"



renderstream_mapping_t *renderstream_mapping_create(
    char *uid,
    char *name
    ) {
    renderstream_mapping_t *renderstream_mapping_local_var = malloc(sizeof(renderstream_mapping_t));
    if (!renderstream_mapping_local_var) {
        return NULL;
    }
    renderstream_mapping_local_var->uid = uid;
    renderstream_mapping_local_var->name = name;

    return renderstream_mapping_local_var;
}


void renderstream_mapping_free(renderstream_mapping_t *renderstream_mapping) {
    if(NULL == renderstream_mapping){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_mapping->uid) {
        free(renderstream_mapping->uid);
        renderstream_mapping->uid = NULL;
    }
    if (renderstream_mapping->name) {
        free(renderstream_mapping->name);
        renderstream_mapping->name = NULL;
    }
    free(renderstream_mapping);
}

cJSON *renderstream_mapping_convertToJSON(renderstream_mapping_t *renderstream_mapping) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_mapping->uid
    if(renderstream_mapping->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_mapping->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_mapping->name
    if(renderstream_mapping->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_mapping->name) == NULL) {
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

renderstream_mapping_t *renderstream_mapping_parseFromJSON(cJSON *renderstream_mappingJSON){

    renderstream_mapping_t *renderstream_mapping_local_var = NULL;

    // renderstream_mapping->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_mappingJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_mapping->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_mappingJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    renderstream_mapping_local_var = renderstream_mapping_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return renderstream_mapping_local_var;
end:
    return NULL;

}
