/*
 * content_image_metadata.h
 *
 * 
 */

#ifndef _content_image_metadata_H_
#define _content_image_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_image_metadata_t content_image_metadata_t;

#include "content_resolution.h"



typedef struct content_image_metadata_t {
    struct content_resolution_t *resolution; //model
    long bits_per_pixel; //numeric
    char *codec; // string
    int has_alpha; //boolean

} content_image_metadata_t;

content_image_metadata_t *content_image_metadata_create(
    content_resolution_t *resolution,
    long bits_per_pixel,
    char *codec,
    int has_alpha
);

void content_image_metadata_free(content_image_metadata_t *content_image_metadata);

content_image_metadata_t *content_image_metadata_parseFromJSON(cJSON *content_image_metadataJSON);

cJSON *content_image_metadata_convertToJSON(content_image_metadata_t *content_image_metadata);

#endif /* _content_image_metadata_H_ */

