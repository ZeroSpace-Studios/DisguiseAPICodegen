/*
 * content_list_media_metadata_response.h
 *
 * 
 */

#ifndef _content_list_media_metadata_response_H_
#define _content_list_media_metadata_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_list_media_metadata_response_t content_list_media_metadata_response_t;

#include "content_media_metadata.h"



typedef struct content_list_media_metadata_response_t {
    list_t *result; //nonprimitive container

} content_list_media_metadata_response_t;

content_list_media_metadata_response_t *content_list_media_metadata_response_create(
    list_t *result
);

void content_list_media_metadata_response_free(content_list_media_metadata_response_t *content_list_media_metadata_response);

content_list_media_metadata_response_t *content_list_media_metadata_response_parseFromJSON(cJSON *content_list_media_metadata_responseJSON);

cJSON *content_list_media_metadata_response_convertToJSON(content_list_media_metadata_response_t *content_list_media_metadata_response);

#endif /* _content_list_media_metadata_response_H_ */

