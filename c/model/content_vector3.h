/*
 * content_vector3.h
 *
 * 
 */

#ifndef _content_vector3_H_
#define _content_vector3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_vector3_t content_vector3_t;




typedef struct content_vector3_t {
    float x; //numeric
    float y; //numeric
    float z; //numeric

} content_vector3_t;

content_vector3_t *content_vector3_create(
    float x,
    float y,
    float z
);

void content_vector3_free(content_vector3_t *content_vector3);

content_vector3_t *content_vector3_parseFromJSON(cJSON *content_vector3JSON);

cJSON *content_vector3_convertToJSON(content_vector3_t *content_vector3);

#endif /* _content_vector3_H_ */

