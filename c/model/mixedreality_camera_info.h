/*
 * mixedreality_camera_info.h
 *
 * 
 */

#ifndef _mixedreality_camera_info_H_
#define _mixedreality_camera_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_camera_info_t mixedreality_camera_info_t;

#include "mixedreality_spatial_calibration_info.h"



typedef struct mixedreality_camera_info_t {
    char *uid; // string
    char *name; // string
    struct mixedreality_spatial_calibration_info_t *spatial_calibration; //model

} mixedreality_camera_info_t;

mixedreality_camera_info_t *mixedreality_camera_info_create(
    char *uid,
    char *name,
    mixedreality_spatial_calibration_info_t *spatial_calibration
);

void mixedreality_camera_info_free(mixedreality_camera_info_t *mixedreality_camera_info);

mixedreality_camera_info_t *mixedreality_camera_info_parseFromJSON(cJSON *mixedreality_camera_infoJSON);

cJSON *mixedreality_camera_info_convertToJSON(mixedreality_camera_info_t *mixedreality_camera_info);

#endif /* _mixedreality_camera_info_H_ */

