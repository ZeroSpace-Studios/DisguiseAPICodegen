/*
 * cameracalibration_camera_info.h
 *
 * 
 */

#ifndef _cameracalibration_camera_info_H_
#define _cameracalibration_camera_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_camera_info_t cameracalibration_camera_info_t;

#include "cameracalibration_observation_info.h"



typedef struct cameracalibration_camera_info_t {
    char *uid; // string
    char *name; // string
    list_t *observations; //nonprimitive container

} cameracalibration_camera_info_t;

cameracalibration_camera_info_t *cameracalibration_camera_info_create(
    char *uid,
    char *name,
    list_t *observations
);

void cameracalibration_camera_info_free(cameracalibration_camera_info_t *cameracalibration_camera_info);

cameracalibration_camera_info_t *cameracalibration_camera_info_parseFromJSON(cJSON *cameracalibration_camera_infoJSON);

cJSON *cameracalibration_camera_info_convertToJSON(cameracalibration_camera_info_t *cameracalibration_camera_info);

#endif /* _cameracalibration_camera_info_H_ */

