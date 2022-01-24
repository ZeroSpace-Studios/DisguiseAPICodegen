#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_video_metadata.h"



content_video_metadata_t *content_video_metadata_create(
    content_image_sequence_metadata_t *image_sequence_metadata,
    int has_audio,
    int audio_big_endian,
    float audio_sample_rate
    ) {
    content_video_metadata_t *content_video_metadata_local_var = malloc(sizeof(content_video_metadata_t));
    if (!content_video_metadata_local_var) {
        return NULL;
    }
    content_video_metadata_local_var->image_sequence_metadata = image_sequence_metadata;
    content_video_metadata_local_var->has_audio = has_audio;
    content_video_metadata_local_var->audio_big_endian = audio_big_endian;
    content_video_metadata_local_var->audio_sample_rate = audio_sample_rate;

    return content_video_metadata_local_var;
}


void content_video_metadata_free(content_video_metadata_t *content_video_metadata) {
    if(NULL == content_video_metadata){
        return ;
    }
    listEntry_t *listEntry;
    if (content_video_metadata->image_sequence_metadata) {
        content_image_sequence_metadata_free(content_video_metadata->image_sequence_metadata);
        content_video_metadata->image_sequence_metadata = NULL;
    }
    free(content_video_metadata);
}

cJSON *content_video_metadata_convertToJSON(content_video_metadata_t *content_video_metadata) {
    cJSON *item = cJSON_CreateObject();

    // content_video_metadata->image_sequence_metadata
    if(content_video_metadata->image_sequence_metadata) { 
    cJSON *image_sequence_metadata_local_JSON = content_image_sequence_metadata_convertToJSON(content_video_metadata->image_sequence_metadata);
    if(image_sequence_metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "imageSequenceMetadata", image_sequence_metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_video_metadata->has_audio
    if(content_video_metadata->has_audio) { 
    if(cJSON_AddBoolToObject(item, "hasAudio", content_video_metadata->has_audio) == NULL) {
    goto fail; //Bool
    }
     } 


    // content_video_metadata->audio_big_endian
    if(content_video_metadata->audio_big_endian) { 
    if(cJSON_AddBoolToObject(item, "audioBigEndian", content_video_metadata->audio_big_endian) == NULL) {
    goto fail; //Bool
    }
     } 


    // content_video_metadata->audio_sample_rate
    if(content_video_metadata->audio_sample_rate) { 
    if(cJSON_AddNumberToObject(item, "audioSampleRate", content_video_metadata->audio_sample_rate) == NULL) {
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

content_video_metadata_t *content_video_metadata_parseFromJSON(cJSON *content_video_metadataJSON){

    content_video_metadata_t *content_video_metadata_local_var = NULL;

    // content_video_metadata->image_sequence_metadata
    cJSON *image_sequence_metadata = cJSON_GetObjectItemCaseSensitive(content_video_metadataJSON, "imageSequenceMetadata");
    content_image_sequence_metadata_t *image_sequence_metadata_local_nonprim = NULL;
    if (image_sequence_metadata) { 
    image_sequence_metadata_local_nonprim = content_image_sequence_metadata_parseFromJSON(image_sequence_metadata); //nonprimitive
    }

    // content_video_metadata->has_audio
    cJSON *has_audio = cJSON_GetObjectItemCaseSensitive(content_video_metadataJSON, "hasAudio");
    if (has_audio) { 
    if(!cJSON_IsBool(has_audio))
    {
    goto end; //Bool
    }
    }

    // content_video_metadata->audio_big_endian
    cJSON *audio_big_endian = cJSON_GetObjectItemCaseSensitive(content_video_metadataJSON, "audioBigEndian");
    if (audio_big_endian) { 
    if(!cJSON_IsBool(audio_big_endian))
    {
    goto end; //Bool
    }
    }

    // content_video_metadata->audio_sample_rate
    cJSON *audio_sample_rate = cJSON_GetObjectItemCaseSensitive(content_video_metadataJSON, "audioSampleRate");
    if (audio_sample_rate) { 
    if(!cJSON_IsNumber(audio_sample_rate))
    {
    goto end; //Numeric
    }
    }


    content_video_metadata_local_var = content_video_metadata_create (
        image_sequence_metadata ? image_sequence_metadata_local_nonprim : NULL,
        has_audio ? has_audio->valueint : 0,
        audio_big_endian ? audio_big_endian->valueint : 0,
        audio_sample_rate ? audio_sample_rate->valuedouble : 0
        );

    return content_video_metadata_local_var;
end:
    if (image_sequence_metadata_local_nonprim) {
        content_image_sequence_metadata_free(image_sequence_metadata_local_nonprim);
        image_sequence_metadata_local_nonprim = NULL;
    }
    return NULL;

}
