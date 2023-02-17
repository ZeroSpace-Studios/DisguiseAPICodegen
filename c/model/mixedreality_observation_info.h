/*
 * mixedreality_observation_info.h
 *
 * 
 */

#ifndef _mixedreality_observation_info_H_
#define _mixedreality_observation_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_observation_info_t mixedreality_observation_info_t;

#include "mixedreality_observation_type.h"
#include "mixedreality_pose.h"

// Enum  for mixedreality_observation_info

typedef enum  { d3_api_mixedreality_observation_info__NULL = 0, d3_api_mixedreality_observation_info__Primary, d3_api_mixedreality_observation_info__Secondary } d3_api_mixedreality_observation_info__e;

char* mixedreality_observation_info_type_ToString(d3_api_mixedreality_observation_info__e type);

d3_api_mixedreality_observation_info__e mixedreality_observation_info_type_FromString(char* type);



typedef struct mixedreality_observation_info_t {
    char *uid; // string
    char *name; // string
    struct mixedreality_pose_t *tracked_pose; //model
    struct mixedreality_pose_t *solved_pose; //model
    int is_enabled; //boolean
    float zoom; //numeric
    float focus; //numeric
    double rms_error; //numeric

} mixedreality_observation_info_t;

mixedreality_observation_info_t *mixedreality_observation_info_create(
    char *uid,
    char *name,
    mixedreality_pose_t *tracked_pose,
    mixedreality_pose_t *solved_pose,
    int is_enabled,
    float zoom,
    float focus,
    double rms_error
);

void mixedreality_observation_info_free(mixedreality_observation_info_t *mixedreality_observation_info);

mixedreality_observation_info_t *mixedreality_observation_info_parseFromJSON(cJSON *mixedreality_observation_infoJSON);

cJSON *mixedreality_observation_info_convertToJSON(mixedreality_observation_info_t *mixedreality_observation_info);

#endif /* _mixedreality_observation_info_H_ */

