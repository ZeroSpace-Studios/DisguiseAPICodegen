#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_assigner_info.h"



renderstream_assigner_info_t *renderstream_assigner_info_create(
    char *uid,
    char *name,
    renderstream_transport_info_t *transport,
    int alpha,
    int overlap_pixels,
    int padding_pixels,
    renderstream_network_info_t *preferred_network
    ) {
    renderstream_assigner_info_t *renderstream_assigner_info_local_var = malloc(sizeof(renderstream_assigner_info_t));
    if (!renderstream_assigner_info_local_var) {
        return NULL;
    }
    renderstream_assigner_info_local_var->uid = uid;
    renderstream_assigner_info_local_var->name = name;
    renderstream_assigner_info_local_var->transport = transport;
    renderstream_assigner_info_local_var->alpha = alpha;
    renderstream_assigner_info_local_var->overlap_pixels = overlap_pixels;
    renderstream_assigner_info_local_var->padding_pixels = padding_pixels;
    renderstream_assigner_info_local_var->preferred_network = preferred_network;

    return renderstream_assigner_info_local_var;
}


void renderstream_assigner_info_free(renderstream_assigner_info_t *renderstream_assigner_info) {
    if(NULL == renderstream_assigner_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_assigner_info->uid) {
        free(renderstream_assigner_info->uid);
        renderstream_assigner_info->uid = NULL;
    }
    if (renderstream_assigner_info->name) {
        free(renderstream_assigner_info->name);
        renderstream_assigner_info->name = NULL;
    }
    if (renderstream_assigner_info->transport) {
        renderstream_transport_info_free(renderstream_assigner_info->transport);
        renderstream_assigner_info->transport = NULL;
    }
    if (renderstream_assigner_info->preferred_network) {
        renderstream_network_info_free(renderstream_assigner_info->preferred_network);
        renderstream_assigner_info->preferred_network = NULL;
    }
    free(renderstream_assigner_info);
}

cJSON *renderstream_assigner_info_convertToJSON(renderstream_assigner_info_t *renderstream_assigner_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_assigner_info->uid
    if(renderstream_assigner_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_assigner_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_assigner_info->name
    if(renderstream_assigner_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_assigner_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_assigner_info->transport
    if(renderstream_assigner_info->transport) { 
    cJSON *transport_local_JSON = renderstream_transport_info_convertToJSON(renderstream_assigner_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_assigner_info->alpha
    if(renderstream_assigner_info->alpha) { 
    if(cJSON_AddBoolToObject(item, "alpha", renderstream_assigner_info->alpha) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_assigner_info->overlap_pixels
    if(renderstream_assigner_info->overlap_pixels) { 
    if(cJSON_AddNumberToObject(item, "overlapPixels", renderstream_assigner_info->overlap_pixels) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_assigner_info->padding_pixels
    if(renderstream_assigner_info->padding_pixels) { 
    if(cJSON_AddNumberToObject(item, "paddingPixels", renderstream_assigner_info->padding_pixels) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_assigner_info->preferred_network
    if(renderstream_assigner_info->preferred_network) { 
    cJSON *preferred_network_local_JSON = renderstream_network_info_convertToJSON(renderstream_assigner_info->preferred_network);
    if(preferred_network_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preferredNetwork", preferred_network_local_JSON);
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

renderstream_assigner_info_t *renderstream_assigner_info_parseFromJSON(cJSON *renderstream_assigner_infoJSON){

    renderstream_assigner_info_t *renderstream_assigner_info_local_var = NULL;

    // renderstream_assigner_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_assigner_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_assigner_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "transport");
    renderstream_transport_info_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = renderstream_transport_info_parseFromJSON(transport); //nonprimitive
    }

    // renderstream_assigner_info->alpha
    cJSON *alpha = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "alpha");
    if (alpha) { 
    if(!cJSON_IsBool(alpha))
    {
    goto end; //Bool
    }
    }

    // renderstream_assigner_info->overlap_pixels
    cJSON *overlap_pixels = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "overlapPixels");
    if (overlap_pixels) { 
    if(!cJSON_IsNumber(overlap_pixels))
    {
    goto end; //Numeric
    }
    }

    // renderstream_assigner_info->padding_pixels
    cJSON *padding_pixels = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "paddingPixels");
    if (padding_pixels) { 
    if(!cJSON_IsNumber(padding_pixels))
    {
    goto end; //Numeric
    }
    }

    // renderstream_assigner_info->preferred_network
    cJSON *preferred_network = cJSON_GetObjectItemCaseSensitive(renderstream_assigner_infoJSON, "preferredNetwork");
    renderstream_network_info_t *preferred_network_local_nonprim = NULL;
    if (preferred_network) { 
    preferred_network_local_nonprim = renderstream_network_info_parseFromJSON(preferred_network); //nonprimitive
    }


    renderstream_assigner_info_local_var = renderstream_assigner_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        transport ? transport_local_nonprim : NULL,
        alpha ? alpha->valueint : 0,
        overlap_pixels ? overlap_pixels->valuedouble : 0,
        padding_pixels ? padding_pixels->valuedouble : 0,
        preferred_network ? preferred_network_local_nonprim : NULL
        );

    return renderstream_assigner_info_local_var;
end:
    if (transport_local_nonprim) {
        renderstream_transport_info_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    if (preferred_network_local_nonprim) {
        renderstream_network_info_free(preferred_network_local_nonprim);
        preferred_network_local_nonprim = NULL;
    }
    return NULL;

}
