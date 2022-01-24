#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "thumbnails_get_thumbnail_response.h"



thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response_create(
    char *path
    ) {
    thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response_local_var = malloc(sizeof(thumbnails_get_thumbnail_response_t));
    if (!thumbnails_get_thumbnail_response_local_var) {
        return NULL;
    }
    thumbnails_get_thumbnail_response_local_var->path = path;

    return thumbnails_get_thumbnail_response_local_var;
}


void thumbnails_get_thumbnail_response_free(thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response) {
    if(NULL == thumbnails_get_thumbnail_response){
        return ;
    }
    listEntry_t *listEntry;
    if (thumbnails_get_thumbnail_response->path) {
        free(thumbnails_get_thumbnail_response->path);
        thumbnails_get_thumbnail_response->path = NULL;
    }
    free(thumbnails_get_thumbnail_response);
}

cJSON *thumbnails_get_thumbnail_response_convertToJSON(thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response) {
    cJSON *item = cJSON_CreateObject();

    // thumbnails_get_thumbnail_response->path
    if(thumbnails_get_thumbnail_response->path) { 
    if(cJSON_AddStringToObject(item, "path", thumbnails_get_thumbnail_response->path) == NULL) {
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

thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response_parseFromJSON(cJSON *thumbnails_get_thumbnail_responseJSON){

    thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response_local_var = NULL;

    // thumbnails_get_thumbnail_response->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(thumbnails_get_thumbnail_responseJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }


    thumbnails_get_thumbnail_response_local_var = thumbnails_get_thumbnail_response_create (
        path ? strdup(path->valuestring) : NULL
        );

    return thumbnails_get_thumbnail_response_local_var;
end:
    return NULL;

}
