/*
 * mixedreality_select_spatial_calibration_request.h
 *
 * 
 */

#ifndef _mixedreality_select_spatial_calibration_request_H_
#define _mixedreality_select_spatial_calibration_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_select_spatial_calibration_request_t mixedreality_select_spatial_calibration_request_t;

#include "d3api_locator.h"



typedef struct mixedreality_select_spatial_calibration_request_t {
    struct d3api_locator_t *camera; //model
    struct d3api_locator_t *spatial_calibration; //model

} mixedreality_select_spatial_calibration_request_t;

mixedreality_select_spatial_calibration_request_t *mixedreality_select_spatial_calibration_request_create(
    d3api_locator_t *camera,
    d3api_locator_t *spatial_calibration
);

void mixedreality_select_spatial_calibration_request_free(mixedreality_select_spatial_calibration_request_t *mixedreality_select_spatial_calibration_request);

mixedreality_select_spatial_calibration_request_t *mixedreality_select_spatial_calibration_request_parseFromJSON(cJSON *mixedreality_select_spatial_calibration_requestJSON);

cJSON *mixedreality_select_spatial_calibration_request_convertToJSON(mixedreality_select_spatial_calibration_request_t *mixedreality_select_spatial_calibration_request);

#endif /* _mixedreality_select_spatial_calibration_request_H_ */

