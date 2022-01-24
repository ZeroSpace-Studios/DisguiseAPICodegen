/*
 * cameracalibration_reset_all_observations_request.h
 *
 * 
 */

#ifndef _cameracalibration_reset_all_observations_request_H_
#define _cameracalibration_reset_all_observations_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_reset_all_observations_request_t cameracalibration_reset_all_observations_request_t;




typedef struct cameracalibration_reset_all_observations_request_t {
    char *camera_uid; // string

} cameracalibration_reset_all_observations_request_t;

cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request_create(
    char *camera_uid
);

void cameracalibration_reset_all_observations_request_free(cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request);

cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request_parseFromJSON(cJSON *cameracalibration_reset_all_observations_requestJSON);

cJSON *cameracalibration_reset_all_observations_request_convertToJSON(cameracalibration_reset_all_observations_request_t *cameracalibration_reset_all_observations_request);

#endif /* _cameracalibration_reset_all_observations_request_H_ */

