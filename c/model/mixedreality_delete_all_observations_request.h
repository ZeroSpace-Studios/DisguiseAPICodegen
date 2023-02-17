/*
 * mixedreality_delete_all_observations_request.h
 *
 * 
 */

#ifndef _mixedreality_delete_all_observations_request_H_
#define _mixedreality_delete_all_observations_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_delete_all_observations_request_t mixedreality_delete_all_observations_request_t;

#include "d3api_locator.h"



typedef struct mixedreality_delete_all_observations_request_t {
    struct d3api_locator_t *spatial_calibration; //model

} mixedreality_delete_all_observations_request_t;

mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request_create(
    d3api_locator_t *spatial_calibration
);

void mixedreality_delete_all_observations_request_free(mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request);

mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request_parseFromJSON(cJSON *mixedreality_delete_all_observations_requestJSON);

cJSON *mixedreality_delete_all_observations_request_convertToJSON(mixedreality_delete_all_observations_request_t *mixedreality_delete_all_observations_request);

#endif /* _mixedreality_delete_all_observations_request_H_ */

