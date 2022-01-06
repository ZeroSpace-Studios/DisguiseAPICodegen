/*
 * v1_observation_info.h
 *
 * 
 */

#ifndef _v1_observation_info_H_
#define _v1_observation_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_observation_info_t v1_observation_info_t;

#include "v1_float3.h"



typedef struct v1_observation_info_t {
    char *uid; // string
    char *description; // string
    struct v1_float3_t *tracked_pos; //model
    struct v1_float3_t *tracked_rot; //model
    float tracked_zoom; //numeric
    float tracked_focus; //numeric
    int is_enabled; //boolean
    int is_primary; //boolean

} v1_observation_info_t;

v1_observation_info_t *v1_observation_info_create(
    char *uid,
    char *description,
    v1_float3_t *tracked_pos,
    v1_float3_t *tracked_rot,
    float tracked_zoom,
    float tracked_focus,
    int is_enabled,
    int is_primary
);

void v1_observation_info_free(v1_observation_info_t *v1_observation_info);

v1_observation_info_t *v1_observation_info_parseFromJSON(cJSON *v1_observation_infoJSON);

cJSON *v1_observation_info_convertToJSON(v1_observation_info_t *v1_observation_info);

#endif /* _v1_observation_info_H_ */

