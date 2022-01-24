/*
 * content_image_sequence_metadata.h
 *
 * 
 */

#ifndef _content_image_sequence_metadata_H_
#define _content_image_sequence_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_image_sequence_metadata_t content_image_sequence_metadata_t;

#include "content_image_metadata.h"



typedef struct content_image_sequence_metadata_t {
    struct content_image_metadata_t *image_metadata; //model
    float fps; //numeric
    long n_frames; //numeric

} content_image_sequence_metadata_t;

content_image_sequence_metadata_t *content_image_sequence_metadata_create(
    content_image_metadata_t *image_metadata,
    float fps,
    long n_frames
);

void content_image_sequence_metadata_free(content_image_sequence_metadata_t *content_image_sequence_metadata);

content_image_sequence_metadata_t *content_image_sequence_metadata_parseFromJSON(cJSON *content_image_sequence_metadataJSON);

cJSON *content_image_sequence_metadata_convertToJSON(content_image_sequence_metadata_t *content_image_sequence_metadata);

#endif /* _content_image_sequence_metadata_H_ */

