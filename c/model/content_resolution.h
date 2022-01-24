/*
 * content_resolution.h
 *
 * 
 */

#ifndef _content_resolution_H_
#define _content_resolution_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_resolution_t content_resolution_t;




typedef struct content_resolution_t {
    long width; //numeric
    long height; //numeric

} content_resolution_t;

content_resolution_t *content_resolution_create(
    long width,
    long height
);

void content_resolution_free(content_resolution_t *content_resolution);

content_resolution_t *content_resolution_parseFromJSON(cJSON *content_resolutionJSON);

cJSON *content_resolution_convertToJSON(content_resolution_t *content_resolution);

#endif /* _content_resolution_H_ */

