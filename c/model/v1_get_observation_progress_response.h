/*
 * v1_get_observation_progress_response.h
 *
 * 
 */

#ifndef _v1_get_observation_progress_response_H_
#define _v1_get_observation_progress_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_get_observation_progress_response_t v1_get_observation_progress_response_t;




typedef struct v1_get_observation_progress_response_t {
    int in_progress; //boolean

} v1_get_observation_progress_response_t;

v1_get_observation_progress_response_t *v1_get_observation_progress_response_create(
    int in_progress
);

void v1_get_observation_progress_response_free(v1_get_observation_progress_response_t *v1_get_observation_progress_response);

v1_get_observation_progress_response_t *v1_get_observation_progress_response_parseFromJSON(cJSON *v1_get_observation_progress_responseJSON);

cJSON *v1_get_observation_progress_response_convertToJSON(v1_get_observation_progress_response_t *v1_get_observation_progress_response);

#endif /* _v1_get_observation_progress_response_H_ */

