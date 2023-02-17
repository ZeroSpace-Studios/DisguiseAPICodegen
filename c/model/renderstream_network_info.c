#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_network_info.h"



renderstream_network_info_t *renderstream_network_info_create(
    char *ip,
    char *name
    ) {
    renderstream_network_info_t *renderstream_network_info_local_var = malloc(sizeof(renderstream_network_info_t));
    if (!renderstream_network_info_local_var) {
        return NULL;
    }
    renderstream_network_info_local_var->ip = ip;
    renderstream_network_info_local_var->name = name;

    return renderstream_network_info_local_var;
}


void renderstream_network_info_free(renderstream_network_info_t *renderstream_network_info) {
    if(NULL == renderstream_network_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_network_info->ip) {
        free(renderstream_network_info->ip);
        renderstream_network_info->ip = NULL;
    }
    if (renderstream_network_info->name) {
        free(renderstream_network_info->name);
        renderstream_network_info->name = NULL;
    }
    free(renderstream_network_info);
}

cJSON *renderstream_network_info_convertToJSON(renderstream_network_info_t *renderstream_network_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_network_info->ip
    if(renderstream_network_info->ip) { 
    if(cJSON_AddStringToObject(item, "ip", renderstream_network_info->ip) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_network_info->name
    if(renderstream_network_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_network_info->name) == NULL) {
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

renderstream_network_info_t *renderstream_network_info_parseFromJSON(cJSON *renderstream_network_infoJSON){

    renderstream_network_info_t *renderstream_network_info_local_var = NULL;

    // renderstream_network_info->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(renderstream_network_infoJSON, "ip");
    if (ip) { 
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }
    }

    // renderstream_network_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_network_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    renderstream_network_info_local_var = renderstream_network_info_create (
        ip ? strdup(ip->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return renderstream_network_info_local_var;
end:
    return NULL;

}
