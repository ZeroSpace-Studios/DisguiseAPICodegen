/*
 * cameracalibration_get_observation_progress_response.h
 *
 * 
 */

#ifndef _cameracalibration_get_observation_progress_response_H_
#define _cameracalibration_get_observation_progress_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_get_observation_progress_response_t cameracalibration_get_observation_progress_response_t;




typedef struct cameracalibration_get_observation_progress_response_t {
    int in_progress; //boolean

} cameracalibration_get_observation_progress_response_t;

cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response_create(
    int in_progress
);

void cameracalibration_get_observation_progress_response_free(cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response);

cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response_parseFromJSON(cJSON *cameracalibration_get_observation_progress_responseJSON);

cJSON *cameracalibration_get_observation_progress_response_convertToJSON(cameracalibration_get_observation_progress_response_t *cameracalibration_get_observation_progress_response);

#endif /* _cameracalibration_get_observation_progress_response_H_ */

