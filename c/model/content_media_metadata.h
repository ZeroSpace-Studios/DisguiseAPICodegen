/*
 * content_media_metadata.h
 *
 * 
 */

#ifndef _content_media_metadata_H_
#define _content_media_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_media_metadata_t content_media_metadata_t;

#include "content_audio_metadata.h"
#include "content_mesh_metadata.h"
#include "content_video_metadata.h"



typedef struct content_media_metadata_t {
    char *uid; // string
    struct content_video_metadata_t *video_metadata; //model
    struct content_audio_metadata_t *audio_metadata; //model
    struct content_mesh_metadata_t *mesh_metadata; //model

} content_media_metadata_t;

content_media_metadata_t *content_media_metadata_create(
    char *uid,
    content_video_metadata_t *video_metadata,
    content_audio_metadata_t *audio_metadata,
    content_mesh_metadata_t *mesh_metadata
);

void content_media_metadata_free(content_media_metadata_t *content_media_metadata);

content_media_metadata_t *content_media_metadata_parseFromJSON(cJSON *content_media_metadataJSON);

cJSON *content_media_metadata_convertToJSON(content_media_metadata_t *content_media_metadata);

#endif /* _content_media_metadata_H_ */

