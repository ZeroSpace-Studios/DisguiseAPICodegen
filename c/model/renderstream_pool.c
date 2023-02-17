#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_pool.h"



renderstream_pool_t *renderstream_pool_create(
    char *uid,
    char *name
    ) {
    renderstream_pool_t *renderstream_pool_local_var = malloc(sizeof(renderstream_pool_t));
    if (!renderstream_pool_local_var) {
        return NULL;
    }
    renderstream_pool_local_var->uid = uid;
    renderstream_pool_local_var->name = name;

    return renderstream_pool_local_var;
}


void renderstream_pool_free(renderstream_pool_t *renderstream_pool) {
    if(NULL == renderstream_pool){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_pool->uid) {
        free(renderstream_pool->uid);
        renderstream_pool->uid = NULL;
    }
    if (renderstream_pool->name) {
        free(renderstream_pool->name);
        renderstream_pool->name = NULL;
    }
    free(renderstream_pool);
}

cJSON *renderstream_pool_convertToJSON(renderstream_pool_t *renderstream_pool) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_pool->uid
    if(renderstream_pool->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_pool->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_pool->name
    if(renderstream_pool->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_pool->name) == NULL) {
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

renderstream_pool_t *renderstream_pool_parseFromJSON(cJSON *renderstream_poolJSON){

    renderstream_pool_t *renderstream_pool_local_var = NULL;

    // renderstream_pool->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_poolJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_pool->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_poolJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    renderstream_pool_local_var = renderstream_pool_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return renderstream_pool_local_var;
end:
    return NULL;

}
