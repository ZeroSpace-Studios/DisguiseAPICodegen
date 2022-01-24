/*
 * set_indirections_response_failed_assignment.h
 *
 * 
 */

#ifndef _set_indirections_response_failed_assignment_H_
#define _set_indirections_response_failed_assignment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct set_indirections_response_failed_assignment_t set_indirections_response_failed_assignment_t;




typedef struct set_indirections_response_failed_assignment_t {
    char *uid; // string
    long resource_index; //numeric
    char *resource_uid; // string
    char *error; // string

} set_indirections_response_failed_assignment_t;

set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment_create(
    char *uid,
    long resource_index,
    char *resource_uid,
    char *error
);

void set_indirections_response_failed_assignment_free(set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment);

set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment_parseFromJSON(cJSON *set_indirections_response_failed_assignmentJSON);

cJSON *set_indirections_response_failed_assignment_convertToJSON(set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment);

#endif /* _set_indirections_response_failed_assignment_H_ */

