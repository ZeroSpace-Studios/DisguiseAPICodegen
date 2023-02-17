/*
 * mixedreality_observation_type.h
 *
 * 
 */

#ifndef _mixedreality_observation_type_H_
#define _mixedreality_observation_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_observation_type_t mixedreality_observation_type_t;


// Enum  for mixedreality_observation_type

typedef enum { d3_api_mixedreality_observation_type__NULL = 0, d3_api_mixedreality_observation_type__Primary, d3_api_mixedreality_observation_type__Secondary } d3_api_mixedreality_observation_type__e;

char* mixedreality_observation_type_mixedreality_observation_type_ToString(d3_api_mixedreality_observation_type__e mixedreality_observation_type);

d3_api_mixedreality_observation_type__e mixedreality_observation_type_mixedreality_observation_type_FromString(char* mixedreality_observation_type);

//cJSON *mixedreality_observation_type_mixedreality_observation_type_convertToJSON(d3_api_mixedreality_observation_type__e mixedreality_observation_type);

//d3_api_mixedreality_observation_type__e mixedreality_observation_type_mixedreality_observation_type_parseFromJSON(cJSON *mixedreality_observation_typeJSON);

#endif /* _mixedreality_observation_type_H_ */

