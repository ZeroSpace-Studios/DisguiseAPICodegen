/*
 * content_get_media_metadata_response.h
 *
 * 
 */

#ifndef _content_get_media_metadata_response_H_
#define _content_get_media_metadata_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_get_media_metadata_response_t content_get_media_metadata_response_t;

#include "content_media_metadata.h"



typedef struct content_get_media_metadata_response_t {
    struct content_media_metadata_t *result; //model

} content_get_media_metadata_response_t;

content_get_media_metadata_response_t *content_get_media_metadata_response_create(
    content_media_metadata_t *result
);

void content_get_media_metadata_response_free(content_get_media_metadata_response_t *content_get_media_metadata_response);

content_get_media_metadata_response_t *content_get_media_metadata_response_parseFromJSON(cJSON *content_get_media_metadata_responseJSON);

cJSON *content_get_media_metadata_response_convertToJSON(content_get_media_metadata_response_t *content_get_media_metadata_response);

#endif /* _content_get_media_metadata_response_H_ */

