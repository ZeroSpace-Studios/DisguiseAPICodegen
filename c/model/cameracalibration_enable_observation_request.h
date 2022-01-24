/*
 * cameracalibration_enable_observation_request.h
 *
 * 
 */

#ifndef _cameracalibration_enable_observation_request_H_
#define _cameracalibration_enable_observation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_enable_observation_request_t cameracalibration_enable_observation_request_t;




typedef struct cameracalibration_enable_observation_request_t {
    char *observation_uid; // string
    int enabled; //boolean

} cameracalibration_enable_observation_request_t;

cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request_create(
    char *observation_uid,
    int enabled
);

void cameracalibration_enable_observation_request_free(cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request);

cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request_parseFromJSON(cJSON *cameracalibration_enable_observation_requestJSON);

cJSON *cameracalibration_enable_observation_request_convertToJSON(cameracalibration_enable_observation_request_t *cameracalibration_enable_observation_request);

#endif /* _cameracalibration_enable_observation_request_H_ */

