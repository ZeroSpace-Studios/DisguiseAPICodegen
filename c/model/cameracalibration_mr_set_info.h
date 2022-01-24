/*
 * cameracalibration_mr_set_info.h
 *
 * 
 */

#ifndef _cameracalibration_mr_set_info_H_
#define _cameracalibration_mr_set_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_mr_set_info_t cameracalibration_mr_set_info_t;

#include "cameracalibration_camera_info.h"



typedef struct cameracalibration_mr_set_info_t {
    char *uid; // string
    char *name; // string
    struct cameracalibration_camera_info_t *target_camera; //model

} cameracalibration_mr_set_info_t;

cameracalibration_mr_set_info_t *cameracalibration_mr_set_info_create(
    char *uid,
    char *name,
    cameracalibration_camera_info_t *target_camera
);

void cameracalibration_mr_set_info_free(cameracalibration_mr_set_info_t *cameracalibration_mr_set_info);

cameracalibration_mr_set_info_t *cameracalibration_mr_set_info_parseFromJSON(cJSON *cameracalibration_mr_set_infoJSON);

cJSON *cameracalibration_mr_set_info_convertToJSON(cameracalibration_mr_set_info_t *cameracalibration_mr_set_info);

#endif /* _cameracalibration_mr_set_info_H_ */

