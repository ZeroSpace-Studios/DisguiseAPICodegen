#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_image_sequence_metadata.h"



content_image_sequence_metadata_t *content_image_sequence_metadata_create(
    content_image_metadata_t *image_metadata,
    float fps,
    long n_frames
    ) {
    content_image_sequence_metadata_t *content_image_sequence_metadata_local_var = malloc(sizeof(content_image_sequence_metadata_t));
    if (!content_image_sequence_metadata_local_var) {
        return NULL;
    }
    content_image_sequence_metadata_local_var->image_metadata = image_metadata;
    content_image_sequence_metadata_local_var->fps = fps;
    content_image_sequence_metadata_local_var->n_frames = n_frames;

    return content_image_sequence_metadata_local_var;
}


void content_image_sequence_metadata_free(content_image_sequence_metadata_t *content_image_sequence_metadata) {
    if(NULL == content_image_sequence_metadata){
        return ;
    }
    listEntry_t *listEntry;
    if (content_image_sequence_metadata->image_metadata) {
        content_image_metadata_free(content_image_sequence_metadata->image_metadata);
        content_image_sequence_metadata->image_metadata = NULL;
    }
    free(content_image_sequence_metadata);
}

cJSON *content_image_sequence_metadata_convertToJSON(content_image_sequence_metadata_t *content_image_sequence_metadata) {
    cJSON *item = cJSON_CreateObject();

    // content_image_sequence_metadata->image_metadata
    if(content_image_sequence_metadata->image_metadata) { 
    cJSON *image_metadata_local_JSON = content_image_metadata_convertToJSON(content_image_sequence_metadata->image_metadata);
    if(image_metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "imageMetadata", image_metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_image_sequence_metadata->fps
    if(content_image_sequence_metadata->fps) { 
    if(cJSON_AddNumberToObject(item, "fps", content_image_sequence_metadata->fps) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_image_sequence_metadata->n_frames
    if(content_image_sequence_metadata->n_frames) { 
    if(cJSON_AddNumberToObject(item, "nFrames", content_image_sequence_metadata->n_frames) == NULL) {
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

content_image_sequence_metadata_t *content_image_sequence_metadata_parseFromJSON(cJSON *content_image_sequence_metadataJSON){

    content_image_sequence_metadata_t *content_image_sequence_metadata_local_var = NULL;

    // content_image_sequence_metadata->image_metadata
    cJSON *image_metadata = cJSON_GetObjectItemCaseSensitive(content_image_sequence_metadataJSON, "imageMetadata");
    content_image_metadata_t *image_metadata_local_nonprim = NULL;
    if (image_metadata) { 
    image_metadata_local_nonprim = content_image_metadata_parseFromJSON(image_metadata); //nonprimitive
    }

    // content_image_sequence_metadata->fps
    cJSON *fps = cJSON_GetObjectItemCaseSensitive(content_image_sequence_metadataJSON, "fps");
    if (fps) { 
    if(!cJSON_IsNumber(fps))
    {
    goto end; //Numeric
    }
    }

    // content_image_sequence_metadata->n_frames
    cJSON *n_frames = cJSON_GetObjectItemCaseSensitive(content_image_sequence_metadataJSON, "nFrames");
    if (n_frames) { 
    if(!cJSON_IsNumber(n_frames))
    {
    goto end; //Numeric
    }
    }


    content_image_sequence_metadata_local_var = content_image_sequence_metadata_create (
        image_metadata ? image_metadata_local_nonprim : NULL,
        fps ? fps->valuedouble : 0,
        n_frames ? n_frames->valuedouble : 0
        );

    return content_image_sequence_metadata_local_var;
end:
    if (image_metadata_local_nonprim) {
        content_image_metadata_free(image_metadata_local_nonprim);
        image_metadata_local_nonprim = NULL;
    }
    return NULL;

}
