/*
 * mixedreality_capture_observation_request.h
 *
 * 
 */

#ifndef _mixedreality_capture_observation_request_H_
#define _mixedreality_capture_observation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_capture_observation_request_t mixedreality_capture_observation_request_t;

#include "d3api_locator.h"



typedef struct mixedreality_capture_observation_request_t {
    struct d3api_locator_t *camera; //model
    struct d3api_locator_t *spatial_calibration; //model

} mixedreality_capture_observation_request_t;

mixedreality_capture_observation_request_t *mixedreality_capture_observation_request_create(
    d3api_locator_t *camera,
    d3api_locator_t *spatial_calibration
);

void mixedreality_capture_observation_request_free(mixedreality_capture_observation_request_t *mixedreality_capture_observation_request);

mixedreality_capture_observation_request_t *mixedreality_capture_observation_request_parseFromJSON(cJSON *mixedreality_capture_observation_requestJSON);

cJSON *mixedreality_capture_observation_request_convertToJSON(mixedreality_capture_observation_request_t *mixedreality_capture_observation_request);

#endif /* _mixedreality_capture_observation_request_H_ */

