/*
 * d3api_vec2_float.h
 *
 * 
 */

#ifndef _d3api_vec2_float_H_
#define _d3api_vec2_float_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct d3api_vec2_float_t d3api_vec2_float_t;




typedef struct d3api_vec2_float_t {
    float x; //numeric
    float y; //numeric

} d3api_vec2_float_t;

d3api_vec2_float_t *d3api_vec2_float_create(
    float x,
    float y
);

void d3api_vec2_float_free(d3api_vec2_float_t *d3api_vec2_float);

d3api_vec2_float_t *d3api_vec2_float_parseFromJSON(cJSON *d3api_vec2_floatJSON);

cJSON *d3api_vec2_float_convertToJSON(d3api_vec2_float_t *d3api_vec2_float);

#endif /* _d3api_vec2_float_H_ */

