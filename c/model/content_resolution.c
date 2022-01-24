#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_resolution.h"



content_resolution_t *content_resolution_create(
    long width,
    long height
    ) {
    content_resolution_t *content_resolution_local_var = malloc(sizeof(content_resolution_t));
    if (!content_resolution_local_var) {
        return NULL;
    }
    content_resolution_local_var->width = width;
    content_resolution_local_var->height = height;

    return content_resolution_local_var;
}


void content_resolution_free(content_resolution_t *content_resolution) {
    if(NULL == content_resolution){
        return ;
    }
    listEntry_t *listEntry;
    free(content_resolution);
}

cJSON *content_resolution_convertToJSON(content_resolution_t *content_resolution) {
    cJSON *item = cJSON_CreateObject();

    // content_resolution->width
    if(content_resolution->width) { 
    if(cJSON_AddNumberToObject(item, "width", content_resolution->width) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_resolution->height
    if(content_resolution->height) { 
    if(cJSON_AddNumberToObject(item, "height", content_resolution->height) == NULL) {
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

content_resolution_t *content_resolution_parseFromJSON(cJSON *content_resolutionJSON){

    content_resolution_t *content_resolution_local_var = NULL;

    // content_resolution->width
    cJSON *width = cJSON_GetObjectItemCaseSensitive(content_resolutionJSON, "width");
    if (width) { 
    if(!cJSON_IsNumber(width))
    {
    goto end; //Numeric
    }
    }

    // content_resolution->height
    cJSON *height = cJSON_GetObjectItemCaseSensitive(content_resolutionJSON, "height");
    if (height) { 
    if(!cJSON_IsNumber(height))
    {
    goto end; //Numeric
    }
    }


    content_resolution_local_var = content_resolution_create (
        width ? width->valuedouble : 0,
        height ? height->valuedouble : 0
        );

    return content_resolution_local_var;
end:
    return NULL;

}
