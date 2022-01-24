#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_render_machine_info.h"


char* statusrenderstream_render_machine_info_ToString(d3_api_renderstream_render_machine_info__e status) {
    char* statusArray[] =  { "NULL", "UNKNOWN", "OFFLINE", "OK", "STANDBY", "FAILED" };
	return statusArray[status];
}

d3_api_renderstream_render_machine_info__e statusrenderstream_render_machine_info_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "UNKNOWN", "OFFLINE", "OK", "STANDBY", "FAILED" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

renderstream_render_machine_info_t *renderstream_render_machine_info_create(
    char *name,
    char *status_string,
    int online,
    float load_factor,
    char *preferred_adapter,
    list_t *network_adapters,
    list_t *streams,
    list_t *assets
    ) {
    renderstream_render_machine_info_t *renderstream_render_machine_info_local_var = malloc(sizeof(renderstream_render_machine_info_t));
    if (!renderstream_render_machine_info_local_var) {
        return NULL;
    }
    renderstream_render_machine_info_local_var->name = name;
    renderstream_render_machine_info_local_var->status_string = status_string;
    renderstream_render_machine_info_local_var->status = status;
    renderstream_render_machine_info_local_var->online = online;
    renderstream_render_machine_info_local_var->load_factor = load_factor;
    renderstream_render_machine_info_local_var->preferred_adapter = preferred_adapter;
    renderstream_render_machine_info_local_var->network_adapters = network_adapters;
    renderstream_render_machine_info_local_var->streams = streams;
    renderstream_render_machine_info_local_var->assets = assets;

    return renderstream_render_machine_info_local_var;
}


void renderstream_render_machine_info_free(renderstream_render_machine_info_t *renderstream_render_machine_info) {
    if(NULL == renderstream_render_machine_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_render_machine_info->name) {
        free(renderstream_render_machine_info->name);
        renderstream_render_machine_info->name = NULL;
    }
    if (renderstream_render_machine_info->status_string) {
        free(renderstream_render_machine_info->status_string);
        renderstream_render_machine_info->status_string = NULL;
    }
    if (renderstream_render_machine_info->preferred_adapter) {
        free(renderstream_render_machine_info->preferred_adapter);
        renderstream_render_machine_info->preferred_adapter = NULL;
    }
    if (renderstream_render_machine_info->network_adapters) {
        list_ForEach(listEntry, renderstream_render_machine_info->network_adapters) {
            renderstream_adapter_info_free(listEntry->data);
        }
        list_free(renderstream_render_machine_info->network_adapters);
        renderstream_render_machine_info->network_adapters = NULL;
    }
    if (renderstream_render_machine_info->streams) {
        list_ForEach(listEntry, renderstream_render_machine_info->streams) {
            renderstream_stream_info_free(listEntry->data);
        }
        list_free(renderstream_render_machine_info->streams);
        renderstream_render_machine_info->streams = NULL;
    }
    if (renderstream_render_machine_info->assets) {
        list_ForEach(listEntry, renderstream_render_machine_info->assets) {
            renderstream_asset_info_free(listEntry->data);
        }
        list_free(renderstream_render_machine_info->assets);
        renderstream_render_machine_info->assets = NULL;
    }
    free(renderstream_render_machine_info);
}

