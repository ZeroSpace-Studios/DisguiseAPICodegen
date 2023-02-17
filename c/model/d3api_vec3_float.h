/*
 * d3api_vec3_float.h
 *
 * 
 */

#ifndef _d3api_vec3_float_H_
#define _d3api_vec3_float_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct d3api_vec3_float_t d3api_vec3_float_t;




typedef struct d3api_vec3_float_t {
    float x; //numeric
    float y; //numeric
    float z; //numeric

} d3api_vec3_float_t;

d3api_vec3_float_t *d3api_vec3_float_create(
    float x,
    float y,
    float z
);

void d3api_vec3_float_free(d3api_vec3_float_t *d3api_vec3_float);

d3api_vec3_float_t *d3api_vec3_float_parseFromJSON(cJSON *d3api_vec3_floatJSON);

cJSON *d3api_vec3_float_convertToJSON(d3api_vec3_float_t *d3api_vec3_float);

#endif /* _d3api_vec3_float_H_ */

