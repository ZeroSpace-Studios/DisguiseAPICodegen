/*
 * cameracalibration_enable_observation_response.h
 *
 * 
 */

#ifndef _cameracalibration_enable_observation_response_H_
#define _cameracalibration_enable_observation_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_enable_observation_response_t cameracalibration_enable_observation_response_t;




typedef struct cameracalibration_enable_observation_response_t {
    int result; //boolean

} cameracalibration_enable_observation_response_t;

cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response_create(
    int result
);

void cameracalibration_enable_observation_response_free(cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response);

cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response_parseFromJSON(cJSON *cameracalibration_enable_observation_responseJSON);

cJSON *cameracalibration_enable_observation_response_convertToJSON(cameracalibration_enable_observation_response_t *cameracalibration_enable_observation_response);

#endif /* _cameracalibration_enable_observation_response_H_ */