cJSON *renderstream_render_machine_info_convertToJSON(renderstream_render_machine_info_t *renderstream_render_machine_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_render_machine_info->name
    if(renderstream_render_machine_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_render_machine_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_render_machine_info->status_string
    if(renderstream_render_machine_info->status_string) { 
    if(cJSON_AddStringToObject(item, "statusString", renderstream_render_machine_info->status_string) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_render_machine_info->status
    
    


    // renderstream_render_machine_info->online
    if(renderstream_render_machine_info->online) { 
    if(cJSON_AddBoolToObject(item, "online", renderstream_render_machine_info->online) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_render_machine_info->load_factor
    if(renderstream_render_machine_info->load_factor) { 
    if(cJSON_AddNumberToObject(item, "loadFactor", renderstream_render_machine_info->load_factor) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_render_machine_info->preferred_adapter
    if(renderstream_render_machine_info->preferred_adapter) { 
    if(cJSON_AddStringToObject(item, "preferredAdapter", renderstream_render_machine_info->preferred_adapter) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_render_machine_info->network_adapters
    if(renderstream_render_machine_info->network_adapters) { 
    cJSON *network_adapters = cJSON_AddArrayToObject(item, "networkAdapters");
    if(network_adapters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *network_adaptersListEntry;
    if (renderstream_render_machine_info->network_adapters) {
    list_ForEach(network_adaptersListEntry, renderstream_render_machine_info->network_adapters) {
    cJSON *itemLocal = renderstream_adapter_info_convertToJSON(network_adaptersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(network_adapters, itemLocal);
    }
    }
     } 


    // renderstream_render_machine_info->streams
    if(renderstream_render_machine_info->streams) { 
    cJSON *streams = cJSON_AddArrayToObject(item, "streams");
    if(streams == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *streamsListEntry;
    if (renderstream_render_machine_info->streams) {
    list_ForEach(streamsListEntry, renderstream_render_machine_info->streams) {
    cJSON *itemLocal = renderstream_stream_info_convertToJSON(streamsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(streams, itemLocal);
    }
    }
     } 


    // renderstream_render_machine_info->assets
    if(renderstream_render_machine_info->assets) { 
    cJSON *assets = cJSON_AddArrayToObject(item, "assets");
    if(assets == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *assetsListEntry;
    if (renderstream_render_machine_info->assets) {
    list_ForEach(assetsListEntry, renderstream_render_machine_info->assets) {
    cJSON *itemLocal = renderstream_asset_info_convertToJSON(assetsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(assets, itemLocal);
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

renderstream_render_machine_info_t *renderstream_render_machine_info_parseFromJSON(cJSON *renderstream_render_machine_infoJSON){

    renderstream_render_machine_info_t *renderstream_render_machine_info_local_var = NULL;

    // renderstream_render_machine_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_render_machine_info->status_string
    cJSON *status_string = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "statusString");
    if (status_string) { 
    if(!cJSON_IsString(status_string))
    {
    goto end; //String
    }
    }

    // renderstream_render_machine_info->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "status");
    }

    // renderstream_render_machine_info->online
    cJSON *online = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "online");
    if (online) { 
    if(!cJSON_IsBool(online))
    {
    goto end; //Bool
    }
    }

    // renderstream_render_machine_info->load_factor
    cJSON *load_factor = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "loadFactor");
    if (load_factor) { 
    if(!cJSON_IsNumber(load_factor))
    {
    goto end; //Numeric
    }
    }

    // renderstream_render_machine_info->preferred_adapter
    cJSON *preferred_adapter = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "preferredAdapter");
    if (preferred_adapter) { 
    if(!cJSON_IsString(preferred_adapter))
    {
    goto end; //String
    }
    }

    // renderstream_render_machine_info->network_adapters
    cJSON *network_adapters = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "networkAdapters");
    list_t *network_adaptersList;
    if (network_adapters) { 
    cJSON *network_adapters_local_nonprimitive;
    if(!cJSON_IsArray(network_adapters)){
        goto end; //nonprimitive container
    }

    network_adaptersList = list_create();

    cJSON_ArrayForEach(network_adapters_local_nonprimitive,network_adapters )
    {
        if(!cJSON_IsObject(network_adapters_local_nonprimitive)){
            goto end;
        }
        renderstream_adapter_info_t *network_adaptersItem = renderstream_adapter_info_parseFromJSON(network_adapters_local_nonprimitive);

        list_addElement(network_adaptersList, network_adaptersItem);
    }
    }

    // renderstream_render_machine_info->streams
    cJSON *streams = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "streams");
    list_t *streamsList;
    if (streams) { 
    cJSON *streams_local_nonprimitive;
    if(!cJSON_IsArray(streams)){
        goto end; //nonprimitive container
    }

    streamsList = list_create();

    cJSON_ArrayForEach(streams_local_nonprimitive,streams )
    {
        if(!cJSON_IsObject(streams_local_nonprimitive)){
            goto end;
        }
        renderstream_stream_info_t *streamsItem = renderstream_stream_info_parseFromJSON(streams_local_nonprimitive);

        list_addElement(streamsList, streamsItem);
    }
    }

    // renderstream_render_machine_info->assets
    cJSON *assets = cJSON_GetObjectItemCaseSensitive(renderstream_render_machine_infoJSON, "assets");
    list_t *assetsList;
    if (assets) { 
    cJSON *assets_local_nonprimitive;
    if(!cJSON_IsArray(assets)){
        goto end; //nonprimitive container
    }

    assetsList = list_create();

    cJSON_ArrayForEach(assets_local_nonprimitive,assets )
    {
        if(!cJSON_IsObject(assets_local_nonprimitive)){
            goto end;
        }
        renderstream_asset_info_t *assetsItem = renderstream_asset_info_parseFromJSON(assets_local_nonprimitive);

        list_addElement(assetsList, assetsItem);
    }
    }


    renderstream_render_machine_info_local_var = renderstream_render_machine_info_create (
        name ? strdup(name->valuestring) : NULL,
        status_string ? strdup(status_string->valuestring) : NULL,
        online ? online->valueint : 0,
        load_factor ? load_factor->valuedouble : 0,
        preferred_adapter ? strdup(preferred_adapter->valuestring) : NULL,
        network_adapters ? network_adaptersList : NULL,
        streams ? streamsList : NULL,
        assets ? assetsList : NULL
        );

    return renderstream_render_machine_info_local_var;
end:
    return NULL;

}
