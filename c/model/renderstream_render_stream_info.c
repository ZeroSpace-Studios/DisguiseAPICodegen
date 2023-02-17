#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_render_stream_info.h"



renderstream_render_stream_info_t *renderstream_render_stream_info_create(
    char *uid,
    char *name
    ) {
    renderstream_render_stream_info_t *renderstream_render_stream_info_local_var = malloc(sizeof(renderstream_render_stream_info_t));
    if (!renderstream_render_stream_info_local_var) {
        return NULL;
    }
    renderstream_render_stream_info_local_var->uid = uid;
    renderstream_render_stream_info_local_var->name = name;

    return renderstream_render_stream_info_local_var;
}


void renderstream_render_stream_info_free(renderstream_render_stream_info_t *renderstream_render_stream_info) {
    if(NULL == renderstream_render_stream_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_render_stream_info->uid) {
        free(renderstream_render_stream_info->uid);
        renderstream_render_stream_info->uid = NULL;
    }
    if (renderstream_render_stream_info->name) {
        free(renderstream_render_stream_info->name);
        renderstream_render_stream_info->name = NULL;
    }
    free(renderstream_render_stream_info);
}

cJSON *renderstream_render_stream_info_convertToJSON(renderstream_render_stream_info_t *renderstream_render_stream_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_render_stream_info->uid
    if(renderstream_render_stream_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_render_stream_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_render_stream_info->name
    if(renderstream_render_stream_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_render_stream_info->name) == NULL) {
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

renderstream_render_stream_info_t *renderstream_render_stream_info_parseFromJSON(cJSON *renderstream_render_stream_infoJSON){

    renderstream_render_stream_info_t *renderstream_render_stream_info_local_var = NULL;

    // renderstream_render_stream_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_render_stream_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_render_stream_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_render_stream_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    renderstream_render_stream_info_local_var = renderstream_render_stream_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return renderstream_render_stream_info_local_var;
end:
    return NULL;

}
