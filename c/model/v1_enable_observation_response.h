/*
 * v1_enable_observation_response.h
 *
 * 
 */

#ifndef _v1_enable_observation_response_H_
#define _v1_enable_observation_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_enable_observation_response_t v1_enable_observation_response_t;




typedef struct v1_enable_observation_response_t {
    int result; //boolean

} v1_enable_observation_response_t;

v1_enable_observation_response_t *v1_enable_observation_response_create(
    int result
);

void v1_enable_observation_response_free(v1_enable_observation_response_t *v1_enable_observation_response);

v1_enable_observation_response_t *v1_enable_observation_response_parseFromJSON(cJSON *v1_enable_observation_responseJSON);

cJSON *v1_enable_observation_response_convertToJSON(v1_enable_observation_response_t *v1_enable_observation_response);

#endif /* _v1_enable_observation_response_H_ */

