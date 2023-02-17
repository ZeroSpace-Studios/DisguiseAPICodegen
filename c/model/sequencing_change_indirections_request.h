/*
 * sequencing_change_indirections_request.h
 *
 * 
 */

#ifndef _sequencing_change_indirections_request_H_
#define _sequencing_change_indirections_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sequencing_change_indirections_request_t sequencing_change_indirections_request_t;

#include "sequencing_indirection_change_assignment.h"



typedef struct sequencing_change_indirections_request_t {
    list_t *changes; //nonprimitive container

} sequencing_change_indirections_request_t;

sequencing_change_indirections_request_t *sequencing_change_indirections_request_create(
    list_t *changes
);

void sequencing_change_indirections_request_free(sequencing_change_indirections_request_t *sequencing_change_indirections_request);

sequencing_change_indirections_request_t *sequencing_change_indirections_request_parseFromJSON(cJSON *sequencing_change_indirections_requestJSON);

cJSON *sequencing_change_indirections_request_convertToJSON(sequencing_change_indirections_request_t *sequencing_change_indirections_request);

#endif /* _sequencing_change_indirections_request_H_ */

