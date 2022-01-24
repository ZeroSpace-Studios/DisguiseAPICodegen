#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_audio_metadata.h"



content_audio_metadata_t *content_audio_metadata_create(
    long sample_rate,
    long n_channels,
    long n_samples,
    char *codec_name,
    char *codec_info
    ) {
    content_audio_metadata_t *content_audio_metadata_local_var = malloc(sizeof(content_audio_metadata_t));
    if (!content_audio_metadata_local_var) {
        return NULL;
    }
    content_audio_metadata_local_var->sample_rate = sample_rate;
    content_audio_metadata_local_var->n_channels = n_channels;
    content_audio_metadata_local_var->n_samples = n_samples;
    content_audio_metadata_local_var->codec_name = codec_name;
    content_audio_metadata_local_var->codec_info = codec_info;

    return content_audio_metadata_local_var;
}


void content_audio_metadata_free(content_audio_metadata_t *content_audio_metadata) {
    if(NULL == content_audio_metadata){
        return ;
    }
    listEntry_t *listEntry;
    if (content_audio_metadata->codec_name) {
        free(content_audio_metadata->codec_name);
        content_audio_metadata->codec_name = NULL;
    }
    if (content_audio_metadata->codec_info) {
        free(content_audio_metadata->codec_info);
        content_audio_metadata->codec_info = NULL;
    }
    free(content_audio_metadata);
}

cJSON *content_audio_metadata_convertToJSON(content_audio_metadata_t *content_audio_metadata) {
    cJSON *item = cJSON_CreateObject();

    // content_audio_metadata->sample_rate
    if(content_audio_metadata->sample_rate) { 
    if(cJSON_AddNumberToObject(item, "sampleRate", content_audio_metadata->sample_rate) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_audio_metadata->n_channels
    if(content_audio_metadata->n_channels) { 
    if(cJSON_AddNumberToObject(item, "nChannels", content_audio_metadata->n_channels) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_audio_metadata->n_samples
    if(content_audio_metadata->n_samples) { 
    if(cJSON_AddNumberToObject(item, "nSamples", content_audio_metadata->n_samples) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_audio_metadata->codec_name
    if(content_audio_metadata->codec_name) { 
    if(cJSON_AddStringToObject(item, "codecName", content_audio_metadata->codec_name) == NULL) {
    goto fail; //String
    }
     } 


    // content_audio_metadata->codec_info
    if(content_audio_metadata->codec_info) { 
    if(cJSON_AddStringToObject(item, "codecInfo", content_audio_metadata->codec_info) == NULL) {
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

content_audio_metadata_t *content_audio_metadata_parseFromJSON(cJSON *content_audio_metadataJSON){

    content_audio_metadata_t *content_audio_metadata_local_var = NULL;

    // content_audio_metadata->sample_rate
    cJSON *sample_rate = cJSON_GetObjectItemCaseSensitive(content_audio_metadataJSON, "sampleRate");
    if (sample_rate) { 
    if(!cJSON_IsNumber(sample_rate))
    {
    goto end; //Numeric
    }
    }

    // content_audio_metadata->n_channels
    cJSON *n_channels = cJSON_GetObjectItemCaseSensitive(content_audio_metadataJSON, "nChannels");
    if (n_channels) { 
    if(!cJSON_IsNumber(n_channels))
    {
    goto end; //Numeric
    }
    }

    // content_audio_metadata->n_samples
    cJSON *n_samples = cJSON_GetObjectItemCaseSensitive(content_audio_metadataJSON, "nSamples");
    if (n_samples) { 
    if(!cJSON_IsNumber(n_samples))
    {
    goto end; //Numeric
    }
    }

    // content_audio_metadata->codec_name
    cJSON *codec_name = cJSON_GetObjectItemCaseSensitive(content_audio_metadataJSON, "codecName");
    if (codec_name) { 
    if(!cJSON_IsString(codec_name))
    {
    goto end; //String
    }
    }

    // content_audio_metadata->codec_info
    cJSON *codec_info = cJSON_GetObjectItemCaseSensitive(content_audio_metadataJSON, "codecInfo");
    if (codec_info) { 
    if(!cJSON_IsString(codec_info))
    {
    goto end; //String
    }
    }


    content_audio_metadata_local_var = content_audio_metadata_create (
        sample_rate ? sample_rate->valuedouble : 0,
        n_channels ? n_channels->valuedouble : 0,
        n_samples ? n_samples->valuedouble : 0,
        codec_name ? strdup(codec_name->valuestring) : NULL,
        codec_info ? strdup(codec_info->valuestring) : NULL
        );

    return content_audio_metadata_local_var;
end:
    return NULL;

}
