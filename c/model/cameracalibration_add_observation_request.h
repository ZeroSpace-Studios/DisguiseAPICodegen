/*
 * cameracalibration_add_observation_request.h
 *
 * 
 */

#ifndef _cameracalibration_add_observation_request_H_
#define _cameracalibration_add_observation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_add_observation_request_t cameracalibration_add_observation_request_t;




typedef struct cameracalibration_add_observation_request_t {
    char *camera_uid; // string

} cameracalibration_add_observation_request_t;

cameracalibration_add_observation_request_t *cameracalibration_add_observation_request_create(
    char *camera_uid
);

void cameracalibration_add_observation_request_free(cameracalibration_add_observation_request_t *cameracalibration_add_observation_request);

cameracalibration_add_observation_request_t *cameracalibration_add_observation_request_parseFromJSON(cJSON *cameracalibration_add_observation_requestJSON);

cJSON *cameracalibration_add_observation_request_convertToJSON(cameracalibration_add_observation_request_t *cameracalibration_add_observation_request);

#endif /* _cameracalibration_add_observation_request_H_ */

