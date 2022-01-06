/*
 * v1_reset_all_observations_request.h
 *
 * 
 */

#ifndef _v1_reset_all_observations_request_H_
#define _v1_reset_all_observations_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_reset_all_observations_request_t v1_reset_all_observations_request_t;




typedef struct v1_reset_all_observations_request_t {
    char *camera_uid; // string

} v1_reset_all_observations_request_t;

v1_reset_all_observations_request_t *v1_reset_all_observations_request_create(
    char *camera_uid
);

void v1_reset_all_observations_request_free(v1_reset_all_observations_request_t *v1_reset_all_observations_request);

v1_reset_all_observations_request_t *v1_reset_all_observations_request_parseFromJSON(cJSON *v1_reset_all_observations_requestJSON);

cJSON *v1_reset_all_observations_request_convertToJSON(v1_reset_all_observations_request_t *v1_reset_all_observations_request);

#endif /* _v1_reset_all_observations_request_H_ */

