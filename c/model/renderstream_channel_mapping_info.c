#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_channel_mapping_info.h"



renderstream_channel_mapping_info_t *renderstream_channel_mapping_info_create(
    char *channel,
    renderstream_mapping_t *mapping,
    renderstream_assigner_t *assigner
    ) {
    renderstream_channel_mapping_info_t *renderstream_channel_mapping_info_local_var = malloc(sizeof(renderstream_channel_mapping_info_t));
    if (!renderstream_channel_mapping_info_local_var) {
        return NULL;
    }
    renderstream_channel_mapping_info_local_var->channel = channel;
    renderstream_channel_mapping_info_local_var->mapping = mapping;
    renderstream_channel_mapping_info_local_var->assigner = assigner;

    return renderstream_channel_mapping_info_local_var;
}


void renderstream_channel_mapping_info_free(renderstream_channel_mapping_info_t *renderstream_channel_mapping_info) {
    if(NULL == renderstream_channel_mapping_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_channel_mapping_info->channel) {
        free(renderstream_channel_mapping_info->channel);
        renderstream_channel_mapping_info->channel = NULL;
    }
    if (renderstream_channel_mapping_info->mapping) {
        renderstream_mapping_free(renderstream_channel_mapping_info->mapping);
        renderstream_channel_mapping_info->mapping = NULL;
    }
    if (renderstream_channel_mapping_info->assigner) {
        renderstream_assigner_free(renderstream_channel_mapping_info->assigner);
        renderstream_channel_mapping_info->assigner = NULL;
    }
    free(renderstream_channel_mapping_info);
}

cJSON *renderstream_channel_mapping_info_convertToJSON(renderstream_channel_mapping_info_t *renderstream_channel_mapping_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_channel_mapping_info->channel
    if(renderstream_channel_mapping_info->channel) { 
    if(cJSON_AddStringToObject(item, "channel", renderstream_channel_mapping_info->channel) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_channel_mapping_info->mapping
    if(renderstream_channel_mapping_info->mapping) { 
    cJSON *mapping_local_JSON = renderstream_mapping_convertToJSON(renderstream_channel_mapping_info->mapping);
    if(mapping_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mapping", mapping_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_channel_mapping_info->assigner
    if(renderstream_channel_mapping_info->assigner) { 
    cJSON *assigner_local_JSON = renderstream_assigner_convertToJSON(renderstream_channel_mapping_info->assigner);
    if(assigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assigner", assigner_local_JSON);
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

renderstream_channel_mapping_info_t *renderstream_channel_mapping_info_parseFromJSON(cJSON *renderstream_channel_mapping_infoJSON){

    renderstream_channel_mapping_info_t *renderstream_channel_mapping_info_local_var = NULL;

    // renderstream_channel_mapping_info->channel
    cJSON *channel = cJSON_GetObjectItemCaseSensitive(renderstream_channel_mapping_infoJSON, "channel");
    if (channel) { 
    if(!cJSON_IsString(channel))
    {
    goto end; //String
    }
    }

    // renderstream_channel_mapping_info->mapping
    cJSON *mapping = cJSON_GetObjectItemCaseSensitive(renderstream_channel_mapping_infoJSON, "mapping");
    renderstream_mapping_t *mapping_local_nonprim = NULL;
    if (mapping) { 
    mapping_local_nonprim = renderstream_mapping_parseFromJSON(mapping); //nonprimitive
    }

    // renderstream_channel_mapping_info->assigner
    cJSON *assigner = cJSON_GetObjectItemCaseSensitive(renderstream_channel_mapping_infoJSON, "assigner");
    renderstream_assigner_t *assigner_local_nonprim = NULL;
    if (assigner) { 
    assigner_local_nonprim = renderstream_assigner_parseFromJSON(assigner); //nonprimitive
    }


    renderstream_channel_mapping_info_local_var = renderstream_channel_mapping_info_create (
        channel ? strdup(channel->valuestring) : NULL,
        mapping ? mapping_local_nonprim : NULL,
        assigner ? assigner_local_nonprim : NULL
        );

    return renderstream_channel_mapping_info_local_var;
end:
    if (mapping_local_nonprim) {
        renderstream_mapping_free(mapping_local_nonprim);
        mapping_local_nonprim = NULL;
    }
    if (assigner_local_nonprim) {
        renderstream_assigner_free(assigner_local_nonprim);
        assigner_local_nonprim = NULL;
    }
    return NULL;

}
