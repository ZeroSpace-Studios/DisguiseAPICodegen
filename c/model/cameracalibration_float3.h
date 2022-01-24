/*
 * cameracalibration_float3.h
 *
 * 
 */

#ifndef _cameracalibration_float3_H_
#define _cameracalibration_float3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_float3_t cameracalibration_float3_t;




typedef struct cameracalibration_float3_t {
    float x; //numeric
    float y; //numeric
    float z; //numeric

} cameracalibration_float3_t;

cameracalibration_float3_t *cameracalibration_float3_create(
    float x,
    float y,
    float z
);

void cameracalibration_float3_free(cameracalibration_float3_t *cameracalibration_float3);

cameracalibration_float3_t *cameracalibration_float3_parseFromJSON(cJSON *cameracalibration_float3JSON);

cJSON *cameracalibration_float3_convertToJSON(cameracalibration_float3_t *cameracalibration_float3);

#endif /* _cameracalibration_float3_H_ */

