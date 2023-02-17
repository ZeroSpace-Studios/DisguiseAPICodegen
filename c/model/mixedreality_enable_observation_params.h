/*
 * mixedreality_enable_observation_params.h
 *
 * 
 */

#ifndef _mixedreality_enable_observation_params_H_
#define _mixedreality_enable_observation_params_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_enable_observation_params_t mixedreality_enable_observation_params_t;




typedef struct mixedreality_enable_observation_params_t {
    char *uid; // string
    int enable; //boolean

} mixedreality_enable_observation_params_t;

mixedreality_enable_observation_params_t *mixedreality_enable_observation_params_create(
    char *uid,
    int enable
);

void mixedreality_enable_observation_params_free(mixedreality_enable_observation_params_t *mixedreality_enable_observation_params);

mixedreality_enable_observation_params_t *mixedreality_enable_observation_params_parseFromJSON(cJSON *mixedreality_enable_observation_paramsJSON);

cJSON *mixedreality_enable_observation_params_convertToJSON(mixedreality_enable_observation_params_t *mixedreality_enable_observation_params);

#endif /* _mixedreality_enable_observation_params_H_ */

