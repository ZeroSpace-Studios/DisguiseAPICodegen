/*
 * cameracalibration_observation_info.h
 *
 * 
 */

#ifndef _cameracalibration_observation_info_H_
#define _cameracalibration_observation_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_observation_info_t cameracalibration_observation_info_t;

#include "cameracalibration_float3.h"



typedef struct cameracalibration_observation_info_t {
    char *uid; // string
    char *description; // string
    struct cameracalibration_float3_t *tracked_pos; //model
    struct cameracalibration_float3_t *tracked_rot; //model
    float tracked_zoom; //numeric
    float tracked_focus; //numeric
    int is_enabled; //boolean
    int is_primary; //boolean

} cameracalibration_observation_info_t;

cameracalibration_observation_info_t *cameracalibration_observation_info_create(
    char *uid,
    char *description,
    cameracalibration_float3_t *tracked_pos,
    cameracalibration_float3_t *tracked_rot,
    float tracked_zoom,
    float tracked_focus,
    int is_enabled,
    int is_primary
);

void cameracalibration_observation_info_free(cameracalibration_observation_info_t *cameracalibration_observation_info);

cameracalibration_observation_info_t *cameracalibration_observation_info_parseFromJSON(cJSON *cameracalibration_observation_infoJSON);

cJSON *cameracalibration_observation_info_convertToJSON(cameracalibration_observation_info_t *cameracalibration_observation_info);

#endif /* _cameracalibration_observation_info_H_ */

