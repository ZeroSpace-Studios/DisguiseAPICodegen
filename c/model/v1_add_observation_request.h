/*
 * v1_add_observation_request.h
 *
 * 
 */

#ifndef _v1_add_observation_request_H_
#define _v1_add_observation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_add_observation_request_t v1_add_observation_request_t;




typedef struct v1_add_observation_request_t {
    char *camera_uid; // string

} v1_add_observation_request_t;

v1_add_observation_request_t *v1_add_observation_request_create(
    char *camera_uid
);

void v1_add_observation_request_free(v1_add_observation_request_t *v1_add_observation_request);

v1_add_observation_request_t *v1_add_observation_request_parseFromJSON(cJSON *v1_add_observation_requestJSON);

cJSON *v1_add_observation_request_convertToJSON(v1_add_observation_request_t *v1_add_observation_request);

#endif /* _v1_add_observation_request_H_ */

