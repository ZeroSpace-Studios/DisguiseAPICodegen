#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_transport_info.h"



renderstream_transport_info_t *renderstream_transport_info_create(
    char *type,
    char *format,
    int bit_depth
    ) {
    renderstream_transport_info_t *renderstream_transport_info_local_var = malloc(sizeof(renderstream_transport_info_t));
    if (!renderstream_transport_info_local_var) {
        return NULL;
    }
    renderstream_transport_info_local_var->type = type;
    renderstream_transport_info_local_var->format = format;
    renderstream_transport_info_local_var->bit_depth = bit_depth;

    return renderstream_transport_info_local_var;
}


void renderstream_transport_info_free(renderstream_transport_info_t *renderstream_transport_info) {
    if(NULL == renderstream_transport_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_transport_info->type) {
        free(renderstream_transport_info->type);
        renderstream_transport_info->type = NULL;
    }
    if (renderstream_transport_info->format) {
        free(renderstream_transport_info->format);
        renderstream_transport_info->format = NULL;
    }
    free(renderstream_transport_info);
}

cJSON *renderstream_transport_info_convertToJSON(renderstream_transport_info_t *renderstream_transport_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_transport_info->type
    if(renderstream_transport_info->type) { 
    if(cJSON_AddStringToObject(item, "type", renderstream_transport_info->type) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_transport_info->format
    if(renderstream_transport_info->format) { 
    if(cJSON_AddStringToObject(item, "format", renderstream_transport_info->format) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_transport_info->bit_depth
    if(renderstream_transport_info->bit_depth) { 
    if(cJSON_AddNumberToObject(item, "bitDepth", renderstream_transport_info->bit_depth) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

renderstream_transport_info_t *renderstream_transport_info_parseFromJSON(cJSON *renderstream_transport_infoJSON){

    renderstream_transport_info_t *renderstream_transport_info_local_var = NULL;

    // renderstream_transport_info->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(renderstream_transport_infoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }

    // renderstream_transport_info->format
    cJSON *format = cJSON_GetObjectItemCaseSensitive(renderstream_transport_infoJSON, "format");
    if (format) { 
    if(!cJSON_IsString(format))
    {
    goto end; //String
    }
    }

    // renderstream_transport_info->bit_depth
    cJSON *bit_depth = cJSON_GetObjectItemCaseSensitive(renderstream_transport_infoJSON, "bitDepth");
    if (bit_depth) { 
    if(!cJSON_IsNumber(bit_depth))
    {
    goto end; //Numeric
    }
    }


    renderstream_transport_info_local_var = renderstream_transport_info_create (
        type ? strdup(type->valuestring) : NULL,
        format ? strdup(format->valuestring) : NULL,
        bit_depth ? bit_depth->valuedouble : 0
        );

    return renderstream_transport_info_local_var;
end:
    return NULL;

}
