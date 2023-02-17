#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_get_layer_config_result.h"



renderstream_get_layer_config_result_t *renderstream_get_layer_config_result_create(
    int framerate_fraction_divisor,
    renderstream_asset_t *asset,
    renderstream_pool_t *pool,
    list_t *channel_mappings,
    renderstream_assigner_t *default_assigner
    ) {
    renderstream_get_layer_config_result_t *renderstream_get_layer_config_result_local_var = malloc(sizeof(renderstream_get_layer_config_result_t));
    if (!renderstream_get_layer_config_result_local_var) {
        return NULL;
    }
    renderstream_get_layer_config_result_local_var->framerate_fraction_divisor = framerate_fraction_divisor;
    renderstream_get_layer_config_result_local_var->asset = asset;
    renderstream_get_layer_config_result_local_var->pool = pool;
    renderstream_get_layer_config_result_local_var->channel_mappings = channel_mappings;
    renderstream_get_layer_config_result_local_var->default_assigner = default_assigner;

    return renderstream_get_layer_config_result_local_var;
}


void renderstream_get_layer_config_result_free(renderstream_get_layer_config_result_t *renderstream_get_layer_config_result) {
    if(NULL == renderstream_get_layer_config_result){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_get_layer_config_result->asset) {
        renderstream_asset_free(renderstream_get_layer_config_result->asset);
        renderstream_get_layer_config_result->asset = NULL;
    }
    if (renderstream_get_layer_config_result->pool) {
        renderstream_pool_free(renderstream_get_layer_config_result->pool);
        renderstream_get_layer_config_result->pool = NULL;
    }
    if (renderstream_get_layer_config_result->channel_mappings) {
        list_ForEach(listEntry, renderstream_get_layer_config_result->channel_mappings) {
            renderstream_channel_mapping_info_free(listEntry->data);
        }
        list_free(renderstream_get_layer_config_result->channel_mappings);
        renderstream_get_layer_config_result->channel_mappings = NULL;
    }
    if (renderstream_get_layer_config_result->default_assigner) {
        renderstream_assigner_free(renderstream_get_layer_config_result->default_assigner);
        renderstream_get_layer_config_result->default_assigner = NULL;
    }
    free(renderstream_get_layer_config_result);
}

cJSON *renderstream_get_layer_config_result_convertToJSON(renderstream_get_layer_config_result_t *renderstream_get_layer_config_result) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_get_layer_config_result->framerate_fraction_divisor
    if(renderstream_get_layer_config_result->framerate_fraction_divisor) { 
    if(cJSON_AddNumberToObject(item, "framerateFractionDivisor", renderstream_get_layer_config_result->framerate_fraction_divisor) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_get_layer_config_result->asset
    if(renderstream_get_layer_config_result->asset) { 
    cJSON *asset_local_JSON = renderstream_asset_convertToJSON(renderstream_get_layer_config_result->asset);
    if(asset_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "asset", asset_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_get_layer_config_result->pool
    if(renderstream_get_layer_config_result->pool) { 
    cJSON *pool_local_JSON = renderstream_pool_convertToJSON(renderstream_get_layer_config_result->pool);
    if(pool_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pool", pool_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_get_layer_config_result->channel_mappings
    if(renderstream_get_layer_config_result->channel_mappings) { 
    cJSON *channel_mappings = cJSON_AddArrayToObject(item, "channelMappings");
    if(channel_mappings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *channel_mappingsListEntry;
    if (renderstream_get_layer_config_result->channel_mappings) {
    list_ForEach(channel_mappingsListEntry, renderstream_get_layer_config_result->channel_mappings) {
    cJSON *itemLocal = renderstream_channel_mapping_info_convertToJSON(channel_mappingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(channel_mappings, itemLocal);
    }
    }
     } 


    // renderstream_get_layer_config_result->default_assigner
    if(renderstream_get_layer_config_result->default_assigner) { 
    cJSON *default_assigner_local_JSON = renderstream_assigner_convertToJSON(renderstream_get_layer_config_result->default_assigner);
    if(default_assigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "defaultAssigner", default_assigner_local_JSON);
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

renderstream_get_layer_config_result_t *renderstream_get_layer_config_result_parseFromJSON(cJSON *renderstream_get_layer_config_resultJSON){

    renderstream_get_layer_config_result_t *renderstream_get_layer_config_result_local_var = NULL;

    // renderstream_get_layer_config_result->framerate_fraction_divisor
    cJSON *framerate_fraction_divisor = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_config_resultJSON, "framerateFractionDivisor");
    if (framerate_fraction_divisor) { 
    if(!cJSON_IsNumber(framerate_fraction_divisor))
    {
    goto end; //Numeric
    }
    }

    // renderstream_get_layer_config_result->asset
    cJSON *asset = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_config_resultJSON, "asset");
    renderstream_asset_t *asset_local_nonprim = NULL;
    if (asset) { 
    asset_local_nonprim = renderstream_asset_parseFromJSON(asset); //nonprimitive
    }

    // renderstream_get_layer_config_result->pool
    cJSON *pool = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_config_resultJSON, "pool");
    renderstream_pool_t *pool_local_nonprim = NULL;
    if (pool) { 
    pool_local_nonprim = renderstream_pool_parseFromJSON(pool); //nonprimitive
    }

    // renderstream_get_layer_config_result->channel_mappings
    cJSON *channel_mappings = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_config_resultJSON, "channelMappings");
    list_t *channel_mappingsList;
    if (channel_mappings) { 
    cJSON *channel_mappings_local_nonprimitive;
    if(!cJSON_IsArray(channel_mappings)){
        goto end; //nonprimitive container
    }

    channel_mappingsList = list_create();

    cJSON_ArrayForEach(channel_mappings_local_nonprimitive,channel_mappings )
    {
        if(!cJSON_IsObject(channel_mappings_local_nonprimitive)){
            goto end;
        }
        renderstream_channel_mapping_info_t *channel_mappingsItem = renderstream_channel_mapping_info_parseFromJSON(channel_mappings_local_nonprimitive);

        list_addElement(channel_mappingsList, channel_mappingsItem);
    }
    }

    // renderstream_get_layer_config_result->default_assigner
    cJSON *default_assigner = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_config_resultJSON, "defaultAssigner");
    renderstream_assigner_t *default_assigner_local_nonprim = NULL;
    if (default_assigner) { 
    default_assigner_local_nonprim = renderstream_assigner_parseFromJSON(default_assigner); //nonprimitive
    }


    renderstream_get_layer_config_result_local_var = renderstream_get_layer_config_result_create (
        framerate_fraction_divisor ? framerate_fraction_divisor->valuedouble : 0,
        asset ? asset_local_nonprim : NULL,
        pool ? pool_local_nonprim : NULL,
        channel_mappings ? channel_mappingsList : NULL,
        default_assigner ? default_assigner_local_nonprim : NULL
        );

    return renderstream_get_layer_config_result_local_var;
end:
    if (asset_local_nonprim) {
        renderstream_asset_free(asset_local_nonprim);
        asset_local_nonprim = NULL;
    }
    if (pool_local_nonprim) {
        renderstream_pool_free(pool_local_nonprim);
        pool_local_nonprim = NULL;
    }
    if (default_assigner_local_nonprim) {
        renderstream_assigner_free(default_assigner_local_nonprim);
        default_assigner_local_nonprim = NULL;
    }
    return NULL;

}
