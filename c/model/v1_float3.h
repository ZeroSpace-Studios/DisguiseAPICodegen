/*
 * v1_float3.h
 *
 * 
 */

#ifndef _v1_float3_H_
#define _v1_float3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_float3_t v1_float3_t;




typedef struct v1_float3_t {
    float x; //numeric
    float y; //numeric
    float z; //numeric

} v1_float3_t;

v1_float3_t *v1_float3_create(
    float x,
    float y,
    float z
);

void v1_float3_free(v1_float3_t *v1_float3);

v1_float3_t *v1_float3_parseFromJSON(cJSON *v1_float3JSON);

cJSON *v1_float3_convertToJSON(v1_float3_t *v1_float3);

#endif /* _v1_float3_H_ */

