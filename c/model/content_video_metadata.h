/*
 * content_video_metadata.h
 *
 * 
 */

#ifndef _content_video_metadata_H_
#define _content_video_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_video_metadata_t content_video_metadata_t;

#include "content_image_sequence_metadata.h"



typedef struct content_video_metadata_t {
    struct content_image_sequence_metadata_t *image_sequence_metadata; //model
    int has_audio; //boolean
    int audio_big_endian; //boolean
    float audio_sample_rate; //numeric

} content_video_metadata_t;

content_video_metadata_t *content_video_metadata_create(
    content_image_sequence_metadata_t *image_sequence_metadata,
    int has_audio,
    int audio_big_endian,
    float audio_sample_rate
);

void content_video_metadata_free(content_video_metadata_t *content_video_metadata);

content_video_metadata_t *content_video_metadata_parseFromJSON(cJSON *content_video_metadataJSON);

cJSON *content_video_metadata_convertToJSON(content_video_metadata_t *content_video_metadata);

#endif /* _content_video_metadata_H_ */

