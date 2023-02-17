/*
 * mixedreality_spatial_calibration_info.h
 *
 * 
 */

#ifndef _mixedreality_spatial_calibration_info_H_
#define _mixedreality_spatial_calibration_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_spatial_calibration_info_t mixedreality_spatial_calibration_info_t;




typedef struct mixedreality_spatial_calibration_info_t {
    char *uid; // string
    char *name; // string

} mixedreality_spatial_calibration_info_t;

mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info_create(
    char *uid,
    char *name
);

void mixedreality_spatial_calibration_info_free(mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info);

mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info_parseFromJSON(cJSON *mixedreality_spatial_calibration_infoJSON);

cJSON *mixedreality_spatial_calibration_info_convertToJSON(mixedreality_spatial_calibration_info_t *mixedreality_spatial_calibration_info);

#endif /* _mixedreality_spatial_calibration_info_H_ */

