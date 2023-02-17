/*
 * mixedreality_pose.h
 *
 * 
 */

#ifndef _mixedreality_pose_H_
#define _mixedreality_pose_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_pose_t mixedreality_pose_t;

#include "d3api_vec3_float.h"



typedef struct mixedreality_pose_t {
    struct d3api_vec3_float_t *position; //model
    struct d3api_vec3_float_t *rotation; //model

} mixedreality_pose_t;

mixedreality_pose_t *mixedreality_pose_create(
    d3api_vec3_float_t *position,
    d3api_vec3_float_t *rotation
);

void mixedreality_pose_free(mixedreality_pose_t *mixedreality_pose);

mixedreality_pose_t *mixedreality_pose_parseFromJSON(cJSON *mixedreality_poseJSON);

cJSON *mixedreality_pose_convertToJSON(mixedreality_pose_t *mixedreality_pose);

#endif /* _mixedreality_pose_H_ */

