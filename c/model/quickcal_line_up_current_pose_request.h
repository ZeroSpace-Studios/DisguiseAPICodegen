/*
 * quickcal_line_up_current_pose_request.h
 *
 * 
 */

#ifndef _quickcal_line_up_current_pose_request_H_
#define _quickcal_line_up_current_pose_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickcal_line_up_current_pose_request_t quickcal_line_up_current_pose_request_t;

#include "d3api_locator.h"
#include "d3api_vec2_float.h"



typedef struct quickcal_line_up_current_pose_request_t {
    struct d3api_locator_t *projector; //model
    struct d3api_locator_t *reference_point; //model
    struct d3api_vec2_float_t *position; //model

} quickcal_line_up_current_pose_request_t;

quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request_create(
    d3api_locator_t *projector,
    d3api_locator_t *reference_point,
    d3api_vec2_float_t *position
);

void quickcal_line_up_current_pose_request_free(quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request);

quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request_parseFromJSON(cJSON *quickcal_line_up_current_pose_requestJSON);

cJSON *quickcal_line_up_current_pose_request_convertToJSON(quickcal_line_up_current_pose_request_t *quickcal_line_up_current_pose_request);

#endif /* _quickcal_line_up_current_pose_request_H_ */

