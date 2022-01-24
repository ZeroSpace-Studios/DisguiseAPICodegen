#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_image_metadata.h"



content_image_metadata_t *content_image_metadata_create(
    content_resolution_t *resolution,
    long bits_per_pixel,
    char *codec,
    int has_alpha
    ) {
    content_image_metadata_t *content_image_metadata_local_var = malloc(sizeof(content_image_metadata_t));
    if (!content_image_metadata_local_var) {
        return NULL;
    }
    content_image_metadata_local_var->resolution = resolution;
    content_image_metadata_local_var->bits_per_pixel = bits_per_pixel;
    content_image_metadata_local_var->codec = codec;
    content_image_metadata_local_var->has_alpha = has_alpha;

    return content_image_metadata_local_var;
}


void content_image_metadata_free(content_image_metadata_t *content_image_metadata) {
    if(NULL == content_image_metadata){
        return ;
    }
    listEntry_t *listEntry;
    if (content_image_metadata->resolution) {
        content_resolution_free(content_image_metadata->resolution);
        content_image_metadata->resolution = NULL;
    }
    if (content_image_metadata->codec) {
        free(content_image_metadata->codec);
        content_image_metadata->codec = NULL;
    }
    free(content_image_metadata);
}

cJSON *content_image_metadata_convertToJSON(content_image_metadata_t *content_image_metadata) {
    cJSON *item = cJSON_CreateObject();

    // content_image_metadata->resolution
    if(content_image_metadata->resolution) { 
    cJSON *resolution_local_JSON = content_resolution_convertToJSON(content_image_metadata->resolution);
    if(resolution_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resolution", resolution_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_image_metadata->bits_per_pixel
    if(content_image_metadata->bits_per_pixel) { 
    if(cJSON_AddNumberToObject(item, "bitsPerPixel", content_image_metadata->bits_per_pixel) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_image_metadata->codec
    if(content_image_metadata->codec) { 
    if(cJSON_AddStringToObject(item, "codec", content_image_metadata->codec) == NULL) {
    goto fail; //String
    }
     } 


    // content_image_metadata->has_alpha
    if(content_image_metadata->has_alpha) { 
    if(cJSON_AddBoolToObject(item, "hasAlpha", content_image_metadata->has_alpha) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

content_image_metadata_t *content_image_metadata_parseFromJSON(cJSON *content_image_metadataJSON){

    content_image_metadata_t *content_image_metadata_local_var = NULL;

    // content_image_metadata->resolution
    cJSON *resolution = cJSON_GetObjectItemCaseSensitive(content_image_metadataJSON, "resolution");
    content_resolution_t *resolution_local_nonprim = NULL;
    if (resolution) { 
    resolution_local_nonprim = content_resolution_parseFromJSON(resolution); //nonprimitive
    }

    // content_image_metadata->bits_per_pixel
    cJSON *bits_per_pixel = cJSON_GetObjectItemCaseSensitive(content_image_metadataJSON, "bitsPerPixel");
    if (bits_per_pixel) { 
    if(!cJSON_IsNumber(bits_per_pixel))
    {
    goto end; //Numeric
    }
    }

    // content_image_metadata->codec
    cJSON *codec = cJSON_GetObjectItemCaseSensitive(content_image_metadataJSON, "codec");
    if (codec) { 
    if(!cJSON_IsString(codec))
    {
    goto end; //String
    }
    }

    // content_image_metadata->has_alpha
    cJSON *has_alpha = cJSON_GetObjectItemCaseSensitive(content_image_metadataJSON, "hasAlpha");
    if (has_alpha) { 
    if(!cJSON_IsBool(has_alpha))
    {
    goto end; //Bool
    }
    }


    content_image_metadata_local_var = content_image_metadata_create (
        resolution ? resolution_local_nonprim : NULL,
        bits_per_pixel ? bits_per_pixel->valuedouble : 0,
        codec ? strdup(codec->valuestring) : NULL,
        has_alpha ? has_alpha->valueint : 0
        );

    return content_image_metadata_local_var;
end:
    if (resolution_local_nonprim) {
        content_resolution_free(resolution_local_nonprim);
        resolution_local_nonprim = NULL;
    }
    return NULL;

}
