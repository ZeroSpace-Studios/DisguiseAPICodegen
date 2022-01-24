#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_asset_info.h"



renderstream_asset_info_t *renderstream_asset_info_create(
    char *name,
    char *content_source_machine_name
    ) {
    renderstream_asset_info_t *renderstream_asset_info_local_var = malloc(sizeof(renderstream_asset_info_t));
    if (!renderstream_asset_info_local_var) {
        return NULL;
    }
    renderstream_asset_info_local_var->name = name;
    renderstream_asset_info_local_var->content_source_machine_name = content_source_machine_name;

    return renderstream_asset_info_local_var;
}


void renderstream_asset_info_free(renderstream_asset_info_t *renderstream_asset_info) {
    if(NULL == renderstream_asset_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_asset_info->name) {
        free(renderstream_asset_info->name);
        renderstream_asset_info->name = NULL;
    }
    if (renderstream_asset_info->content_source_machine_name) {
        free(renderstream_asset_info->content_source_machine_name);
        renderstream_asset_info->content_source_machine_name = NULL;
    }
    free(renderstream_asset_info);
}

cJSON *renderstream_asset_info_convertToJSON(renderstream_asset_info_t *renderstream_asset_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_asset_info->name
    if(renderstream_asset_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_asset_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_asset_info->content_source_machine_name
    if(renderstream_asset_info->content_source_machine_name) { 
    if(cJSON_AddStringToObject(item, "contentSourceMachineName", renderstream_asset_info->content_source_machine_name) == NULL) {
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

renderstream_asset_info_t *renderstream_asset_info_parseFromJSON(cJSON *renderstream_asset_infoJSON){

    renderstream_asset_info_t *renderstream_asset_info_local_var = NULL;

    // renderstream_asset_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_asset_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_asset_info->content_source_machine_name
    cJSON *content_source_machine_name = cJSON_GetObjectItemCaseSensitive(renderstream_asset_infoJSON, "contentSourceMachineName");
    if (content_source_machine_name) { 
    if(!cJSON_IsString(content_source_machine_name))
    {
    goto end; //String
    }
    }


    renderstream_asset_info_local_var = renderstream_asset_info_create (
        name ? strdup(name->valuestring) : NULL,
        content_source_machine_name ? strdup(content_source_machine_name->valuestring) : NULL
        );

    return renderstream_asset_info_local_var;
end:
    return NULL;

}
