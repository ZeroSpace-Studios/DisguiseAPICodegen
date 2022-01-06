/*
 * v1_enable_observation_request.h
 *
 * 
 */

#ifndef _v1_enable_observation_request_H_
#define _v1_enable_observation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_enable_observation_request_t v1_enable_observation_request_t;




typedef struct v1_enable_observation_request_t {
    char *observation_uid; // string
    int enabled; //boolean

} v1_enable_observation_request_t;

v1_enable_observation_request_t *v1_enable_observation_request_create(
    char *observation_uid,
    int enabled
);

void v1_enable_observation_request_free(v1_enable_observation_request_t *v1_enable_observation_request);

v1_enable_observation_request_t *v1_enable_observation_request_parseFromJSON(cJSON *v1_enable_observation_requestJSON);

cJSON *v1_enable_observation_request_convertToJSON(v1_enable_observation_request_t *v1_enable_observation_request);

#endif /* _v1_enable_observation_request_H_ */

