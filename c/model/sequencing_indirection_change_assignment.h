/*
 * sequencing_indirection_change_assignment.h
 *
 * 
 */

#ifndef _sequencing_indirection_change_assignment_H_
#define _sequencing_indirection_change_assignment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sequencing_indirection_change_assignment_t sequencing_indirection_change_assignment_t;

#include "d3api_locator.h"



typedef struct sequencing_indirection_change_assignment_t {
    struct d3api_locator_t *indirection; //model
    struct d3api_locator_t *resource; //model

} sequencing_indirection_change_assignment_t;

sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment_create(
    d3api_locator_t *indirection,
    d3api_locator_t *resource
);

void sequencing_indirection_change_assignment_free(sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment);

sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment_parseFromJSON(cJSON *sequencing_indirection_change_assignmentJSON);

cJSON *sequencing_indirection_change_assignment_convertToJSON(sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment);

#endif /* _sequencing_indirection_change_assignment_H_ */

