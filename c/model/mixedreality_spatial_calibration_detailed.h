/*
 * mixedreality_spatial_calibration_detailed.h
 *
 * 
 */

#ifndef _mixedreality_spatial_calibration_detailed_H_
#define _mixedreality_spatial_calibration_detailed_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_spatial_calibration_detailed_t mixedreality_spatial_calibration_detailed_t;

#include "mixedreality_mr_set_info.h"
#include "mixedreality_observation_info.h"



typedef struct mixedreality_spatial_calibration_detailed_t {
    char *uid; // string
    char *name; // string
    list_t *mrsets; //nonprimitive container
    list_t *observations; //nonprimitive container

} mixedreality_spatial_calibration_detailed_t;

mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed_create(
    char *uid,
    char *name,
    list_t *mrsets,
    list_t *observations
);

void mixedreality_spatial_calibration_detailed_free(mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed);

mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed_parseFromJSON(cJSON *mixedreality_spatial_calibration_detailedJSON);

cJSON *mixedreality_spatial_calibration_detailed_convertToJSON(mixedreality_spatial_calibration_detailed_t *mixedreality_spatial_calibration_detailed);

#endif /* _mixedreality_spatial_calibration_detailed_H_ */

