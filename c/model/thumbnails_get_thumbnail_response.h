/*
 * thumbnails_get_thumbnail_response.h
 *
 * 
 */

#ifndef _thumbnails_get_thumbnail_response_H_
#define _thumbnails_get_thumbnail_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct thumbnails_get_thumbnail_response_t thumbnails_get_thumbnail_response_t;




typedef struct thumbnails_get_thumbnail_response_t {
    char *path; // string

} thumbnails_get_thumbnail_response_t;

thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response_create(
    char *path
);

void thumbnails_get_thumbnail_response_free(thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response);

thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response_parseFromJSON(cJSON *thumbnails_get_thumbnail_responseJSON);

cJSON *thumbnails_get_thumbnail_response_convertToJSON(thumbnails_get_thumbnail_response_t *thumbnails_get_thumbnail_response);

#endif /* _thumbnails_get_thumbnail_response_H_ */

