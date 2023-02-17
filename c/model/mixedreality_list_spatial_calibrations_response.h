/*
 * mixedreality_list_spatial_calibrations_response.h
 *
 * 
 */

#ifndef _mixedreality_list_spatial_calibrations_response_H_
#define _mixedreality_list_spatial_calibrations_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_list_spatial_calibrations_response_t mixedreality_list_spatial_calibrations_response_t;

#include "mixedreality_spatial_calibration_detailed.h"
#include "rpc_status.h"



typedef struct mixedreality_list_spatial_calibrations_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} mixedreality_list_spatial_calibrations_response_t;

mixedreality_list_spatial_calibrations_response_t *mixedreality_list_spatial_calibrations_response_create(
    rpc_status_t *status,
    list_t *result
);

void mixedreality_list_spatial_calibrations_response_free(mixedreality_list_spatial_calibrations_response_t *mixedreality_list_spatial_calibrations_response);

mixedreality_list_spatial_calibrations_response_t *mixedreality_list_spatial_calibrations_response_parseFromJSON(cJSON *mixedreality_list_spatial_calibrations_responseJSON);

cJSON *mixedreality_list_spatial_calibrations_response_convertToJSON(mixedreality_list_spatial_calibrations_response_t *mixedreality_list_spatial_calibrations_response);

#endif /* _mixedreality_list_spatial_calibrations_response_H_ */

