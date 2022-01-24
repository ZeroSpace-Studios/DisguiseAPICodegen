#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_media_metadata.h"



content_media_metadata_t *content_media_metadata_create(
    char *uid,
    content_video_metadata_t *video_metadata,
    content_audio_metadata_t *audio_metadata,
    content_mesh_metadata_t *mesh_metadata
    ) {
    content_media_metadata_t *content_media_metadata_local_var = malloc(sizeof(content_media_metadata_t));
    if (!content_media_metadata_local_var) {
        return NULL;
    }
    content_media_metadata_local_var->uid = uid;
    content_media_metadata_local_var->video_metadata = video_metadata;
    content_media_metadata_local_var->audio_metadata = audio_metadata;
    content_media_metadata_local_var->mesh_metadata = mesh_metadata;

    return content_media_metadata_local_var;
}


void content_media_metadata_free(content_media_metadata_t *content_media_metadata) {
    if(NULL == content_media_metadata){
        return ;
    }
    listEntry_t *listEntry;
    if (content_media_metadata->uid) {
        free(content_media_metadata->uid);
        content_media_metadata->uid = NULL;
    }
    if (content_media_metadata->video_metadata) {
        content_video_metadata_free(content_media_metadata->video_metadata);
        content_media_metadata->video_metadata = NULL;
    }
    if (content_media_metadata->audio_metadata) {
        content_audio_metadata_free(content_media_metadata->audio_metadata);
        content_media_metadata->audio_metadata = NULL;
    }
    if (content_media_metadata->mesh_metadata) {
        content_mesh_metadata_free(content_media_metadata->mesh_metadata);
        content_media_metadata->mesh_metadata = NULL;
    }
    free(content_media_metadata);
}

cJSON *content_media_metadata_convertToJSON(content_media_metadata_t *content_media_metadata) {
    cJSON *item = cJSON_CreateObject();

    // content_media_metadata->uid
    if(content_media_metadata->uid) { 
    if(cJSON_AddStringToObject(item, "uid", content_media_metadata->uid) == NULL) {
    goto fail; //String
    }
     } 


    // content_media_metadata->video_metadata
    if(content_media_metadata->video_metadata) { 
    cJSON *video_metadata_local_JSON = content_video_metadata_convertToJSON(content_media_metadata->video_metadata);
    if(video_metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "videoMetadata", video_metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_media_metadata->audio_metadata
    if(content_media_metadata->audio_metadata) { 
    cJSON *audio_metadata_local_JSON = content_audio_metadata_convertToJSON(content_media_metadata->audio_metadata);
    if(audio_metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "audioMetadata", audio_metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_media_metadata->mesh_metadata
    if(content_media_metadata->mesh_metadata) { 
    cJSON *mesh_metadata_local_JSON = content_mesh_metadata_convertToJSON(content_media_metadata->mesh_metadata);
    if(mesh_metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meshMetadata", mesh_metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

content_media_metadata_t *content_media_metadata_parseFromJSON(cJSON *content_media_metadataJSON){

    content_media_metadata_t *content_media_metadata_local_var = NULL;

    // content_media_metadata->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(content_media_metadataJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // content_media_metadata->video_metadata
    cJSON *video_metadata = cJSON_GetObjectItemCaseSensitive(content_media_metadataJSON, "videoMetadata");
    content_video_metadata_t *video_metadata_local_nonprim = NULL;
    if (video_metadata) { 
    video_metadata_local_nonprim = content_video_metadata_parseFromJSON(video_metadata); //nonprimitive
    }

    // content_media_metadata->audio_metadata
    cJSON *audio_metadata = cJSON_GetObjectItemCaseSensitive(content_media_metadataJSON, "audioMetadata");
    content_audio_metadata_t *audio_metadata_local_nonprim = NULL;
    if (audio_metadata) { 
    audio_metadata_local_nonprim = content_audio_metadata_parseFromJSON(audio_metadata); //nonprimitive
    }

    // content_media_metadata->mesh_metadata
    cJSON *mesh_metadata = cJSON_GetObjectItemCaseSensitive(content_media_metadataJSON, "meshMetadata");
    content_mesh_metadata_t *mesh_metadata_local_nonprim = NULL;
    if (mesh_metadata) { 
    mesh_metadata_local_nonprim = content_mesh_metadata_parseFromJSON(mesh_metadata); //nonprimitive
    }


    content_media_metadata_local_var = content_media_metadata_create (
        uid ? strdup(uid->valuestring) : NULL,
        video_metadata ? video_metadata_local_nonprim : NULL,
        audio_metadata ? audio_metadata_local_nonprim : NULL,
        mesh_metadata ? mesh_metadata_local_nonprim : NULL
        );

    return content_media_metadata_local_var;
end:
    if (video_metadata_local_nonprim) {
        content_video_metadata_free(video_metadata_local_nonprim);
        video_metadata_local_nonprim = NULL;
    }
    if (audio_metadata_local_nonprim) {
        content_audio_metadata_free(audio_metadata_local_nonprim);
        audio_metadata_local_nonprim = NULL;
    }
    if (mesh_metadata_local_nonprim) {
        content_mesh_metadata_free(mesh_metadata_local_nonprim);
        mesh_metadata_local_nonprim = NULL;
    }
    return NULL;

}
