#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_adapter_info.h"



renderstream_adapter_info_t *renderstream_adapter_info_create(
    char *name,
    char *ip_address,
    char *subnet_mask
    ) {
    renderstream_adapter_info_t *renderstream_adapter_info_local_var = malloc(sizeof(renderstream_adapter_info_t));
    if (!renderstream_adapter_info_local_var) {
        return NULL;
    }
    renderstream_adapter_info_local_var->name = name;
    renderstream_adapter_info_local_var->ip_address = ip_address;
    renderstream_adapter_info_local_var->subnet_mask = subnet_mask;

    return renderstream_adapter_info_local_var;
}


void renderstream_adapter_info_free(renderstream_adapter_info_t *renderstream_adapter_info) {
    if(NULL == renderstream_adapter_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_adapter_info->name) {
        free(renderstream_adapter_info->name);
        renderstream_adapter_info->name = NULL;
    }
    if (renderstream_adapter_info->ip_address) {
        free(renderstream_adapter_info->ip_address);
        renderstream_adapter_info->ip_address = NULL;
    }
    if (renderstream_adapter_info->subnet_mask) {
        free(renderstream_adapter_info->subnet_mask);
        renderstream_adapter_info->subnet_mask = NULL;
    }
    free(renderstream_adapter_info);
}

cJSON *renderstream_adapter_info_convertToJSON(renderstream_adapter_info_t *renderstream_adapter_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_adapter_info->name
    if(renderstream_adapter_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_adapter_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_adapter_info->ip_address
    if(renderstream_adapter_info->ip_address) { 
    if(cJSON_AddStringToObject(item, "ipAddress", renderstream_adapter_info->ip_address) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_adapter_info->subnet_mask
    if(renderstream_adapter_info->subnet_mask) { 
    if(cJSON_AddStringToObject(item, "subnetMask", renderstream_adapter_info->subnet_mask) == NULL) {
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

renderstream_adapter_info_t *renderstream_adapter_info_parseFromJSON(cJSON *renderstream_adapter_infoJSON){

    renderstream_adapter_info_t *renderstream_adapter_info_local_var = NULL;

    // renderstream_adapter_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_adapter_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_adapter_info->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(renderstream_adapter_infoJSON, "ipAddress");
    if (ip_address) { 
    if(!cJSON_IsString(ip_address))
    {
    goto end; //String
    }
    }

    // renderstream_adapter_info->subnet_mask
    cJSON *subnet_mask = cJSON_GetObjectItemCaseSensitive(renderstream_adapter_infoJSON, "subnetMask");
    if (subnet_mask) { 
    if(!cJSON_IsString(subnet_mask))
    {
    goto end; //String
    }
    }


    renderstream_adapter_info_local_var = renderstream_adapter_info_create (
        name ? strdup(name->valuestring) : NULL,
        ip_address ? strdup(ip_address->valuestring) : NULL,
        subnet_mask ? strdup(subnet_mask->valuestring) : NULL
        );

    return renderstream_adapter_info_local_var;
end:
    return NULL;

}
