#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_asset.h"



renderstream_asset_t *renderstream_asset_create(
    char *uid,
    char *name
    ) {
    renderstream_asset_t *renderstream_asset_local_var = malloc(sizeof(renderstream_asset_t));
    if (!renderstream_asset_local_var) {
        return NULL;
    }
    renderstream_asset_local_var->uid = uid;
    renderstream_asset_local_var->name = name;

    return renderstream_asset_local_var;
}


void renderstream_asset_free(renderstream_asset_t *renderstream_asset) {
    if(NULL == renderstream_asset){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_asset->uid) {
        free(renderstream_asset->uid);
        renderstream_asset->uid = NULL;
    }
    if (renderstream_asset->name) {
        free(renderstream_asset->name);
        renderstream_asset->name = NULL;
    }
    free(renderstream_asset);
}

cJSON *renderstream_asset_convertToJSON(renderstream_asset_t *renderstream_asset) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_asset->uid
    if(renderstream_asset->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_asset->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_asset->name
    if(renderstream_asset->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_asset->name) == NULL) {
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

renderstream_asset_t *renderstream_asset_parseFromJSON(cJSON *renderstream_assetJSON){

    renderstream_asset_t *renderstream_asset_local_var = NULL;

    // renderstream_asset->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_assetJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_asset->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_assetJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    renderstream_asset_local_var = renderstream_asset_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return renderstream_asset_local_var;
end:
    return NULL;

}
