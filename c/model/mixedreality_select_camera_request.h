/*
 * mixedreality_select_camera_request.h
 *
 * 
 */

#ifndef _mixedreality_select_camera_request_H_
#define _mixedreality_select_camera_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_select_camera_request_t mixedreality_select_camera_request_t;

#include "d3api_locator.h"



typedef struct mixedreality_select_camera_request_t {
    struct d3api_locator_t *mr_set; //model
    struct d3api_locator_t *camera_override; //model

} mixedreality_select_camera_request_t;

mixedreality_select_camera_request_t *mixedreality_select_camera_request_create(
    d3api_locator_t *mr_set,
    d3api_locator_t *camera_override
);

void mixedreality_select_camera_request_free(mixedreality_select_camera_request_t *mixedreality_select_camera_request);

mixedreality_select_camera_request_t *mixedreality_select_camera_request_parseFromJSON(cJSON *mixedreality_select_camera_requestJSON);

cJSON *mixedreality_select_camera_request_convertToJSON(mixedreality_select_camera_request_t *mixedreality_select_camera_request);

#endif /* _mixedreality_select_camera_request_H_ */

