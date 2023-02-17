/*
 * mixedreality_enable_observations_request.h
 *
 * 
 */

#ifndef _mixedreality_enable_observations_request_H_
#define _mixedreality_enable_observations_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_enable_observations_request_t mixedreality_enable_observations_request_t;

#include "mixedreality_enable_observation_params.h"



typedef struct mixedreality_enable_observations_request_t {
    list_t *observations; //nonprimitive container

} mixedreality_enable_observations_request_t;

mixedreality_enable_observations_request_t *mixedreality_enable_observations_request_create(
    list_t *observations
);

void mixedreality_enable_observations_request_free(mixedreality_enable_observations_request_t *mixedreality_enable_observations_request);

mixedreality_enable_observations_request_t *mixedreality_enable_observations_request_parseFromJSON(cJSON *mixedreality_enable_observations_requestJSON);

cJSON *mixedreality_enable_observations_request_convertToJSON(mixedreality_enable_observations_request_t *mixedreality_enable_observations_request);

#endif /* _mixedreality_enable_observations_request_H_ */

