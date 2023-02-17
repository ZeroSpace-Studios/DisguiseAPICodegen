#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_sync_layers_request.h"



renderstream_sync_layers_request_t *renderstream_sync_layers_request_create(
    list_t *layers
    ) {
    renderstream_sync_layers_request_t *renderstream_sync_layers_request_local_var = malloc(sizeof(renderstream_sync_layers_request_t));
    if (!renderstream_sync_layers_request_local_var) {
        return NULL;
    }
    renderstream_sync_layers_request_local_var->layers = layers;

    return renderstream_sync_layers_request_local_var;
}


void renderstream_sync_layers_request_free(renderstream_sync_layers_request_t *renderstream_sync_layers_request) {
    if(NULL == renderstream_sync_layers_request){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_sync_layers_request->layers) {
        list_ForEach(listEntry, renderstream_sync_layers_request->layers) {
            d3api_locator_free(listEntry->data);
        }
        list_free(renderstream_sync_layers_request->layers);
        renderstream_sync_layers_request->layers = NULL;
    }
    free(renderstream_sync_layers_request);
}

cJSON *renderstream_sync_layers_request_convertToJSON(renderstream_sync_layers_request_t *renderstream_sync_layers_request) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_sync_layers_request->layers
    if(renderstream_sync_layers_request->layers) { 
    cJSON *layers = cJSON_AddArrayToObject(item, "layers");
    if(layers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *layersListEntry;
    if (renderstream_sync_layers_request->layers) {
    list_ForEach(layersListEntry, renderstream_sync_layers_request->layers) {
    cJSON *itemLocal = d3api_locator_convertToJSON(layersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(layers, itemLocal);
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

renderstream_sync_layers_request_t *renderstream_sync_layers_request_parseFromJSON(cJSON *renderstream_sync_layers_requestJSON){

    renderstream_sync_layers_request_t *renderstream_sync_layers_request_local_var = NULL;

    // renderstream_sync_layers_request->layers
    cJSON *layers = cJSON_GetObjectItemCaseSensitive(renderstream_sync_layers_requestJSON, "layers");
    list_t *layersList;
    if (layers) { 
    cJSON *layers_local_nonprimitive;
    if(!cJSON_IsArray(layers)){
        goto end; //nonprimitive container
    }

    layersList = list_create();

    cJSON_ArrayForEach(layers_local_nonprimitive,layers )
    {
        if(!cJSON_IsObject(layers_local_nonprimitive)){
            goto end;
        }
        d3api_locator_t *layersItem = d3api_locator_parseFromJSON(layers_local_nonprimitive);

        list_addElement(layersList, layersItem);
    }
    }


    renderstream_sync_layers_request_local_var = renderstream_sync_layers_request_create (
        layers ? layersList : NULL
        );

    return renderstream_sync_layers_request_local_var;
end:
    return NULL;

}
