/*
 * status_health_states.h
 *
 * 
 */

#ifndef _status_health_states_H_
#define _status_health_states_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_health_states_t status_health_states_t;




typedef struct status_health_states_t {
    char *name; // string
    char *detail; // string
    char *category; // string
    char *severity; // string

} status_health_states_t;

status_health_states_t *status_health_states_create(
    char *name,
    char *detail,
    char *category,
    char *severity
);

void status_health_states_free(status_health_states_t *status_health_states);

status_health_states_t *status_health_states_parseFromJSON(cJSON *status_health_statesJSON);

cJSON *status_health_states_convertToJSON(status_health_states_t *status_health_states);

#endif /* _status_health_states_H_ */

